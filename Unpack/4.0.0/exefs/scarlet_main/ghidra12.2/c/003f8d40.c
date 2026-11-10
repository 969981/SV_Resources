/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f8d40; name: FUN_003f8d40
 */


undefined8 FUN_003f8d40(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  
  if (*param_1 != 0) {
    FUN_004806c0(0x2e,0x8e,0x7c,"external/openssl/crypto/cms/cms_env.c",0xee);
    return 0;
  }
  lVar1 = *(long *)(param_1 + 2);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x28);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(lVar1 + 0x20);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(lVar1 + 0x10);
  }
  return 1;
}


