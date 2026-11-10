/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116b4b0; name: FUN_0116b4b0
 */


void FUN_0116b4b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
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
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  plVar3 = (long *)param_3[3];
  param_2[3] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  param_2[4] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  if ((code *)param_3[6] != (code *)0x0) {
    (*(code *)param_3[6])(param_3 + 8,param_2 + 8);
    uVar4 = param_3[7];
    param_2[5] = param_3[5];
    param_2[7] = uVar4;
    uVar4 = param_3[4];
    param_2[6] = param_3[6];
    param_2[4] = uVar4;
  }
  param_2[0x14] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x15] = 0;
  if ((code *)param_3[0x16] != (code *)0x0) {
    (*(code *)param_3[0x16])(param_3 + 0x18,param_2 + 0x18);
    uVar4 = param_3[0x17];
    param_2[0x15] = param_3[0x15];
    param_2[0x17] = uVar4;
    uVar4 = param_3[0x14];
    param_2[0x16] = param_3[0x16];
    param_2[0x14] = uVar4;
  }
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  if ((code *)param_3[0x26] != (code *)0x0) {
    (*(code *)param_3[0x26])(param_3 + 0x28,param_2 + 0x28);
    uVar4 = param_3[0x27];
    param_2[0x25] = param_3[0x25];
    param_2[0x27] = uVar4;
    uVar4 = param_3[0x24];
    param_2[0x26] = param_3[0x26];
    param_2[0x24] = uVar4;
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


