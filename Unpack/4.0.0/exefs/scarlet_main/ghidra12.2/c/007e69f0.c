/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e69f0; name: FUN_007e69f0
 */


void FUN_007e69f0(long *param_1)

{
  undefined *puVar1;
  
  FUN_007eeea8();
  puVar1 = PTR_DAT_047d1488;
  *(undefined2 *)((long)param_1 + 0xa6) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x15] = *(long *)PTR_DAT_047d0970;
  param_1[0x16] = 0;
  return;
}


