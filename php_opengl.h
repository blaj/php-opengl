/* opengl extension for PHP */

#ifndef PHP_OPENGL_H
# define PHP_OPENGL_H

extern zend_module_entry opengl_module_entry;
# define phpext_opengl_ptr &opengl_module_entry

# define PHP_OPENGL_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_OPENGL)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_OPENGL_H */
