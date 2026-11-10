/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003eb520; name: FUN_003eb520
 */


void FUN_003eb520(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
      if ((*(uint *)((long)param_1 + 0x14) >> 3 & 1) != 0) {
        FUN_00453360(*param_1,(long)*(int *)((long)param_1 + 0xc) << 2,
                     "external/openssl/crypto/bn/bn_lib.c",0xcc);
        if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) {
          return;
        }
        goto LAB_003eb57c;
      }
      FUN_00452f80(*param_1,"external/openssl/crypto/bn/bn_lib.c",0xd0);
    }
    if ((*(byte *)((long)param_1 + 0x14) & 1) != 0) {
LAB_003eb57c:
      FUN_00452f80(param_1,"external/openssl/crypto/bn/bn_lib.c",0xe7);
      return;
    }
  }
  return;
}


