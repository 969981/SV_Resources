/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


