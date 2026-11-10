/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011cf788; name: FUN_011cf788
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011cf788(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_04544b00;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_04544b38;
  memset(param_1 + 6,0,0xe0);
  *(undefined4 *)(param_1 + 0x24) = 1;
  param_1[0x22] = 0x3f8000003f000000;
  param_1[0x23] = 0x3f00000000000000;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x14a) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined1 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  memset(param_1 + 0x2e,0,0x100);
  lVar4 = _UNK_03cabe68;
  lVar3 = _DAT_03cabe60;
  param_1[0x52] = -0x4080000000000000;
  param_1[0x54] = 0x1010000000000;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x4f] = lVar4;
  param_1[0x4e] = lVar3;
  param_1[0x51] = lVar4;
  param_1[0x50] = lVar3;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2b1) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  *(undefined4 *)((long)param_1 + 0x2d4) = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0xffffffffbf800000;
  *(undefined4 *)((long)param_1 + 0x31c) = 1;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)((long)param_1 + 0x35f) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined2 *)((long)param_1 + 0x4ac) = 0;
  *(undefined1 *)((long)param_1 + 0x4ae) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((long)param_1 + 0x53e) = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa9] = -1;
  return;
}


