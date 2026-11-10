/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00247984; name: FUN_00247984
 */


void FUN_00247984(undefined8 *param_1,long param_2)

{
  if (*(char *)(param_2 + 0x920) == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_01e9fb38(param_2 + 0x928);
  return;
}


