#ifndef SBMLNamespaces_h
#define SBMLNamespaces_h

#include <xml/XMLNamespaces.h>
#include <sbml/util/List.h>


#include <sbml/common/common.h>
#include <sbml/common/sbmlfwd.h>

#ifdef __cplusplus
namespace LIBSBML_CPP_NAMESPACE 
{
  const unsigned int SBML_DEFAULT_LEVEL   = <SPEC_LEVEL>;
  const unsigned int SBML_DEFAULT_VERSION = <SPEC_VERSION>;
<all_namespaces/>
}
#else
static const unsigned int SBML_DEFAULT_LEVEL   = <SPEC_LEVEL>;
static const unsigned int SBML_DEFAULT_VERSION = <SPEC_VERSION>;
<all_namespaces_static/>
#endif

#ifdef __cplusplus

#include <string>
#include <stdexcept>

LIBSBML_CPP_NAMESPACE_BEGIN

class LIBSBML_EXTERN SBMLNamespaces
{
public:

  /**
   * Creates a new SBMLNamespaces object corresponding to the given SBML_Lang
   * @p level and @p version.
   *
   * @param level the SBML_Lang level
   * @param version the SBML_Lang version
   * 
   */
  SBMLNamespaces(unsigned int level = SBML_DEFAULT_LEVEL, 
                 unsigned int version = SBML_DEFAULT_VERSION);


  /**
   * Destroys this SBMLNamespaces object.
   */
  virtual ~SBMLNamespaces();

  
  /**
   * Copy constructor; creates a copy of a SBMLNamespaces.
   * 
   * @param orig the SBMLNamespaces instance to copy.
   */
  SBMLNamespaces(const SBMLNamespaces& orig);


  /**
   * Assignment operator for SBMLNamespaces.
   */
  SBMLNamespaces& operator=(const SBMLNamespaces& rhs);


  /**
   * Creates and returns a deep copy of this SBMLNamespaces object.
   *
   * @return the (deep) copy of this SBMLNamespaces object.
   */
  virtual SBMLNamespaces* clone () const;


  /**
   * Returns a string representing the SBML_Lang XML namespace for the 
   * given @p level and @p version of SBML_Lang.
   *
   * @param level the SBML_Lang level
   * @param version the SBML_Lang version
   *
   * @return a string representing the SBML_Lang namespace that reflects the
   * SBML_Lang Level and Version specified.
   */
  static std::string getSBMLNamespaceURI(unsigned int level,
                                         unsigned int version);

  
  /**
   * Returns a list of all supported SBMLNamespaces in this version of 
   * libsbml. 
   * 
   * @return a list with supported SBML_Lang namespaces. 
   */
  static const List* getSupportedNamespaces();


  /**
   * Frees the list of supported namespaces as generated by
   * getSupportedNamespaces().
   *
   * @param supportedNS the list to be freed.
   *
   * @copydetails doc_note_static_methods
   */
  static void freeSBMLNamespaces(List * supportedNS);


  /**
   * Returns a string representing the SBML_Lang XML namespace of this
   * object.
   *
   * @return a string representing the SBML_Lang namespace that reflects the
   * SBML_Lang Level and Version of this object.
   */
  virtual std::string getURI() const;


  /**
   * Get the SBML_Lang Level of this SBMLNamespaces object.
   *
   * @return the SBML_Lang Level of this SBMLNamespaces object.
   */
  unsigned int getLevel();


  /**
   * Get the SBML_Lang Level of this SBMLNamespaces object.
   *
   * @return the SBML_Lang Level of this SBMLNamespaces object.
   */
  unsigned int getLevel() const;


  /**
   * Get the SBML_Lang Version of this SBMLNamespaces object.
   *
   * @return the SBML_Lang Version of this SBMLNamespaces object.
   */
  unsigned int getVersion();


  /**
   * Get the SBML_Lang Version of this SBMLNamespaces object.
   *
   * @return the SBML_Lang Version of this SBMLNamespaces object.
   */
  unsigned int getVersion() const;


  /**
   * Get the XML namespaces list for this SBMLNamespaces object.
   *
   * @return the XML namespaces of this SBMLNamespaces object.
   */
  XMLNamespaces * getNamespaces();


  /**
   * Get the XML namespaces list for this SBMLNamespaces object.
   * 
   * @return the XML namespaces of this SBMLNamespaces object.
   */
  const XMLNamespaces * getNamespaces() const;


  /**
   * Add the given XML namespaces list to the set of namespaces within this
   * SBMLNamespaces object.
   *
   * @param xmlns the XML namespaces to be added.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
   */
  int addNamespaces(const XMLNamespaces * xmlns);


  /**
   * Add an XML namespace (a pair of URI and prefix) to the set of namespaces
   * within this SBMLNamespaces object.
   * 
   * @param uri    the XML namespace to be added.
   * @param prefix the prefix of the namespace to be added.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
   */
  int addNamespace(const std::string& uri, const std::string &prefix);


  /**
   * Removes an XML namespace from the set of namespaces within this 
   * SBMLNamespaces object.
   * 
   * @param uri    the XML namespace to be added.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INDEX_EXCEEDS_SIZE, OperationReturnValues_t}
   */
  int removeNamespace(const std::string& uri);


  /**
   * Predicate returning @c true if the given URL is one of SBML_Lang XML
   * namespaces.
   *
   * @param uri the URI of namespace
   *
   * @return @c true if the "uri" is one of SBML_Lang namespaces, @c false otherwise.
   */
  static bool isSBMLNamespace(const std::string& uri);


  /**
   * Predicate returning @c true if the given set of namespaces represent a
   * valid set
   *
   * @return @c true if the set of namespaces is valid, @c false otherwise.
   */
  bool isValidCombination();


  /** @cond doxygenLibsbmlInternal */
  void setLevel(unsigned int level);


  void setVersion(unsigned int version);


  void setNamespaces(XMLNamespaces * xmlns);
  /** @endcond */

protected:  
  /** @cond doxygenLibsbmlInternal */
  void initSBMLNamespace();

  unsigned int    mLevel;
  unsigned int    mVersion;
  XMLNamespaces * mNamespaces;

  /** @endcond */
};

LIBSBML_CPP_NAMESPACE_END

#endif  /* __cplusplus */


#ifndef SWIG

LIBSBML_CPP_NAMESPACE_BEGIN
BEGIN_C_DECLS

/**
 * Creates a new SBMLNamespaces_t structure corresponding to the given SBML_Lang
 * @p level and @p version.
 *
 * SBMLNamespaces_t structures are used in libSBML to communicate SBML_Lang Level
 * and Version data between constructors and other methods.  The
 * SBMLNamespaces_t structure class tracks 3-tuples (triples) consisting of
 * SBML_Lang Level, Version, and the corresponding SBML_Lang XML namespace.  Most
 * constructors for SBML_Lang structures in libSBML take a SBMLNamespaces_t structure
 * as an argument, thereby allowing the constructor to produce the proper
 * combination of attributes and other internal data structures for the
 * given SBML_Lang Level and Version.
 *
 * The plural name "SBMLNamespaces" is not a mistake, because in SBML_Lang
 * Level&nbsp;3, structures may have extensions added by Level&nbsp;3
 * packages used by a given model; however, until the introduction of
 * SBML_Lang Level&nbsp;3, the SBMLNamespaces_t structure only records one SBML_Lang
 * Level/Version/namespace combination at a time.
 *
 * @param level the SBML_Lang level
 * @param version the SBML_Lang version
 *
 * @return SBMLNamespaces_t structure created
 *
 * @ifnot hasDefaultArgs @htmlinclude warn-default-args-in-docs.html @endif@~
 *
 * @memberof SBMLNamespaces_t
 */
LIBSBML_EXTERN
SBMLNamespaces_t *
SBMLNamespaces_create(unsigned int level, unsigned int version);


/**
 * Destroys this SBMLNamespaces_t structure.
 *
 * @param ns SBMLNamespaces_t structure to be freed.
 *
 * @memberof SBMLNamespaces_t
 */
LIBSBML_EXTERN
void
SBMLNamespaces_free (SBMLNamespaces_t *ns);


/**
 * Get the SBML_Lang Level of this SBMLNamespaces_t structure.
 *
 * @param sbmlns the SBMLNamespaces_t structure to query
 *
 * @return the SBML_Lang Level of this SBMLNamespaces_t structure.
 *
 * @memberof SBMLNamespaces_t
 */
LIBSBML_EXTERN
unsigned int
SBMLNamespaces_getLevel(SBMLNamespaces_t *sbmlns);


/**
 * Get the SBML_Lang Version of this SBMLNamespaces_t structure.
 *
 * @param sbmlns the SBMLNamespaces_t structure to query
 *
 * @return the SBML_Lang Version of this SBMLNamespaces_t structure.
 *
 * @memberof SBMLNamespaces_t
 */
LIBSBML_EXTERN
unsigned int
SBMLNamespaces_getVersion(SBMLNamespaces_t *sbmlns);


/**
 * Get the SBML_Lang Version of this SBMLNamespaces_t structure.
 *
 * @param sbmlns the SBMLNamespaces_t structure to query
 *
 * @return the XMLNamespaces_t structure of this SBMLNamespaces_t structure.
 *
 * @memberof SBMLNamespaces_t
 */
LIBSBML_EXTERN
XMLNamespaces_t *
SBMLNamespaces_getNamespaces(SBMLNamespaces_t *sbmlns);


/**
 * Returns a string representing the SBML_Lang XML namespace for the 
 * given @p level and @p version of SBML_Lang.
 *
 * @param level the SBML_Lang level
 * @param version the SBML_Lang version
 *
 * @return a string representing the SBML_Lang namespace that reflects the
 * SBML_Lang Level and Version specified.
 *
 * @memberof SBMLNamespaces_t
 */
LIBSBML_EXTERN
char *
SBMLNamespaces_getSBMLNamespaceURI(unsigned int level, unsigned int version);


/**
 * Add the XML namespaces list to the set of namespaces
 * within this SBMLNamespaces_t structure.
 * 
 * @param sbmlns the SBMLNamespaces_t structure to add to
 * @param xmlns the XML namespaces to be added.
 *
 * @memberof SBMLNamespaces_t
 */
LIBSBML_EXTERN
int
SBMLNamespaces_addNamespaces(SBMLNamespaces_t *sbmlns,
                             const XMLNamespaces_t * xmlns);


/**
 * Returns an array of SBML_Lang Namespaces supported by this version of 
 * LibSBML. 
 *
 * @param length an integer holding the length of the array
 * @return an array of SBML_Lang namespaces, or @c NULL if length is @c NULL. The array 
 *         has to be freed by the caller.
 *
 * @memberof SBMLNamespaces_t
 */
LIBSBML_EXTERN
SBMLNamespaces_t **
SBMLNamespaces_getSupportedNamespaces(int *length);

END_C_DECLS
LIBSBML_CPP_NAMESPACE_END

#endif  /* !SWIG */
#endif  /* SBMLNamespaces_h */
