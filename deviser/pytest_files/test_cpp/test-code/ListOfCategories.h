/**
 * @file ListOfCategories.h
 * @brief Definition of the ListOfCategories class.
 * @author SBMLTeam
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSBML. Please visit http://sbml.org for more
 * information about SBML, and the latest version of libSBML.
 *
 * Copyright (C) 2019 jointly by the following organizations:
 * 1. California Institute of Technology, Pasadena, CA, USA
 * 2. University of Heidelberg, Heidelberg, Germany
 *
 * Copyright (C) 2013-2018 jointly by the following organizations:
 * 1. California Institute of Technology, Pasadena, CA, USA
 * 2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 * 3. University of Heidelberg, Heidelberg, Germany
 *
 * Copyright (C) 2009-2013 jointly by the following organizations:
 * 1. California Institute of Technology, Pasadena, CA, USA
 * 2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 *
 * Copyright (C) 2006-2008 by the California Institute of Technology,
 * Pasadena, CA, USA
 *
 * Copyright (C) 2002-2005 jointly by the following organizations:
 * 1. California Institute of Technology, Pasadena, CA, USA
 * 2. Japan Science and Technology Agency, Japan
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation. A copy of the license agreement is provided in the
 * file named "LICENSE.txt" included with this software distribution and also
 * available online as http://sbml.org/software/libsbml/license.html
 * ------------------------------------------------------------------------ -->
 *
 * @class ListOfCategories
 * @sbmlbrief{distrib} TODO:Definition of the ListOfCategories class.
 */


#ifndef ListOfCategories_H__
#define ListOfCategories_H__


#include <sbml/common/extern.h>
#include <sbml/common/sbmlfwd.h>
#include <sbml/packages/distrib/common/distribfwd.h>


#ifdef __cplusplus


#include <string>


#include <sbml/ListOf.h>
#include <sbml/packages/distrib/extension/DistribExtension.h>
#include <sbml/packages/distrib/sbml/Category.h>


LIBSBML_CPP_NAMESPACE_BEGIN


class LIBSBML_EXTERN ListOfCategories : public ListOf
{

public:

  /**
   * Creates a new ListOfCategories using the given SBML Level, Version and
   * &ldquo;distrib&rdquo; package version.
   *
   * @param level an unsigned int, the SBML Level to assign to this
   * ListOfCategories.
   *
   * @param version an unsigned int, the SBML Version to assign to this
   * ListOfCategories.
   *
   * @param pkgVersion an unsigned int, the SBML Distrib Version to assign to
   * this ListOfCategories.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  ListOfCategories(unsigned int level = DistribExtension::getDefaultLevel(),
                   unsigned int version =
                     DistribExtension::getDefaultVersion(),
                   unsigned int pkgVersion =
                     DistribExtension::getDefaultPackageVersion());


  /**
   * Creates a new ListOfCategories using the given DistribPkgNamespaces
   * object.
   *
   * @copydetails doc_what_are_sbml_package_namespaces
   *
   * @param distribns the DistribPkgNamespaces object.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  ListOfCategories(DistribPkgNamespaces *distribns);


  /**
   * Copy constructor for ListOfCategories.
   *
   * @param orig the ListOfCategories instance to copy.
   */
  ListOfCategories(const ListOfCategories& orig);


  /**
   * Assignment operator for ListOfCategories.
   *
   * @param rhs the ListOfCategories object whose values are to be used as the
   * basis of the assignment.
   */
  ListOfCategories& operator=(const ListOfCategories& rhs);


  /**
   * Creates and returns a deep copy of this ListOfCategories object.
   *
   * @return a (deep) copy of this ListOfCategories object.
   */
  virtual ListOfCategories* clone() const;


  /**
   * Destructor for ListOfCategories.
   */
  virtual ~ListOfCategories();


  /**
   * Get a Category from the ListOfCategories.
   *
   * @param n an unsigned int representing the index of the Category to
   * retrieve.
   *
   * @return the nth Category in this ListOfCategories or @c NULL if no such
   * object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addCategory(const Category* object)
   * @see createCategory()
   * @see get(const std::string& sid)
   * @see getNumCategories()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  virtual Category* get(unsigned int n);


  /**
   * Get a Category from the ListOfCategories.
   *
   * @param n an unsigned int representing the index of the Category to
   * retrieve.
   *
   * @return the nth Category in this ListOfCategories or @c NULL if no such
   * object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addCategory(const Category* object)
   * @see createCategory()
   * @see get(const std::string& sid)
   * @see getNumCategories()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  virtual const Category* get(unsigned int n) const;


  /**
   * Get a Category from the ListOfCategories based on its identifier.
   *
   * @param sid a string representing the identifier of the Category to
   * retrieve.
   *
   * @return the Category in this ListOfCategories with the given @p sid or
   * @c NULL if no such Category exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addCategory(const Category* object)
   * @see createCategory()
   * @see get(unsigned int n)
   * @see getNumCategories()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  virtual Category* get(const std::string& sid);


  /**
   * Get a Category from the ListOfCategories based on its identifier.
   *
   * @param sid a string representing the identifier of the Category to
   * retrieve.
   *
   * @return the Category in this ListOfCategories with the given @p sid or
   * @c NULL if no such Category exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addCategory(const Category* object)
   * @see createCategory()
   * @see get(unsigned int n)
   * @see getNumCategories()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  virtual const Category* get(const std::string& sid) const;


  /**
   * Removes the nth Category from this ListOfCategories and returns a pointer
   * to it.
   *
   * @param n an unsigned int representing the index of the Category to remove.
   *
   * @return a pointer to the nth Category in this ListOfCategories.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addCategory(const Category* object)
   * @see createCategory()
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumCategories()
   * @see remove(const std::string& sid)
   */
  virtual Category* remove(unsigned int n);


  /**
   * Removes the Category from this ListOfCategories based on its identifier
   * and returns a pointer to it.
   *
   * @param sid a string representing the identifier of the Category to remove.
   *
   * @return the Category in this ListOfCategories based on the identifier or
   * NULL if no such Category exists.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addCategory(const Category* object)
   * @see createCategory()
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumCategories()
   * @see remove(unsigned int n)
   */
  virtual Category* remove(const std::string& sid);


  /**
   * Adds a copy of the given Category to this ListOfCategories.
   *
   * @param c the Category object to add.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_LEVEL_MISMATCH, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_VERSION_MISMATCH, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_PKG_VERSION_MISMATCH, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_DUPLICATE_OBJECT_ID, OperationReturnValues_t}
   *
   * @copydetails doc_note_object_is_copied
   *
   * @see createCategory()
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumCategories()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  int addCategory(const Category* c);


  /**
   * Get the number of Category objects in this ListOfCategories.
   *
   * @return the number of Category objects in this ListOfCategories.
   *
   * @see addCategory(const Category* object)
   * @see createCategory()
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  unsigned int getNumCategories() const;


  /**
   * Creates a new Category object, adds it to this ListOfCategories object and
   * returns the Category object created.
   *
   * @return a new Category object instance.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addCategory(const Category* object)
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumCategories()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  Category* createCategory();


  /**
   * Returns the XML element name of this ListOfCategories object.
   *
   * For ListOfCategories, the XML element name is always
   * @c "listOfCategories".
   *
   * @return the name of this element, i.e. @c "listOfCategories".
   */
  virtual const std::string& getElementName() const;


  /**
   * Returns the libSBML type code for this ListOfCategories object.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SBML type code for this object:
   * @sbmlconstant{SBML_LIST_OF, SBMLTypeCode_t}.
   *
   * @copydetails doc_warning_typecodes_not_unique
   */
  virtual int getTypeCode() const;


  /**
   * Returns the libSBML type code for the SBML objects contained in this
   * ListOfCategories object.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SBML typecode for the objects contained in this
   * ListOfCategories:
   * @sbmlconstant{SBML_DISTRIB_CATEGORY, SBMLDistribTypeCode_t}.
   *
   * @copydetails doc_warning_typecodes_not_unique
   *
   * @see getElementName()
   * @see getPackageName()
   */
  virtual int getItemTypeCode() const;




  #ifndef SWIG




  #endif /* !SWIG */


protected:


  /** @cond doxygenLibsbmlInternal */

  /**
   * Creates a new Category in this ListOfCategories
   */
  virtual SBase* createObject(XMLInputStream& stream);

  /** @endcond */


};



LIBSBML_CPP_NAMESPACE_END




#endif /* __cplusplus */




#ifndef SWIG




LIBSBML_CPP_NAMESPACE_BEGIN




BEGIN_C_DECLS


/**
 * Get a Category_t from the ListOf_t.
 *
 * @param lo the ListOf_t structure to search.
 *
 * @param n an unsigned int representing the index of the Category_t to
 * retrieve.
 *
 * @return the nth Category_t in this ListOf_t or @c NULL if no such object
 * exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof ListOfCategories_t
 */
LIBSBML_EXTERN
Category_t*
ListOfCategories_getCategory(ListOf_t* lo, unsigned int n);


/**
 * Get a Category_t from the ListOf_t based on its identifier.
 *
 * @param lo the ListOf_t structure to search.
 *
 * @param sid a string representing the identifier of the Category_t to
 * retrieve.
 *
 * @return the Category_t in this ListOf_t with the given @p sid or @c NULL if
 * no such Category_t exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof ListOfCategories_t
 */
LIBSBML_EXTERN
Category_t*
ListOfCategories_getById(ListOf_t* lo, const char *sid);


/**
 * Removes the nth Category_t from this ListOf_t and returns a pointer to it.
 *
 * @param lo the ListOf_t structure to search.
 *
 * @param n an unsigned int representing the index of the Category_t to remove.
 *
 * @return a pointer to the nth Category_t in this ListOf_t.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof ListOfCategories_t
 */
LIBSBML_EXTERN
Category_t*
ListOfCategories_remove(ListOf_t* lo, unsigned int n);


/**
 * Removes the Category_t from this ListOf_t based on its identifier and
 * returns a pointer to it.
 *
 * @param lo the ListOf_t structure to search.
 *
 * @param sid a string representing the identifier of the Category_t to remove.
 *
 * @return the Category_t in this ListOf_t based on the identifier or NULL if
 * no such Category_t exists.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof ListOfCategories_t
 */
LIBSBML_EXTERN
Category_t*
ListOfCategories_removeById(ListOf_t* lo, const char* sid);




END_C_DECLS




LIBSBML_CPP_NAMESPACE_END




#endif /* !SWIG */




#endif /* !ListOfCategories_H__ */


