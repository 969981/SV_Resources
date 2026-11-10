/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0182fe78; name: FUN_0182fe78
 */


void FUN_0182fe78(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  
  plVar10 = param_1 + 3;
  lVar3 = FUN_018301b4(param_1,(param_1[1] - *param_1 >> 4) * -0x71c71c71c71c71c7 + 1);
  lVar7 = param_1[1] - *param_1 >> 4;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,lVar3 * 0x90,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xe8))();
    }
  }
  puVar11 = (undefined8 *)(lVar4 + lVar7 * 0x10);
  lVar12 = *plVar10;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    lVar5 = lVar4 + lVar7 * 0x10;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    FUN_0182f280(lVar5 + 0x20,param_2);
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 0x30) = uVar8;
    *puVar11 = &LAB_017097b8;
    *(code **)(lVar5 + 8) = FUN_029fcc68;
    *(code **)(lVar5 + 0x10) = FUN_029fcdd8;
    *(code **)(lVar5 + 0x18) = FUN_029fceb0;
    lVar7 = *(long *)(param_2 + 0x18);
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar11[4] = 0;
    puVar11[5] = 0;
    lVar7 = lVar4 + lVar7 * 0x10;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    FUN_0182f280(lVar7 + 0x20,param_2);
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x30) = uVar8;
    *puVar11 = &LAB_017097b8;
    *(code **)(lVar7 + 8) = FUN_029fcc68;
    *(code **)(lVar7 + 0x10) = FUN_029fcdd8;
    *(code **)(lVar7 + 0x18) = FUN_029fceb0;
    *(undefined8 *)(lVar7 + 0x80) = *(undefined8 *)(param_2 + 0x18);
    lVar7 = *(long *)(lVar5 + 0x80) + -1;
  }
  *(long *)(lVar5 + 0x80) = lVar7;
  puVar1 = puVar11 + 0x12;
  lVar7 = *param_1;
  lVar12 = param_1[1];
  if (lVar12 == lVar7) {
    lVar12 = lVar7;
  }
  else {
    do {
      puVar11 = puVar11 + -0x12;
      lVar12 = lVar12 + -0x90;
      FUN_00cbf394(plVar10,puVar11,lVar12);
    } while (lVar7 != lVar12);
    lVar7 = *param_1;
    lVar12 = param_1[1];
  }
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar1;
  lVar5 = param_1[2];
  param_1[2] = lVar4 + lVar3 * 0x90;
  while (lVar3 = lVar12, lVar3 != lVar7) {
    pcVar9 = *(code **)(lVar3 + -0x88);
    lVar12 = lVar3 + -0x90;
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(lVar3 + -0x80) = 0;
      *(undefined8 *)(lVar3 + -0x78) = 0;
      *(undefined8 *)(lVar3 + -0x90) = 0;
      *(undefined8 *)(lVar3 + -0x88) = 0;
      (*pcVar9)(lVar3 + -0x70);
    }
  }
  if (lVar7 == 0) {
    return;
  }
  plVar10 = (long *)*plVar10;
  uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x018300ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,lVar5 - lVar7,0x10);
    return;
  }
  FUN_00c48fe8(plVar10,lVar7,lVar5 - lVar7,0x10);
  return;
}


