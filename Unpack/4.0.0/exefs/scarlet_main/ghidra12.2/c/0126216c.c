/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0126216c; name: FUN_0126216c
 */


void FUN_0126216c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  
  plVar8 = param_1 + 3;
  lVar3 = FUN_02188d58(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar5 = *param_1;
  lVar7 = param_1[1];
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,lVar3 << 3,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar8 + 0xe8))();
    }
  }
  lVar10 = *plVar8;
  puVar9 = (undefined8 *)(lVar4 + (lVar7 - lVar5 >> 3) * 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    *puVar9 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar9 = *param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  lVar5 = *param_1;
  lVar7 = param_1[1];
  puVar1 = puVar9 + 1;
  if (lVar7 != lVar5) {
    puVar9 = puVar9 + -1;
    FUN_0100adfc(plVar8,puVar9,lVar7 + -8);
    if (lVar7 + -8 != lVar5) {
      do {
        puVar9 = puVar9 + -1;
        FUN_0100adfc(plVar8,puVar9,lVar7 + -0x10);
        lVar7 = lVar7 + -8;
      } while (lVar5 + 8 != lVar7);
    }
    lVar5 = *param_1;
  }
  lVar7 = param_1[2];
  *param_1 = (long)puVar9;
  param_1[1] = (long)puVar1;
  param_1[2] = lVar4 + lVar3 * 8;
  if (lVar5 == 0) {
    return;
  }
  plVar8 = (long *)*plVar8;
  uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x012622e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,lVar7 - lVar5,8);
    return;
  }
  FUN_00c48fe8(plVar8,lVar5,lVar7 - lVar5,8);
  return;
}


