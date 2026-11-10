/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045e310; name: FUN_0045e310
 */


undefined8 FUN_0045e310(char *param_1,long *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  
  *param_2 = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  if (param_1 == (char *)0x0) {
    return 1;
  }
  if (*param_1 == '\0') {
    return 1;
  }
  if (*param_1 == '\n') {
    return 1;
  }
  iVar4 = strncmp(param_1,"Proc-Type:",10);
  if (iVar4 != 0) {
    uVar9 = 0x6b;
    uVar10 = 0x6b;
    uVar11 = 0x1f0;
    goto LAB_0045e380;
  }
  sVar7 = strspn(param_1 + 10," \t");
  pcVar1 = param_1 + 10 + sVar7;
  if (*pcVar1 != '4') {
    return 0;
  }
  pcVar13 = pcVar1 + 2;
  if (pcVar1[1] != ',') {
    return 0;
  }
  sVar7 = strspn(pcVar13," \t");
  iVar4 = strncmp(pcVar13 + sVar7,"ENCRYPTED",9);
  if (iVar4 == 0) {
    pcVar1 = pcVar13 + sVar7 + 9;
    sVar7 = strspn(pcVar1," \t\r\n");
    if (sVar7 != 0) {
      sVar7 = strspn(pcVar1," \t\r");
      pcVar1 = pcVar1 + sVar7;
      if (*pcVar1 == '\n') {
        iVar4 = strncmp(pcVar1 + 1,"DEK-Info:",9);
        if (iVar4 == 0) {
          sVar7 = strspn(pcVar1 + 10," \t");
          pcVar1 = pcVar1 + 10 + sVar7;
          sVar7 = strcspn(pcVar1," \t,");
          pcVar13 = pcVar1 + sVar7;
          cVar2 = *pcVar13;
          *pcVar13 = '\0';
          lVar8 = FUN_0043d0f0(pcVar1);
          *param_2 = lVar8;
          *pcVar13 = cVar2;
          sVar7 = strspn(pcVar13," \t");
          if (lVar8 == 0) {
            uVar9 = 0x6b;
            uVar10 = 0x72;
            uVar11 = 0x21f;
          }
          else {
            pcVar13 = pcVar13 + sVar7;
            iVar4 = FUN_0043b690(lVar8);
            if (iVar4 < 1) {
              if ((iVar4 == 0) && (*pcVar13 == ',')) {
                uVar9 = 0x6b;
                uVar10 = 0x82;
                uVar11 = 0x227;
                goto LAB_0045e380;
              }
            }
            else {
              cVar2 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              if (cVar2 != ',') {
                uVar9 = 0x6b;
                uVar10 = 0x81;
                uVar11 = 0x224;
                goto LAB_0045e380;
              }
            }
            uVar5 = FUN_0043b690(lVar8);
            if ((int)uVar5 < 1) {
              return 1;
            }
            memset(param_2 + 1,0,(ulong)uVar5);
            iVar4 = uVar5 * 2;
            uVar5 = 0;
            uVar14 = 0;
            if (iVar4 < 2) {
              iVar4 = 1;
            }
            while (iVar6 = FUN_0045ae90(pcVar13[uVar14]), -1 < iVar6) {
              uVar12 = uVar14 >> 1 & 0x7fffffff;
              uVar14 = uVar14 + 1;
              uVar3 = ~uVar5;
              uVar5 = uVar5 + 4;
              *(byte *)((long)param_2 + uVar12 + 8) =
                   *(byte *)((long)param_2 + uVar12 + 8) | (byte)(iVar6 << (ulong)(uVar3 & 4));
              if (iVar4 == (int)uVar14) {
                return 1;
              }
            }
            uVar9 = 0x65;
            uVar10 = 0x67;
            uVar11 = 0x23d;
          }
        }
        else {
          uVar9 = 0x6b;
          uVar10 = 0x69;
          uVar11 = 0x20c;
        }
      }
      else {
        uVar9 = 0x6b;
        uVar11 = 0x203;
        uVar10 = 0x70;
      }
      goto LAB_0045e380;
    }
  }
  uVar9 = 0x6b;
  uVar10 = 0x6a;
  uVar11 = 0x1fd;
LAB_0045e380:
  FUN_004806c0(9,uVar9,uVar10,"external/openssl/crypto/pem/pem_lib.c",uVar11);
  return 0;
}


