/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01205738; name: FUN_01205738
 */


void FUN_01205738(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  
  plVar12 = param_1 + 3;
  lVar4 = FUN_0299b7b0(param_1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333 + 1);
  lVar9 = *param_1;
  lVar10 = param_1[1];
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,lVar4 * 0x28,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar12 + 0xe8))();
    }
  }
  lVar11 = *plVar12;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar11;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  lVar9 = lVar10 - lVar9 >> 3;
  puVar13 = (undefined8 *)(lVar5 + lVar9 * 8);
  uVar2 = *param_3;
  *puVar13 = *param_2;
  lVar10 = lVar5 + lVar9 * 8;
  *(undefined8 *)(lVar10 + 8) = param_2[1];
  *(undefined8 *)(lVar10 + 0x10) = param_2[2];
  plVar7 = (long *)param_2[3];
  *(long **)(lVar10 + 0x18) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined4 *)(lVar5 + lVar9 * 8 + 0x20) = uVar2;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  lVar9 = *param_1;
  lVar10 = param_1[1];
  puVar1 = puVar13 + 5;
  if (lVar10 == lVar9) {
    lVar10 = lVar9;
  }
  else {
    puVar13 = puVar13 + -5;
    FUN_0111c5a8(plVar12,puVar13,lVar10 + -0x28);
    if (lVar10 + -0x28 != lVar9) {
      do {
        puVar13 = puVar13 + -5;
        FUN_0111c5a8(plVar12,puVar13,lVar10 + -0x50);
        lVar10 = lVar10 + -0x28;
      } while (lVar9 + 0x28 != lVar10);
    }
    lVar9 = *param_1;
    lVar10 = param_1[1];
  }
  lVar11 = param_1[2];
  param_1[2] = lVar5 + lVar4 * 0x28;
  *param_1 = (long)puVar13;
  param_1[1] = (long)puVar1;
  if (lVar10 != lVar9) {
    if (*(long **)(lVar10 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar10 + -0x10) + 0x20))();
    }
    if (lVar10 + -0x28 != lVar9) {
      do {
        if (*(long **)(lVar10 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar10 + -0x38) + 0x20))();
        }
        lVar10 = lVar10 + -0x28;
      } while (lVar9 + 0x28 != lVar10);
    }
  }
  if (lVar9 == 0) {
    return;
  }
  plVar12 = (long *)*plVar12;
  uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
  if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01205918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,lVar11 - lVar9,8);
    return;
  }
  FUN_00c48fe8(plVar12,lVar9,lVar11 - lVar9,8);
  return;
}


