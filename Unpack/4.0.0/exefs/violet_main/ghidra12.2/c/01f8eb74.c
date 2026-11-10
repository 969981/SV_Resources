/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8eb74; name: FUN_01f8eb74
 */


void FUN_01f8eb74(long param_1)

{
  long local_18;
  
  if (*(long *)(param_1 + 0x168) == 0) {
    local_18 = 0;
  }
  else {
    FUN_01bb642c(&local_18);
    if (local_18 != 0) {
      FUN_01f8b7bc();
    }
  }
  FUN_01018e84(&local_18);
  return;
}


