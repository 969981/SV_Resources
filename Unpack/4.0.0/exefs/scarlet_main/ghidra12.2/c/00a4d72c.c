/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4d72c; name: FUN_00a4d72c
 */


void FUN_00a4d72c(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 0x402) {
    FUN_00a655bc(param_1 + (long)param_3 * 0x18 + 0x2c,param_2,(undefined1 *)(param_1 + 0x61e8));
    *(undefined1 *)(param_1 + 0x622a) = *(undefined1 *)(param_1 + 0x61e8);
  }
  return;
}


