/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0102f570; name: FUN_0102f570
 */


void FUN_0102f570(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045d1dc8;
  param_1[1] = lVar5;
  param_1[4] = (long)&PTR_LAB_045d1e00;
  param_1[6] = *param_2;
  param_1[7] = param_2[1];
  param_1[8] = param_2[2];
  plVar4 = (long *)param_2[3];
  param_1[9] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
    lVar5 = param_1[1];
  }
  param_1[0xe] = 0x7ffffffffffffff;
  param_1[0xf] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = lVar5;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = lVar5;
  param_1[0x14] = 0x666666666666666;
  param_1[0x17] = 0;
  param_1[0x18] = lVar5;
  param_1[0x19] = 0x666666666666666;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = lVar5;
  param_1[0x21] = 0x666666666666666;
  param_1[0x24] = 0;
  param_1[0x25] = lVar5;
  param_1[0x26] = 0x666666666666666;
  param_1[0x27] = 0;
  return;
}


