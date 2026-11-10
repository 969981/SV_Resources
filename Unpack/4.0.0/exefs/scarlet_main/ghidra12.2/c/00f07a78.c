/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f07a78; name: FUN_00f07a78
 */


void FUN_00f07a78(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  lVar3 = FUN_00f07d7c(param_1,(param_1[1] - *param_1 >> 5) + 1);
  lVar10 = *param_1;
  lVar5 = param_1[1];
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar3 << 5,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  puVar1 = (undefined8 *)(lVar4 + (lVar5 - lVar10 >> 5) * 0x20);
  lVar10 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    uVar13 = param_2[1];
    uVar8 = *param_2;
    *(undefined4 *)(puVar1 + 2) = *param_3;
    puVar1[1] = uVar13;
    *puVar1 = uVar8;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00f07d64:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    uVar13 = param_2[1];
    uVar8 = *param_2;
    *(undefined4 *)(puVar1 + 2) = *param_3;
    puVar1[1] = uVar13;
    *puVar1 = uVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  lVar10 = *param_1;
  lVar5 = param_1[1];
  puVar12 = puVar1;
  if (lVar5 != lVar10) {
    do {
      lVar11 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 == 0) {
        uVar8 = *(undefined8 *)(lVar5 + -8);
        puVar12[-3] = *(undefined8 *)(lVar5 + -0x18);
        puVar12[-1] = uVar8;
        uVar8 = *(undefined8 *)(lVar5 + -0x20);
        puVar12[-2] = *(undefined8 *)(lVar5 + -0x10);
        puVar12[-4] = uVar8;
      }
      else {
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00f07d64;
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar11;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        uVar8 = *(undefined8 *)(lVar5 + -8);
        puVar12[-3] = *(undefined8 *)(lVar5 + -0x18);
        puVar12[-1] = uVar8;
        uVar8 = *(undefined8 *)(lVar5 + -0x20);
        puVar12[-2] = *(undefined8 *)(lVar5 + -0x10);
        puVar12[-4] = uVar8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      lVar5 = lVar5 + -0x20;
      puVar12 = puVar12 + -4;
    } while (lVar10 != lVar5);
    lVar10 = *param_1;
  }
  *param_1 = (long)puVar12;
  param_1[1] = (long)(puVar1 + 4);
  lVar5 = param_1[2];
  param_1[2] = lVar4 + lVar3 * 0x20;
  if (lVar10 == 0) {
    return;
  }
  plVar9 = (long *)param_1[3];
  uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if ((uVar7 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar9,lVar10,lVar5 - lVar10,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00f07c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar5 - lVar10,0x10);
  return;
}


