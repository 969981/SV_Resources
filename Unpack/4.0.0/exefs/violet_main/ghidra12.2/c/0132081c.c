/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0132081c; name: FUN_0132081c
 */


void FUN_0132081c(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  
  plVar14 = param_1 + 3;
  lVar5 = FUN_01320c20(param_1,(param_1[1] - *param_1 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1);
  lVar10 = *param_1;
  lVar11 = param_1[1];
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,lVar5 * 0xb0,0x10);
    if (lVar6 == 0) {
      (**(code **)(*(long *)*plVar14 + 0xe8))();
    }
  }
  lVar16 = *plVar14;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar16;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  lVar10 = lVar11 - lVar10 >> 4;
  uVar2 = *param_4;
  uVar3 = *param_3;
  puVar15 = (undefined8 *)(lVar6 + lVar10 * 0x10);
  *puVar15 = *param_2;
  lVar11 = lVar6 + lVar10 * 0x10;
  *(undefined8 *)(lVar11 + 8) = param_2[1];
  *(undefined8 *)(lVar11 + 0x10) = param_2[2];
  plVar8 = (long *)param_2[3];
  *(long **)(lVar11 + 0x18) = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  lVar11 = lVar6 + lVar10 * 0x10;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined4 *)(lVar11 + 0x20) = uVar3;
  *(undefined4 *)(lVar11 + 0x24) = uVar2;
  *(undefined8 *)(lVar11 + 0x38) = 0;
  *(undefined8 *)(lVar11 + 0x40) = 0;
  *(undefined8 *)(lVar11 + 0x48) = 0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,lVar6 + lVar10 * 0x10 + 0x50);
    uVar12 = param_5[3];
    *(undefined8 *)(lVar11 + 0x38) = param_5[1];
    *(undefined8 *)(lVar11 + 0x48) = uVar12;
    uVar12 = *param_5;
    *(undefined8 *)(lVar11 + 0x40) = param_5[2];
    *(undefined8 *)(lVar11 + 0x30) = uVar12;
  }
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  lVar10 = *param_1;
  lVar11 = param_1[1];
  puVar1 = puVar15 + 0x16;
  if (lVar11 == lVar10) {
    lVar11 = lVar10;
  }
  else {
    puVar15 = puVar15 + -0x16;
    FUN_013f166c(plVar14,puVar15,lVar11 + -0xb0);
    if (lVar11 + -0xb0 != lVar10) {
      do {
        puVar15 = puVar15 + -0x16;
        FUN_013f166c(plVar14,puVar15,lVar11 + -0x160);
        lVar11 = lVar11 + -0xb0;
      } while (lVar10 + 0xb0 != lVar11);
    }
    lVar10 = *param_1;
    lVar11 = param_1[1];
  }
  *param_1 = (long)puVar15;
  param_1[1] = (long)puVar1;
  lVar16 = param_1[2];
  param_1[2] = lVar6 + lVar5 * 0xb0;
  if (lVar11 != lVar10) {
    pcVar13 = *(code **)(lVar11 + -0x78);
    if (pcVar13 != (code *)0x0) {
      *(undefined8 *)(lVar11 + -0x70) = 0;
      *(undefined8 *)(lVar11 + -0x68) = 0;
      *(undefined8 *)(lVar11 + -0x80) = 0;
      *(undefined8 *)(lVar11 + -0x78) = 0;
      (*pcVar13)(lVar11 + -0x60);
    }
    if (*(long **)(lVar11 + -0x98) != (long *)0x0) {
      (**(code **)(**(long **)(lVar11 + -0x98) + 0x20))();
    }
    if (lVar11 + -0xb0 != lVar10) {
      do {
        pcVar13 = *(code **)(lVar11 + -0x128);
        if (pcVar13 != (code *)0x0) {
          *(undefined8 *)(lVar11 + -0x120) = 0;
          *(undefined8 *)(lVar11 + -0x118) = 0;
          *(undefined8 *)(lVar11 + -0x130) = 0;
          *(undefined8 *)(lVar11 + -0x128) = 0;
          (*pcVar13)(lVar11 + -0x110);
        }
        if (*(long **)(lVar11 + -0x148) != (long *)0x0) {
          (**(code **)(**(long **)(lVar11 + -0x148) + 0x20))();
        }
        lVar11 = lVar11 + -0xb0;
      } while (lVar10 + 0xb0 != lVar11);
    }
  }
  if (lVar10 == 0) {
    return;
  }
  plVar14 = (long *)*plVar14;
  uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
  if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01320b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,lVar16 - lVar10,0x10);
    return;
  }
  FUN_00c48fe8(plVar14,lVar10,lVar16 - lVar10,0x10);
  return;
}


