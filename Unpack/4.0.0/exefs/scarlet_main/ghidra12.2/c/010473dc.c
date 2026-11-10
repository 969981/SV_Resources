/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010473dc; name: FUN_010473dc
 */


void FUN_010473dc(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  lVar7 = *param_3;
  puVar1 = (undefined8 *)PTR_DAT_047d8b70;
  if (lVar7 != 0) {
    puVar1 = (undefined8 *)(lVar7 + 0x30);
  }
  puVar2 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar7 != 0) {
    puVar2 = (undefined8 *)(lVar7 + 0x38);
  }
  uVar6 = *puVar2;
  uVar8 = 0;
  if (lVar7 != 0) {
    uVar8 = *(undefined8 *)(lVar7 + 0x40);
  }
  *param_2 = *puVar1;
  param_2[1] = uVar6;
  param_2[2] = uVar8;
  param_2[3] = 0;
  param_3 = (long *)*param_3;
  if (param_3 == (long *)0x0) {
    param_2[3] = 0;
  }
  else {
    (**(code **)(*param_3 + 0x18))(param_3);
    plVar5 = (long *)param_2[3];
    param_2[3] = param_3;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


