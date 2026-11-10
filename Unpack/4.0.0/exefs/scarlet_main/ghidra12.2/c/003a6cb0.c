/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a6cb0; name: FUN_003a6cb0
 */


undefined8 FUN_003a6cb0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x960);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_1 + lVar1 * 0x28 + 0x968);
    do {
      lVar1 = lVar1 + -1;
      FUN_00452f80(*puVar2,"external/openssl/ssl/record/ssl3_buffer.c",0xa2);
      *puVar2 = 0;
      puVar2 = puVar2 + -5;
    } while (lVar1 != 0);
  }
  *(undefined8 *)(param_1 + 0x960) = 0;
  return 1;
}


