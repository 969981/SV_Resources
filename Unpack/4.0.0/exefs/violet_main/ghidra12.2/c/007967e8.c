/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007967e8; name: FUN_007967e8
 */


undefined8 FUN_007967e8(long param_1,long param_2)

{
  int iVar1;
  
  if ((*(short *)(param_1 + 0x18) == *(short *)(param_2 + 0x18)) &&
     (iVar1 = memcmp((void *)(param_1 + 8),(void *)(param_2 + 8),0x10), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


