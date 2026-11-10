/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eaeca4; name: FUN_01eaeca4
 */


void FUN_01eaeca4(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3)

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
  *param_2 = *param_3;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  FUN_00ca1ea4(param_2 + 4,param_3 + 4);
  uVar3 = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(param_3 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xc) = uVar3;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined1 *)(param_2 + 0x12) = 0;
  if (*(char *)(param_3 + 0x12) != '\0') {
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_3 + 0x14);
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    *(undefined1 *)(param_2 + 0x12) = 1;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x1c);
  *(undefined8 *)(param_3 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1c) = uVar3;
  param_2[0x20] = param_3[0x20];
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


