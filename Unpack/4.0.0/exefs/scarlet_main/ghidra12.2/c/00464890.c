/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00464890; name: FUN_00464890
 */


void FUN_00464890(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 2) == 0) {
    if (*(int *)((long)param_1 + 0x14) == 0) {
      FUN_00453260(*param_1,param_1[5],"external/openssl/crypto/rand/rand_lib.c",0x20c);
    }
    else {
      FUN_00453360();
    }
  }
  FUN_00452f80(param_1,"external/openssl/crypto/rand/rand_lib.c",0x20f);
  return;
}


