/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fd2050; name: FUN_01fd2050
 */


undefined4 FUN_01fd2050(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xc;
  if ((*(char *)(param_1 + 0x40) != '\0') &&
     (uVar1 = 0xc, 0.5 <= *(float *)(*(long *)(param_1 + 0x78) + 0x118))) {
    uVar1 = 0x32;
  }
  return uVar1;
}


