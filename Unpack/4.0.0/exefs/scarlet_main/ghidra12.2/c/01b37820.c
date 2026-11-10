/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b37820; name: FUN_01b37820
 */


undefined8 FUN_01b37820(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  
  if (((DAT_04806118 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04806118), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04806118);
  }
  fVar2 = (float)FUN_01b37880();
  FUN_00c46da0((double)fVar2,param_1);
  return 1;
}


