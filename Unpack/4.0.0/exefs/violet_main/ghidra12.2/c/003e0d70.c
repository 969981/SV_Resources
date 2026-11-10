/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e0d70; name: FUN_003e0d70
 */


undefined8 FUN_003e0d70(ulong *param_1,uint *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong in_x10;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 == (uint *)0x0) {
    uVar3 = 0xe3;
    uVar4 = 0x43;
    uVar5 = 0x142;
  }
  else if ((param_2[1] & 0xfffffeff) == param_3) {
    uVar2 = *param_2;
    if (uVar2 < 9) {
      lVar6 = *(long *)(param_2 + 2);
      if (lVar6 == 0) {
        return 0;
      }
      if (uVar2 == 0) {
        in_x10 = 0;
      }
      else {
        if (uVar2 == 1) {
          uVar8 = 0;
          uVar7 = 0;
        }
        else {
          in_x10 = 0;
          uVar7 = 0;
          do {
            pbVar1 = (byte *)(lVar6 + uVar7);
            uVar7 = uVar7 + 2;
            in_x10 = (ulong)*pbVar1 << 8 | in_x10 << 0x10 | (ulong)pbVar1[1];
          } while (((long)(int)uVar2 & 0xfffffffffffffffeU) != uVar7);
          uVar8 = in_x10 << 8;
        }
        if ((uVar2 & 1) != 0) {
          in_x10 = uVar8 | *(byte *)(lVar6 + uVar7);
        }
      }
      if ((param_2[1] >> 8 & 1) != 0) {
        if ((long)in_x10 < 0) {
          uVar7 = 0x8000000000000000;
          if (in_x10 != 0x8000000000000000) {
            uVar5 = 0x109;
            uVar3 = 0xe0;
            uVar4 = 0xe0;
            goto LAB_003e0de4;
          }
        }
        else {
          uVar7 = -in_x10;
        }
        *param_1 = uVar7;
        return 1;
      }
      if (-1 < (long)in_x10) {
        *param_1 = in_x10;
        return 1;
      }
      uVar4 = 0xdf;
      uVar5 = 0x110;
      uVar3 = 0xe0;
    }
    else {
      uVar3 = 0xe1;
      uVar4 = 0xdf;
      uVar5 = 0xd5;
    }
  }
  else {
    uVar3 = 0xe3;
    uVar4 = 0xe1;
    uVar5 = 0x146;
  }
LAB_003e0de4:
  FUN_004806c0(0xd,uVar3,uVar4,"external/openssl/crypto/asn1/a_int.c",uVar5);
  return 0;
}


