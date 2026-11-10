/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025373c8; name: FUN_025373c8
 */


void FUN_025373c8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  plVar8 = param_1 + 3;
  lVar4 = FUN_025375ec(param_1,(param_1[1] - *param_1 >> 4) + 1);
  lVar6 = *param_1;
  lVar10 = param_1[1];
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,lVar4 << 4,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar8 + 0xe8))();
    }
  }
  lVar11 = *plVar8;
  puVar9 = (undefined8 *)(lVar5 + (lVar10 - lVar6 >> 4) * 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    uVar2 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar2;
  }
  else {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar11;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    uVar2 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  lVar6 = *param_1;
  lVar10 = param_1[1];
  puVar1 = puVar9 + 2;
  if (lVar10 != lVar6) {
    do {
      puVar9 = puVar9 + -2;
      lVar10 = lVar10 + -0x10;
      FUN_013d364c(plVar8,puVar9,lVar10);
    } while (lVar6 != lVar10);
    lVar6 = *param_1;
  }
  lVar10 = param_1[2];
  *param_1 = (long)puVar9;
  param_1[1] = (long)puVar1;
  param_1[2] = lVar5 + lVar4 * 0x10;
  if (lVar6 == 0) {
    return;
  }
  plVar8 = (long *)*plVar8;
  uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if ((uVar7 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar8,lVar6,lVar10 - lVar6,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02537534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x18))(plVar8,lVar6,lVar10 - lVar6,8);
  return;
}


