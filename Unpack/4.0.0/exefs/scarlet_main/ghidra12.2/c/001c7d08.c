/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


