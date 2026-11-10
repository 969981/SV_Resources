/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f86c0; name: FUN_003f86c0
 */


bool FUN_003f86c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  
  if (param_3 == 0) {
    return true;
  }
  iVar6 = FUN_003ec670(param_3);
  pcVar2 = "";
  if (iVar6 != 0) {
    pcVar2 = "-";
  }
  iVar6 = FUN_003e94e0(param_1,param_5,0x80);
  if (iVar6 == 0) {
    return false;
  }
  iVar6 = FUN_003eb480(param_3);
  if (iVar6 != 0) {
    iVar6 = FUN_003e6880(param_1,"%s 0\n",param_2);
LAB_003f87a0:
    return 0 < iVar6;
  }
  iVar6 = FUN_003eb2b0(param_3);
  if (iVar6 < 0x21) {
    puVar8 = (undefined4 *)FUN_003f8d00(param_3);
    uVar4 = *puVar8;
    puVar8 = (undefined4 *)FUN_003f8d00(param_3);
    iVar6 = FUN_003e6880(param_1,"%s %s%lu (%s0x%lx)\n",param_2,pcVar2,uVar4,pcVar2,*puVar8);
    goto LAB_003f87a0;
  }
  iVar7 = FUN_003eb2b0(param_3);
  iVar6 = iVar7 + 0xe;
  if (-1 < iVar7 + 7) {
    iVar6 = iVar7 + 7;
  }
  lVar10 = (long)((iVar6 >> 3) + 1);
  puVar9 = (undefined1 *)FUN_00452c30(lVar10,"external/openssl/crypto/asn1/t_pkey.c",0x49);
  if (puVar9 != (undefined1 *)0x0) {
    cVar5 = *pcVar2;
    *puVar9 = 0;
    pcVar2 = " (Negative)";
    if (cVar5 != '-') {
      pcVar2 = "";
    }
    iVar6 = FUN_003e6880(param_1,"%s%s\n",param_2,pcVar2);
    if (0 < iVar6) {
      iVar6 = FUN_003ebe40(param_3,puVar9 + 1);
      if ((char)puVar9[1] < '\0') {
        iVar6 = iVar6 + 1;
        puVar1 = puVar9;
      }
      else {
        puVar1 = puVar9 + 1;
      }
      if (iVar6 != 0) {
        uVar12 = 0;
        do {
          if (((uVar12 / 0xf) * 0xf == uVar12) &&
             (((uVar12 != 0 && (iVar7 = FUN_003e9110(param_1,&DAT_03c67c74), iVar7 < 1)) ||
              (iVar7 = FUN_003e94e0(param_1,param_5 + 4,0x80), iVar7 == 0)))) goto LAB_003f8920;
          puVar3 = &DAT_03c886bc;
          if ((long)iVar6 - 1U != uVar12) {
            puVar3 = &DAT_03c9c9c5;
          }
          iVar7 = FUN_003e6880(param_1,"%02x%s",puVar1[uVar12],puVar3);
          if (iVar7 < 1) goto LAB_003f8920;
          uVar12 = uVar12 + 1;
        } while ((long)iVar6 != uVar12);
      }
      bVar11 = true;
      iVar6 = FUN_003e8f00(param_1,&DAT_03c67c74,1);
      if (0 < iVar6) goto LAB_003f8924;
    }
  }
LAB_003f8920:
  bVar11 = false;
LAB_003f8924:
  FUN_00453260(puVar9,lVar10,"external/openssl/crypto/asn1/t_pkey.c",0x5b);
  return bVar11;
}


