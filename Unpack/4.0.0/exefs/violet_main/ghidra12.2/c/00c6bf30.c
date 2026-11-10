/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6bf30; name: FUN_00c6bf30
 */


void FUN_00c6bf30(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  lVar5 = FUN_0270c458(param_1,(param_1[1] - *param_1 >> 4) + 1);
  lVar11 = *param_1;
  lVar7 = param_1[1];
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar5 << 4,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  puVar1 = (undefined8 *)(lVar6 + (lVar7 - lVar11 >> 4) * 0x10);
  lVar11 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    uVar3 = *param_3;
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
  }
  else {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00c6c1ec:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    uVar3 = *param_3;
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  lVar11 = *param_1;
  lVar7 = param_1[1];
  puVar13 = puVar1;
  if (lVar7 != lVar11) {
    do {
      lVar12 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        uVar2 = *(undefined8 *)(lVar7 + -8);
        puVar13[-2] = *(undefined8 *)(lVar7 + -0x10);
        puVar13[-1] = uVar2;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00c6c1ec;
        *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar12;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        uVar2 = *(undefined8 *)(lVar7 + -8);
        puVar13[-2] = *(undefined8 *)(lVar7 + -0x10);
        puVar13[-1] = uVar2;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      lVar7 = lVar7 + -0x10;
      puVar13 = puVar13 + -2;
    } while (lVar11 != lVar7);
    lVar11 = *param_1;
  }
  *param_1 = (long)puVar13;
  param_1[1] = (long)(puVar1 + 2);
  lVar7 = param_1[2];
  param_1[2] = lVar6 + lVar5 * 0x10;
  if (lVar11 == 0) {
    return;
  }
  plVar10 = (long *)param_1[3];
  uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if ((uVar9 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar10,lVar11,lVar7 - lVar11,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00c6c0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar7 - lVar11,8);
  return;
}


