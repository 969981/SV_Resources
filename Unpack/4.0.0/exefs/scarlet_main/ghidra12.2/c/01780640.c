/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01780640; name: FUN_01780640
 */


bool FUN_01780640(long param_1)

{
  bool bVar1;
  int iVar2;
  
  if (((*PTR_DAT_047dd000 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar2 != 0))
  {
    FUN_00100190(&LAB_02b2d484,PTR_DAT_047dd008,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd000);
  }
  *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
  bVar1 = *(int *)(param_1 + 0x138) == 5;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x13c) = 3;
  }
  return bVar1;
}


