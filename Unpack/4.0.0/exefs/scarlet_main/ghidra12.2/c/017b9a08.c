/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b9a08; name: FUN_017b9a08
 */


void FUN_017b9a08(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  lVar3 = FUN_029dbec8(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar9 = *param_1;
  lVar5 = param_1[1];
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar3 << 3,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  puVar1 = (undefined8 *)(lVar4 + (lVar5 - lVar9 >> 3) * 8);
  lVar9 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    *puVar1 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_017b9c80:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar1 = *param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  lVar9 = *param_1;
  lVar5 = param_1[1];
  puVar10 = puVar1;
  if (lVar5 != lVar9) {
    do {
      lVar11 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 == 0) {
        puVar10[-1] = *(undefined8 *)(lVar5 + -8);
      }
      else {
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_017b9c80;
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar11;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        puVar10[-1] = *(undefined8 *)(lVar5 + -8);
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      lVar5 = lVar5 + -8;
      puVar10 = puVar10 + -1;
    } while (lVar9 != lVar5);
    lVar9 = *param_1;
  }
  lVar5 = param_1[2];
  *param_1 = (long)puVar10;
  param_1[1] = (long)(puVar1 + 1);
  param_1[2] = lVar4 + lVar3 * 8;
  if (lVar9 == 0) {
    return;
  }
  plVar8 = (long *)param_1[3];
  uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar7 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x017b9bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar5 - lVar9,8);
    return;
  }
  FUN_00c48fe8(plVar8,lVar9,lVar5 - lVar9,8);
  return;
}


