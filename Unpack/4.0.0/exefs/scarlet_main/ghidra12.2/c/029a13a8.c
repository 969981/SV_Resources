/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a13a8; name: FUN_029a13a8
 */


void FUN_029a13a8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 != 0) {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  uVar5 = *param_3;
  param_2[5] = 0;
  *param_2 = uVar5;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  if ((code *)param_4[3] != (code *)0x0) {
    (*(code *)param_4[3])(param_4 + 4,param_2 + 6);
    uVar5 = param_4[1];
    param_2[5] = param_4[3];
    uVar4 = param_4[2];
    param_2[2] = *param_4;
    param_2[3] = uVar5;
    param_2[4] = uVar4;
    pcVar3 = (code *)param_4[1];
    if (pcVar3 != (code *)0x0) {
      param_4[2] = 0;
      param_4[3] = 0;
      *param_4 = 0;
      param_4[1] = 0;
      (*pcVar3)(param_4 + 4);
    }
  }
  param_2[0x12] = param_4[0x10];
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


