/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01835cc4; name: FUN_01835cc4
 */


void FUN_01835cc4(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3)

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
  FUN_00ca1a48(param_2 + 4,param_3 + 4);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  FUN_00c6c994(param_2 + 0xc,param_3 + 0xc);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  FUN_00d4ca00(param_2 + 0x14,param_3 + 0x14);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  FUN_01277088(param_2 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  FUN_01084328(param_2 + 0x24,param_3 + 0x24);
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_0112bdf8(param_2 + 0x2c,param_3 + 0x2c);
  FUN_01835e4c(param_2 + 0x34,param_3 + 0x34);
  FUN_01835f0c(param_2 + 0x38,param_3 + 0x38);
  uVar3 = *(undefined8 *)(param_3 + 0x3c);
  *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(param_3 + 0x40);
  *(undefined8 *)(param_2 + 0x3c) = uVar3;
  memcpy(param_2 + 0x44,param_3 + 0x44,0x25);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


