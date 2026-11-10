/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049b5f0; name: FUN_0049b5f0
 */


/* WARNING: Removing unreachable block (ram,0x0049b8a0) */

int FUN_0049b5f0(undefined8 param_1,char *param_2,size_t param_3,uint param_4,int param_5,
                undefined8 *param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar11;
  uint uVar10;
  uint *puVar12;
  void *__s1;
  code *local_70;
  undefined8 local_68;
  
  param_4 = param_4 & 0xffff7fff;
  if (param_5 == 1) {
    uVar9 = 0x30;
    local_70 = FUN_0049bf60;
  }
  else {
    if (param_5 != 2) {
      bVar1 = false;
      uVar9 = 0;
      uVar11 = 4;
      uVar10 = 4;
      local_70 = FUN_0049c580;
      goto joined_r0x0049b784;
    }
    if (1 < param_3) {
      param_4 = param_4 | (uint)(*param_2 == '.') << 0xf;
    }
    local_70 = FUN_0049c130;
    if ((param_4 & 2) != 0) {
      local_70 = FUN_0049c050;
    }
    uVar9 = 0xd;
  }
  bVar1 = true;
  uVar11 = 0x16;
  uVar10 = 0x16;
joined_r0x0049b784:
  if (param_3 == 0) {
    param_3 = strlen(param_2);
    uVar10 = uVar11;
  }
  lVar5 = FUN_004843e0(param_1,0x55,0,0);
  if (lVar5 != 0) {
    iVar2 = FUN_0047e430();
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    else if (bVar1) {
      iVar2 = 0;
      iVar4 = 0;
      do {
        piVar6 = (int *)FUN_0047e450(lVar5,iVar4);
        if (*piVar6 == param_5) {
          puVar12 = *(uint **)(piVar6 + 2);
          if (((*(long *)(puVar12 + 2) != 0) && (*puVar12 != 0)) && (puVar12[1] == uVar10)) {
            iVar2 = (*local_70)(*(long *)(puVar12 + 2),(long)(int)*puVar12,param_2,param_3,param_4);
            if ((param_6 != (undefined8 *)0x0) && (0 < iVar2)) {
              __s1 = *(void **)(puVar12 + 2);
              param_3 = (size_t)*puVar12;
LAB_0049b92c:
              uVar9 = FUN_0045ac20(__s1,(long)(int)param_3,"external/openssl/crypto/x509v3/v3_utl.c"
                                   ,0x340);
              *param_6 = uVar9;
LAB_0049ba94:
              FUN_00494ed0(lVar5);
              return iVar2;
            }
            if (iVar2 != 0) goto LAB_0049ba94;
          }
          iVar2 = 1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = FUN_0047e430(lVar5);
      } while (iVar4 < iVar3);
    }
    else if (param_6 == (undefined8 *)0x0) {
      iVar2 = 0;
      iVar4 = 0;
      do {
        piVar6 = (int *)FUN_0047e450(lVar5,iVar4);
        if (*piVar6 == param_5) {
          piVar6 = *(int **)(piVar6 + 2);
          if ((*(void **)(piVar6 + 2) == (void *)0x0) || (*piVar6 == 0)) {
            iVar2 = 1;
          }
          else {
            iVar2 = 1;
            if ((piVar6[1] == uVar10) && (*piVar6 == (int)param_3)) {
              iVar3 = memcmp(*(void **)(piVar6 + 2),param_2,param_3);
              iVar2 = 1;
              if (iVar3 == 0) goto LAB_0049ba94;
            }
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = FUN_0047e430(lVar5);
      } while (iVar4 < iVar3);
    }
    else {
      iVar2 = 0;
      iVar4 = 0;
      do {
        piVar6 = (int *)FUN_0047e450(lVar5,iVar4);
        if (*piVar6 == param_5) {
          piVar6 = *(int **)(piVar6 + 2);
          __s1 = *(void **)(piVar6 + 2);
          if ((__s1 == (void *)0x0) || (*piVar6 == 0)) {
            iVar2 = 1;
          }
          else {
            iVar2 = 1;
            if ((piVar6[1] == uVar10) && (*piVar6 == (int)param_3)) {
              iVar3 = memcmp(__s1,param_2,param_3);
              iVar2 = 1;
              if (iVar3 == 0) goto LAB_0049b92c;
            }
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = FUN_0047e430(lVar5);
      } while (iVar4 < iVar3);
    }
    FUN_00494ed0(lVar5);
    if (((param_4 & 1) == 0) && (iVar2 != 0)) {
      return 0;
    }
  }
  if (!(bool)(bVar1 ^ 1) && (param_4 & 0x20) == 0) {
    uVar7 = FUN_00483b40(param_1);
    if (param_6 == (undefined8 *)0x0) {
      iVar2 = -1;
      while (iVar2 = FUN_0048a3f0(uVar7,uVar9,iVar2), -1 < iVar2) {
        FUN_0048a390(uVar7,iVar2);
        piVar6 = (int *)FUN_0048a380();
        if ((*(long *)(piVar6 + 2) != 0) && (*piVar6 != 0)) {
          iVar4 = FUN_003dd5a0(&local_68,piVar6);
          if (iVar4 < 0) {
            return -1;
          }
          iVar4 = (*local_70)(local_68,iVar4,param_2,param_3,param_4);
          FUN_00452f80(local_68,"external/openssl/crypto/x509v3/v3_utl.c",0x34f);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
      }
    }
    else {
      iVar2 = -1;
      while (iVar2 = FUN_0048a3f0(uVar7,uVar9,iVar2), -1 < iVar2) {
        FUN_0048a390(uVar7,iVar2);
        piVar6 = (int *)FUN_0048a380();
        if ((*(long *)(piVar6 + 2) != 0) && (*piVar6 != 0)) {
          iVar4 = FUN_003dd5a0(&local_68,piVar6);
          if (iVar4 < 0) {
            return -1;
          }
          iVar3 = (*local_70)(local_68,iVar4,param_2,param_3,param_4);
          if (0 < iVar3) {
            uVar8 = FUN_0045ac20(local_68,iVar4,"external/openssl/crypto/x509v3/v3_utl.c",0x34e);
            *param_6 = uVar8;
          }
          FUN_00452f80(local_68,"external/openssl/crypto/x509v3/v3_utl.c",0x34f);
          if (iVar3 != 0) {
            return iVar3;
          }
        }
      }
    }
  }
  return 0;
}


