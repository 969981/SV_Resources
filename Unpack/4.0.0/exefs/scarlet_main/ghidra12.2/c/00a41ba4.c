/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a41ba4; name: FUN_00a41ba4
 */


long FUN_00a41ba4(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = param_2[1];
  puVar5 = (undefined4 *)*param_1;
  lVar3 = lVar6;
  if (puVar5 != param_3) {
    puVar4 = param_3;
    do {
      lVar7 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        *(undefined4 *)(lVar3 + -4) = puVar4[-1];
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00a41dd0;
        *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar7;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        *(undefined4 *)(lVar3 + -4) = puVar4[-1];
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      puVar4 = puVar4 + -1;
      lVar3 = param_2[1] + -4;
      param_2[1] = lVar3;
    } while (puVar5 != puVar4);
  }
  puVar5 = (undefined4 *)param_1[1];
  if (puVar5 != param_3) {
    puVar4 = (undefined4 *)param_2[2];
    do {
      lVar3 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 == 0) {
        *puVar4 = *param_3;
      }
      else {
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00a41dd0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar3;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *puVar4 = *param_3;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      param_3 = param_3 + 1;
      puVar4 = (undefined4 *)(param_2[2] + 4);
      param_2[2] = puVar4;
    } while (puVar5 != param_3);
    lVar3 = param_2[1];
  }
  lVar7 = *param_1;
  *param_1 = lVar3;
  param_2[1] = lVar7;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return lVar6;
}


