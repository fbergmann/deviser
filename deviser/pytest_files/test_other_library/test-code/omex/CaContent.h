/**
 * @file CaContent.h
 * @brief Definition of the CaContent class.
 * @author DEVISER
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
 * @class CaContent
 * @sbmlbrief{combine} TODO:Definition of the CaContent class.
 */


#ifndef CaContent_H__
#define CaContent_H__


#include <omex/common/extern.h>
#include <omex/common/combinefwd.h>


#ifdef __cplusplus


#include <string>


#include <omex/CaBase.h>


LIBCOMBINE_CPP_NAMESPACE_BEGIN


class LIBCOMBINE_EXTERN CaContent : public CaBase
{
protected:

  /** @cond doxygenlibCombineInternal */

  std::string mLocation;
  std::string mFormat;
  bool mMaster;
  bool mIsSetMaster;

  /** @endcond */

public:

  /**
   * Creates a new CaContent using the given OMEX Level and @ p version values.
   *
   * @param level an unsigned int, the OMEX Level to assign to this CaContent.
   *
   * @param version an unsigned int, the OMEX Version to assign to this
   * CaContent.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  CaContent(unsigned int level = OMEX_DEFAULT_LEVEL,
            unsigned int version = OMEX_DEFAULT_VERSION);


  /**
   * Creates a new CaContent using the given CaNamespaces object @p omexns.
   *
   * @param omexns the CaNamespaces object.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  CaContent(CaNamespaces *omexns);


  /**
   * Copy constructor for CaContent.
   *
   * @param orig the CaContent instance to copy.
   */
  CaContent(const CaContent& orig);


  /**
   * Assignment operator for CaContent.
   *
   * @param rhs the CaContent object whose values are to be used as the basis
   * of the assignment.
   */
  CaContent& operator=(const CaContent& rhs);


  /**
   * Creates and returns a deep copy of this CaContent object.
   *
   * @return a (deep) copy of this CaContent object.
   */
  virtual CaContent* clone() const;


  /**
   * Destructor for CaContent.
   */
  virtual ~CaContent();


  /**
   * Returns the value of the "location" attribute of this CaContent.
   *
   * @return the value of the "location" attribute of this CaContent as a
   * string.
   */
  const std::string& getLocation() const;


  /**
   * Returns the value of the "format" attribute of this CaContent.
   *
   * @return the value of the "format" attribute of this CaContent as a string.
   */
  const std::string& getFormat() const;


  /**
   * Returns the value of the "master" attribute of this CaContent.
   *
   * @return the value of the "master" attribute of this CaContent as a
   * boolean.
   */
  bool getMaster() const;


  /**
   * Predicate returning @c true if this CaContent's "location" attribute is
   * set.
   *
   * @return @c true if this CaContent's "location" attribute has been set,
   * otherwise @c false is returned.
   */
  bool isSetLocation() const;


  /**
   * Predicate returning @c true if this CaContent's "format" attribute is set.
   *
   * @return @c true if this CaContent's "format" attribute has been set,
   * otherwise @c false is returned.
   */
  bool isSetFormat() const;


  /**
   * Predicate returning @c true if this CaContent's "master" attribute is set.
   *
   * @return @c true if this CaContent's "master" attribute has been set,
   * otherwise @c false is returned.
   */
  bool isSetMaster() const;


  /**
   * Sets the value of the "location" attribute of this CaContent.
   *
   * @param location std::string& value of the "location" attribute to be set.
   *
   * @copydetails doc_returns_one_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   *
   * Calling this function with @p location = @c NULL or an empty string is
   * equivalent to calling unsetLocation().
   */
  int setLocation(const std::string& location);


  /**
   * Sets the value of the "format" attribute of this CaContent.
   *
   * @param format std::string& value of the "format" attribute to be set.
   *
   * @copydetails doc_returns_one_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   *
   * Calling this function with @p format = @c NULL or an empty string is
   * equivalent to calling unsetFormat().
   */
  int setFormat(const std::string& format);


  /**
   * Sets the value of the "master" attribute of this CaContent.
   *
   * @param master bool value of the "master" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setMaster(bool master);


  /**
   * Unsets the value of the "location" attribute of this CaContent.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetLocation();


  /**
   * Unsets the value of the "format" attribute of this CaContent.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetFormat();


  /**
   * Unsets the value of the "master" attribute of this CaContent.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetMaster();


  /**
   * Returns the XML element name of this CaContent object.
   *
   * For CaContent, the XML element name is always @c "content".
   *
   * @return the name of this element, i.e. @c "content".
   */
  virtual const std::string& getElementName() const;


  /**
   * Returns the libCombine type code for this CaContent object.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the OMEX type code for this object:
   * @omexconstant{LIB_COMBINE_CONTENT, CaTypeCode_t}.
   *
   * @copydetails doc_warning_typecodes_not_unique
   *
   * @see getElementName()
   */
  virtual int getTypeCode() const;


  /**
   * Predicate returning @c true if all the required attributes for this
   * CaContent object have been set.
   *
   * @return @c true to indicate that all the required attributes of this
   * CaContent have been set, otherwise @c false is returned.
   *
   *
   * @note The required attributes for the CaContent object are:
   * @li "location"
   * @li "format"
   */
  virtual bool hasRequiredAttributes() const;



  /** @cond doxygenlibCombineInternal */

  /**
   * Write any contained elements
   */
  virtual void writeElements(XMLOutputStream& stream) const;

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Accepts the given CaVisitor
   */
  virtual bool accept(CaVisitor& v) const;

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Sets the parent CaOmexManifest
   */
  virtual void setCaOmexManifest(CaOmexManifest* d);

  /** @endcond */




  #ifndef SWIG



  /** @cond doxygenlibCombineInternal */

  /**
   * Gets the value of the "attributeName" attribute of this CaContent.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, bool& value)
    const;

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Gets the value of the "attributeName" attribute of this CaContent.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, int& value) const;

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Gets the value of the "attributeName" attribute of this CaContent.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           double& value) const;

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Gets the value of the "attributeName" attribute of this CaContent.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           unsigned int& value) const;

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Gets the value of the "attributeName" attribute of this CaContent.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           std::string& value) const;

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Predicate returning @c true if this CaContent's attribute "attributeName"
   * is set.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @return @c true if this CaContent's attribute "attributeName" has been
   * set, otherwise @c false is returned.
   */
  virtual bool isSetAttribute(const std::string& attributeName) const;

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Sets the value of the "attributeName" attribute of this CaContent.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, bool value);

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Sets the value of the "attributeName" attribute of this CaContent.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, int value);

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Sets the value of the "attributeName" attribute of this CaContent.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, double value);

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Sets the value of the "attributeName" attribute of this CaContent.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           unsigned int value);

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Sets the value of the "attributeName" attribute of this CaContent.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           const std::string& value);

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Unsets the value of the "attributeName" attribute of this CaContent.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @copydetails doc_returns_success_code
   * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetAttribute(const std::string& attributeName);

  /** @endcond */




  #endif /* !SWIG */


protected:


  /** @cond doxygenlibCombineInternal */

  /**
   * Adds the expected attributes for this element
   */
  virtual void addExpectedAttributes(ExpectedAttributes& attributes);

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Reads the expected attributes into the member data variables
   */
  virtual void readAttributes(const XMLAttributes& attributes,
                              const ExpectedAttributes& expectedAttributes);

  /** @endcond */



  /** @cond doxygenlibCombineInternal */

  /**
   * Writes the attributes to the stream
   */
  virtual void writeAttributes(XMLOutputStream& stream) const;

  /** @endcond */


};



LIBCOMBINE_CPP_NAMESPACE_END




#endif /* __cplusplus */




#ifndef SWIG




LIBCOMBINE_CPP_NAMESPACE_BEGIN




BEGIN_C_DECLS


/**
 * Creates a new CaContent_t using the given OMEX Level and @ p version values.
 *
 * @param level an unsigned int, the OMEX Level to assign to this CaContent_t.
 *
 * @param version an unsigned int, the OMEX Version to assign to this
 * CaContent_t.
 *
 * @copydetails doc_note_setting_lv_pkg
 *
 * @copydetails doc_returned_owned_pointer
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
CaContent_t *
CaContent_create(unsigned int level, unsigned int version);


/**
 * Creates and returns a deep copy of this CaContent_t object.
 *
 * @param cc the CaContent_t structure.
 *
 * @return a (deep) copy of this CaContent_t object.
 *
 * @copydetails doc_returned_owned_pointer
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
CaContent_t*
CaContent_clone(const CaContent_t* cc);


/**
 * Frees this CaContent_t object.
 *
 * @param cc the CaContent_t structure.
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
void
CaContent_free(CaContent_t* cc);


/**
 * Returns the value of the "location" attribute of this CaContent_t.
 *
 * @param cc the CaContent_t structure whose location is sought.
 *
 * @return the value of the "location" attribute of this CaContent_t as a
 * pointer to a string.
 *
 * @copydetails doc_returned_owned_char
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
char *
CaContent_getLocation(const CaContent_t * cc);


/**
 * Returns the value of the "format" attribute of this CaContent_t.
 *
 * @param cc the CaContent_t structure whose format is sought.
 *
 * @return the value of the "format" attribute of this CaContent_t as a pointer
 * to a string.
 *
 * @copydetails doc_returned_owned_char
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
char *
CaContent_getFormat(const CaContent_t * cc);


/**
 * Returns the value of the "master" attribute of this CaContent_t.
 *
 * @param cc the CaContent_t structure whose master is sought.
 *
 * @return the value of the "master" attribute of this CaContent_t as a
 * boolean.
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
int
CaContent_getMaster(const CaContent_t * cc);


/**
 * Predicate returning @c 1 (true) if this CaContent_t's "location" attribute
 * is set.
 *
 * @param cc the CaContent_t structure.
 *
 * @return @c 1 (true) if this CaContent_t's "location" attribute has been set,
 * otherwise @c 0 (false) is returned.
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
int
CaContent_isSetLocation(const CaContent_t * cc);


/**
 * Predicate returning @c 1 (true) if this CaContent_t's "format" attribute is
 * set.
 *
 * @param cc the CaContent_t structure.
 *
 * @return @c 1 (true) if this CaContent_t's "format" attribute has been set,
 * otherwise @c 0 (false) is returned.
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
int
CaContent_isSetFormat(const CaContent_t * cc);


/**
 * Predicate returning @c 1 (true) if this CaContent_t's "master" attribute is
 * set.
 *
 * @param cc the CaContent_t structure.
 *
 * @return @c 1 (true) if this CaContent_t's "master" attribute has been set,
 * otherwise @c 0 (false) is returned.
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
int
CaContent_isSetMaster(const CaContent_t * cc);


/**
 * Sets the value of the "location" attribute of this CaContent_t.
 *
 * @param cc the CaContent_t structure.
 *
 * @param location const char * value of the "location" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @omexconstant{LIBCOMBINE_INVALID_OBJECT, OperationReturnValues_t}
 *
 * Calling this function with @p location = @c NULL or an empty string is
 * equivalent to calling CaContent_unsetLocation().
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
int
CaContent_setLocation(CaContent_t * cc, const char * location);


/**
 * Sets the value of the "format" attribute of this CaContent_t.
 *
 * @param cc the CaContent_t structure.
 *
 * @param format const char * value of the "format" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @omexconstant{LIBCOMBINE_INVALID_OBJECT, OperationReturnValues_t}
 *
 * Calling this function with @p format = @c NULL or an empty string is
 * equivalent to calling CaContent_unsetFormat().
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
int
CaContent_setFormat(CaContent_t * cc, const char * format);


/**
 * Sets the value of the "master" attribute of this CaContent_t.
 *
 * @param cc the CaContent_t structure.
 *
 * @param master int value of the "master" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @omexconstant{LIBCOMBINE_INVALID_ATTRIBUTE_VALUE,
 * OperationReturnValues_t}
 * @li @omexconstant{LIBCOMBINE_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
int
CaContent_setMaster(CaContent_t * cc, int master);


/**
 * Unsets the value of the "location" attribute of this CaContent_t.
 *
 * @param cc the CaContent_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
 * @li @omexconstant{LIBCOMBINE_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
int
CaContent_unsetLocation(CaContent_t * cc);


/**
 * Unsets the value of the "format" attribute of this CaContent_t.
 *
 * @param cc the CaContent_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
 * @li @omexconstant{LIBCOMBINE_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
int
CaContent_unsetFormat(CaContent_t * cc);


/**
 * Unsets the value of the "master" attribute of this CaContent_t.
 *
 * @param cc the CaContent_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @omexconstant{LIBCOMBINE_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @omexconstant{LIBCOMBINE_OPERATION_FAILED, OperationReturnValues_t}
 * @li @omexconstant{LIBCOMBINE_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
int
CaContent_unsetMaster(CaContent_t * cc);


/**
 * Predicate returning @c 1 (true) if all the required attributes for this
 * CaContent_t object have been set.
 *
 * @param cc the CaContent_t structure.
 *
 * @return @c 1 (true) to indicate that all the required attributes of this
 * CaContent_t have been set, otherwise @c 0 (false) is returned.
 *
 *
 * @note The required attributes for the CaContent_t object are:
 * @li "location"
 * @li "format"
 *
 * @memberof CaContent_t
 */
LIBCOMBINE_EXTERN
int
CaContent_hasRequiredAttributes(const CaContent_t * cc);




END_C_DECLS




LIBCOMBINE_CPP_NAMESPACE_END




#endif /* !SWIG */




#endif /* !CaContent_H__ */


