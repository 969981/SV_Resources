/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ed280; name: FUN_003ed280
 */


void FUN_003ed280(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  FUN_00452f80(param_1[4],"external/openssl/crypto/bn/bn_ctx.c",0xfb);
  plVar1 = (long *)*param_1;
  param_1[4] = 0;
  while (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      FUN_003eb490(plVar1);
    }
    if (plVar1[3] != 0) {
      FUN_003eb490();
    }
    if (plVar1[6] != 0) {
      FUN_003eb490();
    }
    if (plVar1[9] != 0) {
      FUN_003eb490();
    }
    if (plVar1[0xc] != 0) {
      FUN_003eb490();
    }
    if (plVar1[0xf] != 0) {
      FUN_003eb490();
    }
    if (plVar1[0x12] != 0) {
      FUN_003eb490();
    }
    if (plVar1[0x15] != 0) {
      FUN_003eb490();
    }
    if (plVar1[0x18] != 0) {
      FUN_003eb490();
    }
    if (plVar1[0x1b] != 0) {
      FUN_003eb490();
    }
    if (plVar1[0x1e] != 0) {
      FUN_003eb490();
    }
    if (plVar1[0x21] != 0) {
      FUN_003eb490(plVar1 + 0x21);
    }
    if (plVar1[0x24] != 0) {
      FUN_003eb490(plVar1 + 0x24);
    }
    if (plVar1[0x27] != 0) {
      FUN_003eb490(plVar1 + 0x27);
    }
    if (plVar1[0x2a] != 0) {
      FUN_003eb490(plVar1 + 0x2a);
    }
    if (plVar1[0x2d] != 0) {
      FUN_003eb490(plVar1 + 0x2d);
    }
    param_1[1] = *(long *)(*param_1 + 0x188);
    FUN_00452f80(*param_1,"external/openssl/crypto/bn/bn_ctx.c",0x12f);
    plVar1 = (long *)param_1[1];
    *param_1 = (long)plVar1;
  }
  FUN_00452f80(param_1,"external/openssl/crypto/bn/bn_ctx.c",0xb2);
  return;
}


