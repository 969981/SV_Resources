/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00489df0; name: FUN_00489df0
 */


undefined8 FUN_00489df0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  size_t sVar6;
  char *pcVar7;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_2 + 0x10) | *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    return 1;
  }
  iVar3 = *(int *)(param_2 + 0x20);
  if ((uVar1 >> 1 & 1) == 0) {
    if (iVar3 == 0) {
LAB_00489e68:
      iVar3 = *(int *)(param_2 + 0x24);
      if (iVar3 != 0) {
        if ((uVar1 & 1) == 0) goto LAB_00489e74;
LAB_00489e7c:
        *(int *)(param_1 + 0x24) = iVar3;
      }
    }
    else {
      if (((uVar1 & 1) != 0) || (*(int *)(param_1 + 0x20) == 0)) {
        *(int *)(param_1 + 0x20) = iVar3;
        goto LAB_00489e68;
      }
      iVar3 = *(int *)(param_2 + 0x24);
      if (iVar3 != 0) {
LAB_00489e74:
        if (*(int *)(param_1 + 0x24) == 0) goto LAB_00489e7c;
      }
    }
    if (*(int *)(param_2 + 0x28) == -1) {
LAB_00489eb0:
      iVar3 = *(int *)(param_2 + 0x2c);
      if (iVar3 != -1) {
        if ((uVar1 & 1) == 0) goto LAB_00489ec0;
LAB_00489ecc:
        *(int *)(param_1 + 0x2c) = iVar3;
      }
    }
    else {
      if (((uVar1 & 1) != 0) || (*(int *)(param_1 + 0x28) == -1)) {
        *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
        goto LAB_00489eb0;
      }
      iVar3 = *(int *)(param_2 + 0x2c);
      if (iVar3 != -1) {
LAB_00489ec0:
        if (*(int *)(param_1 + 0x2c) == -1) goto LAB_00489ecc;
      }
    }
    uVar4 = *(ulong *)(param_1 + 0x18);
    if (((uint)uVar4 >> 1 & 1) == 0) goto LAB_00489ed8;
  }
  else {
    *(int *)(param_1 + 0x20) = iVar3;
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    uVar4 = *(ulong *)(param_1 + 0x18);
LAB_00489ed8:
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar4 = uVar4 & 0xfffffffffffffffd;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar5;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar4 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(ulong *)(param_1 + 0x18) = uVar4 | *(ulong *)(param_2 + 0x18);
  if ((uVar1 >> 1 & 1) == 0) {
    if (*(long *)(param_2 + 0x30) == 0) {
LAB_00489f4c:
      iVar3 = *(int *)(param_2 + 0x40);
      if (iVar3 != 0) {
        if ((uVar1 & 1) == 0) goto LAB_00489f58;
LAB_00489f60:
        *(int *)(param_1 + 0x40) = iVar3;
      }
    }
    else {
      if (((uVar1 & 1) != 0) || (*(long *)(param_1 + 0x30) == 0)) {
        uVar5 = FUN_0048a100(param_1);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        if ((uVar1 >> 1 & 1) != 0) goto LAB_00489f30;
        goto LAB_00489f4c;
      }
      iVar3 = *(int *)(param_2 + 0x40);
      if (iVar3 != 0) {
LAB_00489f58:
        if (*(int *)(param_1 + 0x40) == 0) goto LAB_00489f60;
      }
    }
    if (*(long *)(param_2 + 0x38) == 0) goto LAB_00489fc0;
    if (((uVar1 & 1) != 0) || (*(long *)(param_1 + 0x38) == 0)) goto LAB_00489f84;
    pcVar7 = *(char **)(param_2 + 0x50);
    if (pcVar7 != (char *)0x0) {
LAB_00489fcc:
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_00489ff0;
    }
  }
  else {
    uVar5 = FUN_0048a100(param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
LAB_00489f30:
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
LAB_00489f84:
    FUN_0047e3b0(*(undefined8 *)(param_1 + 0x38),&LAB_00489de0);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(long *)(param_2 + 0x38) != 0) {
      lVar2 = FUN_0047db50(*(long *)(param_2 + 0x38),&LAB_0048a1d0,&LAB_00489de0);
      *(long *)(param_1 + 0x38) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    if ((uVar1 >> 1 & 1) == 0) {
LAB_00489fc0:
      pcVar7 = *(char **)(param_2 + 0x50);
      if (pcVar7 == (char *)0x0) goto LAB_0048a04c;
      if ((uVar1 & 1) == 0) goto LAB_00489fcc;
LAB_00489ff0:
      sVar6 = *(size_t *)(param_2 + 0x58);
      if (sVar6 == 0) {
        sVar6 = strlen(pcVar7);
      }
      lVar2 = FUN_0045ace0(pcVar7,sVar6,"external/openssl/crypto/x509/x509_vpm.c",0xf7);
      if (lVar2 == 0) {
        return 0;
      }
    }
    else {
      pcVar7 = *(char **)(param_2 + 0x50);
      if (pcVar7 != (char *)0x0) goto LAB_00489ff0;
      sVar6 = 0;
      lVar2 = 0;
    }
    FUN_00452f80(*(long *)(param_1 + 0x50),"external/openssl/crypto/x509/x509_vpm.c",0xfe);
    *(long *)(param_1 + 0x50) = lVar2;
    *(size_t *)(param_1 + 0x58) = sVar6;
    if ((uVar1 >> 1 & 1) != 0) {
      pcVar7 = *(char **)(param_2 + 0x60);
      goto LAB_0048a07c;
    }
  }
LAB_0048a04c:
  pcVar7 = *(char **)(param_2 + 0x60);
  if ((pcVar7 == (char *)0x0) || (((uVar1 & 1) == 0 && (*(long *)(param_1 + 0x60) != 0)))) {
    return 1;
  }
LAB_0048a07c:
  sVar6 = *(ulong *)(param_2 + 0x68);
  if (0x10 < sVar6) {
    return 0;
  }
  if ((1L << (sVar6 & 0x3f) & 0x10011U) == 0) {
    return 0;
  }
  if (pcVar7 == (char *)0x0) {
    sVar6 = 0;
    lVar2 = 0;
  }
  else {
    if (sVar6 == 0) {
      sVar6 = strlen(pcVar7);
    }
    lVar2 = FUN_0045ace0(pcVar7,sVar6,"external/openssl/crypto/x509/x509_vpm.c",0xf7);
    if (lVar2 == 0) {
      return 0;
    }
  }
  FUN_00452f80(*(undefined8 *)(param_1 + 0x60),"external/openssl/crypto/x509/x509_vpm.c",0xfe);
  *(long *)(param_1 + 0x60) = lVar2;
  *(size_t *)(param_1 + 0x68) = sVar6;
  return 1;
}


