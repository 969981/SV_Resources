/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ddd74; name: FUN_018ddd74
 */


void FUN_018ddd74(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

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
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  
  plVar12 = param_1 + 3;
  lVar5 = FUN_018de0b4(param_1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333 + 1);
  lVar10 = *param_1;
  lVar11 = param_1[1];
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,lVar5 * 0x28,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)*plVar12 + 0xe8))();
    }
  }
  lVar13 = *plVar12;
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
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar13;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  uVar2 = *param_3;
  lVar10 = lVar11 - lVar10 >> 3;
  uVar3 = *param_4;
  puVar14 = (undefined8 *)(lVar6 + lVar10 * 8);
  *puVar14 = *param_2;
  lVar11 = lVar6 + lVar10 * 8;
  *(undefined8 *)(lVar11 + 8) = param_2[1];
  *(undefined8 *)(lVar11 + 0x10) = param_2[2];
  plVar8 = (long *)param_2[3];
  *(long **)(lVar11 + 0x18) = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  lVar10 = lVar6 + lVar10 * 8;
  *(undefined4 *)(lVar10 + 0x20) = uVar2;
  *(undefined4 *)(lVar10 + 0x24) = uVar3;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  lVar10 = *param_1;
  lVar11 = param_1[1];
  puVar1 = puVar14 + 5;
  if (lVar11 == lVar10) {
    lVar11 = lVar10;
  }
  else {
    puVar14 = puVar14 + -5;
    FUN_01616d48(plVar12,puVar14,lVar11 + -0x28);
    if (lVar11 + -0x28 != lVar10) {
      do {
        puVar14 = puVar14 + -5;
        FUN_01616d48(plVar12,puVar14,lVar11 + -0x50);
        lVar11 = lVar11 + -0x28;
      } while (lVar10 + 0x28 != lVar11);
    }
    lVar11 = *param_1;
    lVar10 = param_1[1];
  }
  *param_1 = (long)puVar14;
  param_1[1] = (long)puVar1;
  lVar13 = param_1[2];
  param_1[2] = lVar6 + lVar5 * 0x28;
  if (lVar10 != lVar11) {
    if (*(long **)(lVar10 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar10 + -0x10) + 0x20))();
    }
    if (lVar10 + -0x28 != lVar11) {
      do {
        if (*(long **)(lVar10 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar10 + -0x38) + 0x20))();
        }
        lVar10 = lVar10 + -0x28;
      } while (lVar11 + 0x28 != lVar10);
    }
  }
  if (lVar11 == 0) {
    return;
  }
  plVar12 = (long *)*plVar12;
  uVar9 = (**(code **)(*plVar12 + 0xf8))(plVar12);
  if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x018ddfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar11,lVar13 - lVar11,8);
    return;
  }
  FUN_00c48fe8(plVar12,lVar11,lVar13 - lVar11,8);
  return;
}


