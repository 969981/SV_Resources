/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00439d50; name: FUN_00439d50
 */


undefined8 FUN_00439d50(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (*param_1 != 0) {
    pcVar2 = *(code **)(*param_1 + 0x28);
    if ((pcVar2 != (code *)0x0) && (uVar1 = (*pcVar2)(param_1), (int)uVar1 == 0)) {
      return uVar1;
    }
    if ((param_1[0xf] != 0) && (*(int *)(*param_1 + 0x30) != 0)) {
      FUN_00453300();
    }
  }
  FUN_00452f80(param_1[0xf],"external/openssl/crypto/evp/evp_enc.c",0x21);
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return 1;
}


