/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00482e90; name: FUN_00482e90
 */


ulong FUN_00482e90(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  
  if (param_3 != 1) {
    uVar6 = FUN_00482b30(param_1);
    return uVar6;
  }
  lVar3 = FUN_003ea4b0(param_2,&DAT_03c53cd7);
  if (lVar3 == 0) {
    FUN_004806c0(0xb,0x84,2,"external/openssl/crypto/x509/by_file.c",199);
    uVar7 = 0;
    goto LAB_00482fec;
  }
  lVar4 = FUN_004830d0(lVar3,0,0,&DAT_03c886bc);
  FUN_003e8b90(lVar3);
  if (lVar4 == 0) {
    FUN_004806c0(0xb,0x84,9,"external/openssl/crypto/x509/by_file.c",0xcd);
    uVar7 = 0;
    goto LAB_00482fec;
  }
  iVar1 = FUN_0047e430(lVar4);
  if (iVar1 < 1) {
LAB_00482fbc:
    FUN_004806c0(0xb,0x84,0x88,"external/openssl/crypto/x509/by_file.c",0xdf);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    iVar1 = 0;
    do {
      plVar5 = (long *)FUN_0047e450(lVar4,iVar1);
      if (*plVar5 != 0) {
        iVar2 = FUN_00484b20(*(undefined8 *)(param_1 + 0x18));
        if (iVar2 == 0) goto LAB_00482fdc;
        uVar7 = uVar7 + 1;
      }
      if (plVar5[1] != 0) {
        iVar2 = FUN_00484cc0(*(undefined8 *)(param_1 + 0x18));
        if (iVar2 == 0) goto LAB_00482fdc;
        uVar7 = uVar7 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(lVar4);
    } while (iVar1 < iVar2);
    if (uVar7 == 0) goto LAB_00482fbc;
  }
LAB_00482fdc:
  FUN_0047e3b0(lVar4,PTR_FUN_047cd4f0);
LAB_00482fec:
  return (ulong)uVar7;
}


