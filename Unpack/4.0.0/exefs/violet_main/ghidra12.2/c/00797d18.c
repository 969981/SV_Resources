/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00797d18; name: FUN_00797d18
 */


void FUN_00797d18(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_18;
  uint uStack_14;
  
  uVar2 = *(uint *)(param_1 + 9);
  uVar1 = uVar2 * 8 + *(int *)((long)param_1 + 0x4c) * 0x200;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (uint)(*(ulong *)((long)param_1 + 0x4c) >> 0x17);
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  iVar3 = 0x38;
  if (0x37 < uVar2) {
    iVar3 = 0x78;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&DAT_044dfae0,iVar3 - uVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_18,8);
  return;
}


