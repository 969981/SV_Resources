/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0164c1e8; name: FUN_0164c1e8
 */


void FUN_0164c1e8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
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
  puVar1 = PTR_DAT_047d8c78;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar4;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar5 = param_1 + 5;
  *plVar5 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar5);
  *param_1 = (long)&PTR_LAB_045827c0;
  param_1[4] = (long)&PTR_LAB_04582850;
  *plVar5 = (long)&DAT_045828a0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x47) = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((long)param_1 + 0x2bf) = 0;
  param_1[0xa6] = 0;
  *(undefined8 *)((long)param_1 + 0x537) = 0;
  param_1[0xf5] = 0;
  *(undefined8 *)((long)param_1 + 0x7af) = 0;
  param_1[0x144] = 0;
  *(undefined8 *)((long)param_1 + 0xa27) = 0;
  param_1[0x193] = 0;
  *(undefined8 *)((long)param_1 + 0xc9f) = 0;
  *(undefined8 *)((long)param_1 + 0xf17) = 0;
  param_1[0x1e2] = 0;
  *(undefined8 *)((long)param_1 + 0x118f) = 0;
  param_1[0x231] = 0;
  *(undefined8 *)((long)param_1 + 0x1407) = 0;
  param_1[0x280] = 0;
  *(undefined8 *)((long)param_1 + 0x167f) = 0;
  param_1[0x2cf] = 0;
  *(undefined8 *)((long)param_1 + 0x18f7) = 0;
  param_1[0x31e] = 0;
  *(undefined8 *)((long)param_1 + 0x1b6f) = 0;
  param_1[0x36d] = 0;
  *(undefined8 *)((long)param_1 + 0x1de7) = 0;
  param_1[0x3bc] = 0;
  *(undefined8 *)((long)param_1 + 0x205f) = 0;
  param_1[0x40b] = 0;
  *(undefined8 *)((long)param_1 + 0x22d7) = 0;
  param_1[0x45a] = 0;
  *(undefined8 *)((long)param_1 + 0x254f) = 0;
  param_1[0x4a9] = 0;
  *(undefined8 *)((long)param_1 + 0x27c7) = 0;
  param_1[0x4f8] = 0;
  *(undefined8 *)((long)param_1 + 0x2a3f) = 0;
  param_1[0x547] = 0;
  *(undefined8 *)((long)param_1 + 0x2cb7) = 0;
  param_1[0x596] = 0;
  *(undefined8 *)((long)param_1 + 0x2f2f) = 0;
  param_1[0x5e5] = 0;
  *(undefined8 *)((long)param_1 + 0x31a7) = 0;
  param_1[0x634] = 0;
  *(undefined8 *)((long)param_1 + 0x341f) = 0;
  param_1[0x683] = 0;
  *(undefined8 *)((long)param_1 + 0x3697) = 0;
  param_1[0x6d2] = 0;
  *(undefined8 *)((long)param_1 + 0x390f) = 0;
  param_1[0x721] = 0;
  *(undefined8 *)((long)param_1 + 0x3b87) = 0;
  param_1[0x770] = 0;
  *(undefined8 *)((long)param_1 + 0x3dff) = 0;
  param_1[0x7bf] = 0;
  *(undefined8 *)((long)param_1 + 0x4077) = 0;
  param_1[0x80e] = 0;
  *(undefined8 *)((long)param_1 + 0x42ef) = 0;
  param_1[0x85d] = 0;
  *(undefined8 *)((long)param_1 + 0x4567) = 0;
  param_1[0x8ac] = 0;
  *(undefined8 *)((long)param_1 + 0x47df) = 0;
  param_1[0x8fb] = 0;
  *(undefined8 *)((long)param_1 + 0x4a57) = 0;
  param_1[0x94a] = 0;
  *(undefined8 *)((long)param_1 + 0x4ccf) = 0;
  param_1[0x999] = 0;
  *(undefined8 *)((long)param_1 + 0x4f47) = 0;
  param_1[0x9e8] = 0;
  *(undefined8 *)((long)param_1 + 0x51bf) = 0;
  param_1[0xa37] = 0;
  *(undefined8 *)((long)param_1 + 0x5437) = 0;
  param_1[0xa86] = 0;
  *(undefined8 *)((long)param_1 + 0x56af) = 0;
  param_1[0xad5] = 0;
  *(undefined8 *)((long)param_1 + 0x5927) = 0;
  param_1[0xb24] = 0;
  *(undefined8 *)((long)param_1 + 0x5b9f) = 0;
  param_1[0xb73] = 0;
  *(undefined8 *)((long)param_1 + 0x5e17) = 0;
  param_1[0xbc2] = 0;
  *(undefined8 *)((long)param_1 + 0x608f) = 0;
  param_1[0xc11] = 0;
  *(undefined8 *)((long)param_1 + 0x6307) = 0;
  param_1[0xc60] = 0;
  *(undefined8 *)((long)param_1 + 0x657f) = 0;
  param_1[0xcaf] = 0;
  *(undefined8 *)((long)param_1 + 0x67f7) = 0;
  param_1[0xcfe] = 0;
  *(undefined8 *)((long)param_1 + 0x6a6f) = 0;
  param_1[0xd4d] = 0;
  *(undefined8 *)((long)param_1 + 0x6ce7) = 0;
  param_1[0xd9c] = 0;
  *(undefined8 *)((long)param_1 + 0x6f5f) = 0;
  param_1[0xdeb] = 0;
  *(undefined8 *)((long)param_1 + 0x71d7) = 0;
  param_1[0xe3a] = 0;
  *(undefined8 *)((long)param_1 + 0x744f) = 0;
  param_1[0xe89] = 0;
  *(undefined8 *)((long)param_1 + 0x76c7) = 0;
  param_1[0xed8] = 0;
  *(undefined8 *)((long)param_1 + 0x793f) = 0;
  param_1[0xf27] = 0;
  memset(param_1 + 0xf76,0,0x33a);
  return;
}


