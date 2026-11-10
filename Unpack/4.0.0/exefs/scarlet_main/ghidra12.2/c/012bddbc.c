/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012bddbc; name: FUN_012bddbc
 */


void FUN_012bddbc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047d8858 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047d8858);
    if (iVar3 != 0) {
      FUN_00100190(PTR_LAB_047dd600,PTR_DAT_047d8860,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8858);
    }
  }
  uVar4 = FUN_012c09c0(param_1);
  puVar2 = PTR_DAT_047d8860;
  FUN_012cd648(PTR_DAT_047d8860,uVar4);
  if (0x3ff < DAT_04865a18) {
                    /* WARNING: Subroutine does not return */
    FUN_01dace90();
  }
  lVar1 = 0;
  if (*(long *)puVar2 != 0) {
    lVar1 = *(long *)puVar2 + 0x20;
  }
  *(long *)(&DAT_04863a18 + (ulong)DAT_04865a18 * 8) = lVar1;
  DAT_04865a18 = DAT_04865a18 + 1;
  return;
}


