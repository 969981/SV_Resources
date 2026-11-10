/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003c21d0; name: FUN_003c21d0
 */


undefined8 FUN_003c21d0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(int *)(*(long *)(param_1 + 0xa8) + 0x3d8) == 0) {
    return 2;
  }
  iVar1 = FUN_003a26e0(param_2,0xff01,2);
  if (((iVar1 != 0) && (iVar1 = FUN_003a1e80(param_2,2), iVar1 != 0)) &&
     (iVar1 = FUN_003a1e80(param_2,1), iVar1 != 0)) {
    iVar1 = FUN_003a2900(param_2,*(long *)(param_1 + 0xa8) + 0x348,
                         *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x388));
    if (iVar1 != 0) {
      iVar1 = FUN_003a2900(param_2,*(long *)(param_1 + 0xa8) + 0x390,
                           *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x3d0));
      if (((iVar1 != 0) && (iVar1 = FUN_003a1fe0(param_2), iVar1 != 0)) &&
         (iVar1 = FUN_003a1fe0(param_2), iVar1 != 0)) {
        return 1;
      }
    }
  }
  FUN_003c3950(param_1,0x50,0x1ca,0x44,"external/openssl/ssl/statem/extensions_srvr.c",0x554);
  return 0;
}


