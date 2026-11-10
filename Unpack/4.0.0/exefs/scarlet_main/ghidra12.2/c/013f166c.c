/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013f166c; name: FUN_013f166c
 */


void FUN_013f166c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = *param_1;
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
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar9;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  uVar1 = *(undefined4 *)(param_3 + 4);
  uVar2 = *(undefined4 *)((long)param_3 + 0x24);
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  plVar5 = (long *)param_3[3];
  param_2[3] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 4) = uVar1;
  *(undefined4 *)((long)param_2 + 0x24) = uVar2;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  if ((code *)param_3[9] != (code *)0x0) {
    (*(code *)param_3[9])(param_3 + 10,param_2 + 10);
    uVar9 = param_3[6];
    uVar7 = param_3[7];
    param_2[9] = param_3[9];
    uVar8 = param_3[8];
    param_2[7] = uVar7;
    param_2[8] = uVar8;
    param_2[6] = uVar9;
    pcVar6 = (code *)param_3[7];
    if (pcVar6 != (code *)0x0) {
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      (*pcVar6)(param_3 + 10);
    }
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


