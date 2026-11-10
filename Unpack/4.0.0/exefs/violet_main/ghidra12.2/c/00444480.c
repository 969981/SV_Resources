/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00444480; name: FUN_00444480
 */


int FUN_00444480(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (0xf < param_1) {
    uVar5 = 0x37;
    uVar4 = 7;
LAB_00444588:
    FUN_004806c0(0xf,0x71,uVar4,"external/openssl/crypto/ex_data.c",uVar5);
    return -1;
  }
  uVar6 = (ulong)param_1;
  iVar1 = FUN_0047e650(&DAT_047f1858,FUN_00444e80);
  if ((iVar1 == 0) || (DAT_047f185c == 0)) {
    uVar4 = 0x41;
    uVar5 = 0x3c;
    goto LAB_00444588;
  }
  if (DAT_047f1860 == 0) {
    return -1;
  }
  FUN_0047e5e0();
  if (*(long *)(&DAT_047f1868 + uVar6 * 8) == 0) {
    lVar3 = FUN_0047dcc0();
    *(long *)(&DAT_047f1868 + uVar6 * 8) = lVar3;
    if ((lVar3 != 0) && (iVar1 = FUN_0047e2f0(lVar3,0), iVar1 != 0)) goto LAB_00444514;
    uVar4 = 0xac;
LAB_004445f4:
    FUN_004806c0(0xf,100,0x41,"external/openssl/crypto/ex_data.c",uVar4);
  }
  else {
LAB_00444514:
    puVar2 = (undefined8 *)FUN_00452c30(0x28,"external/openssl/crypto/ex_data.c",0xb1);
    if (puVar2 == (undefined8 *)0x0) {
      uVar4 = 0xb3;
      goto LAB_004445f4;
    }
    puVar2[3] = param_6;
    puVar2[4] = param_5;
    lVar3 = uVar6 * 8;
    puVar2[2] = param_4;
    *puVar2 = param_2;
    puVar2[1] = param_3;
    iVar1 = FUN_0047e2f0(*(undefined8 *)(&DAT_047f1868 + lVar3),0);
    if (iVar1 != 0) {
      iVar1 = FUN_0047e430(*(undefined8 *)(&DAT_047f1868 + lVar3));
      iVar1 = iVar1 + -1;
      FUN_0047e480(*(undefined8 *)(&DAT_047f1868 + lVar3),iVar1,puVar2);
      goto LAB_00444634;
    }
    FUN_004806c0(0xf,100,0x41,"external/openssl/crypto/ex_data.c",0xbd);
    FUN_00452f80(puVar2,"external/openssl/crypto/ex_data.c",0xbe);
  }
  iVar1 = -1;
LAB_00444634:
  FUN_0047e600(DAT_047f1860);
  return iVar1;
}


