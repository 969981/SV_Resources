/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004647f0; name: FUN_004647f0
 */


undefined8 FUN_004647f0(long param_1,ulong param_2,long param_3)

{
  if ((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 8)) < param_2) {
    FUN_004806c0(0x24,0x72,0x7d,"external/openssl/crypto/rand/rand_lib.c",0x331);
    return 0;
  }
  if (param_2 != 0) {
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + param_2;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + param_3;
  }
  return 1;
}


