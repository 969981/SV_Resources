/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00470740; name: FUN_00470740
 */


uint FUN_00470740(void *param_1,undefined8 param_2,byte *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((param_5 != param_4) || ((*param_3 & 0xfe) != 0x6a)) {
    uVar5 = 0x89;
    uVar6 = 0x3d;
    goto LAB_004707d8;
  }
  if (*param_3 == 0x6b) {
    if (3 < param_5) {
      uVar3 = param_5 - 3;
      uVar7 = (ulong)uVar3;
      pbVar1 = param_3 + (param_5 - 4);
      uVar8 = 0;
      do {
        bVar2 = (param_3 + uVar8)[1];
        if (bVar2 != 0xbb) {
          if (bVar2 != 0xba) {
            uVar5 = 0x8a;
            uVar6 = 0x48;
            goto LAB_004707d8;
          }
          pbVar1 = param_3 + uVar8;
          uVar7 = uVar8;
          uVar4 = (uint)uVar8;
          break;
        }
        uVar8 = uVar8 + 1;
        uVar4 = uVar3;
      } while (uVar3 != (uint)uVar8);
      if (uVar4 != 0) {
        param_3 = pbVar1 + 2;
        uVar3 = uVar3 - (int)uVar7;
        bVar2 = param_3[(int)uVar3];
        goto joined_r0x00470804;
      }
    }
    uVar5 = 0x8a;
    uVar6 = 0x50;
  }
  else {
    param_3 = param_3 + 1;
    uVar3 = param_5 - 2;
    bVar2 = param_3[(int)uVar3];
joined_r0x00470804:
    if (bVar2 == 0xcc) {
      memcpy(param_1,param_3,(ulong)uVar3);
      return uVar3;
    }
    uVar5 = 0x8b;
    uVar6 = 0x59;
  }
LAB_004707d8:
  FUN_004806c0(4,0x80,uVar5,"external/openssl/crypto/rsa/rsa_x931.c",uVar6);
  return 0xffffffff;
}


