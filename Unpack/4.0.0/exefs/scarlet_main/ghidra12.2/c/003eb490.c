/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003eb490; name: FUN_003eb490
 */


void FUN_003eb490(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && ((*(uint *)((long)param_1 + 0x14) >> 1 & 1) == 0)) {
      if ((*(uint *)((long)param_1 + 0x14) >> 3 & 1) != 0) {
        FUN_00453360(*param_1,(long)*(int *)((long)param_1 + 0xc) << 2,
                     "external/openssl/crypto/bn/bn_lib.c",0xcc);
        if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) {
          return;
        }
        goto LAB_003eb4e8;
      }
      FUN_00453260();
    }
    if ((*(byte *)((long)param_1 + 0x14) & 1) != 0) {
LAB_003eb4e8:
      FUN_00453300(param_1,0x18);
      FUN_00452f80(param_1,"external/openssl/crypto/bn/bn_lib.c",0xdc);
      return;
    }
  }
  return;
}


