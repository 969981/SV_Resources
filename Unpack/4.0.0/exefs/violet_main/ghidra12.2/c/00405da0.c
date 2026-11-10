/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00405da0; name: FUN_00405da0
 */


long FUN_00405da0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (((param_1 == (long *)0x0) || (lVar4 = *param_1, lVar4 == 0)) || (*(long *)(lVar4 + 0x18) == 0)
     ) {
    uVar2 = 0x43;
    uVar3 = 0x4ab;
  }
  else {
    iVar1 = FUN_0040c350(lVar4,*param_2,param_3,0);
    if (iVar1 != 0) {
      *param_2 = *param_2 + param_3;
      return lVar4;
    }
    uVar3 = 0x4b0;
    uVar2 = 0x10;
  }
  FUN_004806c0(0x10,0x98,uVar2,"external/openssl/crypto/ec/ec_asn1.c",uVar3);
  return 0;
}


