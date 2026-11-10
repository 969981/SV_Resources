/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e3690; name: FUN_003e3690
 */


undefined8 FUN_003e3690(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  uVar5 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  bVar3 = (byte)(1 << (ulong)(~param_2 & 7));
  bVar2 = 0;
  if (param_3 != 0) {
    bVar2 = bVar3;
  }
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  iVar1 = (int)uVar5 >> 3;
  *(ulong *)(param_1 + 4) = *(ulong *)(param_1 + 4) & 0xfffffffffffffff0;
  if (((int)*param_1 <= iVar1) || (lVar6 = *(long *)(param_1 + 2), lVar6 == 0)) {
    if (param_3 == 0) {
      return 1;
    }
    uVar5 = iVar1 + 1;
    lVar6 = FUN_00453010(*(undefined8 *)(param_1 + 2),(long)(int)*param_1,(long)(int)uVar5,
                         "external/openssl/crypto/asn1/a_bitstr.c",0xa5);
    if (lVar6 == 0) {
      FUN_004806c0(0xd,0xb7,0x41,"external/openssl/crypto/asn1/a_bitstr.c",0xa7);
      return 0;
    }
    uVar4 = uVar5 - *param_1;
    if (0 < (int)uVar4) {
      memset((void *)(lVar6 + (int)*param_1),0,(ulong)uVar4);
    }
    *(long *)(param_1 + 2) = lVar6;
    *param_1 = uVar5;
  }
  *(byte *)(lVar6 + iVar1) = (bVar3 ^ 0xff) & *(byte *)(lVar6 + iVar1) | bVar2;
  uVar5 = *param_1;
  if (0 < (int)uVar5) {
    lVar6 = (ulong)uVar5 + 1;
    do {
      uVar5 = uVar5 - 1;
      if (*(char *)(*(long *)(param_1 + 2) + (ulong)uVar5) != '\0') {
        return 1;
      }
      lVar6 = lVar6 + -1;
      *param_1 = uVar5;
    } while (1 < lVar6);
  }
  return 1;
}


