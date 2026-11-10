/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e0ee0; name: FUN_003e0ee0
 */


undefined8 FUN_003e0ee0(ulong *param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  ulong in_x10;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 == (uint *)0x0) {
    FUN_004806c0(0xd,0xe6,0x43,"external/openssl/crypto/asn1/a_int.c",0x165);
    return 0;
  }
  if ((param_2[1] & 0xfffffeff) != 2) {
    FUN_004806c0(0xd,0xe6,0xe1,"external/openssl/crypto/asn1/a_int.c",0x169);
    return 0;
  }
  if ((param_2[1] >> 8 & 1) != 0) {
    FUN_004806c0(0xd,0xe6,0xe2,"external/openssl/crypto/asn1/a_int.c",0x16d);
    return 0;
  }
  uVar2 = *param_2;
  if (8 < uVar2) {
    FUN_004806c0(0xd,0xe1,0xdf,"external/openssl/crypto/asn1/a_int.c",0xd5);
    return 0;
  }
  lVar3 = *(long *)(param_2 + 2);
  if (lVar3 == 0) {
    return 0;
  }
  if (uVar2 == 0) {
    in_x10 = 0;
  }
  else {
    if (uVar2 == 1) {
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      in_x10 = 0;
      uVar4 = 0;
      do {
        pbVar1 = (byte *)(lVar3 + uVar4);
        uVar4 = uVar4 + 2;
        in_x10 = (ulong)*pbVar1 << 8 | in_x10 << 0x10 | (ulong)pbVar1[1];
      } while (((long)(int)uVar2 & 0xfffffffffffffffeU) != uVar4);
      uVar5 = in_x10 << 8;
    }
    if ((uVar2 & 1) != 0) {
      in_x10 = uVar5 | *(byte *)(lVar3 + uVar4);
    }
  }
  *param_1 = in_x10;
  return 1;
}


