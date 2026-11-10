/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0145999c; name: FUN_0145999c
 */


void FUN_0145999c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_8 [8];
  
  if (((*PTR_DAT_047d8a48 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8a48,param_1), iVar3 != 0)) {
    FUN_00100190(&LAB_00a2e374,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a48);
  }
  uVar4 = FUN_01459a64(auStack_8,param_1);
  puVar2 = PTR_DAT_047d8a50;
  FUN_0145a4c0(PTR_DAT_047d8a50,uVar4);
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


