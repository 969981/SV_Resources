/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01802630; name: FUN_01802630
 */


void FUN_01802630(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  
  plVar9 = param_1 + 3;
  lVar3 = FUN_018028dc(param_1,(param_1[1] - *param_1 >> 4) * -0x71c71c71c71c71c7 + 1);
  lVar7 = *param_1;
  lVar10 = param_1[1];
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,lVar3 * 0x90,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar9 + 0xe8))();
    }
  }
  lVar12 = *plVar9;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  lVar7 = lVar10 - lVar7 >> 4;
  puVar11 = (undefined8 *)(lVar4 + lVar7 * 0x10);
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  FUN_01802940(puVar11,param_2);
  *(undefined8 *)(lVar4 + lVar7 * 0x10 + 0x80) = *(undefined8 *)(param_2 + 0x48);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  lVar7 = *param_1;
  lVar10 = param_1[1];
  puVar1 = puVar11 + 0x12;
  if (lVar10 == lVar7) {
    lVar10 = lVar7;
  }
  else {
    do {
      puVar11 = puVar11 + -0x12;
      lVar10 = lVar10 + -0x90;
      FUN_00cbf394(plVar9,puVar11,lVar10);
    } while (lVar7 != lVar10);
    lVar7 = *param_1;
    lVar10 = param_1[1];
  }
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar1;
  lVar12 = param_1[2];
  param_1[2] = lVar4 + lVar3 * 0x90;
  while (lVar3 = lVar10, lVar3 != lVar7) {
    pcVar8 = *(code **)(lVar3 + -0x88);
    lVar10 = lVar3 + -0x90;
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(lVar3 + -0x80) = 0;
      *(undefined8 *)(lVar3 + -0x78) = 0;
      *(undefined8 *)(lVar3 + -0x90) = 0;
      *(undefined8 *)(lVar3 + -0x88) = 0;
      (*pcVar8)(lVar3 + -0x70);
    }
  }
  if (lVar7 == 0) {
    return;
  }
  plVar9 = (long *)*plVar9;
  uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0180282c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,lVar12 - lVar7,0x10);
    return;
  }
  FUN_00c48fe8(plVar9,lVar7,lVar12 - lVar7,0x10);
  return;
}


