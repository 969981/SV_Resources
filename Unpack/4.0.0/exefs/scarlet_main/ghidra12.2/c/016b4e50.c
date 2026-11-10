/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016b4e50; name: FUN_016b4e50
 */


void FUN_016b4e50(long param_1)

{
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_012e43f8(*(long *)(param_1 + 0x20),"load process",0xffffffff,0x10);
  return;
}


