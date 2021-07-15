/**
 * @file Transition.h
 * @brief Definition of the Transition class.
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
 * @class Transition
 * @sbmlbrief{qual} TODO:Definition of the Transition class.
 */


#ifndef Transition_H__
#define Transition_H__


#include <sbml/common/extern.h>
#include <sbml/common/sbmlfwd.h>
#include <sbml/packages/qual/common/qualfwd.h>


#ifdef __cplusplus


#include <string>


#include <sbml/SBase.h>
#include <sbml/packages/qual/extension/QualExtension.h>
#include <sbml/packages/qual/sbml/ListOfInputs.h>
#include <sbml/packages/qual/sbml/ListOfOutputs.h>
#include <sbml/packages/qual/sbml/ListOfFunctionTerms.h>


LIBSBML_CPP_NAMESPACE_BEGIN


class LIBSBML_EXTERN Transition : public SBase
{
protected:

  /** @cond doxygenLibsbmlInternal */

  ListOfInputs mInputs;
  ListOfOutputs mOutputs;
  ListOfFunctionTerms mFunctionTerms;

  /** @endcond */

public:

  /**
   * Creates a new Transition using the given SBML Level, Version and
   * &ldquo;qual&rdquo; package version.
   *
   * @param level an unsigned int, the SBML Level to assign to this Transition.
   *
   * @param version an unsigned int, the SBML Version to assign to this
   * Transition.
   *
   * @param pkgVersion an unsigned int, the SBML Qual Version to assign to this
   * Transition.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  Transition(unsigned int level = QualExtension::getDefaultLevel(),
             unsigned int version = QualExtension::getDefaultVersion(),
             unsigned int pkgVersion =
               QualExtension::getDefaultPackageVersion());


  /**
   * Creates a new Transition using the given QualPkgNamespaces object.
   *
   * @copydetails doc_what_are_sbml_package_namespaces
   *
   * @param qualns the QualPkgNamespaces object.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  Transition(QualPkgNamespaces *qualns);


  /**
   * Copy constructor for Transition.
   *
   * @param orig the Transition instance to copy.
   */
  Transition(const Transition& orig);


  /**
   * Assignment operator for Transition.
   *
   * @param rhs the Transition object whose values are to be used as the basis
   * of the assignment.
   */
  Transition& operator=(const Transition& rhs);


  /**
   * Creates and returns a deep copy of this Transition object.
   *
   * @return a (deep) copy of this Transition object.
   */
  virtual Transition* clone() const;


  /**
   * Destructor for Transition.
   */
  virtual ~Transition();


  /**
   * Returns the value of the "id" attribute of this Transition.
   *
   * @return the value of the "id" attribute of this Transition as a string.
   */
  virtual const std::string& getId() const;


  /**
   * Returns the value of the "name" attribute of this Transition.
   *
   * @return the value of the "name" attribute of this Transition as a string.
   */
  virtual const std::string& getName() const;


  /**
   * Predicate returning @c true if this Transition's "id" attribute is set.
   *
   * @return @c true if this Transition's "id" attribute has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetId() const;


  /**
   * Predicate returning @c true if this Transition's "name" attribute is set.
   *
   * @return @c true if this Transition's "name" attribute has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetName() const;


  /**
   * Sets the value of the "id" attribute of this Transition.
   *
   * @param id std::string& value of the "id" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   *
   * Calling this function with @p id = @c NULL or an empty string is
   * equivalent to calling unsetId().
   */
  virtual int setId(const std::string& id);


  /**
   * Sets the value of the "name" attribute of this Transition.
   *
   * @param name std::string& value of the "name" attribute to be set.
   *
   * @copydetails doc_returns_one_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   *
   * Calling this function with @p name = @c NULL or an empty string is
   * equivalent to calling unsetName().
   */
  virtual int setName(const std::string& name);


  /**
   * Unsets the value of the "id" attribute of this Transition.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetId();


  /**
   * Unsets the value of the "name" attribute of this Transition.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetName();


  /**
   * Returns the ListOfInputs from this Transition.
   *
   * @return the ListOfInputs from this Transition.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addInput(const Input* object)
   * @see createInput()
   * @see getInput(const std::string& sid)
   * @see getInput(unsigned int n)
   * @see getNumInputs()
   * @see removeInput(const std::string& sid)
   * @see removeInput(unsigned int n)
   */
  const ListOfInputs* getListOfInputs() const;


  /**
   * Returns the ListOfInputs from this Transition.
   *
   * @return the ListOfInputs from this Transition.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addInput(const Input* object)
   * @see createInput()
   * @see getInput(const std::string& sid)
   * @see getInput(unsigned int n)
   * @see getNumInputs()
   * @see removeInput(const std::string& sid)
   * @see removeInput(unsigned int n)
   */
  ListOfInputs* getListOfInputs();


  /**
   * Get an Input from the Transition.
   *
   * @param n an unsigned int representing the index of the Input to retrieve.
   *
   * @return the nth Input in the ListOfInputs within this Transition or
   * @c NULL if no such object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addInput(const Input* object)
   * @see createInput()
   * @see getInput(const std::string& sid)
   * @see getNumInputs()
   * @see removeInput(const std::string& sid)
   * @see removeInput(unsigned int n)
   */
  Input* getInput(unsigned int n);


  /**
   * Get an Input from the Transition.
   *
   * @param n an unsigned int representing the index of the Input to retrieve.
   *
   * @return the nth Input in the ListOfInputs within this Transition or
   * @c NULL if no such object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addInput(const Input* object)
   * @see createInput()
   * @see getInput(const std::string& sid)
   * @see getNumInputs()
   * @see removeInput(const std::string& sid)
   * @see removeInput(unsigned int n)
   */
  const Input* getInput(unsigned int n) const;


  /**
   * Get an Input from the Transition based on its identifier.
   *
   * @param sid a string representing the identifier of the Input to retrieve.
   *
   * @return the Input in the ListOfInputs within this Transition with the
   * given @p sid or @c NULL if no such Input exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addInput(const Input* object)
   * @see createInput()
   * @see getInput(unsigned int n)
   * @see getNumInputs()
   * @see removeInput(const std::string& sid)
   * @see removeInput(unsigned int n)
   */
  Input* getInput(const std::string& sid);


  /**
   * Get an Input from the Transition based on its identifier.
   *
   * @param sid a string representing the identifier of the Input to retrieve.
   *
   * @return the Input in the ListOfInputs within this Transition with the
   * given @p sid or @c NULL if no such Input exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addInput(const Input* object)
   * @see createInput()
   * @see getInput(unsigned int n)
   * @see getNumInputs()
   * @see removeInput(const std::string& sid)
   * @see removeInput(unsigned int n)
   */
  const Input* getInput(const std::string& sid) const;


  /**
   * Get an Input from the Transition based on the QualitativeSpecies to which
   * it refers.
   *
   * @param sid a string representing the "qualitativeSpecies" attribute of the
   * Input object to retrieve.
   *
   * @return the first Input in this Transition based on the given
   * qualitativeSpecies attribute or NULL if no such Input exists.
   *
   * @copydetails doc_returned_unowned_pointer
   */
  const Input* getInputByQualitativeSpecies(const std::string& sid) const;


  /**
   * Get an Input from the Transition based on the QualitativeSpecies to which
   * it refers.
   *
   * @param sid a string representing the "qualitativeSpecies" attribute of the
   * Input object to retrieve.
   *
   * @return the first Input in this Transition based on the given
   * qualitativeSpecies attribute or NULL if no such Input exists.
   *
   * @copydetails doc_returned_unowned_pointer
   */
  Input* getInputByQualitativeSpecies(const std::string& sid);


  /**
   * Adds a copy of the given Input to this Transition.
   *
   * @param i the Input object to add.
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
   * @see createInput()
   * @see getInput(const std::string& sid)
   * @see getInput(unsigned int n)
   * @see getNumInputs()
   * @see removeInput(const std::string& sid)
   * @see removeInput(unsigned int n)
   */
  int addInput(const Input* i);


  /**
   * Get the number of Input objects in this Transition.
   *
   * @return the number of Input objects in this Transition.
   *
   * @see addInput(const Input* object)
   * @see createInput()
   * @see getInput(const std::string& sid)
   * @see getInput(unsigned int n)
   * @see removeInput(const std::string& sid)
   * @see removeInput(unsigned int n)
   */
  unsigned int getNumInputs() const;


  /**
   * Creates a new Input object, adds it to this Transition object and returns
   * the Input object created.
   *
   * @return a new Input object instance.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addInput(const Input* object)
   * @see getInput(const std::string& sid)
   * @see getInput(unsigned int n)
   * @see getNumInputs()
   * @see removeInput(const std::string& sid)
   * @see removeInput(unsigned int n)
   */
  Input* createInput();


  /**
   * Removes the nth Input from this Transition and returns a pointer to it.
   *
   * @param n an unsigned int representing the index of the Input to remove.
   *
   * @return a pointer to the nth Input in this Transition.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addInput(const Input* object)
   * @see createInput()
   * @see getInput(const std::string& sid)
   * @see getInput(unsigned int n)
   * @see getNumInputs()
   * @see removeInput(const std::string& sid)
   */
  Input* removeInput(unsigned int n);


  /**
   * Removes the Input from this Transition based on its identifier and returns
   * a pointer to it.
   *
   * @param sid a string representing the identifier of the Input to remove.
   *
   * @return the Input in this Transition based on the identifier or NULL if no
   * such Input exists.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addInput(const Input* object)
   * @see createInput()
   * @see getInput(const std::string& sid)
   * @see getInput(unsigned int n)
   * @see getNumInputs()
   * @see removeInput(unsigned int n)
   */
  Input* removeInput(const std::string& sid);


  /**
   * Returns the ListOfOutputs from this Transition.
   *
   * @return the ListOfOutputs from this Transition.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addOutput(const Output* object)
   * @see createOutput()
   * @see getOutput(const std::string& sid)
   * @see getOutput(unsigned int n)
   * @see getNumOutputs()
   * @see removeOutput(const std::string& sid)
   * @see removeOutput(unsigned int n)
   */
  const ListOfOutputs* getListOfOutputs() const;


  /**
   * Returns the ListOfOutputs from this Transition.
   *
   * @return the ListOfOutputs from this Transition.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addOutput(const Output* object)
   * @see createOutput()
   * @see getOutput(const std::string& sid)
   * @see getOutput(unsigned int n)
   * @see getNumOutputs()
   * @see removeOutput(const std::string& sid)
   * @see removeOutput(unsigned int n)
   */
  ListOfOutputs* getListOfOutputs();


  /**
   * Get an Output from the Transition.
   *
   * @param n an unsigned int representing the index of the Output to retrieve.
   *
   * @return the nth Output in the ListOfOutputs within this Transition or
   * @c NULL if no such object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addOutput(const Output* object)
   * @see createOutput()
   * @see getOutput(const std::string& sid)
   * @see getNumOutputs()
   * @see removeOutput(const std::string& sid)
   * @see removeOutput(unsigned int n)
   */
  Output* getOutput(unsigned int n);


  /**
   * Get an Output from the Transition.
   *
   * @param n an unsigned int representing the index of the Output to retrieve.
   *
   * @return the nth Output in the ListOfOutputs within this Transition or
   * @c NULL if no such object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addOutput(const Output* object)
   * @see createOutput()
   * @see getOutput(const std::string& sid)
   * @see getNumOutputs()
   * @see removeOutput(const std::string& sid)
   * @see removeOutput(unsigned int n)
   */
  const Output* getOutput(unsigned int n) const;


  /**
   * Get an Output from the Transition based on its identifier.
   *
   * @param sid a string representing the identifier of the Output to retrieve.
   *
   * @return the Output in the ListOfOutputs within this Transition with the
   * given @p sid or @c NULL if no such Output exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addOutput(const Output* object)
   * @see createOutput()
   * @see getOutput(unsigned int n)
   * @see getNumOutputs()
   * @see removeOutput(const std::string& sid)
   * @see removeOutput(unsigned int n)
   */
  Output* getOutput(const std::string& sid);


  /**
   * Get an Output from the Transition based on its identifier.
   *
   * @param sid a string representing the identifier of the Output to retrieve.
   *
   * @return the Output in the ListOfOutputs within this Transition with the
   * given @p sid or @c NULL if no such Output exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addOutput(const Output* object)
   * @see createOutput()
   * @see getOutput(unsigned int n)
   * @see getNumOutputs()
   * @see removeOutput(const std::string& sid)
   * @see removeOutput(unsigned int n)
   */
  const Output* getOutput(const std::string& sid) const;


  /**
   * Get an Output from the Transition based on the QualitativeSpecies to which
   * it refers.
   *
   * @param sid a string representing the "qualitativeSpecies" attribute of the
   * Output object to retrieve.
   *
   * @return the first Output in this Transition based on the given
   * qualitativeSpecies attribute or NULL if no such Output exists.
   *
   * @copydetails doc_returned_unowned_pointer
   */
  const Output* getOutputByQualitativeSpecies(const std::string& sid) const;


  /**
   * Get an Output from the Transition based on the QualitativeSpecies to which
   * it refers.
   *
   * @param sid a string representing the "qualitativeSpecies" attribute of the
   * Output object to retrieve.
   *
   * @return the first Output in this Transition based on the given
   * qualitativeSpecies attribute or NULL if no such Output exists.
   *
   * @copydetails doc_returned_unowned_pointer
   */
  Output* getOutputByQualitativeSpecies(const std::string& sid);


  /**
   * Adds a copy of the given Output to this Transition.
   *
   * @param o the Output object to add.
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
   * @see createOutput()
   * @see getOutput(const std::string& sid)
   * @see getOutput(unsigned int n)
   * @see getNumOutputs()
   * @see removeOutput(const std::string& sid)
   * @see removeOutput(unsigned int n)
   */
  int addOutput(const Output* o);


  /**
   * Get the number of Output objects in this Transition.
   *
   * @return the number of Output objects in this Transition.
   *
   * @see addOutput(const Output* object)
   * @see createOutput()
   * @see getOutput(const std::string& sid)
   * @see getOutput(unsigned int n)
   * @see removeOutput(const std::string& sid)
   * @see removeOutput(unsigned int n)
   */
  unsigned int getNumOutputs() const;


  /**
   * Creates a new Output object, adds it to this Transition object and returns
   * the Output object created.
   *
   * @return a new Output object instance.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addOutput(const Output* object)
   * @see getOutput(const std::string& sid)
   * @see getOutput(unsigned int n)
   * @see getNumOutputs()
   * @see removeOutput(const std::string& sid)
   * @see removeOutput(unsigned int n)
   */
  Output* createOutput();


  /**
   * Removes the nth Output from this Transition and returns a pointer to it.
   *
   * @param n an unsigned int representing the index of the Output to remove.
   *
   * @return a pointer to the nth Output in this Transition.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addOutput(const Output* object)
   * @see createOutput()
   * @see getOutput(const std::string& sid)
   * @see getOutput(unsigned int n)
   * @see getNumOutputs()
   * @see removeOutput(const std::string& sid)
   */
  Output* removeOutput(unsigned int n);


  /**
   * Removes the Output from this Transition based on its identifier and
   * returns a pointer to it.
   *
   * @param sid a string representing the identifier of the Output to remove.
   *
   * @return the Output in this Transition based on the identifier or NULL if
   * no such Output exists.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addOutput(const Output* object)
   * @see createOutput()
   * @see getOutput(const std::string& sid)
   * @see getOutput(unsigned int n)
   * @see getNumOutputs()
   * @see removeOutput(unsigned int n)
   */
  Output* removeOutput(const std::string& sid);


  /**
   * Returns the ListOfFunctionTerms from this Transition.
   *
   * @return the ListOfFunctionTerms from this Transition.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addFunctionTerm(const FunctionTerm* object)
   * @see createFunctionTerm()
   * @see getFunctionTerm(const std::string& sid)
   * @see getFunctionTerm(unsigned int n)
   * @see getNumFunctionTerms()
   * @see removeFunctionTerm(const std::string& sid)
   * @see removeFunctionTerm(unsigned int n)
   */
  const ListOfFunctionTerms* getListOfFunctionTerms() const;


  /**
   * Returns the ListOfFunctionTerms from this Transition.
   *
   * @return the ListOfFunctionTerms from this Transition.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addFunctionTerm(const FunctionTerm* object)
   * @see createFunctionTerm()
   * @see getFunctionTerm(const std::string& sid)
   * @see getFunctionTerm(unsigned int n)
   * @see getNumFunctionTerms()
   * @see removeFunctionTerm(const std::string& sid)
   * @see removeFunctionTerm(unsigned int n)
   */
  ListOfFunctionTerms* getListOfFunctionTerms();


  /**
   * Get a FunctionTerm from the Transition.
   *
   * @param n an unsigned int representing the index of the FunctionTerm to
   * retrieve.
   *
   * @return the nth FunctionTerm in the ListOfFunctionTerms within this
   * Transition or @c NULL if no such object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addFunctionTerm(const FunctionTerm* object)
   * @see createFunctionTerm()
   * @see getFunctionTerm(const std::string& sid)
   * @see getNumFunctionTerms()
   * @see removeFunctionTerm(const std::string& sid)
   * @see removeFunctionTerm(unsigned int n)
   */
  FunctionTerm* getFunctionTerm(unsigned int n);


  /**
   * Get a FunctionTerm from the Transition.
   *
   * @param n an unsigned int representing the index of the FunctionTerm to
   * retrieve.
   *
   * @return the nth FunctionTerm in the ListOfFunctionTerms within this
   * Transition or @c NULL if no such object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addFunctionTerm(const FunctionTerm* object)
   * @see createFunctionTerm()
   * @see getFunctionTerm(const std::string& sid)
   * @see getNumFunctionTerms()
   * @see removeFunctionTerm(const std::string& sid)
   * @see removeFunctionTerm(unsigned int n)
   */
  const FunctionTerm* getFunctionTerm(unsigned int n) const;


  /**
   * Adds a copy of the given FunctionTerm to this Transition.
   *
   * @param ft the FunctionTerm object to add.
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
   * @see createFunctionTerm()
   * @see getFunctionTerm(const std::string& sid)
   * @see getFunctionTerm(unsigned int n)
   * @see getNumFunctionTerms()
   * @see removeFunctionTerm(const std::string& sid)
   * @see removeFunctionTerm(unsigned int n)
   */
  int addFunctionTerm(const FunctionTerm* ft);


  /**
   * Get the number of FunctionTerm objects in this Transition.
   *
   * @return the number of FunctionTerm objects in this Transition.
   *
   * @see addFunctionTerm(const FunctionTerm* object)
   * @see createFunctionTerm()
   * @see getFunctionTerm(const std::string& sid)
   * @see getFunctionTerm(unsigned int n)
   * @see removeFunctionTerm(const std::string& sid)
   * @see removeFunctionTerm(unsigned int n)
   */
  unsigned int getNumFunctionTerms() const;


  /**
   * Creates a new FunctionTerm object, adds it to this Transition object and
   * returns the FunctionTerm object created.
   *
   * @return a new FunctionTerm object instance.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addFunctionTerm(const FunctionTerm* object)
   * @see getFunctionTerm(const std::string& sid)
   * @see getFunctionTerm(unsigned int n)
   * @see getNumFunctionTerms()
   * @see removeFunctionTerm(const std::string& sid)
   * @see removeFunctionTerm(unsigned int n)
   */
  FunctionTerm* createFunctionTerm();


  /**
   * Removes the nth FunctionTerm from this Transition and returns a pointer to
   * it.
   *
   * @param n an unsigned int representing the index of the FunctionTerm to
   * remove.
   *
   * @return a pointer to the nth FunctionTerm in this Transition.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addFunctionTerm(const FunctionTerm* object)
   * @see createFunctionTerm()
   * @see getFunctionTerm(const std::string& sid)
   * @see getFunctionTerm(unsigned int n)
   * @see getNumFunctionTerms()
   * @see removeFunctionTerm(const std::string& sid)
   */
  FunctionTerm* removeFunctionTerm(unsigned int n);


  /**
   * Returns the value of the "defaultTerm" element of this Transition.
   *
   * @return the value of the "defaultTerm" element of this Transition as a
   * DefaultTerm*.
   */
  const DefaultTerm* getDefaultTerm() const;


  /**
   * Returns the value of the "defaultTerm" element of this Transition.
   *
   * @return the value of the "defaultTerm" element of this Transition as a
   * DefaultTerm*.
   */
  DefaultTerm* getDefaultTerm();


  /**
   * Predicate returning @c true if this Transition's "defaultTerm" element is
   * set.
   *
   * @return @c true if this Transition's "defaultTerm" element has been set,
   * otherwise @c false is returned.
   */
  bool isSetDefaultTerm() const;


  /**
   * Sets the value of the "defaultTerm" element of this Transition.
   *
   * @param defaultTerm DefaultTerm* value of the "defaultTerm" element to be
   * set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setDefaultTerm(const DefaultTerm* defaultTerm);


  /**
   * Creates a new DefaultTerm object, adds it to this Transition object and
   * returns the DefaultTerm object created.
   *
   * @return a new DefaultTerm object instance.
   */
  DefaultTerm* createDefaultTerm();


  /**
   * Unsets the value of the "defaultTerm" element of this Transition.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetDefaultTerm();


  /**
   * Returns the XML element name of this Transition object.
   *
   * For Transition, the XML element name is always @c "transition".
   *
   * @return the name of this element, i.e. @c "transition".
   */
  virtual const std::string& getElementName() const;


  /**
   * Returns the libSBML type code for this Transition object.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SBML type code for this object:
   * @sbmlconstant{SBML_QUAL_TRANSITION, SBMLQualTypeCode_t}.
   *
   * @copydetails doc_warning_typecodes_not_unique
   *
   * @see getElementName()
   * @see getPackageName()
   */
  virtual int getTypeCode() const;


  /**
   * Predicate returning @c true if all the required attributes for this
   * Transition object have been set.
   *
   * @return @c true to indicate that all the required attributes of this
   * Transition have been set, otherwise @c false is returned.
   */
  virtual bool hasRequiredAttributes() const;


  /**
   * Predicate returning @c true if all the required elements for this
   * Transition object have been set.
   *
   * @return @c true to indicate that all the required elements of this
   * Transition have been set, otherwise @c false is returned.
   *
   *
   * @note The required elements for the Transition object are:
   * @li "functionTerm"
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
   * Gets the value of the "attributeName" attribute of this Transition.
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
   * Gets the value of the "attributeName" attribute of this Transition.
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
   * Gets the value of the "attributeName" attribute of this Transition.
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
   * Gets the value of the "attributeName" attribute of this Transition.
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
   * Gets the value of the "attributeName" attribute of this Transition.
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
   * Predicate returning @c true if this Transition's attribute "attributeName"
   * is set.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @return @c true if this Transition's attribute "attributeName" has been
   * set, otherwise @c false is returned.
   */
  virtual bool isSetAttribute(const std::string& attributeName) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this Transition.
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
   * Sets the value of the "attributeName" attribute of this Transition.
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
   * Sets the value of the "attributeName" attribute of this Transition.
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
   * Sets the value of the "attributeName" attribute of this Transition.
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
   * Sets the value of the "attributeName" attribute of this Transition.
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
   * Unsets the value of the "attributeName" attribute of this Transition.
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
   * Creates and returns an new "elementName" object in this Transition.
   *
   * @param elementName, the name of the element to create.
   *
   * @return pointer to the element created.
   */
  virtual SBase* createChildObject(const std::string& elementName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Adds a new "elementName" object to this Transition.
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
   * Transition.
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
   * Returns the number of "elementName" in this Transition.
   *
   * @param elementName, the name of the element to get number of.
   *
   * @return unsigned int number of elements.
   */
  virtual unsigned int getNumObjects(const std::string& elementName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Returns the nth object of "objectName" in this Transition.
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
 * Creates a new Transition_t using the given SBML Level, Version and
 * &ldquo;qual&rdquo; package version.
 *
 * @param level an unsigned int, the SBML Level to assign to this Transition_t.
 *
 * @param version an unsigned int, the SBML Version to assign to this
 * Transition_t.
 *
 * @param pkgVersion an unsigned int, the SBML Qual Version to assign to this
 * Transition_t.
 *
 * @copydetails doc_note_setting_lv_pkg
 *
 * @copydetails doc_returned_owned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Transition_t *
Transition_create(unsigned int level,
                  unsigned int version,
                  unsigned int pkgVersion);


/**
 * Creates and returns a deep copy of this Transition_t object.
 *
 * @param t the Transition_t structure.
 *
 * @return a (deep) copy of this Transition_t object.
 *
 * @copydetails doc_returned_owned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Transition_t*
Transition_clone(const Transition_t* t);


/**
 * Frees this Transition_t object.
 *
 * @param t the Transition_t structure.
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
void
Transition_free(Transition_t* t);


/**
 * Returns the value of the "id" attribute of this Transition_t.
 *
 * @param t the Transition_t structure whose id is sought.
 *
 * @return the value of the "id" attribute of this Transition_t as a pointer to
 * a string.
 *
 * @copydetails doc_returned_owned_char
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
char *
Transition_getId(const Transition_t * t);


/**
 * Returns the value of the "name" attribute of this Transition_t.
 *
 * @param t the Transition_t structure whose name is sought.
 *
 * @return the value of the "name" attribute of this Transition_t as a pointer
 * to a string.
 *
 * @copydetails doc_returned_owned_char
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
char *
Transition_getName(const Transition_t * t);


/**
 * Predicate returning @c 1 (true) if this Transition_t's "id" attribute is
 * set.
 *
 * @param t the Transition_t structure.
 *
 * @return @c 1 (true) if this Transition_t's "id" attribute has been set,
 * otherwise @c 0 (false) is returned.
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_isSetId(const Transition_t * t);


/**
 * Predicate returning @c 1 (true) if this Transition_t's "name" attribute is
 * set.
 *
 * @param t the Transition_t structure.
 *
 * @return @c 1 (true) if this Transition_t's "name" attribute has been set,
 * otherwise @c 0 (false) is returned.
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_isSetName(const Transition_t * t);


/**
 * Sets the value of the "id" attribute of this Transition_t.
 *
 * @param t the Transition_t structure.
 *
 * @param id const char * value of the "id" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * Calling this function with @p id = @c NULL or an empty string is equivalent
 * to calling Transition_unsetId().
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_setId(Transition_t * t, const char * id);


/**
 * Sets the value of the "name" attribute of this Transition_t.
 *
 * @param t the Transition_t structure.
 *
 * @param name const char * value of the "name" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * Calling this function with @p name = @c NULL or an empty string is
 * equivalent to calling Transition_unsetName().
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_setName(Transition_t * t, const char * name);


/**
 * Unsets the value of the "id" attribute of this Transition_t.
 *
 * @param t the Transition_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_unsetId(Transition_t * t);


/**
 * Unsets the value of the "name" attribute of this Transition_t.
 *
 * @param t the Transition_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_unsetName(Transition_t * t);


/**
 * Returns a ListOf_t * containing Input_t objects from this Transition_t.
 *
 * @param t the Transition_t structure whose ListOfInputs is sought.
 *
 * @return the ListOfInputs from this Transition_t as a ListOf_t *.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @see Transition_addInput()
 * @see Transition_createInput()
 * @see Transition_getInputById()
 * @see Transition_getInput()
 * @see Transition_getNumInputs()
 * @see Transition_removeInputById()
 * @see Transition_removeInput()
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
ListOf_t*
Transition_getListOfInputs(Transition_t* t);


/**
 * Get an Input_t from the Transition_t.
 *
 * @param t the Transition_t structure to search.
 *
 * @param n an unsigned int representing the index of the Input_t to retrieve.
 *
 * @return the nth Input_t in the ListOfInputs within this Transition or
 * @c NULL if no such object exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Input_t*
Transition_getInput(Transition_t* t, unsigned int n);


/**
 * Get an Input_t from the Transition_t based on its identifier.
 *
 * @param t the Transition_t structure to search.
 *
 * @param sid a string representing the identifier of the Input_t to retrieve.
 *
 * @return the Input_t in the ListOfInputs within this Transition with the
 * given @p sid or @c NULL if no such Input_t exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Input_t*
Transition_getInputById(Transition_t* t, const char *sid);


/**
 * Get an Input_t from the Transition_t based on the QualitativeSpecies to
 * which it refers.
 *
 * @param t the Transition_t structure to search.
 *
 * @param sid a string representing the "qualitativeSpecies" attribute of the
 * Input_t object to retrieve.
 *
 * @return the first Input_t in this Transition_t based on the given
 * qualitativeSpecies attribute or NULL if no such Input_t exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Input_t*
Transition_getInputByQualitativeSpecies(Transition_t* t, const char *sid);


/**
 * Adds a copy of the given Input_t to this Transition_t.
 *
 * @param t the Transition_t structure to which the Input_t should be added.
 *
 * @param i the Input_t object to add.
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
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_addInput(Transition_t* t, const Input_t* i);


/**
 * Get the number of Input_t objects in this Transition_t.
 *
 * @param t the Transition_t structure to query.
 *
 * @return the number of Input_t objects in this Transition_t.
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
unsigned int
Transition_getNumInputs(Transition_t* t);


/**
 * Creates a new Input_t object, adds it to this Transition_t object and
 * returns the Input_t object created.
 *
 * @param t the Transition_t structure to which the Input_t should be added.
 *
 * @return a new Input_t object instance.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Input_t*
Transition_createInput(Transition_t* t);


/**
 * Removes the nth Input_t from this Transition_t and returns a pointer to it.
 *
 * @param t the Transition_t structure to search.
 *
 * @param n an unsigned int representing the index of the Input_t to remove.
 *
 * @return a pointer to the nth Input_t in this Transition_t.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Input_t*
Transition_removeInput(Transition_t* t, unsigned int n);


/**
 * Removes the Input_t from this Transition_t based on its identifier and
 * returns a pointer to it.
 *
 * @param t the Transition_t structure to search.
 *
 * @param sid a string representing the identifier of the Input_t to remove.
 *
 * @return the Input_t in this Transition_t based on the identifier or NULL if
 * no such Input_t exists.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Input_t*
Transition_removeInputById(Transition_t* t, const char* sid);


/**
 * Returns a ListOf_t * containing Output_t objects from this Transition_t.
 *
 * @param t the Transition_t structure whose ListOfOutputs is sought.
 *
 * @return the ListOfOutputs from this Transition_t as a ListOf_t *.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @see Transition_addOutput()
 * @see Transition_createOutput()
 * @see Transition_getOutputById()
 * @see Transition_getOutput()
 * @see Transition_getNumOutputs()
 * @see Transition_removeOutputById()
 * @see Transition_removeOutput()
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
ListOf_t*
Transition_getListOfOutputs(Transition_t* t);


/**
 * Get an Output_t from the Transition_t.
 *
 * @param t the Transition_t structure to search.
 *
 * @param n an unsigned int representing the index of the Output_t to retrieve.
 *
 * @return the nth Output_t in the ListOfOutputs within this Transition or
 * @c NULL if no such object exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Output_t*
Transition_getOutput(Transition_t* t, unsigned int n);


/**
 * Get an Output_t from the Transition_t based on its identifier.
 *
 * @param t the Transition_t structure to search.
 *
 * @param sid a string representing the identifier of the Output_t to retrieve.
 *
 * @return the Output_t in the ListOfOutputs within this Transition with the
 * given @p sid or @c NULL if no such Output_t exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Output_t*
Transition_getOutputById(Transition_t* t, const char *sid);


/**
 * Get an Output_t from the Transition_t based on the QualitativeSpecies to
 * which it refers.
 *
 * @param t the Transition_t structure to search.
 *
 * @param sid a string representing the "qualitativeSpecies" attribute of the
 * Output_t object to retrieve.
 *
 * @return the first Output_t in this Transition_t based on the given
 * qualitativeSpecies attribute or NULL if no such Output_t exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Output_t*
Transition_getOutputByQualitativeSpecies(Transition_t* t, const char *sid);


/**
 * Adds a copy of the given Output_t to this Transition_t.
 *
 * @param t the Transition_t structure to which the Output_t should be added.
 *
 * @param o the Output_t object to add.
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
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_addOutput(Transition_t* t, const Output_t* o);


/**
 * Get the number of Output_t objects in this Transition_t.
 *
 * @param t the Transition_t structure to query.
 *
 * @return the number of Output_t objects in this Transition_t.
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
unsigned int
Transition_getNumOutputs(Transition_t* t);


/**
 * Creates a new Output_t object, adds it to this Transition_t object and
 * returns the Output_t object created.
 *
 * @param t the Transition_t structure to which the Output_t should be added.
 *
 * @return a new Output_t object instance.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Output_t*
Transition_createOutput(Transition_t* t);


/**
 * Removes the nth Output_t from this Transition_t and returns a pointer to it.
 *
 * @param t the Transition_t structure to search.
 *
 * @param n an unsigned int representing the index of the Output_t to remove.
 *
 * @return a pointer to the nth Output_t in this Transition_t.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Output_t*
Transition_removeOutput(Transition_t* t, unsigned int n);


/**
 * Removes the Output_t from this Transition_t based on its identifier and
 * returns a pointer to it.
 *
 * @param t the Transition_t structure to search.
 *
 * @param sid a string representing the identifier of the Output_t to remove.
 *
 * @return the Output_t in this Transition_t based on the identifier or NULL if
 * no such Output_t exists.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
Output_t*
Transition_removeOutputById(Transition_t* t, const char* sid);


/**
 * Returns a ListOf_t * containing FunctionTerm_t objects from this
 * Transition_t.
 *
 * @param t the Transition_t structure whose ListOfFunctionTerms is sought.
 *
 * @return the ListOfFunctionTerms from this Transition_t as a ListOf_t *.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @see Transition_addFunctionTerm()
 * @see Transition_createFunctionTerm()
 * @see Transition_getFunctionTermById()
 * @see Transition_getFunctionTerm()
 * @see Transition_getNumFunctionTerms()
 * @see Transition_removeFunctionTermById()
 * @see Transition_removeFunctionTerm()
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
ListOf_t*
Transition_getListOfFunctionTerms(Transition_t* t);


/**
 * Get a FunctionTerm_t from the Transition_t.
 *
 * @param t the Transition_t structure to search.
 *
 * @param n an unsigned int representing the index of the FunctionTerm_t to
 * retrieve.
 *
 * @return the nth FunctionTerm_t in the ListOfFunctionTerms within this
 * Transition or @c NULL if no such object exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
FunctionTerm_t*
Transition_getFunctionTerm(Transition_t* t, unsigned int n);


/**
 * Adds a copy of the given FunctionTerm_t to this Transition_t.
 *
 * @param t the Transition_t structure to which the FunctionTerm_t should be
 * added.
 *
 * @param ft the FunctionTerm_t object to add.
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
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_addFunctionTerm(Transition_t* t, const FunctionTerm_t* ft);


/**
 * Get the number of FunctionTerm_t objects in this Transition_t.
 *
 * @param t the Transition_t structure to query.
 *
 * @return the number of FunctionTerm_t objects in this Transition_t.
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
unsigned int
Transition_getNumFunctionTerms(Transition_t* t);


/**
 * Creates a new FunctionTerm_t object, adds it to this Transition_t object and
 * returns the FunctionTerm_t object created.
 *
 * @param t the Transition_t structure to which the FunctionTerm_t should be
 * added.
 *
 * @return a new FunctionTerm_t object instance.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
FunctionTerm_t*
Transition_createFunctionTerm(Transition_t* t);


/**
 * Removes the nth FunctionTerm_t from this Transition_t and returns a pointer
 * to it.
 *
 * @param t the Transition_t structure to search.
 *
 * @param n an unsigned int representing the index of the FunctionTerm_t to
 * remove.
 *
 * @return a pointer to the nth FunctionTerm_t in this Transition_t.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
FunctionTerm_t*
Transition_removeFunctionTerm(Transition_t* t, unsigned int n);


/**
 * Returns the value of the "defaultTerm" element of this Transition_t.
 *
 * @param t the Transition_t structure whose defaultTerm is sought.
 *
 * @return the value of the "defaultTerm" element of this Transition_t as a
 * DefaultTerm*.
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
const DefaultTerm_t *
Transition_getDefaultTerm(const Transition_t * t);


/**
 * Predicate returning @c 1 (true) if this Transition_t's "defaultTerm" element
 * is set.
 *
 * @param t the Transition_t structure.
 *
 * @return @c 1 (true) if this Transition_t's "defaultTerm" element has been
 * set, otherwise @c 0 (false) is returned.
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_isSetDefaultTerm(const Transition_t * t);


/**
 * Sets the value of the "defaultTerm" element of this Transition_t.
 *
 * @param t the Transition_t structure.
 *
 * @param defaultTerm DefaultTerm_t * value of the "defaultTerm" element to be
 * set.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_setDefaultTerm(Transition_t * t,
                          const DefaultTerm_t * defaultTerm);


/**
 * Creates a new DefaultTerm_t object, adds it to this Transition_t object and
 * returns the DefaultTerm_t object created.
 *
 * @param t the Transition_t structure to which the DefaultTerm_t should be
 * added.
 *
 * @return a new DefaultTerm_t object instance.
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
DefaultTerm_t *
Transition_createDefaultTerm(Transition_t* t);


/**
 * Unsets the value of the "defaultTerm" element of this Transition_t.
 *
 * @param t the Transition_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_unsetDefaultTerm(Transition_t * t);


/**
 * Predicate returning @c 1 (true) if all the required attributes for this
 * Transition_t object have been set.
 *
 * @param t the Transition_t structure.
 *
 * @return @c 1 (true) to indicate that all the required attributes of this
 * Transition_t have been set, otherwise @c 0 (false) is returned.
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_hasRequiredAttributes(const Transition_t * t);


/**
 * Predicate returning @c 1 (true) if all the required elements for this
 * Transition_t object have been set.
 *
 * @param t the Transition_t structure.
 *
 * @return @c 1 (true) to indicate that all the required elements of this
 * Transition_t have been set, otherwise @c 0 (false) is returned.
 *
 *
 * @note The required elements for the Transition_t object are:
 * @li "functionTerm"
 *
 * @memberof Transition_t
 */
LIBSBML_EXTERN
int
Transition_hasRequiredElements(const Transition_t * t);




END_C_DECLS




LIBSBML_CPP_NAMESPACE_END




#endif /* !SWIG */




#endif /* !Transition_H__ */


