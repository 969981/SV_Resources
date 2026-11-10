/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fab02c; name: FUN_00fab02c
 */


void FUN_00fab02c(long param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  
  puVar4 = (undefined8 *)
           (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),0x38,8);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0xe8))();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
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
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  lVar8 = *param_2;
  puVar1 = (undefined8 *)PTR_DAT_047d8b70;
  if (lVar8 != 0) {
    puVar1 = (undefined8 *)(lVar8 + 0x30);
  }
  puVar2 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar8 != 0) {
    puVar2 = (undefined8 *)(lVar8 + 0x38);
  }
  uVar7 = *puVar2;
  uVar10 = 0;
  if (lVar8 != 0) {
    uVar10 = *(undefined8 *)(lVar8 + 0x40);
  }
  puVar4[2] = *puVar1;
  puVar4[3] = uVar7;
  puVar4[4] = uVar10;
  puVar4[5] = 0;
  param_2 = (long *)*param_2;
  if (param_2 == (long *)0x0) {
    puVar4[5] = 0;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    plVar9 = (long *)puVar4[5];
    puVar4[5] = param_2;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  puVar4[6] = *param_3;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  *puVar4 = 0;
  puVar4[1] = puVar4[2];
  uVar6 = FUN_00fab268(param_1,puVar4);
  if ((puVar4 == (undefined8 *)0x0) || ((uVar6 & 1) != 0)) {
    return;
  }
  if ((long *)puVar4[5] != (long *)0x0) {
    (**(code **)(*(long *)puVar4[5] + 0x20))();
  }
  plVar9 = *(long **)(param_1 + 0x38);
  uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if ((uVar6 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar9,puVar4,0x38,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00fab1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,puVar4,0x38,8);
  return;
}


