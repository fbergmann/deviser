# Trying out pytest with Deviser cpp tests
# Matthew S. Gillman, UCL, 17th February 2021
import os
import sys
import pytest

from ... import deviser
from ...tests import test_functions
from ...tests.test_cpp_code import run_cpp_tests as rct  # For now.
from ...util import global_variables as gv



#def test_something():
#    assert (1 == 1)
# used mytests.py "conversion" script
@pytest.mark.parametrize("name, num, class_name, list_of, test_case", [
    #('copy', 0, 'Def', '', 'class with XMLNode'),

    # TODO: A test with garbage input like this will still succeed with things
    # as they currently are:
    #('copy', 0, 'Defggggggggg', '', 'class with XMLNode'),

    ('copy', 0, 'Def', '', 'class with XMLNode'),
    ('copy_add', 0, 'Abc', '', 'class with additional code'),
    ('test_att', 1, 'Unit', '', 'unit sid ref'),
    ('test_att', 2, 'MyLoTest', 'ListOfMyLoTests', 'attribute on ListOf'),
    ('test_att', 0, 'MyTestClass', '', 'all types of attributes'),
    ('test_att', 3, 'MyRequiredClass', '', 'all types attributes required'),
    ('test_att', 4, 'ArrayChild', '', 'child elements and arrays'),
    ('test_att', 5, 'Container', '', 'a listOf child that uses listOfFoo as the name'),
    ('qual', 5, 'FunctionTerm', 'ListOfFunctionTerms', 'an element on ListOf'),
    ('qual', 3, 'Output', 'ListOfOutputs', 'simple class'),
    ('qual', 1, 'Transition', 'ListOfTransitions', 'class with child list of elements'),
    ('distrib', 2, 'UncertaintyOld', '', 'class with other child'),
    ('spatial', 7, 'CoordinateComponent', 'ListOfCoordinateComponents', 'class with same child element diff name'),
    ('spatial', 15, 'CSGeometry', '', 'abstract'),
    ('spatial', 17, 'CSGNode', 'ListOfCSGNodes', 'abstract'),
    ('spatial', 16, 'CSGObject', '', 'abstract children'),
    ('spatial', 33, 'SpatialPoints', '', 'array type'),
    ('spatial', 8, 'SampledFieldGeometry', '', 'non sbase base class'),
    ('spatial', 9, 'SampledField', '', 'additional code files'),
    ('spatial', 18, 'CSGTransformation', '', 'abstract non base class'),
    ('spatial', 3, 'Boundary', '', 'overwrites element name'),
    ('spatial', 13, 'ParametricGeometry', '', 'child element and child lo_element'),
    ('spatial', 12, 'AnalyticVolume', 'ListOfAnalyticVolumes', 'class with math child'),
    ('spatial', 5, 'GeometryDefinition', 'ListOfGeometryDefinitions', 'class with math child'),
    ('spatial', 30, 'Geometry', '', 'class with math child'),
    ('spatial', 31, 'MixedGeometry', '', 'class with math child'),
    ('spatial', 25, 'CSGSetOperator', '', 'contains list of that has abstracts that are abstract'),
    ('groups', 1, 'Member', 'ListOfMembers', 'list of with attribute'),
    ('groups', 0, 'Group', 'ListOfGroups', 'list of with attribute'),
    ('test_vers', 0, 'ClassOne', '', 'multiple versions'),
    ('test_vers', 2, 'BBB', '', 'multiple versions same child lo'),
    ('fbc_v2', 1, 'Objective', 'ListOfObjectives', 'lo_element with attribute'),
    ('fbc_v2', 5, 'FbcAnd', '', 'inline_lo_element'),
    ('fbc_v2', 7, 'Association', 'ListOfAssociations', 'lo_element with abstract children'),
    ('test_child', 0, 'MySEDClass', '', 'different language'),
    ('base_class', 0, 'MyBase', '', 'class with no given base class'),
    ('base_class', 1, 'ClassTwo', 'ListOfClassTwos', 'class with lower case name'),
    ('base_class', 2, 'ClassThree', '', 'class with enum lower case name'),
    ('unknown_type', 0, 'UnknownType', '', 'class using an unknown attribute type'),
    ('nasty_lists', 0, 'Child', '', 'non uniform listOf name'),
    ('nasty_lists', 2, 'Parent', '', 'non uniform listOf name'),
    ('nasty_lists_alt1', 2, 'Parent', '', 'non uniform listOf name'),
    ('lo_children', 1, 'ContainerX', '', 'variants of lo child elements and differing api/xml names'),
    ('xml_names', 0, 'Fred', '', 'attribute xml names differ'),
    ('xml_names', 1, 'Other', '', 'element xml names differ'),
    ('add_copyright', 0, 'Copyright', '', 'additional copyright'),
    ('core', 0, 'Compartment', '', 'new attribute'),
    ('core', 14, 'ModifierSpeciesReference', '', 'new attribute'),
    ('core', 22, 'Event', '', 'new element functions'),
    ('core', 11, 'Constraint', '', 'has XML Node child'),
    ('new_distrib', 2, 'Distribution', '', 'abstract class with multiple abstract children'),
    ('new_distrib', 0, 'DrawFromDistribution', '', 'abstract class with multiple abstract children'),
    ('new_distrib', 6, 'DiscreteUnivariateDistribution', '', 'abstract class with multiple abstract children'),
    ('new_distrib', 15, 'BernoulliDistribution', '', 'concrete class'),
    ('new_distrib', 14, 'Category', 'ListOfCategories', 'concrete class'),
    ('new_distrib', 13, 'CategoricalDistribution', '', 'concrete class'),
    ('new_distrib', 16, 'BetaDistribution', '', 'concrete class'),
    ('new_distrib', 23, 'ExponentialDistribution', '', 'concrete class'),
    ('new_distrib', 17, 'BinomialDistribution', '', 'concrete class'),
    ('new_distrib', 21, 'Uncertainty', '', 'concrete class'),
    ('new_distrib', 11, 'ExternalParameter', '', 'class contains a listOf itself'),
    ('test_core_vers_multipkg', 0, 'ClassOneTwo', '', 'core version and package version not 1'),
    ('twoAtOnce', 1, 'ClassWithRequiredID', '', 'concrete class'),
    ('twoAtOnce', 3, 'MultipleChild', '', 'multiple versions with child elements'),

#*** MANUAL ADD HERE
    #('new_distrib_test', 36, 'DistribUncertainty', '', 'concrete class'),
    #('new_distrib_test', 16, 'DistribBernoulliDistribution', '', 'concrete class'),
    #('new_distrib_test', 14, 'DistribCategoricalDistribution', '', 'concrete class'),

    ('render', 5, 'GradientStop', '', 'hyphenated attribute'),
    ('render', 12, 'Polygon', '', 'list of with different types elements'),
    ('render', 23, 'GraphicalPrimitive2D', '', 'hyphenated enum attribute'),
    ('render', 26, 'DefaultValues', '', 'hyphenated attribute'),
    ('render', 6, 'RenderGroup', '', 'very nested base'),
    ('render', 8, 'LineEnding', '', 'uses other package class'),
    ('multi', 4, 'OutwardBindingSite', '', 'spacing of refs'),
    ('sbgn', 3, 'Map', '', 'list of with different types elements'),
    ('sbgn', 7, 'Arc', '', 'list of with different types elements'),
    ('sbgn', 2, 'Label', '', 'element with different xml name'),
    ('sbgn', 0, 'Point', 'SbgnListOfPoints', 'contains list of itself but with other listof used elsewhere'),

    #*** MANUAL ADD HERE
    #('arrays', 1, 'Index', 'ListOfIndices', 'list of with attribute'),


])
def test_cpp(name, num, class_name, list_of, test_case):
    assert rct.run_test(name, num, class_name, test_case, list_of) == 0


def test_cpp_plugin():
    pass

# test_cpp_

def setup():
    this_dir = os.path.dirname(os.path.abspath(__file__))
    (path_to_tests, _) = os.path.split(this_dir)
    test_functions.set_path_to_tests(path_to_tests)
    if not os.path.isdir('temp'):
        os.mkdir('temp')
