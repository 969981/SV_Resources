/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012bb38c; name: FUN_012bb38c
 */


void FUN_012bb38c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  
  plVar10 = param_1 + 3;
  lVar3 = FUN_012bb670(param_1,(param_1[1] - *param_1 >> 4) * -0x71c71c71c71c71c7 + 1);
  lVar8 = *param_1;
  lVar11 = param_1[1];
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,lVar3 * 0x90,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xe8))();
    }
  }
  lVar13 = *plVar10;
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
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar13;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  lVar8 = lVar11 - lVar8 >> 4;
  puVar12 = (undefined8 *)(lVar4 + lVar8 * 0x10);
  puVar12[2] = 0;
  puVar12[3] = 0;
  lVar8 = lVar4 + lVar8 * 0x10;
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined8 *)(lVar8 + 0x20) = *param_2;
  uVar9 = param_2[1];
  param_2[1] = 0;
  *(undefined8 *)(lVar8 + 0x28) = uVar9;
  *puVar12 = &LAB_015f3288;
  *(undefined1 **)(lVar8 + 8) = &LAB_02b7a844;
  *(undefined1 **)(lVar8 + 0x10) = &LAB_02b7a8bc;
  *(undefined1 **)(lVar8 + 0x18) = &LAB_02b7a984;
  *(undefined8 *)(lVar8 + 0x80) = param_2[2];
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  lVar8 = *param_1;
  lVar11 = param_1[1];
  puVar1 = puVar12 + 0x12;
  if (lVar11 == lVar8) {
    lVar11 = lVar8;
  }
  else {
    do {
      puVar12 = puVar12 + -0x12;
      lVar11 = lVar11 + -0x90;
      FUN_00cbf394(plVar10,puVar12,lVar11);
    } while (lVar8 != lVar11);
    lVar8 = *param_1;
    lVar11 = param_1[1];
  }
  *param_1 = (long)puVar12;
  param_1[1] = (long)puVar1;
  lVar13 = param_1[2];
  param_1[2] = lVar4 + lVar3 * 0x90;
  while (lVar3 = lVar11, lVar3 != lVar8) {
    pcVar7 = *(code **)(lVar3 + -0x88);
    lVar11 = lVar3 + -0x90;
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar3 + -0x80) = 0;
      *(undefined8 *)(lVar3 + -0x78) = 0;
      *(undefined8 *)(lVar3 + -0x90) = 0;
      *(undefined8 *)(lVar3 + -0x88) = 0;
      (*pcVar7)(lVar3 + -0x70);
    }
  }
  if (lVar8 == 0) {
    return;
  }
  plVar10 = (long *)*plVar10;
  uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar6 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x012bb5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar13 - lVar8,0x10);
    return;
  }
  FUN_00c48fe8(plVar10,lVar8,lVar13 - lVar8,0x10);
  return;
}


