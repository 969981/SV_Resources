/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df2144; name: FUN_01df2144
 */


undefined8 FUN_01df2144(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  FUN_01195974();
  if (*(int *)(param_1 + 0x108) == 1) {
    return 0;
  }
  uVar1 = FUN_01195974(param_1);
  uVar6 = uVar1 >> 0x20;
  uVar2 = FUN_01195854();
  iVar5 = *(int *)(param_1 + 0x108);
  if (iVar5 == 0) {
    lVar3 = FUN_01195854();
    uVar4 = (uint)*(byte *)(lVar3 + 0x570);
    iVar5 = *(int *)(param_1 + 0x108);
  }
  else if (iVar5 - 1U < 2) {
    uVar4 = *(uint *)(param_1 + 0x2a4);
  }
  else {
    uVar4 = 0xffffffff;
  }
  if (iVar5 == 0) {
    uVar6 = (ulong)(uint)((int)uVar1 + (int)(uVar1 >> 0x20) * 6);
  }
  else if ((iVar5 != 1) && (iVar5 != 2)) {
    uVar6 = 1;
  }
  uVar2 = FUN_01dc7ce0(uVar2,uVar4,uVar6);
  return uVar2;
}


