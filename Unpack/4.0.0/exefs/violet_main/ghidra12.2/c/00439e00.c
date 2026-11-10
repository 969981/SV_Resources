/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00439e00; name: FUN_00439e00
 */


void FUN_00439e00(long *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x28);
      if ((pcVar2 != (code *)0x0) && (iVar1 = (*pcVar2)(param_1), iVar1 == 0)) goto LAB_00439e70;
      if (param_1[0xf] != 0) {
        if (*(int *)(*param_1 + 0x30) != 0) {
          FUN_00453300();
        }
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
  }
LAB_00439e70:
  FUN_00452f80(param_1,"external/openssl/crypto/evp/evp_enc.c",0x31);
  return;
}


