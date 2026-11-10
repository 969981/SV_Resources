/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004830d0; name: FUN_004830d0
 */


long FUN_004830d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  code *pcVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  long local_80;
  long local_78;
  char *local_70;
  char *local_68;
  
  local_78 = 0;
  local_70 = (char *)0x0;
  local_68 = (char *)0x0;
  lVar3 = param_2;
  if ((param_2 == 0) && (lVar3 = FUN_0047dcc0(), lVar3 == 0)) {
    FUN_004806c0(9,0x74,0x41,"external/openssl/crypto/pem/pem_info.c",0x36);
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)FUN_00483590();
    if (plVar4 != (long *)0x0) {
      iVar1 = FUN_0045e620(param_1,&local_68,&local_70,&local_78,&local_88);
      if (iVar1 != 0) {
LAB_00483148:
LAB_004831c8:
        pcVar9 = local_68;
        iVar1 = strcmp(local_68,"CERTIFICATE");
        if ((iVar1 == 0) || (iVar1 = strcmp(pcVar9,"X509 CERTIFICATE"), iVar1 == 0)) {
          if (*plVar4 != 0) goto LAB_00483404;
          pcVar10 = (code *)PTR_FUN_047cd460;
LAB_004832b4:
          uVar12 = 0;
          bVar11 = true;
          plVar8 = plVar4;
        }
        else {
          iVar1 = strcmp(pcVar9,"TRUSTED CERTIFICATE");
          if (iVar1 == 0) {
            if (*plVar4 == 0) {
              pcVar10 = (code *)PTR_LAB_047cd470;
              goto LAB_004832b4;
            }
            goto LAB_00483404;
          }
          iVar1 = strcmp(pcVar9,"X509 CRL");
          if (iVar1 == 0) {
            if (plVar4[1] == 0) {
              uVar12 = 0;
              bVar11 = true;
              plVar8 = plVar4 + 1;
              pcVar10 = (code *)PTR_LAB_047cd450;
              goto LAB_004832c0;
            }
            goto LAB_00483404;
          }
          iVar1 = strcmp(pcVar9,"RSA PRIVATE KEY");
          if (iVar1 == 0) {
            if (plVar4[2] != 0) goto LAB_00483404;
            plVar4[7] = 0;
            *(undefined4 *)(plVar4 + 6) = 0;
            lVar5 = FUN_00483640();
            pcVar9 = local_70;
            plVar4[2] = lVar5;
            if (lVar5 == 0) goto LAB_004834d4;
            sVar6 = strlen(local_70);
            if ((int)sVar6 < 0xb) {
              bVar11 = false;
              uVar12 = 6;
              plVar8 = (long *)(lVar5 + 0x18);
              pcVar10 = (code *)PTR_FUN_047cd500;
              goto LAB_004832c0;
            }
LAB_004833dc:
            iVar1 = FUN_0045e310(pcVar9,plVar4 + 3);
            if (iVar1 == 0) goto LAB_004834d4;
            plVar4[7] = local_78;
            *(int *)(plVar4 + 6) = (int)local_88;
            local_78 = 0;
LAB_00483170:
            FUN_00452f80(local_68,"external/openssl/crypto/pem/pem_info.c",0xd1);
            local_68 = (char *)0x0;
            FUN_00452f80(local_70,"external/openssl/crypto/pem/pem_info.c",0xd3);
            local_70 = (char *)0x0;
            FUN_00452f80(local_78,"external/openssl/crypto/pem/pem_info.c",0xd5);
            local_78 = 0;
            iVar1 = FUN_0045e620(param_1,&local_68,&local_70,&local_78,&local_88);
            if (iVar1 == 0) goto LAB_00483424;
            goto LAB_004831c8;
          }
          iVar1 = strcmp(pcVar9,"DSA PRIVATE KEY");
          if (iVar1 == 0) {
            if (plVar4[2] == 0) {
              plVar4[7] = 0;
              *(undefined4 *)(plVar4 + 6) = 0;
              lVar5 = FUN_00483640();
              pcVar9 = local_70;
              plVar4[2] = lVar5;
              if (lVar5 != 0) {
                sVar6 = strlen(local_70);
                if (10 < (int)sVar6) goto LAB_004833dc;
                bVar11 = false;
                uVar12 = 0x74;
                plVar8 = (long *)(lVar5 + 0x18);
                pcVar10 = (code *)PTR_FUN_047cd508;
                goto LAB_004832c0;
              }
              goto LAB_004834d4;
            }
            goto LAB_00483404;
          }
          iVar1 = strcmp(pcVar9,"EC PRIVATE KEY");
          if (iVar1 != 0) goto LAB_00483170;
          if (plVar4[2] != 0) goto LAB_00483404;
          plVar4[7] = 0;
          *(undefined4 *)(plVar4 + 6) = 0;
          lVar5 = FUN_00483640();
          pcVar9 = local_70;
          plVar4[2] = lVar5;
          if (lVar5 == 0) goto LAB_004834d4;
          sVar6 = strlen(local_70);
          if (10 < (int)sVar6) goto LAB_004833dc;
          bVar11 = false;
          uVar12 = 0x198;
          plVar8 = (long *)(lVar5 + 0x18);
          pcVar10 = (code *)PTR_FUN_047cd4f8;
        }
LAB_004832c0:
        iVar1 = FUN_0045e310(local_70,auStack_a0);
        if ((iVar1 != 0) &&
           (iVar1 = FUN_0045e0c0(auStack_a0,local_78,&local_88,param_3,param_4), iVar1 != 0)) {
          local_80 = local_78;
          if (bVar11) {
            lVar5 = (*pcVar10)(plVar8,&local_80,local_88);
            if (lVar5 != 0) goto LAB_00483170;
            uVar12 = 0xc4;
          }
          else {
            lVar5 = FUN_003e0220(uVar12,plVar8,&local_80,local_88);
            if (lVar5 != 0) goto LAB_00483170;
            uVar12 = 0xc0;
          }
          FUN_004806c0(9,0x74,0xd,"external/openssl/crypto/pem/pem_info.c",uVar12);
        }
        goto LAB_004834d4;
      }
LAB_00483424:
      uVar7 = FUN_00480c80();
      if ((uVar7 & 0xfff) == 0x6c) {
        FUN_004808e0();
        if ((((*plVar4 != 0) || (plVar4[1] != 0)) || (plVar4[2] != 0)) || (plVar4[7] != 0)) {
          iVar1 = FUN_0047e2f0(lVar3,plVar4);
          if (iVar1 == 0) goto LAB_004834d4;
          plVar4 = (long *)0x0;
        }
        FUN_004835e0(plVar4);
        goto LAB_00483528;
      }
    }
  }
LAB_004834d4:
  FUN_004835e0(plVar4);
  iVar1 = FUN_0047e430(lVar3);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      FUN_0047e450(lVar3,iVar1);
      FUN_004835e0();
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(lVar3);
    } while (iVar1 < iVar2);
  }
  if (lVar3 != param_2) {
    FUN_0047db00(lVar3);
  }
  lVar3 = 0;
LAB_00483528:
  FUN_00452f80(local_68,"external/openssl/crypto/pem/pem_info.c",0xf0);
  FUN_00452f80(local_70,"external/openssl/crypto/pem/pem_info.c",0xf1);
  FUN_00452f80(local_78,"external/openssl/crypto/pem/pem_info.c",0xf2);
  return lVar3;
LAB_00483404:
  iVar1 = FUN_0047e2f0(lVar3,plVar4);
  if ((iVar1 == 0) || (plVar4 = (long *)FUN_00483590(), plVar4 == (long *)0x0)) goto LAB_004834d4;
  goto LAB_00483148;
}


