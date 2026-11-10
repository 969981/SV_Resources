/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226f174; name: FUN_0226f174
 */


void FUN_0226f174(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*PTR_DAT_047d8840 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8840);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047db070,PTR_DAT_047d8848,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8840);
    }
  }
  lVar2 = *(long *)PTR_DAT_047d8848;
  *(long *)PTR_DAT_047d8850 = lVar2;
  uVar3 = *param_1;
  *(undefined2 *)(lVar2 + 0x2c8) = *(undefined2 *)(param_1 + 1);
  *(undefined8 *)(lVar2 + 0x2c0) = uVar3;
  lVar2 = *(long *)(lVar2 + 0x88);
  *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)param_1;
  *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)((long)param_1 + 4);
  *(undefined1 *)(lVar2 + 0x48) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(lVar2 + 0x49) = *(undefined1 *)((long)param_1 + 9);
  return;
}


