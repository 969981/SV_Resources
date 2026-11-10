/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f78394; name: FUN_01f78394
 */


void FUN_01f78394(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_047cfbb0 + 0x10);
  FUN_01cfa5b0(param_1 + 1,param_2 + 8);
  FUN_01cfa5b0(param_1 + 5,param_2 + 0x28);
  param_1[9] = *(long *)(param_2 + 0x48);
  FUN_01f784a0(param_1 + 10,param_2 + 0x50);
  FUN_01f784a0(param_1 + 0xe,param_2 + 0x70);
  lVar2 = *(long *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x98);
  param_1[0x12] = lVar2;
  FUN_01d01e08(param_1 + 0x14,param_2 + 0xa0);
  FUN_01d01e70(param_1 + 0x18,param_2 + 0xc0);
  FUN_01cfa5b0(param_1 + 0x1c,param_2 + 0xe0);
  FUN_01cfa5b0(param_1 + 0x20,param_2 + 0x100);
  lVar2 = *(long *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x128);
  param_1[0x24] = lVar2;
  FUN_01cfa5b0(param_1 + 0x26,param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x150);
  FUN_01d01e08(param_1 + 0x2b,param_2 + 0x158);
  lVar2 = *(long *)(param_2 + 0x178);
  lVar1 = *(long *)(param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x188);
  param_1[0x2f] = lVar2;
  param_1[0x30] = lVar1;
  FUN_01d01ed8(param_1 + 0x32,param_2 + 400);
  memcpy(param_1 + 0x33,(void *)(param_2 + 0x198),0x28);
  FUN_01cfa5b0(param_1 + 0x38,param_2 + 0x1c0);
  return;
}


