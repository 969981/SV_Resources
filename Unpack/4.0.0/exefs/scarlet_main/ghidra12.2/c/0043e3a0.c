/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043e3a0; name: FUN_0043e3a0
 */


undefined8 FUN_0043e3a0(int *param_1,long *param_2)

{
  int *piVar1;
  
  if (*param_1 == 0x425) {
    piVar1 = *(int **)(param_1 + 10);
    *param_2 = (long)*piVar1;
    return *(undefined8 *)(piVar1 + 2);
  }
  FUN_004806c0(6,0xb8,0xa4,"external/openssl/crypto/evp/p_lib.c",0x1b1);
  return 0;
}


