/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003face0; name: FUN_003face0
 */


undefined8 FUN_003face0(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*param_1 != 1) {
    FUN_004806c0(0x2e,0xaf,0xb5,"external/openssl/crypto/cms/cms_kari.c",0x1c);
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 2) + 0x18);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(*(long *)(param_1 + 2) + 0x10);
  }
  return 1;
}


