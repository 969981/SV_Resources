/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00405e40; name: FUN_00405e40
 */


ulong FUN_00405e40(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    uVar3 = 0x43;
    uVar5 = 0x4bd;
LAB_00405ea4:
    FUN_004806c0(0x10,0x97,uVar3,"external/openssl/crypto/ec/ec_asn1.c",uVar5);
  }
  else {
    uVar2 = FUN_0040f920(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x34),0,0,0);
    if ((param_2 == (long *)0x0) || (uVar2 == 0)) goto LAB_00405eb0;
    lVar4 = *param_2;
    if (lVar4 == 0) {
      lVar4 = FUN_00452c30(uVar2,"external/openssl/crypto/ec/ec_asn1.c",0x4c9);
      *param_2 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0x41;
        uVar5 = 0x4ca;
        goto LAB_00405ea4;
      }
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar4 = FUN_0040f920(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x34),lVar4,uVar2,0);
    if (lVar4 != 0) {
      if (bVar1) {
        *param_2 = *param_2 + uVar2;
      }
      goto LAB_00405eb0;
    }
    FUN_004806c0(0x10,0x97,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x4d1);
    if (!bVar1) {
      FUN_00452f80(*param_2,"external/openssl/crypto/ec/ec_asn1.c",0x4d3);
      uVar2 = 0;
      *param_2 = 0;
      goto LAB_00405eb0;
    }
  }
  uVar2 = 0;
LAB_00405eb0:
  return uVar2 & 0xffffffff;
}


