/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e9c68; name: FUN_001e9c68
 */


undefined8 FUN_001e9c68(void)

{
  undefined8 uVar1;
  long in_x5;
  
  if ((*(uint *)(in_x5 + 0x18) - 2 < 4) || (*(uint *)(in_x5 + 0x18) < 2)) {
    uVar1 = FUN_001e9ccc();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


