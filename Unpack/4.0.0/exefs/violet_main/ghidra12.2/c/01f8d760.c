/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8d760; name: FUN_01f8d760
 */


void FUN_01f8d760(undefined8 param_1,long param_2)

{
  long local_28;
  
  if (*(long *)(param_2 + 0x158) == 0) {
    local_28 = 0;
  }
  else {
    FUN_01f8d7f0(&local_28);
    if (local_28 != 0) {
      FUN_0156cdb4(param_1);
    }
  }
  FUN_01018a28(&local_28);
  if (*(long *)(param_2 + 0x178) == 0) {
    local_28 = 0;
  }
  else {
    FUN_01f8d884(&local_28);
    if (local_28 != 0) {
      FUN_01f8d918(param_1);
    }
  }
  FUN_01018c54(&local_28);
  return;
}


