/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e2a68; name: FUN_001e2a68
 */


undefined8 FUN_001e2a68(long param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) & 0xfffffffd;
  FUN_001d78d4();
  if (((*(byte *)(param_1 + 0x3fe) & 1) == 0) || (uVar1 = FUN_001e1394(param_1), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}


