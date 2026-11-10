/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029195bc; name: FUN_029195bc
 */


undefined4 FUN_029195bc(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0xc0);
  uVar2 = uVar1 - 0x1a1;
  if (((uVar2 < 0x34 && (1L << ((ulong)uVar2 & 0x3f) & 0x8000080000001U) != 0) || (uVar1 - 0x23 < 2)
      ) || (uVar1 == 0x24f)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar4 = 2;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


