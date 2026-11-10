/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d7bb00; name: FUN_00d7bb00
 */


void FUN_00d7bb00(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  long *plVar6;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (uVar3 != 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(uVar3 + 0x28);
    if (((*PTR_DAT_047dca08 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047dca08), iVar1 != 0)) {
      FUN_00100190(&LAB_02a7e49c,PTR_DAT_047dca10,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dca08);
    }
    plVar6 = (long *)PTR_DAT_047dca10;
    pbVar4 = PTR_DAT_047dca08;
    lVar5 = *(long *)PTR_DAT_047dca10;
    DAT_0483c008 = lVar5;
    if ((uVar3 < *(ulong *)(lVar5 + 0x30)) ||
       (*(ulong *)(lVar5 + 0x30) + (long)*(int *)(lVar5 + 0x38) * 0x30 <= uVar3)) {
      plVar6 = *(long **)(lVar5 + 8);
      uVar2 = FUN_00c4e564(plVar6);
      if ((uVar2 & 1) == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6,uVar3,0x30,0x10);
      }
      else {
        FUN_00c48fe8(plVar6,uVar3,0x30,0x10);
      }
      *(int *)(lVar5 + 0x44) = *(int *)(lVar5 + 0x44) + -1;
      pbVar4 = PTR_DAT_047dca08;
      plVar6 = (long *)PTR_DAT_047dca10;
    }
    else {
      *(undefined8 *)(uVar3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
      *(ulong *)(lVar5 + 0x28) = uVar3;
      *(int *)(lVar5 + 0x40) = *(int *)(lVar5 + 0x40) + -1;
    }
    uVar3 = *(ulong *)(param_1 + 0x20);
    while (uVar3 != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(uVar3 + 0x28);
      if (((*pbVar4 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(pbVar4), plVar6 = (long *)PTR_DAT_047dca10, iVar1 != 0)) {
        FUN_00100190(&LAB_02a7e49c,PTR_DAT_047dca10,&PTR_LOOP_04483000);
        __cxa_guard_release(pbVar4);
        plVar6 = (long *)PTR_DAT_047dca10;
      }
      lVar5 = *plVar6;
      DAT_0483c008 = lVar5;
      if ((uVar3 < *(ulong *)(lVar5 + 0x30)) ||
         (*(ulong *)(lVar5 + 0x30) + (long)*(int *)(lVar5 + 0x38) * 0x30 <= uVar3)) {
        plVar6 = *(long **)(lVar5 + 8);
        uVar2 = FUN_00c4e564(plVar6);
        if ((uVar2 & 1) == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6,uVar3,0x30,0x10);
        }
        else {
          FUN_00c48fe8(plVar6,uVar3,0x30,0x10);
        }
        *(int *)(lVar5 + 0x44) = *(int *)(lVar5 + 0x44) + -1;
        pbVar4 = PTR_DAT_047dca08;
        plVar6 = (long *)PTR_DAT_047dca10;
      }
      else {
        *(undefined8 *)(uVar3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
        *(ulong *)(lVar5 + 0x28) = uVar3;
        *(int *)(lVar5 + 0x40) = *(int *)(lVar5 + 0x40) + -1;
      }
      uVar3 = *(ulong *)(param_1 + 0x20);
    }
  }
  return;
}


