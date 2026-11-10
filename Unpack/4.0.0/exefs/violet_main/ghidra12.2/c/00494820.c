/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00494820; name: FUN_00494820
 */


undefined4 *
FUN_00494820(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char *__s;
  undefined8 uVar9;
  
  __s = *(char **)(param_4 + 0x10);
  if (__s == (char *)0x0) {
    FUN_004806c0(0x22,0x75,0x7c,"external/openssl/crypto/x509v3/v3_alt.c",0x215);
    return (undefined4 *)0x0;
  }
  uVar9 = *(undefined8 *)(param_4 + 8);
  iVar1 = FUN_0049b4f0(uVar9,"email");
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  else {
    iVar1 = FUN_0049b4f0(uVar9,&DAT_03c6fa1c);
    if (iVar1 == 0) {
      uVar7 = 6;
    }
    else {
      iVar1 = FUN_0049b4f0(uVar9,&DAT_03c33b99);
      if (iVar1 == 0) {
        uVar7 = 2;
      }
      else {
        iVar1 = FUN_0049b4f0(uVar9,&DAT_03c8a12c);
        if (iVar1 == 0) {
          uVar7 = 8;
        }
        else {
          iVar1 = FUN_0049b4f0(uVar9,&DAT_03bee39e);
          if (iVar1 == 0) {
            uVar7 = 7;
          }
          else {
            iVar1 = FUN_0049b4f0(uVar9,"dirName");
            if (iVar1 == 0) {
              uVar7 = 4;
            }
            else {
              iVar1 = FUN_0049b4f0(uVar9,"otherName");
              if (iVar1 != 0) {
                FUN_004806c0(0x22,0x75,0x75,"external/openssl/crypto/x509v3/v3_alt.c",0x228);
                FUN_00481380(2,"name=",uVar9);
                return (undefined4 *)0x0;
              }
              uVar7 = 0;
            }
          }
        }
      }
    }
  }
  if (__s == (char *)0x0) {
    FUN_004806c0(0x22,0xa4,0x7c,"external/openssl/crypto/x509v3/v3_alt.c",0x1b7);
    return (undefined4 *)0x0;
  }
  puVar2 = param_1;
  if ((param_1 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)FUN_00494ea0(), puVar2 == (undefined4 *)0x0)) {
    FUN_004806c0(0x22,0xa4,0x41,"external/openssl/crypto/x509v3/v3_alt.c",0x1c0);
    return (undefined4 *)0x0;
  }
  switch(uVar7) {
  case 0:
    pcVar4 = strchr(__s,0x3b);
    if (pcVar4 != (char *)0x0) {
      lVar6 = FUN_00494e90();
      *(long *)(puVar2 + 2) = lVar6;
      if (lVar6 != 0) {
        FUN_003e50e0(*(undefined8 *)(lVar6 + 8));
        lVar6 = FUN_0044ea80(pcVar4 + 1,param_3);
        *(long *)(*(long *)(puVar2 + 2) + 8) = lVar6;
        if ((lVar6 != 0) &&
           (lVar6 = FUN_0045ac20(__s,(long)((int)pcVar4 - (int)__s),
                                 "external/openssl/crypto/x509v3/v3_alt.c",0x242), lVar6 != 0)) {
          uVar9 = FUN_0045c010(lVar6,0);
          **(undefined8 **)(puVar2 + 2) = uVar9;
          FUN_00452f80(lVar6,"external/openssl/crypto/x509v3/v3_alt.c",0x246);
          if (**(long **)(puVar2 + 2) != 0) goto LAB_00494ba0;
        }
      }
    }
    uVar9 = 0x93;
    uVar8 = 0x1ed;
    break;
  case 1:
  case 2:
  case 6:
    lVar6 = FUN_003e5080();
    *(long *)(puVar2 + 2) = lVar6;
    if (lVar6 != 0) {
      sVar3 = strlen(__s);
      iVar1 = FUN_003df070(lVar6,__s,sVar3);
      if (iVar1 != 0) goto LAB_00494ba0;
    }
    uVar9 = 0x41;
    uVar8 = 0x1fa;
    break;
  default:
    uVar9 = 0xa7;
    uVar8 = 0x1f2;
    break;
  case 4:
    lVar6 = FUN_0048b9d0();
    if (lVar6 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_00491c40(param_3,__s);
      if (lVar5 == 0) {
        FUN_004806c0(0x22,0x90,0x96,"external/openssl/crypto/x509v3/v3_alt.c",0x256);
        FUN_00481380(2,"section=",__s);
      }
      else {
        iVar1 = FUN_0049be80(lVar6,lVar5,0x1001);
        if (iVar1 != 0) {
          *(long *)(puVar2 + 2) = lVar6;
          FUN_00491c90(param_3,lVar5);
          goto LAB_00494ba0;
        }
      }
    }
    FUN_0048b9e0(lVar6);
    FUN_00491c90(param_3,lVar5);
    uVar9 = 0x95;
    uVar8 = 0x1e6;
    break;
  case 7:
    if (param_5 == 0) {
      lVar6 = FUN_0049bd10(__s);
      *(long *)(puVar2 + 2) = lVar6;
    }
    else {
      lVar6 = FUN_0049bd70();
      *(long *)(puVar2 + 2) = lVar6;
    }
    if (lVar6 != 0) {
LAB_00494ba0:
      *puVar2 = uVar7;
      return puVar2;
    }
    uVar9 = 0x76;
    uVar8 = 0x1de;
    goto LAB_00494c0c;
  case 8:
    lVar6 = FUN_0045c010(__s,0);
    if (lVar6 != 0) {
      *(long *)(puVar2 + 2) = lVar6;
      *puVar2 = uVar7;
      return puVar2;
    }
    uVar9 = 0x77;
    uVar8 = 0x1d0;
LAB_00494c0c:
    FUN_004806c0(0x22,0xa4,uVar9,"external/openssl/crypto/x509v3/v3_alt.c",uVar8);
    FUN_00481380(2,"value=",__s);
    goto joined_r0x00494c24;
  }
  FUN_004806c0(0x22,0xa4,uVar9,"external/openssl/crypto/x509v3/v3_alt.c",uVar8);
joined_r0x00494c24:
  if (param_1 == (undefined4 *)0x0) {
    FUN_00494eb0(puVar2);
  }
  return (undefined4 *)0x0;
}


