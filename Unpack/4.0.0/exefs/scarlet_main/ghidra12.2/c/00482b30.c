/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00482b30; name: FUN_00482b30
 */


int FUN_00482b30(long param_1,undefined8 param_2,int param_3)

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
    uVar7 = 0x54;
    uVar6 = 2;
    goto LAB_00482c04;
  }
  if (param_3 == 2) {
    lVar4 = FUN_0048aba0(lVar3,0);
    if (lVar4 == 0) {
      FUN_004806c0(0xb,0x6f,0xd,"external/openssl/crypto/x509/by_file.c",0x70);
LAB_00482cb4:
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00484b20(*(undefined8 *)(param_1 + 0x18),lVar4);
    }
    goto LAB_00482c10;
  }
  if (param_3 == 1) {
    lVar4 = FUN_0045f8d0(lVar3,0,0,&DAT_03c886bc);
    if (lVar4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      do {
        iVar2 = FUN_00484b20(*(undefined8 *)(param_1 + 0x18),lVar4);
        if (iVar2 == 0) goto LAB_00482cb4;
        iVar1 = iVar1 + 1;
        FUN_0048c830(lVar4);
        lVar4 = FUN_0045f8d0(lVar3,0,0,&DAT_03c886bc);
      } while (lVar4 != 0);
    }
    uVar5 = FUN_00480c80();
    if ((iVar1 == 0) || ((uVar5 & 0xfff) != 0x6c)) {
      uVar6 = 9;
      uVar7 = 0x61;
      goto LAB_00482c04;
    }
    FUN_004808e0();
  }
  else {
    uVar6 = 100;
    uVar7 = 0x78;
LAB_00482c04:
    FUN_004806c0(0xb,0x6f,uVar6,"external/openssl/crypto/x509/by_file.c",uVar7);
    iVar1 = 0;
  }
  lVar4 = 0;
LAB_00482c10:
  FUN_0048c830(lVar4);
  FUN_003e8b90(lVar3);
  return iVar1;
}


