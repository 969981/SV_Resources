/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00377e40; name: FUN_00377e40
 */


void FUN_00377e40(void)

{
  void *__s;
  
  __s = (void *)FUN_0049e770(PTR_FUN_047cba38,0x3ef8);
  if (__s != (void *)0x0) {
    memset(__s,0,0x3ef8);
    FUN_00377ff0(__s);
  }
  *(long *)PTR_DAT_047cc628 = (long)__s + 0x1440;
  DAT_047f1568 = __s;
  *(void **)PTR_DAT_047ccf78 = __s;
  *(long *)PTR_DAT_047ccb88 = (long)__s + 0x21c0;
  *(long *)PTR_DAT_047ccae0 = (long)__s + 0x3c50;
  return;
}


