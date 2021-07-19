/**
 * @file ListOfAssociations.h
 * @brief Definition of the ListOfAssociations class.
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
 * @class ListOfAssociations
 * @sbmlbrief{fbc} TODO:Definition of the ListOfAssociations class.
 */


#ifndef ListOfAssociations_H__
#define ListOfAssociations_H__


#include <sbml/common/extern.h>
#include <sbml/common/sbmlfwd.h>
#include <sbml/packages/fbc/common/fbcfwd.h>


#ifdef __cplusplus


#include <string>


#include <sbml/ListOf.h>
#include <sbml/packages/fbc/extension/FbcExtension.h>
#include <sbml/packages/fbc/sbml/Association.h>


LIBSBML_CPP_NAMESPACE_BEGIN


class FbcAnd;
class FbcOr;
class GeneProductRef;

class LIBSBML_EXTERN ListOfAssociations : public ListOf
{
protected:

  /** @cond doxygenLibsbmlInternal */

  std::string mElementName;

  /** @endcond */

public:

  /**
   * Creates a new ListOfAssociations using the given SBML Level, Version and
   * &ldquo;fbc&rdquo; package version.
   *
   * @param level an unsigned int, the SBML Level to assign to this
   * ListOfAssociations.
   *
   * @param version an unsigned int, the SBML Version to assign to this
   * ListOfAssociations.
   *
   * @param pkgVersion an unsigned int, the SBML Fbc Version to assign to this
   * ListOfAssociations.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  ListOfAssociations(unsigned int level = FbcExtension::getDefaultLevel(),
                     unsigned int version = FbcExtension::getDefaultVersion(),
                     unsigned int pkgVersion =
                       FbcExtension::getDefaultPackageVersion());


  /**
   * Creates a new ListOfAssociations using the given FbcPkgNamespaces object.
   *
   * @copydetails doc_what_are_sbml_package_namespaces
   *
   * @param fbcns the FbcPkgNamespaces object.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  ListOfAssociations(FbcPkgNamespaces *fbcns);


  /**
   * Copy constructor for ListOfAssociations.
   *
   * @param orig the ListOfAssociations instance to copy.
   */
  ListOfAssociations(const ListOfAssociations& orig);


  /**
   * Assignment operator for ListOfAssociations.
   *
   * @param rhs the ListOfAssociations object whose values are to be used as
   * the basis of the assignment.
   */
  ListOfAssociations& operator=(const ListOfAssociations& rhs);


  /**
   * Creates and returns a deep copy of this ListOfAssociations object.
   *
   * @return a (deep) copy of this ListOfAssociations object.
   */
  virtual ListOfAssociations* clone() const;


  /**
   * Destructor for ListOfAssociations.
   */
  virtual ~ListOfAssociations();


  /**
   * Get an Association from the ListOfAssociations.
   *
   * @param n an unsigned int representing the index of the Association to
   * retrieve.
   *
   * @return the nth Association in this ListOfAssociations or @c NULL if no
   * such object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addAssociation(const Association* object)
   * @see createAssociation()
   * @see get(const std::string& sid)
   * @see getNumAssociations()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  virtual Association* get(unsigned int n);


  /**
   * Get an Association from the ListOfAssociations.
   *
   * @param n an unsigned int representing the index of the Association to
   * retrieve.
   *
   * @return the nth Association in this ListOfAssociations or @c NULL if no
   * such object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addAssociation(const Association* object)
   * @see createAssociation()
   * @see get(const std::string& sid)
   * @see getNumAssociations()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  virtual const Association* get(unsigned int n) const;


  /**
   * Get an Association from the ListOfAssociations based on its identifier.
   *
   * @param sid a string representing the identifier of the Association to
   * retrieve.
   *
   * @return the Association in this ListOfAssociations with the given @p sid
   * or @c NULL if no such Association exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addAssociation(const Association* object)
   * @see createAssociation()
   * @see get(unsigned int n)
   * @see getNumAssociations()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  virtual Association* get(const std::string& sid);


  /**
   * Get an Association from the ListOfAssociations based on its identifier.
   *
   * @param sid a string representing the identifier of the Association to
   * retrieve.
   *
   * @return the Association in this ListOfAssociations with the given @p sid
   * or @c NULL if no such Association exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addAssociation(const Association* object)
   * @see createAssociation()
   * @see get(unsigned int n)
   * @see getNumAssociations()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  virtual const Association* get(const std::string& sid) const;


  /**
   * Removes the nth Association from this ListOfAssociations and returns a
   * pointer to it.
   *
   * @param n an unsigned int representing the index of the Association to
   * remove.
   *
   * @return a pointer to the nth Association in this ListOfAssociations.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addAssociation(const Association* object)
   * @see createAssociation()
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumAssociations()
   * @see remove(const std::string& sid)
   */
  virtual Association* remove(unsigned int n);


  /**
   * Removes the Association from this ListOfAssociations based on its
   * identifier and returns a pointer to it.
   *
   * @param sid a string representing the identifier of the Association to
   * remove.
   *
   * @return the Association in this ListOfAssociations based on the identifier
   * or NULL if no such Association exists.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addAssociation(const Association* object)
   * @see createAssociation()
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumAssociations()
   * @see remove(unsigned int n)
   */
  virtual Association* remove(const std::string& sid);


  /**
   * Adds a copy of the given Association to this ListOfAssociations.
   *
   * @param a the Association object to add.
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
   * @see createAssociation()
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumAssociations()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  int addAssociation(const Association* a);


  /**
   * Get the number of Association objects in this ListOfAssociations.
   *
   * @return the number of Association objects in this ListOfAssociations.
   *
   * @see addAssociation(const Association* object)
   * @see createAssociation()
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  unsigned int getNumAssociations() const;


  /**
   * Creates a new FbcAnd object, adds it to this ListOfAssociations object and
   * returns the FbcAnd object created.
   *
   * @return a new FbcAnd object instance.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addAssociation(const Association* object)
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumAssociations()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  FbcAnd* createAnd();


  /**
   * Creates a new FbcOr object, adds it to this ListOfAssociations object and
   * returns the FbcOr object created.
   *
   * @return a new FbcOr object instance.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addAssociation(const Association* object)
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumAssociations()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  FbcOr* createOr();


  /**
   * Creates a new GeneProductRef object, adds it to this ListOfAssociations
   * object and returns the GeneProductRef object created.
   *
   * @return a new GeneProductRef object instance.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addAssociation(const Association* object)
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumAssociations()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  GeneProductRef* createGeneProductRef();


  /**
   * Returns the XML element name of this ListOfAssociations object.
   *
   * For ListOfAssociations, the XML element name is always
   * @c "listOfAssociations".
   *
   * @return the name of this element, i.e. @c "listOfAssociations".
   */
  virtual const std::string& getElementName() const;



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the XML name of this ListOfAssociations object.
   */
  virtual void setElementName(const std::string& name);

  /** @endcond */


  /**
   * Returns the libSBML type code for this ListOfAssociations object.
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
   * ListOfAssociations object.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SBML typecode for the objects contained in this
   * ListOfAssociations:
   * @sbmlconstant{SBML_FBC_ASSOCIATION, SBMLFbcTypeCode_t}.
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
   * Creates a new Association in this ListOfAssociations
   */
  virtual SBase* createObject(XMLInputStream& stream);

  /** @endcond */


  friend class FbcAnd;
  friend class FbcOr;
  friend class GeneProductAssociation;

  /** @cond doxygenLibsbmlInternal */

  /**
   * checks concrete types
   */
  virtual bool isValidTypeForList(SBase* item);

  /** @endcond */


};



LIBSBML_CPP_NAMESPACE_END




#endif /* __cplusplus */




#ifndef SWIG




LIBSBML_CPP_NAMESPACE_BEGIN




BEGIN_C_DECLS


/**
 * Get an Association_t from the ListOf_t.
 *
 * @param lo the ListOf_t structure to search.
 *
 * @param n an unsigned int representing the index of the Association_t to
 * retrieve.
 *
 * @return the nth Association_t in this ListOf_t or @c NULL if no such object
 * exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof ListOfAssociations_t
 */
LIBSBML_EXTERN
Association_t*
ListOfAssociations_getAssociation(ListOf_t* lo, unsigned int n);


/**
 * Get an Association_t from the ListOf_t based on its identifier.
 *
 * @param lo the ListOf_t structure to search.
 *
 * @param sid a string representing the identifier of the Association_t to
 * retrieve.
 *
 * @return the Association_t in this ListOf_t with the given @p sid or @c NULL
 * if no such Association_t exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof ListOfAssociations_t
 */
LIBSBML_EXTERN
Association_t*
ListOfAssociations_getById(ListOf_t* lo, const char *sid);


/**
 * Removes the nth Association_t from this ListOf_t and returns a pointer to
 * it.
 *
 * @param lo the ListOf_t structure to search.
 *
 * @param n an unsigned int representing the index of the Association_t to
 * remove.
 *
 * @return a pointer to the nth Association_t in this ListOf_t.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof ListOfAssociations_t
 */
LIBSBML_EXTERN
Association_t*
ListOfAssociations_remove(ListOf_t* lo, unsigned int n);


/**
 * Removes the Association_t from this ListOf_t based on its identifier and
 * returns a pointer to it.
 *
 * @param lo the ListOf_t structure to search.
 *
 * @param sid a string representing the identifier of the Association_t to
 * remove.
 *
 * @return the Association_t in this ListOf_t based on the identifier or NULL
 * if no such Association_t exists.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof ListOfAssociations_t
 */
LIBSBML_EXTERN
Association_t*
ListOfAssociations_removeById(ListOf_t* lo, const char* sid);




END_C_DECLS




LIBSBML_CPP_NAMESPACE_END




#endif /* !SWIG */




#endif /* !ListOfAssociations_H__ */


