/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e8e978; name: FUN_00e8e978
 */


void FUN_00e8e978(long *param_1)

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
  *param_1 = (long)&PTR_LAB_045cf990;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_045cf9c8;
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 1;
  nn::os::InitializeLightEvent(param_1 + 7,0,1);
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 1;
  nn::os::InitializeLightEvent(param_1 + 10,0,1);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  FUN_00e8ed94();
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x14,0,1);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  FUN_00e8eb1c();
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_00e8eed0(param_1 + 0x1d);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_00e8ec58(param_1 + 0x24);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_00e8eb1c(param_1 + 0x2b);
  memset(param_1 + 0x32,0,0x88);
  return;
}


