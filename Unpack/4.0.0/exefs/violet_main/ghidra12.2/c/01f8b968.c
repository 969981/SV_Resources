/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8b968; name: FUN_01f8b968
 */


uint FUN_01f8b968(long param_1)

{
  uint uVar1;
  long local_8;
  
  if (*(long *)(param_1 + 0x178) == 0) {
    local_8 = 0;
  }
  else {
    FUN_01f8d884(&local_8);
    if (local_8 != 0) {
      uVar1 = FUN_01f8e7f0();
      FUN_01018c54(&local_8);
      return uVar1 & 1;
    }
  }
  FUN_01018c54(&local_8);
  return 0;
}


