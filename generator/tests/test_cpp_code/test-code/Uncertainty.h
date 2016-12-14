/**
 * @file Uncertainty.h
 * @brief Definition of the Uncertainty class.
 * @author SBMLTeam
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSBML. Please visit http://sbml.org for more
 * information about SBML, and the latest version of libSBML.
 *
 * Copyright (C) 2013-2016 jointly by the following organizations:
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
 * @class Uncertainty
 * @sbmlbrief{distrib} TODO:Definition of the Uncertainty class.
 */


#ifndef Uncertainty_H__
#define Uncertainty_H__


#include <sbml/common/extern.h>
#include <sbml/common/sbmlfwd.h>
#include <sbml/packages/distrib/common/distribfwd.h>


#ifdef __cplusplus


#include <string>


#include <sbml/SBase.h>
#include <sbml/packages/distrib/extension/DistribExtension.h>
#include <sbml/packages/distrib/sbml/UncertMLNode.h>


LIBSBML_CPP_NAMESPACE_BEGIN


class LIBSBML_EXTERN Uncertainty : public SBase
{
protected:

  /** @cond doxygenLibsbmlInternal */

  UncertMLNode* mUncertML;

  /** @endcond */

public:

  /**
   * Creates a new Uncertainty using the given SBML Level, Version and
   * &ldquo;distrib&rdquo; package version.
   *
   * @param level an unsigned int, the SBML Level to assign to this
   * Uncertainty.
   *
   * @param version an unsigned int, the SBML Version to assign to this
   * Uncertainty.
   *
   * @param pkgVersion an unsigned int, the SBML Distrib Version to assign to
   * this Uncertainty.
   *
   * @throws SBMLConstructorException
   * Thrown if the given @p level and @p version combination, or this kind of
   * SBML object, are either invalid or mismatched with respect to the parent
   * SBMLDocument object.
   * @copydetails doc_note_setting_lv
   */
  Uncertainty(unsigned int level = DistribExtension::getDefaultLevel(),
              unsigned int version = DistribExtension::getDefaultVersion(),
              unsigned int pkgVersion =
                DistribExtension::getDefaultPackageVersion());


  /**
   * Creates a new Uncertainty using the given DistribPkgNamespaces object.
   *
   * @param distribns the DistribPkgNamespaces object.
   *
   * @throws SBMLConstructorException
   * Thrown if the given @p level and @p version combination, or this kind of
   * SBML object, are either invalid or mismatched with respect to the parent
   * SBMLDocument object.
   * @copydetails doc_note_setting_lv
   */
  Uncertainty(DistribPkgNamespaces *distribns);


  /**
   * Copy constructor for Uncertainty.
   *
   * @param orig the Uncertainty instance to copy.
   */
  Uncertainty(const Uncertainty& orig);


  /**
   * Assignment operator for Uncertainty.
   *
   * @param rhs the Uncertainty object whose values are to be used as the basis
   * of the assignment.
   */
  Uncertainty& operator=(const Uncertainty& rhs);


  /**
   * Creates and returns a deep copy of this Uncertainty object.
   *
   * @return a (deep) copy of this Uncertainty object.
   */
  virtual Uncertainty* clone() const;


  /**
   * Destructor for Uncertainty.
   */
  virtual ~Uncertainty();


  /**
   * Returns the value of the "id" attribute of this Uncertainty.
   *
   * @return the value of the "id" attribute of this Uncertainty as a string.
   */
  virtual const std::string& getId() const;


  /**
   * Returns the value of the "name" attribute of this Uncertainty.
   *
   * @return the value of the "name" attribute of this Uncertainty as a string.
   */
  virtual const std::string& getName() const;


  /**
   * Predicate returning @c true if this Uncertainty's "id" attribute is set.
   *
   * @return @c true if this Uncertainty's "id" attribute has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetId() const;


  /**
   * Predicate returning @c true if this Uncertainty's "name" attribute is set.
   *
   * @return @c true if this Uncertainty's "name" attribute has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetName() const;


  /**
   * Sets the value of the "id" attribute of this Uncertainty.
   *
   * @param id std::string& value of the "id" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  virtual int setId(const std::string& id);


  /**
   * Sets the value of the "name" attribute of this Uncertainty.
   *
   * @param name std::string& value of the "name" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  virtual int setName(const std::string& name);


  /**
   * Unsets the value of the "id" attribute of this Uncertainty.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetId();


  /**
   * Unsets the value of the "name" attribute of this Uncertainty.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetName();


  /**
   * Returns the value of the "uncertML" element of this Uncertainty.
   *
   * @return the value of the "uncertML" element of this Uncertainty as a
   * UncertMLNode*.
   */
  const UncertMLNode* getUncertML() const;


  /**
   * Returns the value of the "uncertML" element of this Uncertainty.
   *
   * @return the value of the "uncertML" element of this Uncertainty as a
   * UncertMLNode*.
   */
  UncertMLNode* getUncertML();


  /**
   * Predicate returning @c true if this Uncertainty's "uncertML" element is
   * set.
   *
   * @return @c true if this Uncertainty's "uncertML" element has been set,
   * otherwise @c false is returned.
   */
  bool isSetUncertML() const;


  /**
   * Sets the value of the "uncertML" element of this Uncertainty.
   *
   * @param uncertML UncertMLNode* value of the "uncertML" element to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setUncertML(const UncertMLNode* uncertML);


  /**
   * Unsets the value of the "uncertML" element of this Uncertainty.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetUncertML();


  /**
   * Returns the XML element name of this Uncertainty object.
   *
   * For Uncertainty, the XML element name is always @c "uncertainty".
   *
   * @return the name of this element, i.e. @c "uncertainty".
   */
  virtual const std::string& getElementName() const;


  /**
   * Returns the libSBML type code for this Uncertainty object.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SBML type code for this object:
   *
   * @sbmlconstant{SBML_DISTRIB_UNCERTAINTY, SBMLDistribTypeCode_t}
   *
   * @copydetails doc_warning_typecodes_not_unique
   *
   * @see getElementName()
   * @see getPackageName()
   */
  virtual int getTypeCode() const;


  /**
   * Predicate returning @c true if all the required attributes for this
   * Uncertainty object have been set.
   *
   * @return @c true to indicate that all the required attributes of this
   * Uncertainty have been set, otherwise @c false is returned.
   *
   *
   * @note The required attributes for the Uncertainty object are:
   */
  virtual bool hasRequiredAttributes() const;


  /**
   * Predicate returning @c true if all the required elements for this
   * Uncertainty object have been set.
   *
   * @return @c true to indicate that all the required elements of this
   * Uncertainty have been set, otherwise @c false is returned.
   *
   *
   * @note The required elements for the Uncertainty object are:
   * @li "uncertML"
   */
  virtual bool hasRequiredElements() const;



  /** @cond doxygenLibsbmlInternal */

  /**
   * Write any contained elements
   */
  virtual void writeElements(XMLOutputStream& stream) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Accepts the given SBMLVisitor
   */
  virtual bool accept(SBMLVisitor& v) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the parent SBMLDocument
   */
  virtual void setSBMLDocument(SBMLDocument* d);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Connects to child elements
   */
  virtual void connectToChild();

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Enables/disables the given package with this element
   */
  virtual void enablePackageInternal(const std::string& pkgURI,
                                     const std::string& pkgPrefix,
                                     bool flag);

  /** @endcond */




  #ifndef SWIG



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, bool& value)
    const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, int& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           double& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           unsigned int& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           std::string& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           const char* value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Predicate returning @c true if this Uncertainty's attribute
   * "attributeName" is set.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @return @c true if this Uncertainty's attribute "attributeName" has been
   * set, otherwise @c false is returned.
   */
  virtual bool isSetAttribute(const std::string& attributeName) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, bool value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, int value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, double value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           unsigned int value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           const std::string& value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, const char*
    value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Unsets the value of the "attributeName" attribute of this Uncertainty.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetAttribute(const std::string& attributeName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Creates and returns an new "elementName" object in this Uncertainty.
   *
   * @param elementName, the name of the element to create.
   *
   * pointer to the element created.
   */
  virtual SBase* createObject(const std::string& elementName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Returns the number of "elementName" in this Uncertainty.
   *
   * @param elementName, the name of the element to get number of.
   *
   * unsigned int number of elements.
   */
  virtual unsigned int getNumObjects(const std::string& elementName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Returns the nth object of "objectName" in this Uncertainty.
   *
   * @param elementName, the name of the element to get number of.
   *
   * @param index, unsigned int teh index of teh object to retrieve.
   *
   * pointer to the object.
   */
  virtual SBase* getObject(const std::string& elementName, unsigned int index);

  /** @endcond */




  #endif /* !SWIG */


protected:


  /** @cond doxygenLibsbmlInternal */

  /**
   * Adds the expected attributes for this element
   */
  virtual void addExpectedAttributes(ExpectedAttributes& attributes);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Reads the expected attributes into the member data variables
   */
  virtual void readAttributes(const XMLAttributes& attributes,
                              const ExpectedAttributes& expectedAttributes);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Reads other XML such as math/notes etc.
   */
  virtual bool readOtherXML(XMLInputStream& stream);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Writes the attributes to the stream
   */
  virtual void writeAttributes(XMLOutputStream& stream) const;

  /** @endcond */


};



LIBSBML_CPP_NAMESPACE_END




#endif /* __cplusplus */




#ifndef SWIG




LIBSBML_CPP_NAMESPACE_BEGIN




BEGIN_C_DECLS


/**
 * Creates a new Uncertainty_t using the given SBML Level, Version and
 * &ldquo;distrib&rdquo; package version.
 *
 * @param level an unsigned int, the SBML Level to assign to this
 * Uncertainty_t.
 *
 * @param version an unsigned int, the SBML Version to assign to this
 * Uncertainty_t.
 *
 * @param pkgVersion an unsigned int, the SBML Distrib Version to assign to
 * this Uncertainty_t.
 *
 * @throws SBMLConstructorException
 * Thrown if the given @p level and @p version combination, or this kind of
 * SBML object, are either invalid or mismatched with respect to the parent
 * SBMLDocument object.
 * @copydetails doc_note_setting_lv
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
Uncertainty_t *
Uncertainty_create(unsigned int level = DistribExtension::getDefaultLevel(),
                   unsigned int version =
                     DistribExtension::getDefaultVersion(),
                   unsigned int pkgVersion =
                     DistribExtension::getDefaultPackageVersion());


/**
 * Creates and returns a deep copy of this Uncertainty_t object.
 *
 * @param u the Uncertainty_t structure.
 *
 * @return a (deep) copy of this Uncertainty_t object.
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
Uncertainty_t*
Uncertainty_clone(const Uncertainty_t* u);


/**
 * Frees this Uncertainty_t object.
 *
 * @param u the Uncertainty_t structure.
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
void
Uncertainty_free(Uncertainty_t* u);


/**
 * Returns the value of the "id" attribute of this Uncertainty_t.
 *
 * @param u the Uncertainty_t structure whose id is sought.
 *
 * @return the value of the "id" attribute of this Uncertainty_t as a pointer
 * to a string.
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
const char *
Uncertainty_getId(const Uncertainty_t * u);


/**
 * Returns the value of the "name" attribute of this Uncertainty_t.
 *
 * @param u the Uncertainty_t structure whose name is sought.
 *
 * @return the value of the "name" attribute of this Uncertainty_t as a pointer
 * to a string.
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
const char *
Uncertainty_getName(const Uncertainty_t * u);


/**
 * Predicate returning @c 1 if this Uncertainty_t's "id" attribute is set.
 *
 * @param u the Uncertainty_t structure.
 *
 * @return @c 1 if this Uncertainty_t's "id" attribute has been set, otherwise
 * @c 0 is returned.
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
int
Uncertainty_isSetId(const Uncertainty_t * u);


/**
 * Predicate returning @c 1 if this Uncertainty_t's "name" attribute is set.
 *
 * @param u the Uncertainty_t structure.
 *
 * @return @c 1 if this Uncertainty_t's "name" attribute has been set,
 * otherwise @c 0 is returned.
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
int
Uncertainty_isSetName(const Uncertainty_t * u);


/**
 * Sets the value of the "id" attribute of this Uncertainty_t.
 *
 * @param u the Uncertainty_t structure.
 *
 * @param id const char * value of the "id" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
int
Uncertainty_setId(Uncertainty_t * u, const char * id);


/**
 * Sets the value of the "name" attribute of this Uncertainty_t.
 *
 * @param u the Uncertainty_t structure.
 *
 * @param name const char * value of the "name" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
int
Uncertainty_setName(Uncertainty_t * u, const char * name);


/**
 * Unsets the value of the "id" attribute of this Uncertainty_t.
 *
 * @param u the Uncertainty_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
int
Uncertainty_unsetId(Uncertainty_t * u);


/**
 * Unsets the value of the "name" attribute of this Uncertainty_t.
 *
 * @param u the Uncertainty_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
int
Uncertainty_unsetName(Uncertainty_t * u);


/**
 * Returns the value of the "uncertML" element of this Uncertainty_t.
 *
 * @param u the Uncertainty_t structure whose uncertML is sought.
 *
 * @return the value of the "uncertML" element of this Uncertainty_t as a
 * UncertMLNode*.
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
const UncertMLNode_t*
Uncertainty_getUncertML(const Uncertainty_t * u);


/**
 * Predicate returning @c 1 if this Uncertainty_t's "uncertML" element is set.
 *
 * @param u the Uncertainty_t structure.
 *
 * @return @c 1 if this Uncertainty_t's "uncertML" element has been set,
 * otherwise @c 0 is returned.
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
int
Uncertainty_isSetUncertML(const Uncertainty_t * u);


/**
 * Sets the value of the "uncertML" element of this Uncertainty_t.
 *
 * @param u the Uncertainty_t structure.
 *
 * @param uncertML UncertMLNode_t* value of the "uncertML" element to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
int
Uncertainty_setUncertML(Uncertainty_t * u, const UncertMLNode_t* uncertML);


/**
 * Unsets the value of the "uncertML" element of this Uncertainty_t.
 *
 * @param u the Uncertainty_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
int
Uncertainty_unsetUncertML(Uncertainty_t * u);


/**
 * Predicate returning @c 1 if all the required attributes for this
 * Uncertainty_t object have been set.
 *
 * @param u the Uncertainty_t structure.
 *
 * @return @c 1 to indicate that all the required attributes of this
 * Uncertainty_t have been set, otherwise @c 0 is returned.
 *
 *
 * @note The required attributes for the Uncertainty_t object are:
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
int
Uncertainty_hasRequiredAttributes(const Uncertainty_t * u);


/**
 * Predicate returning @c 1 if all the required elements for this Uncertainty_t
 * object have been set.
 *
 * @param u the Uncertainty_t structure.
 *
 * @return @c 1 to indicate that all the required elements of this
 * Uncertainty_t have been set, otherwise @c 0 is returned.
 *
 *
 * @note The required elements for the Uncertainty_t object are:
 * @li "uncertML"
 *
 * @memberof Uncertainty_t
 */
LIBSBML_EXTERN
int
Uncertainty_hasRequiredElements(const Uncertainty_t * u);




END_C_DECLS




LIBSBML_CPP_NAMESPACE_END




#endif /* !SWIG */




#endif /* !Uncertainty_H__ */


