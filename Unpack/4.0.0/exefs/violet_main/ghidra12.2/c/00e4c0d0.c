/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e4c0d0; name: FUN_00e4c0d0
 */


void FUN_00e4c0d0(long *param_1)

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
  *param_1 = (long)&DAT_0460c260;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_0460c298;
  FUN_00e4c64c(param_1 + 6);
  lVar3 = param_1[1];
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
  param_1[0x14] = lVar3;
  param_1[0x23] = lVar3;
  param_1[0x32] = lVar3;
  param_1[0x41] = lVar3;
  param_1[0x50] = lVar3;
  param_1[0x5f] = lVar3;
  param_1[0x6e] = lVar3;
  param_1[0x7d] = lVar3;
  param_1[0x8c] = lVar3;
  param_1[0x9b] = lVar3;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  param_1[0xaa] = lVar3;
  *(undefined4 *)(param_1 + 0xab) = 0xffffffff;
  param_1[0xb9] = lVar3;
  *(undefined4 *)(param_1 + 0xba) = 0xffffffff;
  param_1[200] = lVar3;
  *(undefined4 *)(param_1 + 0xc9) = 0xffffffff;
  param_1[0xd7] = lVar3;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  param_1[0xe6] = lVar3;
  *(undefined4 *)(param_1 + 0xe7) = 0xffffffff;
  param_1[0xf5] = lVar3;
  *(undefined4 *)(param_1 + 0xf6) = 0xffffffff;
  param_1[0x104] = lVar3;
  *(undefined4 *)(param_1 + 0x105) = 0xffffffff;
  param_1[0x113] = lVar3;
  *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  param_1[0x122] = lVar3;
  *(undefined4 *)(param_1 + 0x123) = 0xffffffff;
  param_1[0x131] = lVar3;
  *(undefined4 *)(param_1 + 0x132) = 0xffffffff;
  param_1[0x140] = lVar3;
  *(undefined4 *)(param_1 + 0x141) = 0xffffffff;
  param_1[0x14f] = lVar3;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  param_1[0x15e] = lVar3;
  *(undefined4 *)(param_1 + 0x15f) = 0xffffffff;
  param_1[0x16d] = lVar3;
  *(undefined4 *)(param_1 + 0x16e) = 0xffffffff;
  param_1[0x17c] = lVar3;
  *(undefined4 *)(param_1 + 0x17d) = 0xffffffff;
  param_1[0x18b] = lVar3;
  *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
  param_1[0x19a] = lVar3;
  *(undefined4 *)(param_1 + 0x19b) = 0xffffffff;
  param_1[0x1a9] = lVar3;
  *(undefined4 *)(param_1 + 0x1aa) = 0xffffffff;
  param_1[0x1b8] = lVar3;
  *(undefined4 *)(param_1 + 0x1b9) = 0xffffffff;
  param_1[0x1c7] = lVar3;
  *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
  param_1[0x1d6] = lVar3;
  *(undefined4 *)(param_1 + 0x1d7) = 0xffffffff;
  param_1[0x1e5] = lVar3;
  return;
}


