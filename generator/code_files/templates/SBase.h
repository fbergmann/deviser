#ifndef SBase_h
#define SBase_h


#include <sbml/common/extern.h>
#include <sbml/common/libsbml-namespace.h>
#include <sbml/common/sbmlfwd.h>
#include <sbml/SBMLTypeCodes.h>
#include <sbml/SBMLNamespaces.h>
#include <sbml/SBMLConstructorException.h>
<verbatim>
#include <sbml/util/List.h>
#include <sbml/SyntaxChecker.h>
#include <sbml/ExpectedAttributes.h>
#include <sbml/xml/XMLNode.h>
</verbatim>

#ifdef __cplusplus


#include <string>
#include <stdexcept>
#include <algorithm>

#include <sbml/SBMLErrorLog.h>

<verbatim>
LIBSBML_CPP_NAMESPACE_BEGIN

class Model;

class List;

class XMLAttributes;
class XMLInputStream;
class XMLNamespaces;
class XMLOutputStream;
class XMLToken;

LIBSBML_CPP_NAMESPACE_END
</verbatim>

LIBSBML_CPP_NAMESPACE_BEGIN

class SBMLVisitor;
class SBMLDocument;


class LIBSBML_EXTERN SBase
{
public:

  /**
   * Destroys this object.
   */
  virtual ~SBase ();


  /**
   * Assignment operator for SBase.
   *
   * @param rhs The object whose values are used as the basis of the
   * assignment.
   */
  SBase& operator=(const SBase& rhs);


  /** @cond doxygenLibsbmlInternal */
  /**
   * Accepts the given SBMLVisitor for this SBase object.
   *
   * @param v the SBMLVisitor instance to be used
   *
   * @return the result of calling <code>v.visit()</code>.
   */
  virtual bool accept (SBMLVisitor& v) const = 0;
  /** @endcond */


  /**
   * Creates and returns a deep copy of this SBase object.
   *
   * @return the (deep) copy of this SBase object.
   */
  virtual SBase* clone () const = 0;


  /**
   * Returns the first child element it can find with a specific "id"
   * attribute value, or @c NULL if no such object is found.
   *
   * @param id string representing the "id" attribute value of the
   * object to find.
   *
   * @return pointer to the first element found with the given identifier.
   */
  virtual SBase* getElementBySId(const std::string& id);


  /**
   * Returns the first child element it can find with a specific "id"
   * attribute value, or @c NULL if no such object is found.
   *
   * @param id string representing the "id" attribute value of the
   * object to find.
   *
   * @return pointer to the first element found with the given identifier.
   */
  virtual const SBase* getElementBySId(const std::string& metaid) const;


  /**
   * Returns the first child element it can find with a specific "metaid"
   * attribute value, or @c NULL if no such object is found.
   *
   * @param metaid string representing the "metaid" attribute value of the
   * object to find.
   *
   * @return pointer to the first element found with the given meta-identifier.
   */
  virtual SBase* getElementByMetaId(const std::string& metaid);

  /**
   * Returns the first child element it can find with a specific "metaid"
   * attribute value, or @c NULL if no such object is found.
   *
   * @param metaid string representing the "metaid" attribute value of the
   * object to find.
   *
   * @return pointer to the first element found with the given meta-identifier.
   */
  virtual const SBase* getElementByMetaId(const std::string& metaid) const;

  /**
   * Returns a List of all child SBase objects, including those nested to
   * an arbitrary depth.
   *
   * @return a pointer to a List of pointers to all children objects.
   */
  virtual List* getAllElements();


  /**
   * Returns the value of the "metaid" attribute of this object.
   *
   * @copydetails doc_what_is_metaid
   *  
   * @return the meta-identifier of this SBML object.
   *
   * @see isSetMetaId()
   * @see setMetaId(const std::string& metaid)
   */
  const std::string& getMetaId () const;


  /**
   * Returns the value of the "metaid" attribute of this object.
   *
   * @copydetails doc_what_is_metaid
   *  
   * @return the meta-identifier of this SBML object, as a string.
   *
   * @see isSetMetaId()
   * @see setMetaId(const std::string& metaid)
   */
  std::string& getMetaId ();

  
  /*
   * @return the id of this SBML object.
   *
   * @note The fact that the value of attribute "id" is defined on the
   * SBMLBase parent class object is a convenience provided by libSBML, and
   * <b>does not strictly follow SBML specifications</b>.  This libSBML
   * implementation of SBMLBase allows client applications to use more
   * generalized code in some situations (for instance, when manipulating
   * objects that are all known to have identifiers), but beware that not
   * all SBML object classes provide an "id" attribute.  LibSBML will allow
   * the identifier to be set, but it will not read nor write "id"
   * attributes for objects that do not possess them according to the SBML
   * specification for the Level and Version in use.
   *
   */
  virtual const std::string& getId() const;

  /**
   * Returns the content of the "notes" subelement of this object as
   * a tree of XMLNode objects.
   *
   * The "notes" element content returned by this method will be in XML
   * form, but libSBML does not provide an object model specifically for
   * the content of notes.  Callers will need to traverse the XML tree
   * structure using the facilities available on XMLNode and related
   * objects.  For an alternative method of accessing the notes, see
   * getNotesString().
   *
   * @return the content of the "notes" subelement of this SBML object as a
   * tree structure composed of XMLNode objects.
   *
   * @see getNotesString()
   * @see isSetNotes()
   * @see setNotes(const XMLNode* notes)
   * @see setNotes(const std::string& notes)
   * @see appendNotes(const XMLNode* notes)
   * @see appendNotes(const std::string& notes)
   * @see unsetNotes()
   * @see SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif)
   */
  XMLNode* getNotes();


  /**
   * Returns the content of the "notes" subelement of this object as
   * a tree of XMLNode objects.
   *
   * The "notes" element content returned by this method will be in XML
   * form, but libSBML does not provide an object model specifically for
   * the content of notes.  Callers will need to traverse the XML tree
   * structure using the facilities available on XMLNode and related
   * objects.  For an alternative method of accessing the notes, see
   * getNotesString().
   *
   * @return the content of the "notes" subelement of this SBML object as a
   * tree structure composed of XMLNode objects.
   *
   * @see getNotesString()
   * @see isSetNotes()
   * @see setNotes(const XMLNode* notes)
   * @see setNotes(const std::string& notes)
   * @see appendNotes(const XMLNode* notes)
   * @see appendNotes(const std::string& notes)
   * @see unsetNotes()
   * @see SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif)
   */
  const XMLNode* getNotes() const;


  /**
   * Returns the content of the "notes" subelement of this object as a
   * string.
   *
   * For an alternative method of accessing the notes, see getNotes(),
   * which returns the content as an XMLNode tree structure.  Depending on
   * an application's needs, one or the other method may be more
   * convenient.
   *
   * @return the content of the "notes" subelement of this SBML object as a
   * string.
   *
   * @see getNotes()
   * @see isSetNotes()
   * @see setNotes(const XMLNode* notes)
   * @see setNotes(const std::string& notes)
   * @see appendNotes(const XMLNode* notes)
   * @see appendNotes(const std::string& notes)
   * @see unsetNotes()
   * @see SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif)
   */
  std::string getNotesString ();


  /**
   * Returns the content of the "notes" subelement of this object as a
   * string.
   *
   * For an alternative method of accessing the notes, see getNotes(),
   * which returns the content as an XMLNode tree structure.  Depending on
   * an application's needs, one or the other method may be more
   * convenient.
   *
   * @return the content of the "notes" subelement of this SBML object as a
   * string.
   *
   * @see getNotes()
   * @see isSetNotes()
   * @see setNotes(const XMLNode* notes)
   * @see setNotes(const std::string& notes)
   * @see appendNotes(const XMLNode* notes)
   * @see appendNotes(const std::string& notes)
   * @see unsetNotes()
   * @see SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif)
   */
  std::string getNotesString () const;


  /**
   * Returns the content of the "annotation" subelement of this object as
   * a tree of XMLNode objects.
   *
   * The annotations returned by this method will be in XML form.  LibSBML
   * provides an object model and related interfaces for certain specific
   * kinds of annotations, namely model history information and RDF
   * content.  See the ModelHistory, CVTerm and RDFAnnotationParser classes
   * for more information about the facilities available.
   *
   * @return the annotation of this SBML object as a tree of XMLNode objects.
   *
   * @see getAnnotationString()
   * @see isSetAnnotation()
   * @see setAnnotation(const XMLNode* annotation)
   * @see setAnnotation(const std::string& annotation)
   * @see appendAnnotation(const XMLNode* annotation)
   * @see appendAnnotation(const std::string& annotation)
   * @see unsetAnnotation()
   */
  XMLNode* getAnnotation ();


  /**
   * Returns the content of the "annotation" subelement of this object as
   * a tree of XMLNode objects.
   *
   * The annotations returned by this method will be in XML form.  LibSBML
   * provides an object model and related interfaces for certain specific
   * kinds of annotations, namely model history information and RDF
   * content.  See the ModelHistory, CVTerm and RDFAnnotationParser classes
   * for more information about the facilities available.
   *
   * @return the annotation of this SBML object as a tree of XMLNode objects.
   *
   * @see getAnnotationString()
   * @see isSetAnnotation()
   * @see setAnnotation(const XMLNode* annotation)
   * @see setAnnotation(const std::string& annotation)
   * @see appendAnnotation(const XMLNode* annotation)
   * @see appendAnnotation(const std::string& annotation)
   * @see unsetAnnotation()
   */
  const XMLNode* getAnnotation () const;


  /**
   * Returns the content of the "annotation" subelement of this object as a
   * character string.
   *
   * The annotations returned by this method will be in string form.  See the
   * method getAnnotation() for a version that returns annotations in XML form.
   *
   * @return the annotation of this SBML object as a character string.
   *
   * @see getAnnotation()
   * @see isSetAnnotation()
   * @see setAnnotation(const XMLNode* annotation)
   * @see setAnnotation(const std::string& annotation)
   * @see appendAnnotation(const XMLNode* annotation)
   * @see appendAnnotation(const std::string& annotation)
   * @see unsetAnnotation()
   */
  std::string getAnnotationString ();


  /**
   * Returns the content of the "annotation" subelement of this object as a
   * character string.
   *
   * The annotations returned by this method will be in string form.  See the
   * method getAnnotation() for a version that returns annotations in XML form.
   *
   * @return the annotation of this SBML object as a character string.
   *
   * @see getAnnotation()
   * @see isSetAnnotation()
   * @see setAnnotation(const XMLNode* annotation)
   * @see setAnnotation(const std::string& annotation)
   * @see appendAnnotation(const XMLNode* annotation)
   * @see appendAnnotation(const std::string& annotation)
   * @see unsetAnnotation()
   */
  std::string getAnnotationString () const;


  /**
   * Returns a list of the XML Namespaces declared on the SBML document
   * owning this object.
   *
   * The SBMLNamespaces object encapsulates SBML Level/Version/namespaces
   * information.  It is used to communicate the SBML Level, Version, and (in
   * Level&nbsp;3) packages used in addition to SBML Level&nbsp;3 Core.
   *
   * @return the XML Namespaces associated with this SBML object, or @c NULL
   * in certain very usual circumstances where a namespace is not set.
   *
   * @see getLevel()
   * @see getVersion()
   */
  virtual const XMLNamespaces* getNamespaces() const ;


  /**
   * Returns a list of the XML Namespaces declared on the SBML document
   * owning this object.
   *
   * The SBMLNamespaces object encapsulates SBML Level/Version/namespaces
   * information.  It is used to communicate the SBML Level, Version, and (in
   * Level&nbsp;3) packages used in addition to SBML Level&nbsp;3 Core.
   *
   * @return the XML Namespaces associated with this SBML object, or @c NULL
   * in certain very usual circumstances where a namespace is not set.
   *
   * @see getLevel()
   * @see getVersion()
   */
  virtual XMLNamespaces* getNamespaces();


  /**
   * Returns the SBMLDocument object containing this object instance.
   *
   * This method allows the caller to obtain the SBMLDocument for the
   * current object.
   * 
   * @return the parent SBMLDocument object of this SBML object.
   *
   * @see getParentSBMLObject()
   * @see getModel()
   */
  const SBMLDocument* getSBMLDocument () const;


  /**
   * Returns the SBMLDocument object containing this object instance.
   *
   * This method allows the caller to obtain the SBMLDocument for the
   * current object.
   * 
   * @return the parent SBMLDocument object of this SBML object.
   *
   * @see getParentSBMLObject()
   * @see getModel()
   */
  SBMLDocument* getSBMLDocument ();


  /**
   * Returns the parent SBML object containing this object.
   *
   * This returns the immediately-containing object.  This method is
   * convenient when holding an object nested inside other objects in an
   * SBML model.  
   * 
   * @return the parent SBML object of this SBML object.
   *
   * @see getSBMLDocument()
   * @see getModel()
   */
  SBase* getParentSBMLObject();


  /**
   * Returns the parent SBML object containing this object.
   *
   * This returns the immediately-containing object.  This method is
   * convenient when holding an object nested inside other objects in an
   * SBML model.  
   * 
   * @return the parent SBML object of this SBML object.
   *
   * @see getSBMLDocument()
   * @see getModel()
   */
  const SBase* getParentSBMLObject() const;


  /**
   * Returns the first ancestor object that has the given SBML type code.
   *
   * @if clike LibSBML attaches an identifying code to every kind of SBML
   * object.  These are known as <em>SBML type codes</em>.  The set of
   * possible type codes is defined in the enumeration #SBMLTypeCode_t.
   * The names of the type codes all begin with the characters @c
   * SBML_. @endif@if java LibSBML attaches an identifying code to every
   * kind of SBML object.  These are known as <em>SBML type codes</em>.  In
   * other languages, the set of type codes is stored in an enumeration; in
   * the Java language interface for libSBML, the type codes are defined as
   * static integer constants in the interface class {@link
   * libsbmlConstants}.  The names of the type codes all begin with the
   * characters @c SBML_. @endif@if python LibSBML attaches an identifying
   * code to every kind of SBML object.  These are known as <em>SBML type
   * codes</em>.  In the Python language interface for libSBML, the type
   * codes are defined as static integer constants in the interface class
   * @link libsbml@endlink.  The names of the type codes all begin with the
   * characters @c SBML_. @endif@if csharp LibSBML attaches an identifying
   * code to every kind of SBML object.  These are known as <em>SBML type
   * codes</em>.  In the C# language interface for libSBML, the type codes
   * are defined as static integer constants in the interface class @link
   * libsbmlcs.libsbml libsbml@endlink.  The names of the type codes all begin with
   * the characters @c SBML_. @endif@~
   *
   * This method searches the tree of objects that are parents of this
   * object, and returns the first one that has the given SBML type code from 
   * the given @p pkgName.
   *
   * @param type the SBML type code of the object sought
   *
   * @return the ancestor SBML object of this SBML object that corresponds
   * to the given @if clike #SBMLTypeCode_t value@else SBML object type
   * code@endif, or @c NULL if no ancestor exists.
   */
  SBase* getAncestorOfType(int type);


  /**
   * Returns the first ancestor object that has the given SBML type code.
   *
   * @if clike LibSBML attaches an identifying code to every kind of SBML
   * object.  These are known as <em>SBML type codes</em>.  The set of
   * possible type codes is defined in the enumeration #SBMLTypeCode_t.
   * The names of the type codes all begin with the characters @c
   * SBML_. @endif@if java LibSBML attaches an identifying code to every
   * kind of SBML object.  These are known as <em>SBML type codes</em>.  In
   * other languages, the set of type codes is stored in an enumeration; in
   * the Java language interface for libSBML, the type codes are defined as
   * static integer constants in the interface class {@link
   * libsbmlConstants}.  The names of the type codes all begin with the
   * characters @c SBML_. @endif@if python LibSBML attaches an identifying
   * code to every kind of SBML object.  These are known as <em>SBML type
   * codes</em>.  In the Python language interface for libSBML, the type
   * codes are defined as static integer constants in the interface class
   * @link libsbml@endlink.  The names of the type codes all begin with the
   * characters @c SBML_. @endif@if csharp LibSBML attaches an identifying
   * code to every kind of SBML object.  These are known as <em>SBML type
   * codes</em>.  In the C# language interface for libSBML, the type codes
   * are defined as static integer constants in the interface class @link
   * libsbmlcs.libsbml libsbml@endlink.  The names of the type codes all begin with
   * the characters @c SBML_. @endif@~
   *
   * This method searches the tree of objects that are parents of this
   * object, and returns the first one that has the given SBML type code from 
   * the given @p pkgName.
   *
   * @param type the SBML type code of the object sought
   *
   * @return the ancestor SBML object of this SBML object that corresponds
   * to the given @if clike #SBMLTypeCode_t value@else SBML object type
   * code@endif, or @c NULL if no ancestor exists.
   *
   */
  const SBase* getAncestorOfType(int type) const;


  /**
   * Returns the line number on which this object first appears in the XML
   * representation of the SBML document, or '0' if the object was created,
   * not read from a file.
   *
   * @return the line number of this SBML object, or '0' if no such value.
   *
   * @note The line number for each construct in an SBML model is set upon
   * reading the model.  The accuracy of the line number depends on the
   * correctness of the XML representation of the model, and on the
   * particular XML parser library being used.  The former limitation
   * relates to the following problem: if the model is actually invalid
   * XML, then the parser may not be able to interpret the data correctly
   * and consequently may not be able to establish the real line number.
   * The latter limitation is simply that different parsers seem to have
   * their own accuracy limitations, and out of all the parsers supported
   * by libSBML, none have been 100% accurate in all situations. (At this
   * time, libSBML supports the use of <a target="_blank"
   * href="http://xmlsoft.org">libxml2</a>, <a target="_blank"
   * href="http://expat.sourceforge.net/">Expat</a> and <a target="_blank"
   * href="http://xerces.apache.org/xerces-c/">Xerces</a>.)
   *
   * @see getColumn()
   */
  unsigned int getLine () const;


  /**
   * Returns the column number on which this object first appears in the XML
   * representation of the SBML document, or '0' if the object was created,
   * not read from a file.
   * 
   * @return the column number of this SBML object, or '0' if no such value.
   * 
   * @note The column number for each construct in an SBML model is set
   * upon reading the model.  The accuracy of the column number depends on
   * the correctness of the XML representation of the model, and on the
   * particular XML parser library being used.  The former limitation
   * relates to the following problem: if the model is actually invalid
   * XML, then the parser may not be able to interpret the data correctly
   * and consequently may not be able to establish the real column number.
   * The latter limitation is simply that different parsers seem to have
   * their own accuracy limitations, and out of all the parsers supported
   * by libSBML, none have been 100% accurate in all situations. (At this
   * time, libSBML supports the use of <a target="_blank"
   * href="http://xmlsoft.org">libxml2</a>, <a target="_blank"
   * href="http://expat.sourceforge.net/">Expat</a> and <a target="_blank"
   * href="http://xerces.apache.org/xerces-c/">Xerces</a>.)
   * 
   * @see getLine()
   */
  unsigned int getColumn () const;


  /**
   * Predicate returning @c true if this object's "metaid" attribute is set.
   *
   * @return @c true if the "metaid" attribute of this SBML object is
   * set, @c false otherwise.
   *
   * @see getMetaId()
   * @see setMetaId(const std::string& metaid)
   */
  bool isSetMetaId () const;


  /**
   * Predicate returning @c true if this object's "id" attribute is set.
   *
   * @return @c true if the "id" attribute of this SBML object is
   * set, @c false otherwise.
   *
   * @see getId()
   */
  virtual bool isSetId() const;

  /**
   * Predicate returning @c true if this
   * object's "notes" subelement exists and has content.
   *
   * The optional SBML element named "notes", present on every major SBML
   * component type, is intended as a place for storing optional
   * information intended to be seen by humans.  An example use of the
   * "notes" element would be to contain formatted user comments about the
   * model element in which the "notes" element is enclosed.  Every object
   * derived directly or indirectly from type SBase can have a separate
   * value for "notes", allowing users considerable freedom when adding
   * comments to their models.
   *
   * The format of "notes" elements must be <a target="_blank"
   * href="http://www.w3.org/TR/xhtml1/">XHTML&nbsp;1.0</a>.  To help
   * verify the formatting of "notes" content, libSBML provides the static
   * utility method SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode xhtml@endif); however,
   * readers are urged to consult the appropriate <a target="_blank"
   * href="http://sbml.org/Documents/Specifications">SBML specification
   * document</a> for the Level and Version of their model for more
   * in-depth explanations.  The SBML Level&nbsp;2 and &nbsp;3
   * specifications have considerable detail about how "notes" element
   * content must be structured.
   *
   * @return @c true if a "notes" subelement exists, @c false otherwise.
   * 
   * @see getNotes()
   * @see getNotesString()
   * @see setNotes(const XMLNode* notes)
   * @see setNotes(const std::string& notes)
   * @see appendNotes(const XMLNode* notes)
   * @see appendNotes(const std::string& notes)
   * @see unsetNotes()
   * @see SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif)
   */
  bool isSetNotes () const;


  /**
   * Predicate returning @c true if this
   * object's "annotation" subelement exists and has content.
   *
   * Whereas the SBase "notes" subelement is a container for content to be
   * shown directly to humans, the "annotation" element is a container for
   * optional software-generated content @em not meant to be shown to
   * humans.  Every object derived from SBase can have its own value for
   * "annotation".  The element's content type is <a target="_blank"
   * href="http://www.w3.org/TR/2004/REC-xml-20040204/#elemdecls">XML type
   * "any"</a>, allowing essentially arbitrary well-formed XML data
   * content.
   *
   * SBML places a few restrictions on the organization of the content of
   * annotations; these are intended to help software tools read and write
   * the data as well as help reduce conflicts between annotations added by
   * different tools.  Please see the SBML specifications for more details.
   *
   * @return @c true if a "annotation" subelement exists, @c false
   * otherwise.
   * 
   * @see getAnnotation()
   * @see getAnnotationString()
   * @see setAnnotation(const XMLNode* annotation)
   * @see setAnnotation(const std::string& annotation)
   * @see appendAnnotation(const XMLNode* annotation)
   * @see appendAnnotation(const std::string& annotation)
   * @see unsetAnnotation()
   */
  bool isSetAnnotation () const;


  /**
   * Sets the value of the meta-identifier attribute of this object.
   *
   * @copydetails doc_what_is_metaid 
   *
   * The string @p metaid is copied.  
   *
   * @param metaid the identifier string to use as the value of the
   * "metaid" attribute
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_UNEXPECTED_ATTRIBUTE, OperationReturnValues_t}
   * 
   * @see getMetaId()
   * @see isSetMetaId()
   */
  int setMetaId (const std::string& metaid);


  /**
   * Sets the value of the "annotation" subelement of this SBML object.
   *
   * The content of @p annotation is copied, and any previous content of
   * this object's "annotation" subelement is deleted.
   * 
   * Whereas the SBase "notes" subelement is a container for content to be
   * shown directly to humans, the "annotation" element is a container for
   * optional software-generated content @em not meant to be shown to
   * humans.  Every object derived from SBase can have its own value for
   * "annotation".  The element's content type is <a target="_blank"
   * href="http://www.w3.org/TR/2004/REC-xml-20040204/#elemdecls">XML type
   * "any"</a>, allowing essentially arbitrary well-formed XML data
   * content.
   *
   * SBML places a few restrictions on the organization of the content of
   * annotations; these are intended to help software tools read and write
   * the data as well as help reduce conflicts between annotations added by
   * different tools.  Please see the SBML specifications for more details.
   *
   * Call this method will result in any existing content of the
   * "annotation" subelement to be discarded.  Unless you have taken steps
   * to first copy and reconstitute any existing annotations into the @p
   * annotation that is about to be assigned, it is likely that performing
   * such wholesale replacement is unfriendly towards other software
   * applications whose annotations are discarded.  An alternative may be
   * to use SBase::appendAnnotation(const XMLNode* annotation) or
   * SBase::appendAnnotation(const std::string& annotation).
   *
   * @param annotation an XML structure that is to be used as the new content
   * of the "annotation" subelement of this object
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   *
   * @see getAnnotationString()
   * @see isSetAnnotation()
   * @see setAnnotation(const std::string& annotation)
   * @see appendAnnotation(const XMLNode* annotation)
   * @see appendAnnotation(const std::string& annotation)
   * @see unsetAnnotation()
   */
  virtual int setAnnotation (XMLNode* annotation);


  /**
   * Sets the value of the "annotation" subelement of this SBML object.
   *
   * The content of @p annotation is copied, and any previous content of
   * this object's "annotation" subelement is deleted.
   * 
   * Whereas the SBase "notes" subelement is a container for content to be
   * shown directly to humans, the "annotation" element is a container for
   * optional software-generated content @em not meant to be shown to
   * humans.  Every object derived from SBase can have its own value for
   * "annotation".  The element's content type is <a target="_blank"
   * href="http://www.w3.org/TR/2004/REC-xml-20040204/#elemdecls">XML type
   * "any"</a>, allowing essentially arbitrary well-formed XML data
   * content.
   *
   * SBML places a few restrictions on the organization of the content of
   * annotations; these are intended to help software tools read and write
   * the data as well as help reduce conflicts between annotations added by
   * different tools.  Please see the SBML specifications for more details.
   *
   * Call this method will result in any existing content of the
   * "annotation" subelement to be discarded.  Unless you have taken steps
   * to first copy and reconstitute any existing annotations into the @p
   * annotation that is about to be assigned, it is likely that performing
   * such wholesale replacement is unfriendly towards other software
   * applications whose annotations are discarded.  An alternative may be
   * to use SBase::appendAnnotation(const XMLNode* annotation) or
   * SBase::appendAnnotation(const std::string& annotation).
   *
   * @param annotation an XML string that is to be used as the content
   * of the "annotation" subelement of this object
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED @endlink
   *
   * @see getAnnotationString()
   * @see isSetAnnotation()
   * @see setAnnotation(const XMLNode* annotation)
   * @see appendAnnotation(const XMLNode* annotation)
   * @see appendAnnotation(const std::string& annotation)
   * @see unsetAnnotation()
   */
  virtual int setAnnotation (const std::string& annotation);


  /**
   * Appends the given @p annotation to the "annotation" subelement of this
   * object.
   * 
   * Whereas the SBase "notes" subelement is a container for content to be
   * shown directly to humans, the "annotation" element is a container for
   * optional software-generated content @em not meant to be shown to
   * humans.  Every object derived from SBase can have its own value for
   * "annotation".  The element's content type is <a
   * target="_blank"
   * href="http://www.w3.org/TR/2004/REC-xml-20040204/#elemdecls">XML type "any"</a>,
   * allowing essentially arbitrary well-formed XML data content.
   *
   * SBML places a few restrictions on the organization of the content of
   * annotations; these are intended to help software tools read and write
   * the data as well as help reduce conflicts between annotations added by
   * different tools.  Please see the SBML specifications for more details.
   *
   * Unlike SBase::setAnnotation(const XMLNode* annotation) or
   * SBase::setAnnotation(const std::string& annotation), this method
   * allows other annotations to be preserved when an application adds its
   * own data.
   *
   * @param annotation an XML structure that is to be copied and appended
   * to the content of the "annotation" subelement of this object
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED @endlink
   *
   * @see getAnnotationString()
   * @see isSetAnnotation()
   * @see setAnnotation(const XMLNode* annotation)
   * @see setAnnotation(const std::string& annotation)
   * @see appendAnnotation(const std::string& annotation)
   * @see unsetAnnotation()
   */
  virtual int appendAnnotation (const XMLNode* annotation);


  /**
   * Appends the given @p annotation to the "annotation" subelement of this
   * object.
   *
   * Whereas the SBase "notes" subelement is a container for content to be
   * shown directly to humans, the "annotation" element is a container for
   * optional software-generated content @em not meant to be shown to
   * humans.  Every object derived from SBase can have its own value for
   * "annotation".  The element's content type is <a
   * target="_blank"
   * href="http://www.w3.org/TR/2004/REC-xml-20040204/#elemdecls">XML type "any"</a>,
   * allowing essentially arbitrary well-formed XML data content.
   *
   * SBML places a few restrictions on the organization of the content of
   * annotations; these are intended to help software tools read and write
   * the data as well as help reduce conflicts between annotations added by
   * different tools.  Please see the SBML specifications for more details.
   *
   * Unlike SBase::setAnnotation(const XMLNode* annotation) or
   * SBase::setAnnotation(const std::string& annotation), this method
   * allows other annotations to be preserved when an application adds its
   * own data.
   *
   * @param annotation an XML string that is to be copied and appended
   * to the content of the "annotation" subelement of this object
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED @endlink
   *
   * @see getAnnotationString()
   * @see isSetAnnotation()
   * @see setAnnotation(const XMLNode* annotation)
   * @see setAnnotation(const std::string& annotation)
   * @see appendAnnotation(const XMLNode* annotation)
   * @see unsetAnnotation()
   */
  virtual int appendAnnotation (const std::string& annotation);


  /**
   * Removes the top-level element within the "annotation" subelement of this
   * SBML object with the given name and optional URI.
   *
   * SBML places a few restrictions on the organization of the content of
   * annotations; these are intended to help software tools read and write
   * the data as well as help reduce conflicts between annotations added by
   * different tools.  Please see the SBML specifications for more details.
   *
   * Calling this method allows a particular annotation element to be removed
   * whilst the remaining annotations remain intact.
   *
   * @param elementName a string representing the name of the top level
   * annotation element that is to be removed
   * @param elementURI an optional string that is used to check both the name
   * and URI of the top level element to be removed
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED @endlink
   * @li @link OperationReturnValues_t#LIBSBML_ANNOTATION_NAME_NOT_FOUND LIBSBML_ANNOTATION_NAME_NOT_FOUND @endlink
   * @li @link OperationReturnValues_t#LIBSBML_ANNOTATION_NS_NOT_FOUND LIBSBML_ANNOTATION_NS_NOT_FOUND @endlink
   *
   * @see replaceTopLevelAnnotationElement(const XMLNode *)
   * @see replaceTopLevelAnnotationElement(const std::string&)
   */
  int removeTopLevelAnnotationElement(const std::string elementName,
                                      const std::string elementURI = "");


  /**
   * Replaces the given top-level element within the "annotation"
   * subelement of this SBML object and with the annotation element supplied.
   *
   * SBML places a few restrictions on the organization of the content of
   * annotations; these are intended to help software tools read and write
   * the data as well as help reduce conflicts between annotations added by
   * different tools.  Please see the SBML specifications for more details.
   *
   * This method determines the name of the element to be replaced from the
   * annotation argument. Functionally it is equivalent to calling
   * <code> removeTopLevelAnnotationElement(name); appendAnnotation(annotation_with_name);
   * </code> with the exception that the placement of the annotation element remains
   * the same.
   *
   * @param annotation XMLNode representing the replacement top level annotation
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED @endlink
   * @li @link OperationReturnValues_t#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT @endlink
   *
   * @see removeTopLevelAnnotationElement(const std::string elementName, const std::string elementURI)
   * @see replaceTopLevelAnnotationElement(const std::string&)
   */
  int replaceTopLevelAnnotationElement(const XMLNode* annotation);


  /**
   * Replaces the given top-level element within the "annotation"
   * subelement of this SBML object and with the annotation element supplied.
   *
   * SBML places a few restrictions on the organization of the content of
   * annotations; these are intended to help software tools read and write
   * the data as well as help reduce conflicts between annotations added by
   * different tools.  Please see the SBML specifications for more details.
   *
   * This method determines the name of the element to be replaced from the
   * annotation argument. Functionally it is equivalent to calling
   * <code> removeTopLevelAnnotationElement(name); appendAnnotation(annotation_with_name);
   * </code> with the exception that the placement of the annotation element remains
   * the same.
   *
   * @param annotation string representing the replacement top level annotation
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED @endlink
   * @li @link OperationReturnValues_t#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT @endlink
   *
   * @see removeTopLevelAnnotationElement(const std::string elementName, const std::string elementURI)
   * @see replaceTopLevelAnnotationElement(const XMLNode*)
   */
  int replaceTopLevelAnnotationElement(const std::string& annotation);


  /**
   * Sets the value of the "notes" subelement of this SBML object.
   *
   * The content of @p notes is copied, and any existing content of this
   * object's "notes" subelement is deleted.
   *
   * The optional SBML element named "notes", present on every major SBML
   * component type, is intended as a place for storing optional
   * information intended to be seen by humans.  An example use of the
   * "notes" element would be to contain formatted user comments about the
   * model element in which the "notes" element is enclosed.  Every object
   * derived directly or indirectly from type SBase can have a separate
   * value for "notes", allowing users considerable freedom when adding
   * comments to their models.
   *
   * The format of "notes" elements must be <a target="_blank"
   * href="http://www.w3.org/TR/xhtml1/">XHTML&nbsp;1.0</a>.  To help
   * verify the formatting of "notes" content, libSBML provides the static
   * utility method SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode xhtml@endif); however,
   * readers are urged to consult the appropriate <a target="_blank"
   * href="http://sbml.org/Documents/Specifications">SBML specification
   * document</a> for the Level and Version of their model for more
   * in-depth explanations.  The SBML Level&nbsp;2 and &nbsp;3
   * specifications have considerable detail about how "notes" element
   * content must be structured.
   *
   * @param notes an XML structure that is to be used as the content of the
   * "notes" subelement of this object
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   * @li @link OperationReturnValues_t#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT @endlink
   *
   * @see getNotesString()
   * @see isSetNotes()
   * @see setNotes(const std::string& notes, bool addXHTMLMarkup)
   * @see appendNotes(const XMLNode* notes)
   * @see appendNotes(const std::string& notes)
   * @see unsetNotes()
   * @see SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif)
   */
  int setNotes(const XMLNode* notes);


  /**
   * Sets the value of the "notes" subelement of this SBML object to a copy
   * of the string @p notes.
   *
   * The content of @p notes is copied, and any existing content of this
   * object's "notes" subelement is deleted.
   *
   * The optional SBML element named "notes", present on every major SBML
   * component type, is intended as a place for storing optional
   * information intended to be seen by humans.  An example use of the
   * "notes" element would be to contain formatted user comments about the
   * model element in which the "notes" element is enclosed.  Every object
   * derived directly or indirectly from type SBase can have a separate
   * value for "notes", allowing users considerable freedom when adding
   * comments to their models.
   *
   * The format of "notes" elements must be <a target="_blank"
   * href="http://www.w3.org/TR/xhtml1/">XHTML&nbsp;1.0</a>.  To help
   * verify the formatting of "notes" content, libSBML provides the static
   * utility method SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif); however,
   * readers are urged to consult the appropriate <a target="_blank"
   * href="http://sbml.org/Documents/Specifications">SBML specification
   * document</a> for the Level and Version of their model for more
   * in-depth explanations.  The SBML Level&nbsp;2 and &nbsp;3
   * specifications have considerable detail about how "notes" element
   * content must be structured.
   *
   * @param notes an XML string that is to be used as the content of the
   * "notes" subelement of this object
   *
   * @param addXHTMLMarkup a boolean indicating whether to wrap the contents
   * of the @p notes argument with XHTML paragraph (<code>&lt;p&gt;</code>)
   * tags.  This is appropriate when the string in @p notes does not already
   * containg the appropriate XHTML markup.
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   * @li @link OperationReturnValues_t#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT @endlink
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED @endlink
   *
   * @see getNotesString()
   * @see isSetNotes()
   * @see setNotes(const XMLNode* notes)
   * @see appendNotes(const XMLNode* notes)
   * @see appendNotes(const std::string& notes)
   * @see unsetNotes()
   * @see SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif)
   */
  int setNotes(const std::string& notes, bool addXHTMLMarkup = false);


  /**
   * Appends the given @p notes to the "notes" subelement of this object.
   *
   * The content of @p notes is copied.
   *
   * The optional SBML element named "notes", present on every major SBML
   * component type, is intended as a place for storing optional
   * information intended to be seen by humans.  An example use of the
   * "notes" element would be to contain formatted user comments about the
   * model element in which the "notes" element is enclosed.  Every object
   * derived directly or indirectly from type SBase can have a separate
   * value for "notes", allowing users considerable freedom when adding
   * comments to their models.
   *
   * The format of "notes" elements must be <a target="_blank"
   * href="http://www.w3.org/TR/xhtml1/">XHTML&nbsp;1.0</a>.  To help
   * verify the formatting of "notes" content, libSBML provides the static
   * utility method SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif); however,
   * readers are urged to consult the appropriate <a target="_blank"
   * href="http://sbml.org/Documents/Specifications">SBML specification
   * document</a> for the Level and Version of their model for more
   * in-depth explanations.  The SBML Level&nbsp;2 and &nbsp;3
   * specifications have considerable detail about how "notes" element
   * content must be structured.
   * 
   * @param notes an XML node structure that is to appended to the content
   * of the "notes" subelement of this object
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   * @li @link OperationReturnValues_t#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT @endlink
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED @endlink
   *
   * @see getNotesString()
   * @see isSetNotes()
   * @see setNotes(const XMLNode* notes)
   * @see setNotes(const std::string& notes, bool addXHTMLMarkup)
   * @see appendNotes(const std::string& notes)
   * @see unsetNotes()
   * @see SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif)
   */
  int appendNotes(const XMLNode* notes);


  /**
   * Appends the given @p notes to the "notes" subelement of this object.
   *
   * The content of the parameter @p notes is copied.
   *
   * The optional SBML element named "notes", present on every major SBML
   * component type, is intended as a place for storing optional
   * information intended to be seen by humans.  An example use of the
   * "notes" element would be to contain formatted user comments about the
   * model element in which the "notes" element is enclosed.  Every object
   * derived directly or indirectly from type SBase can have a separate
   * value for "notes", allowing users considerable freedom when adding
   * comments to their models.
   *
   * The format of "notes" elements must be <a target="_blank"
   * href="http://www.w3.org/TR/xhtml1/">XHTML&nbsp;1.0</a>.  To help
   * verify the formatting of "notes" content, libSBML provides the static
   * utility method SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif); however,
   * readers are urged to consult the appropriate <a target="_blank"
   * href="http://sbml.org/Documents/Specifications">SBML specification
   * document</a> for the Level and Version of their model for more
   * in-depth explanations.  The SBML Level&nbsp;2 and &nbsp;3
   * specifications have considerable detail about how "notes" element
   * content must be structured.
   *
   * @param notes an XML string that is to appended to the content of
   * the "notes" subelement of this object
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   * @li @link OperationReturnValues_t#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT @endlink
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED @endlink
   *
   * @see getNotesString()
   * @see isSetNotes()
   * @see setNotes(const XMLNode* notes)
   * @see setNotes(const std::string& notes, bool addXHTMLMarkup)
   * @see appendNotes(const XMLNode* notes)
   * @see unsetNotes()
   * @see SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif)
   */
  int appendNotes(const std::string& notes);


  /** @cond doxygenLibsbmlInternal */
  /**
   * Sets the parent SBMLDocument of this SBML object.
   *
   * @param d the SBMLDocument object to use
   *
   * @see connectToChild()
   * @if clike
   * @see enablePackageInternal()
   * @endif@~
   */
  virtual void setSBMLDocument (SBMLDocument* d);
  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Sets the parent SBML object of this SBML object.
   * (Creates a child-parent relationship by the child)
   * This function is called when a child element is
   * set/added/created by its parent element (e.g. by setXXX,
   * addXXX, createXXX, and connectToChild functions of the
   * parent element).
   *
   * @param parent the SBML object to use
   */
  virtual void connectToParent (SBase* parent);


  /**
   * Sets this SBML object to child SBML objects (if any).
   * (Creates a child-parent relationship by the parent)
   *
   * Subclasses must override this function if they define
   * one ore more child elements.
   * Basically, this function needs to be called in
   * constructor, copy constructor, assignment operator.
   *
   * @if clike
   * @see setSBMLDocument()
   * @see enablePackageInternal()
   * @endif@~
   */
  virtual void connectToChild ();

  /** @endcond */


  /**
   * Sets the namespaces relevant of this SBML object.
   *
   * The content of @p xmlns is copied, and this object's existing
   * namespace content is deleted.
   *
   * The SBMLNamespaces object encapsulates SBML Level/Version/namespaces
   * information.  It is used to communicate the SBML Level, Version, and
   * (in Level&nbsp;3) packages used in addition to SBML Level&nbsp;3 Core.
   * 
   * @param xmlns the namespaces to set
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   */
  int setNamespaces(XMLNamespaces* xmlns);


  /**
   * Unsets the value of the "metaid" attribute of this SBML object.
   *
   */
  int unsetMetaId ();


  /**
   * Unsets the value of the "notes" subelement of this SBML object.
   *
   * The optional SBML element named "notes", present on every major SBML
   * component type, is intended as a place for storing optional
   * information intended to be seen by humans.  An example use of the
   * "notes" element would be to contain formatted user comments about the
   * model element in which the "notes" element is enclosed.  Every object
   * derived directly or indirectly from type SBase can have a separate
   * value for "notes", allowing users considerable freedom when adding
   * comments to their models.
   *
   * The format of "notes" elements must be <a target="_blank"
   * href="http://www.w3.org/TR/xhtml1/">XHTML&nbsp;1.0</a>.  To help
   * verify the formatting of "notes" content, libSBML provides the static
   * utility method SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif); however,
   * readers are urged to consult the appropriate <a target="_blank"
   * href="http://sbml.org/Documents/Specifications">SBML specification
   * document</a> for the Level and Version of their model for more
   * in-depth explanations.  The SBML Level&nbsp;2 and &nbsp;3
   * specifications have considerable detail about how "notes" element
   * content must be structured.
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   *
   * @see getNotesString()
   * @see isSetNotes()
   * @see setNotes(const XMLNode* notes)
   * @see setNotes(const std::string& notes, bool addXHTMLMarkup)
   * @see appendNotes(const XMLNode* notes)
   * @see appendNotes(const std::string& notes)
   * @see SyntaxChecker::hasExpectedXHTMLSyntax(@if java XMLNode@endif)
   */
  int unsetNotes ();


  /**
   * Unsets the value of the "annotation" subelement of this SBML object.
   *
   * Whereas the SBase "notes" subelement is a container for content to be
   * shown directly to humans, the "annotation" element is a container for
   * optional software-generated content @em not meant to be shown to
   * humans.  Every object derived from SBase can have its own value for
   * "annotation".  The element's content type is <a target="_blank"
   * href="http://www.w3.org/TR/2004/REC-xml-20040204/#elemdecls">XML type
   * "any"</a>, allowing essentially arbitrary well-formed XML data
   * content.
   *
   * SBML places a few restrictions on the organization of the content of
   * annotations; these are intended to help software tools read and write
   * the data as well as help reduce conflicts between annotations added by
   * different tools.  Please see the SBML specifications for more details.
   *
   * @return integer value indicating success/failure of the
   * function.  The possible values returned by this function are:
   * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS @endlink
   *
   * @see getAnnotation()
   * @see getAnnotationString()
   * @see isSetAnnotation()
   * @see setAnnotation(const XMLNode* annotation)
   * @see setAnnotation(const std::string& annotation)
   * @see appendAnnotation(const XMLNode* annotation)
   * @see appendAnnotation(const std::string& annotation)
   */
  int unsetAnnotation ();


  /**
   * Returns the SBML Level of the SBMLDocument object containing @em this
   * object.
   * 
   * @return the SBML level of this SBML object.
   * 
   * @see getVersion()
   * @see getNamespaces()
   * @see getPackageVersion()
   */
  unsigned int getLevel () const;


  /**
   * Returns the Version within the SBML Level of the SBMLDocument object
   * containing @em this object.
   * 
   * @return the SBML version of this SBML object.
   *
   * @see getLevel()
   * @see getNamespaces()
   */
  unsigned int getVersion () const;


  /**
   * Returns the libSBML type code for this object.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @copydetails doc_additional_typecode_details
   *
   * @return the @if clike #SBMLTypeCode_t value@else SBML object type
   * code@endif@~ of this SBML object, or @sbmlconstant{SBML_UNKNOWN,
   * SBMLTypeCode_t} (the default).  The latter is possible because
   * subclasses of SBase are not required to implement this method to return
   * a type code.
   *
   * @copydetails doc_warning_typecodes_not_unique
   *
   * @see getPackageName()
   * @see getElementName()
   */
  virtual int getTypeCode () const;


  /**
   * Predicate returning @c true if this object's level/version and namespace
   * values correspond to a valid SBML specification.
   *
   * @return @c true if the level, version and namespace values of this 
   * SBML object correspond to a valid set of values, @c false otherwise.
   */
  bool hasValidLevelVersionNamespaceCombination();

  
  /**
   * Returns the XML element name of this object.
   *
   * This is overridden by subclasses to return a string appropriate to the
   * SBML component.  For example, Model defines it as returning @c
   * "model", CompartmentType defines it as returning @c "compartmentType",
   * and so on.
   */
  virtual const std::string& getElementName () const = 0;


  /**
   * Returns a string consisting of a partial SBML corresponding to just
   * this object.
   * 
   * @return the partial SBML that describes this SBML object.
   *
   * @warning <span class="warning">This is primarily provided for testing
   * and debugging purposes.  It may be removed in a future version of
   * libSBML.</span>
   */
  char* toSBML();


  // ------------------------------------------------------------------


  /** @cond doxygenLibsbmlInternal */
  /**
   * Reads (initializes) this SBML object by reading from XMLInputStream.
   */
  void read (XMLInputStream& stream);
  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Writes (serializes) this SBML object by writing it to XMLOutputStream.
   */
  virtual void write (XMLOutputStream& stream) const;
  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Subclasses should override this method to write out their contained
   * SBML objects as XML elements.  Be sure to call your parents
   * implementation of this method as well.  For example:@if clike
   * <pre>
   *   SBase::writeElements();
   *   mReactants.write(stream);
   *   mProducts.write(stream);
   *   ...
   * </pre>@endif@~
   */
  virtual void writeElements (XMLOutputStream& stream) const;
  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /* function returns true if component has all the required
   * attributes
   * needs to be overloaded for each component
   */
  virtual bool hasRequiredAttributes() const ;
  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /* function returns true if component has all the required
   * elements
   * needs to be overloaded for each component
   */
  virtual bool hasRequiredElements() const ;
  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /* function returns value if the object matches level/version/namespace
   */
  int checkCompatibility(const SBase * object) const ;
  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /* sets the SBMLnamespaces - internal use only*/
  int setSBMLNamespaces(SBMLNamespaces * sbmlns);

  /* sets the SBMLNamaepaces and owns the given object - internal use only */
  void setSBMLNamespacesAndOwn(SBMLNamespaces * disownedNs);
  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /* gets the SBMLnamespaces - internal use only*/
  virtual SBMLNamespaces * getSBMLNamespaces() const;
  /** @endcond */


  /**
   * Removes this object from its parent.
   *
   * If the parent was storing this object as a pointer, it is deleted.  If
   * not, it is simply cleared (as in ListOf objects).  This is a pure
   * virtual method, as every SBase element has different parents, and
   * therefore different methods of removing itself.  Will fail (and not
   * delete itself) if it has no parent object.  This function is designed to
   * be overridden, but for all objects whose parent is of the class ListOf,
   * the default implementation will work.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int removeFromParentAndDelete();


  /**
   * Returns @c true if this object's set of XML namespaces are the same
   * as the given object's XML namespaces.
   *
   * @param sb an object to compare with respect to namespaces
   *
   * @return boolean, @c true if this object's collection of namespaces is
   * the same as @p sb's, @c false otherwise.
   */
  bool matchesSBMLNamespaces(const SBase * sb);


  /**
   * Returns @c true if this object's set of XML namespaces are the same
   * as the given object's XML namespaces.
   *
   * @param sb an object to compare with respect to namespaces
   *
   * @return boolean, @c true if this object's collection of namespaces is
   * the same as @p sb's, @c false otherwise.
   */
  bool matchesSBMLNamespaces(const SBase * sb) const;


  /**
   * Returns @c true if this object's set of XML namespaces are a subset
   * of the given object's XML namespaces.
   *
   * @param sb an object to compare with respect to namespaces
   *
   * @return boolean, @c true if this object's collection of namespaces is
   * a subset of @p sb's, @c false otherwise.
   */
  bool matchesRequiredSBMLNamespacesForAddition(const SBase * sb);
  
  
  /**
   * Returns @c true if this object's set of XML namespaces are a subset
   * of the given object's XML namespaces.
   *
   * @param sb an object to compare with respect to namespaces
   *
   * @return boolean, @c true if this object's collection of namespaces is
   * a subset of @p sb's, @c false otherwise.
   */
  bool matchesRequiredSBMLNamespacesForAddition(const SBase * sb) const;


  /**
   * Sets the user data of this element.
   *
   * @copydetails doc_what_is_user_data
   *
   * @param userData specifies the new user data.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int setUserData(void *userData);


  /**
   * Returns the user data that has been previously set via setUserData().
   *
   * @copydetails doc_what_is_user_data
   *
   * @return the user data of this node, or @c NULL if no user data has been set.
   *
   * @if clike
   * @see ASTNode::setUserData(void *userData)
   * @endif@~
   */
  void *getUserData() const;

  /**
   * Predicate returning true or false depending on whether
   * the user data of this element has been set.
   *
   * @copydetails doc_what_is_user_data
   *
   * @return boolean, @c true if this object's user data has been set,
   * @c false otherwise.
   */
  bool isSetUserData() const;


  /**
   * Unsets the user data of this element.
   *
   * @copydetails doc_what_is_user_data
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetUserData();


  /**
   * Returns the SBMLErrorLog used to log errors while reading and
   * validating SBML.
   *
   * @return the SBMLErrorLog used to log errors while reading and
   * validating SBML.
   */
  SBMLErrorLog* getErrorLog ();

protected:

  bool getHasBeenDeleted() const;

  /** 
   * When overridden allows SBase elements to use the text included in between
   * the elements tags. The default implementation does nothing.
   * 
   * @param text the text string found between the element tags.
   */ 
  virtual void setElementText(const std::string &text);


  /** @cond doxygenLibsbmlInternal */

  bool matchesCoreSedNamespace(const SBase * sb);

  bool matchesCoreSedNamespace(const SBase * sb) const;

  /**
   * Creates a new SBase object with the given SBML level, version.
   */
  SBase (unsigned int level, unsigned int version);


  /**
   * Creates a new SBase object with the given SBMLNamespaces.
   * Only subclasses may create SBase objects.
   */
  SBase (SBMLNamespaces* sbmlns);


  /**
  * Copy constructor. Creates a copy of this SBase object.
   *
   * @param orig the object to copy.
  */
  SBase(const SBase& orig);


  /**
   * Subclasses should override this method to create, store, and then
   * return an SBML object corresponding to the next XMLToken in the
   * XMLInputStream.
   *
   * @return the SBML object corresponding to next XMLToken in the
   * XMLInputStream or @c NULL if the token was not recognized.
   */
  virtual SBase* createObject (XMLInputStream& stream);


  /**
   * Predicate returning @c true if this
   * object's level/version and namespace values correspond to a valid
   * SBML specification.
   *
   * @param typecode the typecode for this element
   * @param xmlns the namespaces used by this element.
   *
   * @note  This function is provided as convenience method to be called from constructors. This 
   *        allows to use it in scenarios where the namespaces or typecode have not yet been initialized. 
   * 
   * @return @c true if the level, version and namespace values of this 
   * SBML object correspond to a valid set of values, @c false otherwise.
   */
  bool hasValidLevelVersionNamespaceCombination(int typecode, XMLNamespaces *xmlns);


  /**
   * Subclasses should override this method to read (and store) XHTML,
   * MathML, etc. directly from the XMLInputStream.
   *
   * @return true if the subclass read from the stream, false otherwise.
   */
  virtual bool readOtherXML (XMLInputStream& stream);


  /**
   * The SBML XML Schema is written such that the order of child elements
   * is significant.  LibSBML can read elements out of order.  If you
   * override this method to indicate the ordinal position of element with
   * respect to its siblings, libSBML will log an error if the element is
   * read out of order.
   *
   * @return the ordinal position of the element with respect to its
   * siblings or @c -1 (the default) to indicate the position is not
   * significant.
   */
  virtual int getElementPosition () const;


  /**
   * Convenience method for easily logging problems from within method
   * implementations.
   *
   * This is essentially a short form of getErrorLog()->logError(...)
   *
   * @ifnot hasDefaultArgs @htmlinclude warn-default-args-in-docs.html @endif@~
   */
  void logError (  unsigned int       id
                 , const unsigned int level   = 2
                 , const unsigned int version = 3
                 , const std::string& details = "" );


  /**
   * Helper to log a common type of error.
   */
  void logUnknownAttribute( const std::string& attribute,
          const unsigned int level,
          const unsigned int version,
          const std::string& element,
          const std::string& prefix="");


  /**
   * Helper to log a common type of error.
   */
  void logUnknownElement( const std::string& element,
        const unsigned int level,
        const unsigned int version );

 
  /**
   * Helper to log a common type of error.
   */
  void logEmptyString( const std::string& attribute,
                       const unsigned int level,
                       const unsigned int version,
                       const std::string& element);


  /**
   * Subclasses should override this method to add the list of
   * expected attributes. Be sure to call your parents implementation 
   * of this method as well.
   */
  virtual void addExpectedAttributes(ExpectedAttributes& attributes);

  /**
   * Subclasses should override this method to read values from the given
   * XMLAttributes set into their specific fields.  Be sure to call your
   * parents implementation of this method as well.
   */
  virtual void readAttributes (const XMLAttributes& attributes, 
                               const ExpectedAttributes& expectedAttributes);


  /**
   * Subclasses should override this method to write their XML attributes
   * to the XMLOutputStream.  Be sure to call your parents implementation
   * of this method as well.  For example:
   *
   *   SBase::writeAttributes(stream);
   *   stream.writeAttribute( "id"  , mId   );
   *   stream.writeAttribute( "name", mName );
   *   ...
   *
   * (NOTICE) this function doesn't write xmlns attributes.
   * Be sure to implement wirteXMLNS() function to write xmlns attributes.
   *
   */
  virtual void writeAttributes (XMLOutputStream& stream) const;


  /**
   *
   * Subclasses should override this method to write their xmlns attriubutes
   * (if any) to the XMLOutputStream. 
   *
   */
  virtual void writeXMLNS (XMLOutputStream& stream) const;


  /**
   * Checks that the SBML element appears in the expected order.
   *
   * If @p object is not in the expected position, an error is logged.
   */
  void checkOrderAndLogError (SBase* object, int expected);


  /**
   * Checks that an SBML ListOf element is populated.  
   * If a listOf element has been declared with no elements, 
   * an error is logged.
   */
  void checkListOfPopulated(SBase* object);

  /**
   * Checks that the given default namespace in the given element is valid.
   * If the given default namespace is not valid, an error is logged.
   */
  void checkDefaultNamespace(const XMLNamespaces* xmlns, 
    const std::string& elementName, const std::string& prefix = "");

  /**
   * Checks the annotation does not declare an sbml namespace.
   * If the annotation declares an sbml namespace an error is logged.
   */
  void checkAnnotation();


  /**
   * Checks that the XHTML is valid.
   * If the xhtml does not conform to the specification of valid xhtml within
   * an sbml document, an error is logged.
   */
  void checkXHTML(const XMLNode *);


  /**
   * Checks that the math ml ns has been declared
   */
  const std::string checkMathMLNamespace(const XMLToken elem);

   /**
   * Sets the XML namespace to which this element belongs to.
   * For example, all elements that belong to SBML Level 3 Version 1 Core
   * must set the namespace to <code>"http://www.sbml.org/sbml/level3/version1/core"</code>; 
   * all elements that belong to Layout Extension Version 1 for SBML Level 3
   * Version 1 Core must set the namespace to 
   * <code>"http://www.sbml.org/sbml/level3/version1/layout/version1"</code>.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
   */
  int setElementNamespace(const std::string &uri);


  /**
   * Gets the XML namespace (URI) to which this element belongs to.
   */
  const std::string& getElementNamespace() const;

  std::string getURI() const;

  std::string getPrefix() const;

  /**
   * Return the SBML XML namespace prefix of this element.
   *
   * This will be the same as getPrefix() unless the element in question is
   * an element of an SBML extension class.
   *
   * @return the XML namespace prefix
   */
  std::string getSBMLPrefix() const;


  /**
   * Returns the root element of the node tree to which this element is connected.
   *
   * @note The root element may not be an SBMLDocument element. For example,
   * this element is the root element if this element doesn't have a parent
   * SBML object (i.e. mParentSBMLObject is NULL)
   *
   * @see enablePackageInternal
   */
  SBase* getRootElement();


  // ------------------------------------------------------------------


  std::string     mMetaId;
  XMLNode*        mNotes;
  XMLNode*        mAnnotation;
  SBMLDocument*   mSBML;
  SBMLNamespaces* mSBMLNamespaces;
  void*           mUserData;

  unsigned int mLine;
  unsigned int mColumn;

  /* store the parent SBML object */
  SBase* mParentSBMLObject;
  bool mHasBeenDeleted;

  std::string mEmptyString;

  //
  // namespace to which this SBase object belongs.
  // This variable can be publicly accessible by getElementNamespace function.
  //
  // For example, mURI of elements defined in L3 Core (or defined in Level 2 
  // or before) will be the URI defined in the corresponding SBML specification
  // (e.g. "http://www.sbml.org/sbml/level3/version1" for L3V1 Core); and mURI
  // will be "http://www.sbml.org/sbml/level3/version1/layout/version1" for 
  // elements defined in layout extension L3V1-V1.
  // The purpuse of this data member is to explicitly distinguish elements in core 
  // package and extension packages.
  // 
  // From the implementation point of view, this variable is needed to identify
  // if the prefix needs to be added when printing elements in some package extension.
  // (i.e. used in getPrefix function)
  //
  std::string mURI;

  
  /** @endcond */

private:
  /** @cond doxygenLibsbmlInternal */
  /**
   * Stores the location (line and column) and any XML namespaces (for
   * roundtripping) declared on this SBML (XML) element.
   */
  void setSBaseFields (const XMLToken& element);


  /**
   * Reads an annotation from the stream and returns true if successful.
   *
   * @return true if read an <annotation> element from the stream
   */
  bool readAnnotation (XMLInputStream& stream);


  /**
   * Reads the notes from the stream and returns true if successful.
   *
   * @return true if read a <notes> element from the stream
   */
  bool readNotes (XMLInputStream& stream);


  /** @endcond */
};

LIBSBML_CPP_NAMESPACE_END

#endif  /* __cplusplus */



#ifndef SWIG

LIBSBML_CPP_NAMESPACE_BEGIN
BEGIN_C_DECLS

/**
 * Returns the value of the "metaid" attribute of the given SBase_t
 * structure.
 *
 * @param sb the SBase_t structure
 *
 * @return the value of the "metaid" attribute of @p sb
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
const char *
SBase_getMetaId (SBase_t *sb);


/**
 * Returns the parent SBMLDocument_t structure of the given SBase_t
 * structure.
 *
 * @param sb the SBase_t structure
 *
 * @return the parent SBMLDocument of this SBML structure.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
const SBMLDocument_t *
SBase_getSBMLDocument (SBase_t *sb);


/**
 * Returns the parent SBase_t structure of the given SBase_t
 * structure.
 *
 * @param sb the SBase_t structure
 *
 * @return the parent SBase  of this SBML structure.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
const SBase_t *
SBase_getParentSBMLObject (SBase_t *sb);


/**
 * Returns the ancestor SBase_t structure of the given SBase_t
 * structure that corresponds to the given type.
 *
 * This function allows any structure to determine its exact
 * location/function within a model. For example a
 * StoichiometryMath_t structure has ancestors of type SpeciesReference_t,
 * ListOf_t(Products/Reactants), Reaction_t, ListOfReactions_t and Model_t;
 * any of which can be accessed via this function.
 *
 * @param sb the SBase_t structure
 * @param type the typecode (int) of the structure to be returned
 *
 * @return the ancestor SBase_t structure of this SBML structure with
 * the corresponding typecode (int), NULL if there is no ancestor of
 * this type.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
const SBase_t *
SBase_getAncestorOfType (SBase_t *sb, int type);

/**
 * Returns the line number on which the given structure first appears in the
 * XML representation of the SBML document, or '0' if the object was created,
 * not read from a file.
 *
 * @param sb the SBase_t structure
 *
 * @return the line number of the given structure, or '0' if no such value.
 *
 * @see getColumn().
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
unsigned int
SBase_getLine (const SBase_t *sb);


/**
 * Returns the column number on which the given structure first appears in the
 * XML representation of the SBML document, or '0' if the object was created,
 * not read from a file.
 *
 * @param sb the SBase_t structure
 *
 * @return the column number of this SBML structure, or '0' if no such value.
 *
 * @see getLine().
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
unsigned int
SBase_getColumn (const SBase_t *sb);


/**
 * Returns the notes from given SBML structure.
 *
 * @param sb the given SBML structure.
 *
 * @return the XMLNode_t structure representing the notes from this structure.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
XMLNode_t *
SBase_getNotes (SBase_t *sb);


/**
 * Returns the notes string from given SBML structure.
 * The string is owned by the caller and should be freed
 * (with free()) when no longer needed.
 *
 * @param sb the given SBML structure.
 *
 * @return the string (char*) representing the notes from this structure.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
char*
SBase_getNotesString (SBase_t *sb);


/**
 * Returns the annotation from given SBML structure.
 *
 * @param sb the given SBML structure.
 *
 * @return the XMLNode_t structure representing the annotation from this structure.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
XMLNode_t *
SBase_getAnnotation (SBase_t *sb);


/**
 * Returns the annotation string from given SBML structure.
 * The string is owned by the caller and should be freed
 * (with free()) when no longer needed.
 *
 * @param sb the given SBML structure.
 *
 * @return the string (char*) representing the annotation from this structure.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
char*
SBase_getAnnotationString (SBase_t *sb);


/**
 * Predicate returning nonzero true or false depending on whether the given
 * structure's "metaid" attribute is set.
 *
 * @param sb the SBase_t structure to query
 *
 * @return nonzero (for true) if the "metaid" attribute of this SBML structure
 * is set, zero (for false) otherwise.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_isSetMetaId (const SBase_t *sb);


/**
 * Predicate returning nonzero true or false depending on whether the given
 * structure's "notes" subelement is set.
 *
 * @param sb the SBase_t structure to query
 *
 * @return nonzero (for true) if the "notes" subelement of this SBML structure
 * is set, zero (for false) otherwise.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_isSetNotes (const SBase_t *sb);


/**
 * Predicate returning nonzero true or false depending on whether the given
 * structure's "annotation" subelement is set.
 *
 * @param sb the SBase_t structure to query
 *
 * @return nonzero (for true) if the "annotation" subelement of this SBML structure
 * is set, zero (for false) otherwise.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_isSetAnnotation (const SBase_t *sb);


/**
 * Sets the value of the "metaid" attribute of the given structure.
 *
 * The string @p metaid is copied.  The value of @p metaid must be an
 * identifier conforming to the syntax defined by the XML 1.0 data type
 * ID.  Among other things, this type requires that a value is unique
 * among all the values of type XML ID in an SBMLDocument_t.  Although SBML
 * only uses XML ID for the "metaid" attribute, callers should be careful
 * if they use XML ID's in XML portions of a model that are not defined
 * by SBML, such as in the application-specific content of the
 * "annotation" subelement.
 *
 * @param sb the SBase_t structure
 *
 * @param metaid the identifier string to use as the value of the
 * "metaid" attribute
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_UNEXPECTED_ATTRIBUTE, OperationReturnValues_t}
 *
 * @note Using this function with the metaid set to NULL is equivalent to
 * unsetting the "metaid" attribute.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_setMetaId (SBase_t *sb, const char *metaid);


/**
 * Sets the namespaces relevant of this SBML structure.
 *
 * @param sb the SBase_t structure
 *
 * @param xmlns the namespaces to set
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_setNamespaces (SBase_t *sb, XMLNamespaces_t *xmlns);


/**
 * Sets the notes for the given SBML structure.
 *
 * @param sb the given SBML structure.
 * @param notes the XMLNode_t structure respresenting the notes.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_setNotes (SBase_t *sb, XMLNode_t *notes);


/**
 * Sets the notes for the given SBML structure.
 *
 * @param sb the given SBML structure.
 * @param notes the string (const char*) respresenting the notes.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_setNotesString (SBase_t *sb, const char *notes);


/**
 * Sets the notes for the given SBML structure.
 *
 * @param sb the given SBML structure.
 * @param notes the string (const char*) respresenting the notes.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_setNotesStringAddMarkup (SBase_t *sb, const char *notes);


/**
 * Appends the notes for the given SBML structure.
 *
 * @param sb the given SBML structure.
 * @param notes the XMLNode_t structure respresenting the notes.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_appendNotes (SBase_t *sb, XMLNode_t *notes);


/**
 * Appends the notes for the given SBML structure.
 *
 * @param sb the given SBML structure.
 * @param notes the string (const char*) respresenting the notes.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_appendNotesString (SBase_t *sb, const char *notes);


/**
 * Sets the annotation for the given SBML structure.
 *
 * @param sb the given SBML structure.
 * @param annotation the XMLNode_t structure respresenting the annotation.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_setAnnotation (SBase_t *sb, XMLNode_t *annotation);


/**
 * Sets the annotation for the given SBML structure.
 *
 * @param sb the given SBML structure.
 * @param annotation the string (const char*) respresenting the annotation.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_setAnnotationString (SBase_t *sb, const char *annotation);


/**
 * Appends the annotation for the given SBML structure.
 *
 * @param sb the given SBML structure.
 * @param annotation the XMLNode_t structure respresenting the annotation.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_appendAnnotation (SBase_t *sb, XMLNode_t *annotation);


/**
 * Appends the annotation for the given SBML structure.
 *
 * @param sb the given SBML structure.
 * @param annotation the string (const char*) respresenting the annotation.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_appendAnnotationString (SBase_t *sb, const char *annotation);


/**
 * Unsets the "metaid" attribute of the given structure.
 *
 * @param sb the SBase_t structure
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_unsetMetaId (SBase_t *sb);


/**
 * Unsets the "notes" subelement of the given structure.
 *
 * @param sb the SBase_t structure
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_unsetNotes (SBase_t *sb);


/**
 * Unsets the "annotation" subelement of the given structure.
 *
 * @param sb the SBase_t structure
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_unsetAnnotation (SBase_t *sb);


/**
 * Returns the Model_t structure in which the given instance is located.
 *
 * @param sb the SBase_t structure
 *
 * @return the parent Model_t strucdture of the given structure.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
const Model_t *
SBase_getModel (const SBase_t *sb);


/**
 * Returns the SBML Level of the overall SBML document.
 *
 * @param sb the SBase_t structure to query
 *
 * @return the SBML level of the given structure.
 *
 * @see getVersion()
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
unsigned int
SBase_getLevel (const SBase_t *sb);


/**
 * Returns the Version within the SBML Level of the overall SBML document.
 *
 * @param sb the SBase_t structure to query
 *
 * @return the SBML version of the given structure.
 *
 * @see getLevel()
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
unsigned int
SBase_getVersion (const SBase_t *sb);


/**
 * Returns the libSBML type code for this structure.
 *
 * This method MAY return the typecode of this SBML structure or it MAY
 * return SBML_UNKNOWN.  That is, subclasses of SBase are not required to
 * implement this method to return a typecode.  This method is meant
 * primarily for the LibSBML C interface where class and subclass
 * information is not readily available.
 *
 * @note In libSBML 5, the type of return value has been changed from
 * typecode (int) to int. The return value is one of enum values defined for
 * each package. For example, return values will be one of typecode (int) if
 * this structure is defined in SBML core package, return values will be one of
 * SBMLLayoutTypeCode_t if this structure is defined in Layout extension
 * (i.e. similar enum types are defined in each package extension for each
 * SBase subclass) The value of each typecode can be duplicated between those
 * of different packages. Thus, to distinguish the typecodes of different
 * packages, not only the return value of getTypeCode() but also that of
 * getPackageName() must be checked.
 *
 * @param sb the SBase_t structure
 *
 * @return the typecode (int value) of this SBML structure or SBML_UNKNOWN
 * (default).
 *
 * @see getElementName()
 * @see getPackageName()
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_getTypeCode (const SBase_t *sb);


/**
 * Returns the XML element name of the given structure.
 *
 * This is overridden by subclasses to return a string appropriate to the
 * SBML component.  For example, Model defines it as returning "model",
 * CompartmentType defines it as returning "compartmentType", etc.
 *
 * @param sb the SBase_t structure
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
const char *
SBase_getElementName (const SBase_t *sb);


/**
 * Predicate returning nonzero true or false depending on whether the
 * structure's level/version and namespace values correspond to a valid
 * SBML specification.
 *
 * @param sb the SBase_t structure
 *
 * @return nonzero (true) if the level, version and namespace values of this
 * SBML structure correspond to a valid set of values, zero (false) otherwise.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int
SBase_hasValidLevelVersionNamespaceCombination(SBase_t *sb);


/**
 * Sets the user data of this node. This can be used by the application
 * developer to attach custom information to the node. In case of a deep
 * copy this attribute will passed as it is. The attribute will be never
 * interpreted by this class.
 *
 * @param sb defines the node of which the user data should be set.
 * @param userData specifies the new user data.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int 
SBase_setUserData(SBase_t* sb, void *userData);

/**
 * Returns the user data that has been previously set by setUserData().
 *
 * @param sb the SBase_t structure in question.
 * @return the user data of this node. NULL if no user data has been.
 * @see SBase_setUserData
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
void *
SBase_getUserData(const SBase_t* sb);

/**
 * Predicate returning nonzero true or false depending on whether the
 * structure's user data object has been set.
 *
 * @param sb defines the node of which the user data should be queried.
 *
 * @return nonzero (true) if the user data object of this
 * SBML structure has been set, zero (false) otherwise.
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int 
SBase_isSetUserData(const SBase_t* sb);

/**
 * Unsets the user data of this node. 
 *
 * @param sb defines the node of which the user data should be unset.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SBase_t
 */
LIBSBML_EXTERN
int 
SBase_unsetUserData(SBase_t* sb);

END_C_DECLS
LIBSBML_CPP_NAMESPACE_END

#endif  /* !SWIG   */
#endif  /* SBase_h */
