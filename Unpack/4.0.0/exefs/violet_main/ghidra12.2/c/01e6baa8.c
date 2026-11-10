/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6baa8; name: FUN_01e6baa8
 */


undefined8 FUN_01e6baa8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_019c7a40(param_1 + 0x108);
  if (((uVar2 & 1) == 0) ||
     (uVar1 = FUN_01419468(param_1 + 0x108), *(uint *)(param_1 + 0xf8) != (uVar1 & 0xffff))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


