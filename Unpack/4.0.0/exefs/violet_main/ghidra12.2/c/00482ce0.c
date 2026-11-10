/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00482ce0; name: FUN_00482ce0
 */


int FUN_00482ce0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_003ea5c0();
  lVar3 = FUN_003e8a30();
  if ((lVar3 == 0) || (iVar1 = FUN_003e9560(lVar3,0x6c,3,param_2), iVar1 < 1)) {
    uVar7 = 0x8d;
    uVar6 = 2;
    goto LAB_00482e54;
  }
  if (param_3 == 2) {
    lVar4 = FUN_0048abc0(lVar3,0);
    if (lVar4 == 0) {
      FUN_004806c0(0xb,0x70,0xd,"external/openssl/crypto/x509/by_file.c",0xa9);
LAB_00482e34:
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00484cc0(*(undefined8 *)(param_1 + 0x18),lVar4);
    }
    goto LAB_00482e60;
  }
  if (param_3 == 1) {
    lVar4 = FUN_0045d320(lVar3,0,0,&DAT_03c886bc);
    if (lVar4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      do {
        iVar2 = FUN_00484cc0(*(undefined8 *)(param_1 + 0x18),lVar4);
        if (iVar2 == 0) goto LAB_00482e34;
        iVar1 = iVar1 + 1;
        FUN_0048b0c0(lVar4);
        lVar4 = FUN_0045d320(lVar3,0,0,&DAT_03c886bc);
      } while (lVar4 != 0);
    }
    uVar5 = FUN_00480c80();
    if ((iVar1 == 0) || ((uVar5 & 0xfff) != 0x6c)) {
      uVar6 = 9;
      uVar7 = 0x9a;
      goto LAB_00482e54;
    }
    FUN_004808e0();
  }
  else {
    uVar6 = 100;
    uVar7 = 0xb1;
LAB_00482e54:
    FUN_004806c0(0xb,0x70,uVar6,"external/openssl/crypto/x509/by_file.c",uVar7);
    iVar1 = 0;
  }
  lVar4 = 0;
LAB_00482e60:
  FUN_0048b0c0(lVar4);
  FUN_003e8b90(lVar3);
  return iVar1;
}


