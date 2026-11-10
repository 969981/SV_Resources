/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f2b10; name: _INIT_122
 */


void _INIT_122(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_LAB_047d37b8;
  puVar2 = PTR_DAT_047d37b0;
  puVar1 = PTR_DAT_047d37a8;
  if ((*PTR_DAT_047d37a8 & 1) == 0) {
    *(char **)PTR_DAT_047d37b0 =
         "static const char *boost::detail::core_typeid_<void (*)(const void *)>::name() [T = void (*)(const void *)]"
    ;
    *(undefined **)(puVar2 + 8) = puVar3;
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


