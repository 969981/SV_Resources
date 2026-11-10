/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c7d08; name: FUN_001c7d08
 */


void FUN_001c7d08(long *param_1)

{
  if (*param_1 != 0) {
    nnosFinalizeMutex();
    FUN_001ec308(*param_1);
  }
  FUN_001ec308(param_1[2]);
  if (param_1[4] != 0) {
    FUN_001c7e00();
  }
  memset(param_1,0,0x78);
  return;
}


