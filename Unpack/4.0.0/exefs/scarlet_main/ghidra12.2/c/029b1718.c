/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b1718; name: FUN_029b1718
 */


void FUN_029b1718(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
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
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  uVar3 = *(undefined4 *)(param_3 + 2);
  param_2[1] = param_3[1];
  uVar6 = *param_3;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *param_2 = uVar6;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar6 = param_3[6];
  uVar1 = param_3[7];
  uVar2 = param_3[9];
  param_2[8] = param_3[8];
  param_2[9] = uVar2;
  param_2[6] = uVar6;
  param_2[7] = uVar1;
  param_2[3] = param_3[3];
  param_2[4] = param_3[4];
  param_2[5] = param_3[5];
  uVar3 = *(undefined4 *)(param_3 + 10);
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[3] = 0;
  *(undefined2 *)((long)param_2 + 0x54) = *(undefined2 *)((long)param_3 + 0x54);
  *(undefined4 *)(param_2 + 10) = uVar3;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


