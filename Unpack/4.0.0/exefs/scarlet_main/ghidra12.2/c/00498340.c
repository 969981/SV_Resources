/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00498340; name: FUN_00498340
 */


undefined8 FUN_00498340(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  void *__src;
  size_t __n;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  long lVar10;
  undefined1 auStack_858 [2048];
  size_t local_58;
  
  pcVar9 = (char *)param_1[1];
  iVar2 = strcmp(pcVar9,"language");
  if (iVar2 == 0) {
    if (*param_2 == 0) {
      lVar4 = FUN_0045c010(param_1[2],0);
      *param_2 = lVar4;
      if (lVar4 != 0) {
        return 1;
      }
      uVar6 = 0x6e;
      uVar5 = 0x65;
    }
    else {
      uVar6 = 0x9b;
      uVar5 = 0x5f;
    }
LAB_00498650:
    FUN_004806c0(0x22,0x96,uVar6,"external/openssl/crypto/x509v3/v3_pci.c",uVar5);
    FUN_00481380(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
    return 0;
  }
  iVar2 = strcmp(pcVar9,"pathlen");
  if (iVar2 == 0) {
    if (*param_3 == 0) {
      iVar2 = FUN_0049b080(param_1,param_3);
      if (iVar2 != 0) {
        return 1;
      }
      uVar6 = 0x9c;
      uVar5 = 0x72;
    }
    else {
      uVar6 = 0x9d;
      uVar5 = 0x6c;
    }
    goto LAB_00498650;
  }
  iVar2 = strcmp(pcVar9,"policy");
  if (iVar2 != 0) {
    return 1;
  }
  piVar8 = (int *)*param_4;
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)FUN_003e4ff0();
    *param_4 = (long)piVar8;
    if (piVar8 == (int *)0x0) {
      uVar6 = 0x41;
      uVar5 = 0x7c;
      goto LAB_00498650;
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  pcVar9 = (char *)param_1[2];
  iVar2 = strncmp(pcVar9,"hex:",4);
  if (iVar2 == 0) {
    __src = (void *)FUN_0045aec0(pcVar9 + 4,&local_58);
    if (__src == (void *)0x0) goto LAB_004987f8;
    lVar4 = FUN_00452db0(*(undefined8 *)((int *)*param_4 + 2),(long)*(int *)*param_4 + local_58 + 1,
                         "external/openssl/crypto/x509v3/v3_pci.c",0x8c);
    if (lVar4 != 0) {
      *(long *)(*param_4 + 8) = lVar4;
      memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),__src,local_58);
      piVar8 = (int *)*param_4;
      iVar2 = *piVar8;
      *piVar8 = iVar2 + (int)local_58;
      *(undefined1 *)(*(long *)(piVar8 + 2) + (long)(iVar2 + (int)local_58)) = 0;
      FUN_00452f80(__src,"external/openssl/crypto/x509v3/v3_pci.c",0xa0);
      return 1;
    }
    FUN_00452f80(__src,"external/openssl/crypto/x509v3/v3_pci.c",0x94);
    FUN_00452f80(*(undefined8 *)(*param_4 + 8),"external/openssl/crypto/x509v3/v3_pci.c",0x99);
    *(undefined8 *)(*param_4 + 8) = 0;
    puVar7 = (undefined4 *)*param_4;
    uVar6 = 0x9c;
LAB_004987f0:
    uVar5 = 0x41;
    *puVar7 = 0;
  }
  else {
    iVar2 = strncmp(pcVar9,"file:",5);
    if (iVar2 == 0) {
      lVar4 = FUN_003ea4b0(pcVar9 + 5,&DAT_03c53cd7);
      if (lVar4 == 0) {
        uVar6 = 0xa6;
LAB_00498784:
        uVar5 = 0x20;
      }
      else {
        lVar10 = 0;
        do {
          while( true ) {
            uVar3 = FUN_003e8ce0(lVar4,auStack_858,0x800);
            if ((int)uVar3 < 1) break;
            lVar10 = FUN_00452db0(*(undefined8 *)((int *)*param_4 + 2),
                                  (long)(int)(uVar3 + *(int *)*param_4 + 1),
                                  "external/openssl/crypto/x509v3/v3_pci.c",0xb0);
            if (lVar10 == 0) {
              FUN_00452f80(*(undefined8 *)(*param_4 + 8),"external/openssl/crypto/x509v3/v3_pci.c",
                           0xb3);
              *(undefined8 *)(*param_4 + 8) = 0;
              *(undefined4 *)*param_4 = 0;
              FUN_004806c0(0x22,0x96,0x41,"external/openssl/crypto/x509v3/v3_pci.c",0xb7);
              FUN_00481380(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
              FUN_003e9900(lVar4);
              goto joined_r0x004988c4;
            }
            *(long *)(*param_4 + 8) = lVar10;
            memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),auStack_858,
                   (ulong)uVar3);
            piVar8 = (int *)*param_4;
            iVar2 = *piVar8;
            *piVar8 = (int)((long)iVar2 + (long)(int)uVar3);
            *(undefined1 *)(*(long *)(piVar8 + 2) + (long)iVar2 + (long)(int)uVar3) = 0;
          }
          if (uVar3 != 0) {
            FUN_003e9900(lVar4);
            uVar6 = 0xc5;
            goto LAB_00498784;
          }
          iVar2 = FUN_003e8cc0(lVar4,8);
        } while (iVar2 != 0);
        FUN_003e9900(lVar4);
        if (lVar10 != 0) {
          return 1;
        }
        uVar5 = 0x41;
        uVar6 = 0xe6;
      }
    }
    else {
      iVar2 = strncmp(pcVar9,"text:",5);
      if (iVar2 == 0) {
        __n = strlen(pcVar9 + 5);
        local_58 = __n;
        lVar4 = FUN_00452db0(*(undefined8 *)(piVar8 + 2),__n + (long)*piVar8 + 1,
                             "external/openssl/crypto/x509v3/v3_pci.c",0xcc);
        if (lVar4 != 0) {
          *(long *)(*param_4 + 8) = lVar4;
          memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),
                 (void *)(param_1[2] + 5),__n);
          piVar8 = (int *)*param_4;
          iVar2 = *piVar8 + (int)__n;
          *piVar8 = iVar2;
          *(undefined1 *)(*(long *)(piVar8 + 2) + (long)iVar2) = 0;
          return 1;
        }
        FUN_00452f80(*(undefined8 *)(*param_4 + 8),"external/openssl/crypto/x509v3/v3_pci.c",0xd8);
        *(undefined8 *)(*param_4 + 8) = 0;
        puVar7 = (undefined4 *)*param_4;
        uVar6 = 0xdb;
        goto LAB_004987f0;
      }
      uVar5 = 0x98;
      uVar6 = 0xe1;
    }
  }
  FUN_004806c0(0x22,0x96,uVar5,"external/openssl/crypto/x509v3/v3_pci.c",uVar6);
LAB_004987f8:
  FUN_00481380(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
joined_r0x004988c4:
  if (bVar1) {
    return 0;
  }
  thunk_FUN_003df2e0(*param_4);
  *param_4 = 0;
  return 0;
}


