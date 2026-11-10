/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0186db10; name: FUN_0186db10
 */


void FUN_0186db10(undefined8 *param_1,undefined1 *param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
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
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  *param_2 = 0;
  if (*param_3 != '\0') {
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_3 + 2);
    *param_2 = 1;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_00ca1ea4(param_2 + 8,param_3 + 8);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  param_3[0x18] = '\0';
  param_3[0x19] = '\0';
  param_3[0x1a] = '\0';
  param_3[0x1b] = '\0';
  param_3[0x1c] = '\0';
  param_3[0x1d] = '\0';
  param_3[0x1e] = '\0';
  param_3[0x1f] = '\0';
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  memcpy(param_2 + 0x20,param_3 + 0x20,0x24);
  param_2[0x44] = 0;
  if (param_3[0x44] != '\0') {
    uVar3 = *(undefined8 *)(param_3 + 0x50);
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    *(undefined8 *)(param_2 + 0x50) = uVar3;
    param_2[0x44] = 1;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x58);
  param_3[0x58] = '\0';
  param_3[0x59] = '\0';
  param_3[0x5a] = '\0';
  param_3[0x5b] = '\0';
  param_3[0x5c] = '\0';
  param_3[0x5d] = '\0';
  param_3[0x5e] = '\0';
  param_3[0x5f] = '\0';
  *(undefined8 *)(param_2 + 0x58) = uVar3;
  param_2[0x60] = param_3[0x60];
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


