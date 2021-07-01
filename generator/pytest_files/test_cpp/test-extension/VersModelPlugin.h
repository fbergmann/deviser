/**
 * @file VersModelPlugin.h
 * @brief Definition of the VersModelPlugin class.
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
 * @class VersModelPlugin
 * @sbmlbrief{vers} Extension of Model.
 */


#ifndef VersModelPlugin_H__
#define VersModelPlugin_H__


#include <sbml/common/extern.h>


#ifdef __cplusplus


#include <sbml/extension/SBasePlugin.h>
#include <sbml/packages/vers/sbml/ClassOne.h>


LIBSBML_CPP_NAMESPACE_BEGIN


class LIBSBML_EXTERN VersModelPlugin : public SBasePlugin
{
protected:

  /** @cond doxygenLibsbmlInternal */

  unsigned int mVersion1;
  bool mIsSetVersion1;
  unsigned int mVersion2;
  bool mIsSetVersion2;
  ClassOne* mClassOne;

  /** @endcond */

public:

  /**
   * Creates a new VersModelPlugin using the given URI, prefix and package
   * namespace.
   *
   * @param uri a string, representing the URI of the SBML Level&nbsp;3 package
   * implemented by this libSBML package extension.
   *
   * @param prefix a string, the XML namespace prefix being used for this
   * package.
   *
   * @param versns a pointer to the namesspaces object (VersPkgNamespaces) for
   * this package.
   *
   * @copydetails doc_what_are_xmlnamespaces
   *
   * @copydetails doc_what_are_sbmlnamespaces
   */
  VersModelPlugin(const std::string& uri,
                  const std::string& prefix,
                  VersPkgNamespaces* versns);


  /**
   * Copy constructor for VersModelPlugin.
   *
   * @param orig the VersModelPlugin instance to copy.
   */
  VersModelPlugin(const VersModelPlugin& orig);


  /**
   * Assignment operator for VersModelPlugin.
   *
   * @param rhs the VersModelPlugin object whose values are to be used as the
   * basis of the assignment.
   */
  VersModelPlugin& operator=(const VersModelPlugin& rhs);


  /**
   * Creates and returns a deep copy of this VersModelPlugin object.
   *
   * @return a (deep) copy of this VersModelPlugin object.
   */
  virtual VersModelPlugin* clone() const;


  /**
   * Destructor for VersModelPlugin.
   */
  virtual ~VersModelPlugin();


  /**
   * Returns the value of the "version1" attribute of this VersModelPlugin.
   *
   * @return the value of the "version1" attribute of this VersModelPlugin as a
   * unsigned integer.
   */
  unsigned int getVersion1() const;


  /**
   * Returns the value of the "version2" attribute of this VersModelPlugin.
   *
   * @return the value of the "version2" attribute of this VersModelPlugin as a
   * unsigned integer.
   */
  unsigned int getVersion2() const;


  /**
   * Predicate returning @c true if this VersModelPlugin's "version1" attribute
   * is set.
   *
   * @return @c true if this VersModelPlugin's "version1" attribute has been
   * set, otherwise @c false is returned.
   */
  bool isSetVersion1() const;


  /**
   * Predicate returning @c true if this VersModelPlugin's "version2" attribute
   * is set.
   *
   * @return @c true if this VersModelPlugin's "version2" attribute has been
   * set, otherwise @c false is returned.
   */
  bool isSetVersion2() const;


  /**
   * Sets the value of the "version1" attribute of this VersModelPlugin.
   *
   * @param version1 unsigned int value of the "version1" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setVersion1(unsigned int version1);


  /**
   * Sets the value of the "version2" attribute of this VersModelPlugin.
   *
   * @param version2 unsigned int value of the "version2" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setVersion2(unsigned int version2);


  /**
   * Unsets the value of the "version1" attribute of this VersModelPlugin.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetVersion1();


  /**
   * Unsets the value of the "version2" attribute of this VersModelPlugin.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetVersion2();


  /**
   * Returns the value of the "classOne" element of this VersModelPlugin.
   *
   * @return the value of the "classOne" element of this VersModelPlugin as a
   * ClassOne*.
   */
  const ClassOne* getClassOne() const;


  /**
   * Returns the value of the "classOne" element of this VersModelPlugin.
   *
   * @return the value of the "classOne" element of this VersModelPlugin as a
   * ClassOne*.
   */
  ClassOne* getClassOne();


  /**
   * Predicate returning @c true if this VersModelPlugin's "classOne" element
   * is set.
   *
   * @return @c true if this VersModelPlugin's "classOne" element has been set,
   * otherwise @c false is returned.
   */
  bool isSetClassOne() const;


  /**
   * Sets the value of the "classOne" element of this VersModelPlugin.
   *
   * @param classOne ClassOne* value of the "classOne" element to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setClassOne(const ClassOne* classOne);


  /**
   * Creates a new ClassOne object, adds it to this VersModelPlugin object and
   * returns the ClassOne object created.
   *
   * @return a new ClassOne object instance.
   */
  ClassOne* createClassOne();


  /**
   * Unsets the value of the "classOne" element of this VersModelPlugin.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetClassOne();


  /**
   * Predicate returning @c true if all the required attributes for this
   * VersModelPlugin object have been set.
   *
   * @return @c true to indicate that all the required attributes of this
   * VersModelPlugin have been set, otherwise @c false is returned.
   */
  virtual bool hasRequiredAttributes() const;



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
   * Connects to parent element
   */
  virtual void connectToParent(SBase* base);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Enables/disables the given package with this element
   */
  virtual void enablePackageInternal(const std::string& pkgURI,
                                     const std::string& pkgPrefix,
                                     bool flag);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Updates the namespaces when setLevelVersion is used
   */
  virtual void updateSBMLNamespace(const std::string& package,
                                   unsigned int level,
                                   unsigned int version);

  /** @endcond */




  #ifndef SWIG



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this VersModelPlugin.
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
   * Gets the value of the "attributeName" attribute of this VersModelPlugin.
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
   * Gets the value of the "attributeName" attribute of this VersModelPlugin.
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
   * Gets the value of the "attributeName" attribute of this VersModelPlugin.
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
   * Gets the value of the "attributeName" attribute of this VersModelPlugin.
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
   * Predicate returning @c true if this VersModelPlugin's attribute
   * "attributeName" is set.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @return @c true if this VersModelPlugin's attribute "attributeName" has
   * been set, otherwise @c false is returned.
   */
  virtual bool isSetAttribute(const std::string& attributeName) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this VersModelPlugin.
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
   * Sets the value of the "attributeName" attribute of this VersModelPlugin.
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
   * Sets the value of the "attributeName" attribute of this VersModelPlugin.
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
   * Sets the value of the "attributeName" attribute of this VersModelPlugin.
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
   * Sets the value of the "attributeName" attribute of this VersModelPlugin.
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
   * Unsets the value of the "attributeName" attribute of this VersModelPlugin.
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
   * Creates and returns an new "elementName" object in this VersModelPlugin.
   *
   * @param elementName, the name of the element to create.
   *
   * @return pointer to the element created.
   */
  virtual SBase* createChildObject(const std::string& elementName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Adds a new "elementName" object to this VersModelPlugin.
   *
   * @param elementName, the name of the element to create.
   *
   * @param element, pointer to the element to be added.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int addChildObject(const std::string& elementName,
                             const SBase* element);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Removes and returns the new "elementName" object with the given id in this
   * VersModelPlugin.
   *
   * @param elementName, the name of the element to remove.
   *
   * @param id, the id of the element to remove.
   *
   * @return pointer to the element removed.
   */
  virtual SBase* removeChildObject(const std::string& elementName,
                                   const std::string& id);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Returns the number of "elementName" in this VersModelPlugin.
   *
   * @param elementName, the name of the element to get number of.
   *
   * @return unsigned int number of elements.
   */
  virtual unsigned int getNumObjects(const std::string& elementName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Returns the nth object of "objectName" in this VersModelPlugin.
   *
   * @param elementName, the name of the element to get number of.
   *
   * @param index, unsigned int the index of the object to retrieve.
   *
   * @return pointer to the object.
   */
  virtual SBase* getObject(const std::string& elementName, unsigned int index);

  /** @endcond */




  #endif /* !SWIG */


  /**
   * Returns the first child element that has the given @p id in the model-wide
   * SId namespace, or @c NULL if no such object is found.
   *
   * @param id a string representing the id attribute of the object to
   * retrieve.
   *
   * @return a pointer to the SBase element with the given @p id. If no such
   * object is found, this method returns @c NULL.
   */
  virtual SBase* getElementBySId(const std::string& id);


  /**
   * Returns the first child element that has the given @p metaid, or @c NULL
   * if no such object is found.
   *
   * @param metaid a string representing the metaid attribute of the object to
   * retrieve.
   *
   * @return a pointer to the SBase element with the given @p metaid. If no
   * such object is found this method returns @c NULL.
   */
  virtual SBase* getElementByMetaId(const std::string& metaid);


  /**
   * Returns a List of all child SBase objects, including those nested to an
   * arbitrary depth.
   *
   * @param filter an ElementFilter that may impose restrictions on the objects
   * to be retrieved.
   *
   * @return a List pointer of pointers to all SBase child objects with any
   * restriction imposed.
   */
  virtual List* getAllElements(ElementFilter * filter = NULL);



  /** @cond doxygenLibsbmlInternal */

  /**
   * Append items from model (used in comp flattening)
   *
   * @param model a pointer to a model object.
   *
   */
  int appendFrom(const Model* model);

  /** @endcond */


protected:


  /** @cond doxygenLibsbmlInternal */

  /**
   * Creates a new object from the next XMLToken on the XMLInputStream
   */
  virtual SBase* createObject(XMLInputStream& stream);

  /** @endcond */



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
   * Reads the expected attributes into the member data variables
   */
  void readL3V1V1Attributes(const XMLAttributes& attributes);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Reads the expected attributes into the member data variables
   */
  void readL3V1V2Attributes(const XMLAttributes& attributes);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Writes the attributes to the stream
   */
  virtual void writeAttributes(XMLOutputStream& stream) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Writes the attributes to the stream
   */
  void writeL3V1V1Attributes(XMLOutputStream& stream) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Writes the attributes to the stream
   */
  void writeL3V1V2Attributes(XMLOutputStream& stream) const;

  /** @endcond */


};



LIBSBML_CPP_NAMESPACE_END




#endif /* __cplusplus */




#ifndef SWIG




LIBSBML_CPP_NAMESPACE_BEGIN




BEGIN_C_DECLS


/**
 * Returns the value of the "version1" attribute of this VersModelPlugin_t.
 *
 * @param vmp the VersModelPlugin_t structure whose version1 is sought.
 *
 * @return the value of the "version1" attribute of this VersModelPlugin_t as a
 * unsigned integer.
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
unsigned int
VersModelPlugin_getVersion1(const VersModelPlugin_t * vmp);


/**
 * Returns the value of the "version2" attribute of this VersModelPlugin_t.
 *
 * @param vmp the VersModelPlugin_t structure whose version2 is sought.
 *
 * @return the value of the "version2" attribute of this VersModelPlugin_t as a
 * unsigned integer.
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
unsigned int
VersModelPlugin_getVersion2(const VersModelPlugin_t * vmp);


/**
 * Predicate returning @c 1 (true) if this VersModelPlugin_t's "version1"
 * attribute is set.
 *
 * @param vmp the VersModelPlugin_t structure.
 *
 * @return @c 1 (true) if this VersModelPlugin_t's "version1" attribute has
 * been set, otherwise @c 0 (false) is returned.
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
int
VersModelPlugin_isSetVersion1(const VersModelPlugin_t * vmp);


/**
 * Predicate returning @c 1 (true) if this VersModelPlugin_t's "version2"
 * attribute is set.
 *
 * @param vmp the VersModelPlugin_t structure.
 *
 * @return @c 1 (true) if this VersModelPlugin_t's "version2" attribute has
 * been set, otherwise @c 0 (false) is returned.
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
int
VersModelPlugin_isSetVersion2(const VersModelPlugin_t * vmp);


/**
 * Sets the value of the "version1" attribute of this VersModelPlugin_t.
 *
 * @param vmp the VersModelPlugin_t structure.
 *
 * @param version1 unsigned int value of the "version1" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
int
VersModelPlugin_setVersion1(VersModelPlugin_t * vmp, unsigned int version1);


/**
 * Sets the value of the "version2" attribute of this VersModelPlugin_t.
 *
 * @param vmp the VersModelPlugin_t structure.
 *
 * @param version2 unsigned int value of the "version2" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
int
VersModelPlugin_setVersion2(VersModelPlugin_t * vmp, unsigned int version2);


/**
 * Unsets the value of the "version1" attribute of this VersModelPlugin_t.
 *
 * @param vmp the VersModelPlugin_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
int
VersModelPlugin_unsetVersion1(VersModelPlugin_t * vmp);


/**
 * Unsets the value of the "version2" attribute of this VersModelPlugin_t.
 *
 * @param vmp the VersModelPlugin_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
int
VersModelPlugin_unsetVersion2(VersModelPlugin_t * vmp);


/**
 * Returns the value of the "classOne" element of this VersModelPlugin_t.
 *
 * @param vmp the VersModelPlugin_t structure whose classOne is sought.
 *
 * @return the value of the "classOne" element of this VersModelPlugin_t as a
 * ClassOne*.
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
const ClassOne_t*
VersModelPlugin_getClassOne(const VersModelPlugin_t * vmp);


/**
 * Predicate returning @c 1 (true) if this VersModelPlugin_t's "classOne"
 * element is set.
 *
 * @param vmp the VersModelPlugin_t structure.
 *
 * @return @c 1 (true) if this VersModelPlugin_t's "classOne" element has been
 * set, otherwise @c 0 (false) is returned.
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
int
VersModelPlugin_isSetClassOne(const VersModelPlugin_t * vmp);


/**
 * Sets the value of the "classOne" element of this VersModelPlugin_t.
 *
 * @param vmp the VersModelPlugin_t structure.
 *
 * @param classOne ClassOne_t* value of the "classOne" element to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
int
VersModelPlugin_setClassOne(VersModelPlugin_t * vmp,
                            const ClassOne_t* classOne);


/**
 * Creates a new ClassOne_t object, adds it to this VersModelPlugin_t object
 * and returns the ClassOne_t object created.
 *
 * @param vmp the VersModelPlugin_t structure to which the ClassOne_t should be
 * added.
 *
 * @return a new ClassOne_t object instance.
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
ClassOne_t*
VersModelPlugin_createClassOne(VersModelPlugin_t* vmp);


/**
 * Unsets the value of the "classOne" element of this VersModelPlugin_t.
 *
 * @param vmp the VersModelPlugin_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof VersModelPlugin_t
 */
LIBSBML_EXTERN
int
VersModelPlugin_unsetClassOne(VersModelPlugin_t * vmp);




END_C_DECLS




LIBSBML_CPP_NAMESPACE_END




#endif /* !SWIG */




#endif /* !VersModelPlugin_H__ */


