/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0295bfac; name: FUN_0295bfac
 */


undefined4 FUN_0295bfac(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = (**(code **)(*param_1 + 0x110))();
  uVar3 = (**(code **)(*param_1 + 0x108))(param_1);
  lVar1 = param_1[0xe3];
  uVar4 = FUN_02960ce4((short)lVar1);
  uVar5 = FUN_014c1b98((short)lVar1);
  if ((uVar3 & 0xffff) <= (uVar2 >> 1 & 0x7fff)) {
    uVar4 = uVar5;
  }
  return uVar4;
}


