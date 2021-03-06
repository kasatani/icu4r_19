 extern  void 	icu_regex_free (ICURegexp *ptr);
 extern  VALUE 	icu_reg_s_alloc (VALUE klass);
 extern  VALUE 	icu_reg_initialize_m (int argc, VALUE *argv, VALUE self);
 extern  VALUE 	icu_reg_new (UChar *s, long len, int options) ;
 extern  VALUE 	icu_reg_clone (VALUE obj);
 extern  VALUE 	icu_reg_comp (VALUE str);
 extern  VALUE 	icu_reg_from_rb_reg (VALUE re);
 extern  VALUE 	icu_reg_to_u (VALUE self);
 extern  VALUE 	icu_reg_split (VALUE self, VALUE str, VALUE limit);
 extern  VALUE 	icu_reg_nth_match (VALUE re, long nth);
 extern  VALUE 	icu_reg_range (VALUE re, int nth, long *start, long *end);
 extern  VALUE 	icu_reg_match (VALUE re, VALUE str);
 extern  VALUE 	icu_reg_eqq (VALUE re, VALUE str);
 extern  int 	icu_reg_find_next (VALUE pat);
 extern  VALUE 	icu_reg_get_replacement (VALUE pat, VALUE repl_text, long prev_end);
 extern  VALUE 	icu_reg_get_prematch (VALUE pat, long prev_end);
 extern  VALUE 	icu_reg_get_tail (VALUE pat, long prev_end);
 extern  VALUE 	icu_reg_from_rb_str (int argc, VALUE *argv, VALUE obj);
 extern  VALUE 	icu_umatch_range (VALUE match, VALUE index);
 extern  VALUE 	icu_umatch_size (VALUE match);
 extern  VALUE 	icu_umatch_init (VALUE self, VALUE re);
 extern  VALUE 	icu_umatch_aref (VALUE match, VALUE idx);
 extern  VALUE 	icu_umatch_new (VALUE re);
 extern  long   icu_group_count(VALUE re);
 extern  long   icu_reg_search(VALUE re, VALUE str, int pos, int reverse);

 extern  void 	initialize_uregexp (void);
