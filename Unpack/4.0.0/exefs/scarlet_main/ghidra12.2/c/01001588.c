/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01001588; name: FUN_01001588
 */


void FUN_01001588(long *param_1)

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
  *param_1 = (long)&DAT_0456f5a8;
  param_1[4] = (long)&PTR_LAB_0456f620;
  *plVar5 = (long)&DAT_0456f670;
  param_1[0xc] = -1;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  nn::os::InitializeLightEvent(param_1 + 0xf,0,1);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_01001870();
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_010019a8(param_1 + 0x18);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_01001870(param_1 + 0x21);
  *(undefined4 *)((long)param_1 + 0x14c) = 1;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x28,0,1);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  FUN_01001870(param_1 + 0x2c);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_010019a8(param_1 + 0x31);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  FUN_01001870(param_1 + 0x3a);
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)((long)param_1 + 0x214) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x41,0,1);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  FUN_01001ae4(param_1 + 0x45);
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_010019a8(param_1 + 0x4a);
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  FUN_01001870(param_1 + 0x53);
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)((long)param_1 + 0x2e4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x5b,0,1);
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  FUN_01001870(param_1 + 0x5f);
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  FUN_010019a8(param_1 + 100);
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  FUN_01001870(param_1 + 0x6d);
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x73) = 1;
  return;
}


