/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048f0f0; name: FUN_0048f0f0
 */


long FUN_0048f0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *__s;
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  size_t sVar8;
  char *pcVar9;
  size_t sVar10;
  undefined8 uVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  uint *puVar15;
  char *__accept;
  undefined8 uVar16;
  size_t local_98;
  uint local_8c;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  char *local_68;
  
  lVar4 = FUN_0047de20(&LAB_0048ec40);
  if (lVar4 == 0) {
    FUN_004806c0(0x22,0x9f,0x41,"external/openssl/crypto/x509v3/v3_addr.c",0x382);
  }
  else {
    iVar2 = FUN_0047e430(param_3);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar6 = (undefined8 *)FUN_0047e450(param_3,iVar2);
        iVar3 = FUN_0049b4f0(puVar6[1],&DAT_03bd3210);
        if (iVar3 == 0) {
          uVar16 = 1;
          local_98 = 4;
          __accept = "0123456789.";
LAB_0048f254:
          pcVar9 = (char *)FUN_0045abd0(puVar6[2],"external/openssl/crypto/x509v3/v3_addr.c",0x3b8);
          puVar15 = (uint *)0x0;
        }
        else {
          iVar3 = FUN_0049b4f0(puVar6[1],&DAT_03c26070);
          if (iVar3 == 0) {
            local_98 = 0x10;
            uVar16 = 2;
            __accept = "0123456789.:abcdefABCDEF";
            goto LAB_0048f254;
          }
          iVar3 = FUN_0049b4f0(puVar6[1],"IPv4-SAFI");
          if (iVar3 != 0) {
            iVar3 = FUN_0049b4f0(puVar6[1],"IPv6-SAFI");
            if (iVar3 == 0) {
              local_98 = 0x10;
              uVar16 = 2;
              __accept = "0123456789.:abcdefABCDEF";
              goto LAB_0048f288;
            }
            uVar16 = 0x73;
            uVar11 = 0x399;
LAB_0048f67c:
            FUN_004806c0(0x22,0x9f,uVar16,"external/openssl/crypto/x509v3/v3_addr.c",uVar11);
            FUN_00481380(6,"section:",*puVar6,",name:",puVar6[1],",value:",puVar6[2]);
            goto LAB_0048f6a8;
          }
          uVar16 = 1;
          local_98 = 4;
          __accept = "0123456789.";
LAB_0048f288:
          uVar7 = strtoul((char *)puVar6[2],&local_68,0);
          pcVar9 = local_68;
          local_8c = (uint)uVar7;
          sVar8 = strspn(local_68," \t");
          pcVar9 = pcVar9 + sVar8;
          local_68 = pcVar9;
          if ((0xff < (uint)uVar7) || (__s = pcVar9 + 1, local_68 = __s, *pcVar9 != ':')) {
            uVar16 = 0xa4;
            uVar11 = 0x3b1;
            goto LAB_0048f67c;
          }
          sVar8 = strspn(__s," \t");
          local_68 = __s + sVar8;
          pcVar9 = (char *)FUN_0045abd0(local_68,"external/openssl/crypto/x509v3/v3_addr.c",0x3b6);
          puVar15 = &local_8c;
        }
        if (pcVar9 == (char *)0x0) {
          FUN_004806c0(0x22,0x9f,0x41,"external/openssl/crypto/x509v3/v3_addr.c",0x3bb);
          goto LAB_0048f73c;
        }
        iVar3 = strcmp(pcVar9,"inherit");
        if (iVar3 == 0) {
          lVar14 = FUN_0048e090(lVar4,uVar16,puVar15);
          if ((lVar14 == 0) || (piVar13 = *(int **)(lVar14 + 8), piVar13 == (int *)0x0)) {
LAB_0048f55c:
            FUN_004806c0(0x22,0x9f,0xa5,"external/openssl/crypto/x509v3/v3_addr.c",0x3c6);
            FUN_00481380(6,"section:",*puVar6,",name:",puVar6[1],",value:",puVar6[2]);
            goto LAB_0048f73c;
          }
          if (*piVar13 == 0) {
            uVar16 = 0x3ca;
            if (*(long *)(piVar13 + 2) != 0) goto LAB_0048f194;
LAB_0048f178:
            lVar5 = FUN_003e50a0();
            *(long *)(*(long *)(lVar14 + 8) + 8) = lVar5;
            if (lVar5 == 0) goto LAB_0048f55c;
            piVar13 = *(int **)(lVar14 + 8);
          }
          else {
            if (*piVar13 == 1) {
              if (*(long *)(piVar13 + 2) != 0) goto LAB_0048f55c;
              goto LAB_0048f178;
            }
            if (*(long *)(piVar13 + 2) == 0) goto LAB_0048f178;
          }
          *piVar13 = 0;
          uVar16 = 0x3ca;
        }
        else {
          sVar8 = strspn(pcVar9,__accept);
          sVar10 = strspn(pcVar9 + (int)sVar8," \t");
          lVar14 = (long)((int)sVar8 + (int)sVar10);
          cVar1 = pcVar9[lVar14];
          pcVar9[(int)sVar8] = '\0';
          iVar3 = FUN_0049bb70(auStack_78,pcVar9);
          iVar12 = (int)local_98;
          if (iVar3 != iVar12) {
            uVar16 = 0xa6;
            uVar11 = 0x3d5;
            goto LAB_0048f708;
          }
          if (cVar1 == '\0') {
            iVar3 = FUN_0048e1d0(lVar4,uVar16,puVar15,auStack_78,iVar12 << 3);
            uVar16 = 0x40f;
            if (iVar3 == 0) {
              FUN_004806c0(0x22,0x9f,0x41,"external/openssl/crypto/x509v3/v3_addr.c",0x404);
              goto LAB_0048f73c;
            }
          }
          else {
            lVar14 = lVar14 + 1;
            iVar3 = (int)lVar14;
            if (cVar1 != '-') {
              if (cVar1 == '/') {
                uVar7 = strtoul(pcVar9 + iVar3,&local_68,10);
                if ((local_68 != pcVar9 + iVar3) && (*local_68 == '\0')) {
                  iVar3 = FUN_0048e1d0(lVar4,uVar16,puVar15,auStack_78,uVar7);
                  uVar16 = 0x40f;
                  if (iVar3 != 0) goto LAB_0048f194;
                  FUN_004806c0(0x22,0x9f,0x41,"external/openssl/crypto/x509v3/v3_addr.c",0x3e4);
                  goto LAB_0048f73c;
                }
                uVar16 = 0x74;
                uVar11 = 0x3df;
              }
              else {
                uVar16 = 0x74;
                uVar11 = 0x40a;
              }
LAB_0048f708:
              FUN_004806c0(0x22,0x9f,uVar16,"external/openssl/crypto/x509v3/v3_addr.c",uVar11);
              FUN_00481380(6,"section:",*puVar6,",name:",puVar6[1],",value:",puVar6[2]);
              goto LAB_0048f73c;
            }
            sVar8 = strspn(pcVar9 + lVar14," \t");
            iVar3 = iVar3 + (int)sVar8;
            sVar8 = strspn(pcVar9 + iVar3,__accept);
            if (((int)sVar8 == 0) || (pcVar9[iVar3 + (int)sVar8] != '\0')) {
              FUN_004806c0(0x22,0x9f,0x74,"external/openssl/crypto/x509v3/v3_addr.c",0x3ed);
              FUN_00481380(6,"section:",*puVar6,",name:",puVar6[1],",value:",puVar6[2]);
              goto LAB_0048f73c;
            }
            iVar3 = FUN_0049bb70(auStack_88,pcVar9 + iVar3);
            if (iVar3 != iVar12) {
              uVar16 = 0xa6;
              uVar11 = 0x3f3;
              goto LAB_0048f708;
            }
            iVar3 = memcmp(auStack_78,auStack_88,local_98);
            if (0 < iVar3) {
              FUN_004806c0(0x22,0x9f,0x74,"external/openssl/crypto/x509v3/v3_addr.c",0x3f9);
              FUN_00481380(6,"section:",*puVar6,",name:",puVar6[1],",value:",puVar6[2]);
              goto LAB_0048f73c;
            }
            iVar3 = FUN_0048e3e0(lVar4,uVar16,puVar15,auStack_78,auStack_88);
            uVar16 = 0x40f;
            if (iVar3 == 0) {
              FUN_004806c0(0x22,0x9f,0x41,"external/openssl/crypto/x509v3/v3_addr.c",0x3fe);
              goto LAB_0048f73c;
            }
          }
        }
LAB_0048f194:
        FUN_00452f80(pcVar9,"external/openssl/crypto/x509v3/v3_addr.c",uVar16);
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0047e430(param_3);
      } while (iVar2 < iVar3);
    }
    iVar2 = FUN_0048ee30(lVar4);
    if (iVar2 == 0) {
LAB_0048f6a8:
      pcVar9 = (char *)0x0;
LAB_0048f73c:
      FUN_00452f80(pcVar9,"external/openssl/crypto/x509v3/v3_addr.c",0x41b);
      FUN_0047e3b0(lVar4,PTR_LAB_047cd5b0);
      lVar4 = 0;
    }
  }
  return lVar4;
}


