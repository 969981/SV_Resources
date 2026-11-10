/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cde64; name: FUN_007cde64
 */


void FUN_007cde64(long param_1,undefined4 *param_2)

{
  undefined1 auStack_20 [16];
  
  *(undefined4 *)(param_1 + 0x45c) = *param_2;
  memcpy((void *)(param_1 + 0x460),param_2 + 1,0x10);
  FUN_007f6f90(auStack_20,*(undefined8 *)PTR_DAT_047d0860,param_1 + 0x45c);
  return;
}


