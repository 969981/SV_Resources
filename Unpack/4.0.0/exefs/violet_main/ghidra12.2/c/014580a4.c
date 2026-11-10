/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014580a4; name: FUN_014580a4
 */


void FUN_014580a4(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  
  plVar14 = param_1 + 3;
  lVar7 = FUN_027159d0(param_1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333 + 1);
  lVar11 = *param_1;
  lVar12 = param_1[1];
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,lVar7 * 0x28,8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)*plVar14 + 0xe8))();
    }
  }
  lVar13 = *plVar14;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 != 0) {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar13;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  }
  uVar2 = param_2[2];
  plVar3 = (long *)param_2[3];
  lVar11 = lVar12 - lVar11 >> 3;
  param_2[3] = 0;
  lVar12 = lVar8 + lVar11 * 8;
  uVar4 = param_2[1];
  uVar5 = *param_3;
  puVar15 = (undefined8 *)(lVar8 + lVar11 * 8);
  *puVar15 = *param_2;
  *(long **)(lVar12 + 0x18) = plVar3;
  *(undefined8 *)(lVar12 + 8) = uVar4;
  *(undefined8 *)(lVar12 + 0x10) = uVar2;
  if (plVar3 == (long *)0x0) {
    *(undefined1 *)(lVar8 + lVar11 * 8 + 0x20) = uVar5;
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    *(undefined1 *)(lVar8 + lVar11 * 8 + 0x20) = uVar5;
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  lVar11 = *param_1;
  lVar12 = param_1[1];
  puVar1 = puVar15 + 5;
  if (lVar12 == lVar11) {
    lVar12 = lVar11;
  }
  else {
    puVar15 = puVar15 + -5;
    FUN_01457844(plVar14,puVar15,lVar12 + -0x28);
    if (lVar12 + -0x28 != lVar11) {
      do {
        puVar15 = puVar15 + -5;
        FUN_01457844(plVar14,puVar15,lVar12 + -0x50);
        lVar12 = lVar12 + -0x28;
      } while (lVar11 + 0x28 != lVar12);
    }
    lVar11 = *param_1;
    lVar12 = param_1[1];
  }
  lVar13 = param_1[2];
  param_1[2] = lVar8 + lVar7 * 0x28;
  *param_1 = (long)puVar15;
  param_1[1] = (long)puVar1;
  if (lVar12 != lVar11) {
    if (*(long **)(lVar12 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar12 + -0x10) + 0x20))();
    }
    if (lVar12 + -0x28 != lVar11) {
      do {
        if (*(long **)(lVar12 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar12 + -0x38) + 0x20))();
        }
        lVar12 = lVar12 + -0x28;
      } while (lVar11 + 0x28 != lVar12);
    }
  }
  if (lVar11 == 0) {
    return;
  }
  plVar14 = (long *)*plVar14;
  uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
  if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x014582f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar11,lVar13 - lVar11,8);
    return;
  }
  FUN_00c48fe8(plVar14,lVar11,lVar13 - lVar11,8);
  return;
}


