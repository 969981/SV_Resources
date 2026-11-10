/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046cbf0; name: FUN_0046cbf0
 */


uint FUN_0046cbf0(void *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_5 < 0xb) {
    return 0xffffffff;
  }
  if (param_5 == param_4) {
    if (*param_3 != '\0') {
      uVar1 = 0x8a;
      uVar2 = 0x43;
      goto LAB_0046cc9c;
    }
    param_3 = param_3 + 1;
    param_4 = param_5 + -1;
  }
  if ((param_4 + 1 == param_5) && (*param_3 == '\x01')) {
    uVar4 = param_4 - 2;
    if (param_4 < 2) {
      if (param_4 != 1) {
LAB_0046ccb8:
        uVar1 = 0x67;
LAB_0046ccc4:
        uVar2 = uVar1;
        goto LAB_0046cc9c;
      }
    }
    else {
      param_3 = param_3 + 2;
      iVar3 = 1;
      do {
        if (param_3[-1] != -1) {
          if (param_3[-1] != '\0') {
            uVar1 = 0x66;
            uVar2 = 0x58;
            goto LAB_0046cc9c;
          }
          if (uVar4 != 0xffffffff) {
            if (iVar3 - 1U < 8) goto LAB_0046ccb8;
            if ((int)uVar4 <= param_2) {
              memcpy(param_1,param_3,(ulong)uVar4);
              return uVar4;
            }
            uVar1 = 0x6d;
            goto LAB_0046ccc4;
          }
          break;
        }
        uVar4 = uVar4 - 1;
        param_3 = param_3 + 1;
        iVar3 = iVar3 + 1;
      } while (uVar4 != 0xffffffff);
    }
    uVar1 = 0x71;
    uVar2 = 0x61;
  }
  else {
    uVar1 = 0x6a;
    uVar2 = 0x4b;
  }
LAB_0046cc9c:
  FUN_004806c0(4,0x70,uVar1,"external/openssl/crypto/rsa/rsa_pk1.c",uVar2);
  return 0xffffffff;
}


