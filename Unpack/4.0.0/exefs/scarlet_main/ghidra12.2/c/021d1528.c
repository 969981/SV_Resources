/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d1528; name: FUN_021d1528
 */


void FUN_021d1528(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
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
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar6;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((code *)param_3[3] != (code *)0x0) {
    (*(code *)param_3[3])(param_3 + 4,param_2 + 4);
    uVar6 = param_3[1];
    param_2[3] = param_3[3];
    uVar4 = param_3[2];
    *param_2 = *param_3;
    param_2[1] = uVar6;
    param_2[2] = uVar4;
    pcVar3 = (code *)param_3[1];
    if (pcVar3 != (code *)0x0) {
      param_3[2] = 0;
      param_3[3] = 0;
      *param_3 = 0;
      param_3[1] = 0;
      (*pcVar3)(param_3 + 4);
    }
  }
  param_2[0x10] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x11] = 0;
  if ((code *)param_3[0x13] != (code *)0x0) {
    (*(code *)param_3[0x13])(param_3 + 0x14,param_2 + 0x14);
    uVar6 = param_3[0x10];
    uVar4 = param_3[0x11];
    param_2[0x13] = param_3[0x13];
    uVar5 = param_3[0x12];
    param_2[0x11] = uVar4;
    param_2[0x12] = uVar5;
    param_2[0x10] = uVar6;
    pcVar3 = (code *)param_3[0x11];
    if (pcVar3 != (code *)0x0) {
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      (*pcVar3)(param_3 + 0x14);
    }
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  if ((code *)param_3[0x23] != (code *)0x0) {
    (*(code *)param_3[0x23])(param_3 + 0x24,param_2 + 0x24);
    uVar6 = param_3[0x21];
    param_2[0x23] = param_3[0x23];
    uVar4 = param_3[0x22];
    param_2[0x20] = param_3[0x20];
    param_2[0x21] = uVar6;
    param_2[0x22] = uVar4;
    pcVar3 = (code *)param_3[0x21];
    if (pcVar3 != (code *)0x0) {
      param_3[0x22] = 0;
      param_3[0x23] = 0;
      param_3[0x20] = 0;
      param_3[0x21] = 0;
      (*pcVar3)(param_3 + 0x24);
    }
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


