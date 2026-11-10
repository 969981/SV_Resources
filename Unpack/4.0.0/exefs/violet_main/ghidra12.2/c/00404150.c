/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00404150; name: FUN_00404150
 */


long FUN_00404150(int param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_18;
  
  if (param_1 == 6) {
    lVar2 = FUN_0040ba50();
    if (lVar2 != 0) {
      FUN_0045bea0(param_2);
      lVar5 = FUN_004062c0();
      if (lVar5 != 0) {
        FUN_0040d590(lVar5,1);
        iVar1 = FUN_0040c220(lVar2,lVar5);
        if (iVar1 != 0) {
          FUN_0040ca30(lVar5);
          return lVar2;
        }
      }
      goto LAB_00404254;
    }
    uVar3 = 0x41;
    uVar4 = 0x82;
  }
  else {
    if (param_1 != 0x10) {
      FUN_004806c0(0x10,0xdc,0x8e,"external/openssl/crypto/ec/ec_ameth.c",0x8d);
      lVar5 = 0;
      lVar2 = 0;
      goto LAB_00404254;
    }
    local_18 = *(undefined8 *)(param_2 + 2);
    lVar2 = FUN_00405c80(0,&local_18,(long)*param_2);
    if (lVar2 != 0) {
      return lVar2;
    }
    uVar3 = 0x8e;
    uVar4 = 0x78;
    lVar2 = 0;
  }
  FUN_004806c0(0x10,0xdc,uVar3,"external/openssl/crypto/ec/ec_ameth.c",uVar4);
  lVar5 = 0;
LAB_00404254:
  FUN_0040bae0(lVar2);
  FUN_0040ca30(lVar5);
  return 0;
}


