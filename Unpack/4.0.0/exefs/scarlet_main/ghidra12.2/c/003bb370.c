/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003bb370; name: FUN_003bb370
 */


undefined8 FUN_003bb370(long param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x870) = 0;
    FUN_00452f80(*(undefined8 *)(param_1 + 0x700),"external/openssl/ssl/statem/extensions.c",0x3b5);
    *(undefined8 *)(param_1 + 0x700) = 0;
  }
  return 1;
}


