#!/usr/bin/env python
#
# @file    strFunctions.py
# @brief   functions that adjust strings in some way
# @author  Frank Bergmann
# @author  Sarah Keating
#
# <!--------------------------------------------------------------------------
#
# Copyright (c) 2013-2018 by the California Institute of Technology
# (California, USA), the European Bioinformatics Institute (EMBL-EBI, UK)
# and the University of Heidelberg (Germany), with support from the National
# Institutes of Health (USA) under grant R01GM070923.  All rights reserved.
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.
#
# Neither the name of the California Institute of Technology (Caltech), nor
# of the European Bioinformatics Institute (EMBL-EBI), nor of the University
# of Heidelberg, nor the names of any contributors, may be used to endorse
# or promote products derived from this software without specific prior
# written permission.
# ------------------------------------------------------------------------ -->

"""Functions that adjust strings in some way"""

import re
from util import global_variables as gv


def upper_first(word):
    if len(word) == 0:
        return word
    # hack for spatial CSGFoo classes
    if word.startswith('csg') or word.startswith('csG'):
        if word == 'csgeometry' or word == 'csGeometry':
            returned_word = 'CSGeometry'
        else:
            returned_word = 'CSG' + word[3:len(word)]
    else:
        returned_word = word[0].upper() + word[1:len(word)]
    return returned_word


def lower_first(word):
    # hack for spatial CSGFoo classes
    returned_word = ''
    if word is None or word == '':
        return returned_word
    elif len(word) == 1:
        returned_word = word[0].lower()
    elif word.startswith('CSG'):
        if word == 'CSGeometry':
            returned_word = 'csGeometry'
        else:
            returned_word = 'csg' + word[3:len(word)]
    else:
        returned_word = word[0].lower() + word[1:len(word)]
    return returned_word


def get_indent(element):
    s1 = '{0}('.format(element)
    return len(s1)


def abbrev_name(element):
    abbrev = ''
    for i in range(0, len(element)):
        if element[i].isupper():
            abbrev = abbrev + element[i]
    if abbrev == '' and len(element) > 0:
        abbrev = element[0]
    return abbrev.lower()


def abbrev_lo_name(loname):
    return 'LO' + loname[6:]


def list_of_name(name, addPrefix=True):
    prefix = ''
    if addPrefix and not gv.is_package:
        prefix = gv.prefix
    return prefix + 'ListOf' + plural_no_prefix(name)


def lower_list_of_name_no_prefix(name):
    return 'listOf' + plural_no_prefix(upper_first(name))


def cap_list_of_name(name, addPrefix=True):
    name = upper_first(name)
    return list_of_name(name, addPrefix)


def cap_list_of_name_no_prefix(name):
    name = upper_first(name)
    return list_of_name(name, False)


def plural_no_prefix(name):
    if gv.is_package:
        return plural(name)
    else:
        new_name = remove_prefix(name)
        return plural(new_name)


def plural(name):
    if name.endswith('s'):
        returned_word = name
    elif name.endswith('nformation'):
        returned_word = name
    elif name.endswith('hild'):
        returned_word = name + 'ren'
    elif name.endswith('x'):
        returned_word = name[0:len(name)] + 'es'
    elif name.endswith('y'):
        returned_word = name[0:len(name)-1] + 'ies'
    else:
        returned_word = name + 's'
    return returned_word


def singular(name):
    returned_word = name
    length = len(name)
    if name.endswith('ies'):
        returned_word = name[0:length-3] + 'y'
    elif name.endswith('es'):
        returned_word = name[0:length-2]
    elif name.endswith('s'):
        returned_word = name[0:length-1]
    elif name.endswith('hildren'):
        returned_word = name[0:length-3]
    return returned_word


def remove_prefix(name, in_concrete=False, remove_package=False, prefix='', remove_doc_prefix=False):
    prefix_to_remove = ''
    if gv.prefix == 'SBML':
        # we might want to remove the name of the package
        if not in_concrete and gv.is_package \
                and gv.package_prefix != '':
           prefix_to_remove = gv.package_prefix
        elif remove_package and prefix != '':
            prefix_to_remove = prefix
    else:
        prefix_to_remove = gv.prefix
    length = len(prefix_to_remove)
    if length == 0:
        return name
    if not name.endswith('Document') and (name.startswith(prefix_to_remove) or name.startswith(upper_first(prefix_to_remove))):
        newname = name[length:]
    else:
        if remove_doc_prefix and name.endswith('Document'):
            newname = name[length:]
        else:
            newname = name
    return newname


def get_indefinite(name):
    """
    Get indefinite article for the name supplied.

    :param name: the name we want the indefinite article (and or a) for.
    :return: 'an' if name starts with a vowel, else 'a'

    TODO: what about words starting with h?
    e.g. "an hotel" and "a host of reasons" are both correct :-)
    """
    for char in ('a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'):
        if name.startswith(char):
            return 'an'
    return 'a'


def standard_element_name(name):
    name = remove_spaces(name)
    length = len(name)
    temp = name
    # dont want * , _t at end
    if name.endswith('*'):
        temp = name[0:length-1]
    elif name.endswith(','):
        temp = name[0:length-1]
    elif name.endswith('_t'):
        temp = name[0:length-2]
    returned_word = temp
    # also dont want ListOf
    if returned_word.startswith('ListOf') or returned_word.startswith('listOf'):
        temp = singular(returned_word[6:length])
    return upper_first(temp)


def get_library_suffix(name):
    ret_name = name.lower()
    if ret_name.startswith('lib'):
        ret_name = ret_name[3:]
    return upper_first(ret_name)


def wrap_token(name, pkg=''):
    """ returns the name wrapped as a token
       e.g. \token{'id'} or \token{'comp:\-id'} """
    if pkg == '':
        return '\\token{' + name + '}'
    else:
        return '\\token{' + pkg + ':\\-' + name + '}'


def wrap_type(name, element, hack=False):
    if name == 'array':
        return 'consisting of an array of \\primtype{' + element + '}'
    elif name == 'enum':
        element_name = texify(element)
        return 'of type \\primtype{' + element_name + '}'
    elif name == 'element':
        if hack:
            return 'of type \\' + element
        else:
            return wrap_token(element)
    elif name == 'lo_element':
        return wrap_token(element)
    elif name == 'inline_lo_element':
        return 'TO DO: add type'
    else:
        return 'of type \\primtype{' + name + '}'


def wrap_section(name, add_class=True, add_extended=False):
    if add_class:
        return '\\sec{' + make_class(name, add_extended) + '}'
    else:
        return '\\sec{' + name + '}'


def make_class(name, add_extended=False):
    if add_extended:
        return 'extended-' + name.lower() + '-class'
    else:
        return name.lower() + '-class'


def wrap_enum(name):
#    return '\\primtype{' + lower_first(name) + '}'
    return '\\primtype{' + name + '}'


def get_sid_refs(refs):
    if refs == '':
        return['', 'SId']
    elif ',' not in refs:
        return [upper_first(refs), upper_first(refs)]
    else:
        ret_string = ''
        ret_type = ''
        str_refs = refs.split(',')
        length = len(str_refs)
        if length > 0:
            ret_string = upper_first(str_refs[0])
            ret_type = upper_first(str_refs[0])
            for i in range(1, length):
                ret_string += ' or \{0}'.format(upper_first(str_refs[i]))
                ret_type += 'Or{0}'.format(upper_first(str_refs[i]))
        return [ret_string, ret_type]


def get_element_name(attribute, addPrefix=True):
    if 'type' in attribute:
        name = ''
        if 'texname' in attribute:
            name = attribute['texname']
        if len(name) == 0:
            name = remove_prefix(attribute['name'])
        if attribute['type'] == 'lo_element':
            return '\{0}'.format(cap_list_of_name(name, addPrefix))
        elif attribute['type'] == 'inline_lo_element':
            return '\{0}'.format(cap_list_of_name(name, addPrefix))
        elif attribute['type'] == 'element':
            if attribute['element'] == 'ASTNode*':
                return 'MathML math'
            else:
                return attribute['element']
        else:
            return 'FIX_ME'
    elif 'isListOf' in attribute:
        if attribute['isListOf']:
            return '\{0}'.format(cap_list_of_name(remove_prefix(attribute['name'])))
        else:
            return '\{0}'.format(upper_first(remove_prefix(attribute['name'])))
    else:
        return 'FIX ME'


def get_element_name_no_prefix(attribute):
    if 'type' in attribute:
        name = ''
        if 'texname' in attribute:
            name = attribute['texname']
        if len(name) == 0:
            name = attribute['name']
        if attribute['type'] == 'lo_element':
            if 'listOfClassName' in attribute and attribute['listOfClassName'] != '':
                return '\{0}'.format(remove_prefix(attribute['listOfClassName']))
            else:
                return '\{0}'.format(cap_list_of_name_no_prefix(name))
        elif attribute['type'] == 'inline_lo_element':
            return '\{0}'.format(cap_list_of_name_no_prefix(name))
        elif attribute['type'] == 'element':
            if attribute['element'] == 'ASTNode*':
                return 'MathML math'
            else:
                return attribute['element']
        else:
            return 'FIX_ME'
    elif 'isListOf' in attribute:
        if attribute['isListOf']:
            return '\{0}'.format(cap_list_of_name(attribute['name']))
        else:
            return '\{0}'.format(upper_first(attribute['name']))
    else:
        return 'FIX ME'


def replace_digits(name):
   """
   Replace the numerical digits in a string with their English words.

   :param name: the input string, possibly containing digits
   :return: the same string, but with digits replaced by words

   e.g. replace_digits("John 3:16") -> "John Three:OneSix"
   """

    mydict = {'0':'Zero', '1':'One', '2':'Two', '3':'Three', '4':'Four',
              '5':'Five', '6':'Six', '7':'Seven', '8':'Eight', '9':'Nine'}

    for item in mydict:
        name = re.sub(item, mydict[item], name)

    return name


def replace_underscore(name):
    name = re.sub('_', '\_', name)
    return name


def remove_spaces(name):
    newname = ''
    for i in range(0, len(name)):
        if name[i] != ' ':
            newname += name[i]
    return newname


def remove_hyphens(name):
    removed_hyphen = False
    if '-' not in name:
        return [name, removed_hyphen]
    else:
        newname = ''
        hyphen = False
        for c in name:
            if c != '-':
                if not hyphen:
                    newname += c
                else:
                    newname += c.upper()
                    hyphen = False
            else:
                hyphen = True
                removed_hyphen = True
        return [newname, removed_hyphen]

def texify(name):
    name = replace_digits(name)
    name = replace_underscore(name)
    name = remove_spaces(name)
    return name


def compare_no_case(name, reference):
    caseless_name = name.lower()
    caseless_ref = reference.lower()
    if caseless_name == caseless_ref:
        return True
    else:
        return False


def get_class_from_plugin(plugin, package):
    num = len(package)
    length = len(plugin)
    name = plugin[num:length-6]
    return name

def prefix_name(name):
    if name.startswith(gv.prefix):
        return name
    elif name == 'XMLNode' or name == 'ASTNode':
        return name
    elif name == 'SBase':
        return '{0}Base'.format(gv.prefix)
    else:
        return '{0}{1}'.format(gv.prefix, name)


# Prefix names - if we are working with another library we want class
# prefixed but element names to stay untouched
def prefix_classes(working_class):
    existing_name = working_class['name']
    working_class['name'] = prefix_name(existing_name)
    if working_class['baseClass'] != gv.baseClass:
        working_class['baseClass'] = prefix_name(working_class['baseClass'])
    if 'elementName' not in working_class or len(working_class['elementName']) == 0:
        working_class['elementName'] = lower_first(existing_name)
    for attrib in working_class['attribs']:
        if attrib['type'] == 'lo_element' or attrib['type'] == 'element' or \
                        attrib['type'] == 'inline_lo_element':
            attrib['element'] = prefix_name(attrib['element'])
        if 'concrete' in attrib:
            for conc in attrib['concrete']:
                conc['element'] = prefix_name(conc['element'])
        # if 'concrete' in attrib and len(attrib['concrete']) > 0:
        #     for conc in attrib['concrete']:
        #         conc['element'] = prefix_name(conc['element'])
    if 'lo_class_name' in working_class and len(working_class['lo_class_name']) > 0:
        name = working_class['lo_class_name']
        working_class['lo_class_name'] = prefix_name(name)

def is_camel_case(name):
    camel_case = False
    adjust_name = lower_first(remove_prefix(name))
    lower_name = adjust_name.lower()
    if lower_name != adjust_name:
        camel_case = True
    return camel_case
