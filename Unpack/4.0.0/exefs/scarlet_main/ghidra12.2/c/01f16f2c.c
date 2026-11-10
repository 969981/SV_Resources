/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f16f2c; name: FUN_01f16f2c
 */


void FUN_01f16f2c(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_0126a9c0();
  if (lVar3 != 0) {
    FUN_019b511c();
    DAT_0483a570 = DAT_0483a578;
    if (DAT_0483a578 == 0) {
      lVar3 = FUN_01f6d738(lVar3);
      if ((*PTR_DAT_047d8cc8 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(PTR_DAT_047d8cc8);
        if (iVar2 != 0) {
          FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8cc8);
        }
      }
      lVar4 = *(long *)PTR_DAT_047d8cd0;
      *(long *)PTR_DAT_047d8cd8 = lVar4;
      if (lVar4 != 0) {
        lVar1 = 0;
        if (lVar3 != 0) {
          lVar1 = lVar3 + 0x28;
        }
        FUN_01793e80(lVar4,lVar1);
      }
    }
  }
  FUN_019b511c();
  DAT_0483a570 = DAT_0483a578;
  if (DAT_0483a578 == 0) {
    return;
  }
  FUN_01f6d78c();
  return;
}


