/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e1950; name: FUN_003e1950
 */


undefined8
FUN_003e1950(long *param_1,long *param_2,char *param_3,byte *param_4,ulong param_5,
            undefined8 param_6,uint param_7,undefined8 param_8,int param_9)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  uint local_78;
  char local_74 [4];
  char *local_70;
  char *local_68;
  
  local_70 = (char *)0x0;
  lVar13 = *(long *)(param_4 + 0x20);
  if (param_1 == (long *)0x0) {
    return 0;
  }
  local_68 = param_3;
  if ((lVar13 != 0) && (pcVar16 = *(code **)(lVar13 + 0x18), pcVar16 != (code *)0x0)) {
    if (param_9 < 0x1e) goto LAB_003e1a08;
LAB_003e19a8:
    uVar6 = 0xc9;
    uVar8 = 0xa0;
    goto LAB_003e19bc;
  }
  pcVar16 = (code *)0x0;
  if (0x1d < param_9) goto LAB_003e19a8;
LAB_003e1a08:
  if (6 < *param_4) {
    return 0;
  }
  param_9 = param_9 + 1;
  iVar3 = (int)param_5;
  switch(*param_4) {
  case 0:
    if (*(long *)(param_4 + 0x10) == 0) {
LAB_003e1b60:
      uVar6 = FUN_003e23d0(param_1,param_2,local_68,param_4,param_5,param_6,param_7,param_8);
      return uVar6;
    }
    if ((iVar3 == -1) && ((param_7 & 0xff) == 0)) {
      uVar6 = FUN_003e2200(param_1,param_2,param_3,*(long *)(param_4 + 0x10),0,param_8,param_9);
      return uVar6;
    }
    uVar6 = 0xaa;
    uVar8 = 0xaf;
    break;
  default:
    local_70 = (char *)*param_2;
    iVar2 = 0x10;
    if (iVar3 != -1) {
      iVar2 = iVar3;
    }
    uVar9 = 0;
    if (iVar3 != -1) {
      uVar9 = (undefined4)param_6;
    }
    uVar6 = FUN_003e2b30(&local_68,0,0,&local_78,local_74,&local_70,param_3,iVar2,uVar9,
                         (char)param_7,param_8);
    if ((int)uVar6 == -1) {
      return uVar6;
    }
    if ((int)uVar6 == 0) {
      uVar6 = 0x3a;
      uVar8 = 0x135;
    }
    else {
      if ((lVar13 == 0) || ((*(byte *)(lVar13 + 8) >> 2 & 1) == 0)) {
        uVar12 = local_78 & 0xff;
      }
      else {
        local_68 = param_3 + (*param_2 - (long)local_70);
        uVar12 = 1;
      }
      if (local_74[0] == '\0') {
        uVar6 = 0x95;
        uVar8 = 0x141;
      }
      else if ((*param_1 == 0) && (iVar3 = FUN_003e49d0(param_1,param_4), iVar3 == 0)) {
        uVar6 = 0x3a;
        uVar8 = 0x146;
      }
      else {
        if ((pcVar16 != (code *)0x0) && (iVar3 = (*pcVar16)(4,param_1,param_4,0), iVar3 == 0))
        goto LAB_003e2188;
        lVar13 = *(long *)(param_4 + 0x10);
        if (*(long *)(param_4 + 0x18) < 1) {
          uVar15 = 0;
        }
        else {
          lVar14 = 0;
          do {
            if (((*(byte *)(lVar13 + 1) & 3) != 0) &&
               (lVar4 = FUN_003e5470(param_1,lVar13,0), lVar4 != 0)) {
              uVar6 = FUN_003e5460(param_1,lVar4);
              FUN_003e47d0(uVar6,lVar4);
            }
            lVar14 = lVar14 + 1;
            lVar13 = lVar13 + 0x28;
          } while (lVar14 < *(long *)(param_4 + 0x18));
          lVar13 = *(long *)(param_4 + 0x10);
          if (*(long *)(param_4 + 0x18) < 1) {
            uVar15 = 0;
          }
          else {
            uVar15 = 0;
            do {
              pbVar5 = (byte *)FUN_003e5470(param_1,lVar13,1);
              if (pbVar5 == (byte *)0x0) goto LAB_003e19c4;
              uVar6 = FUN_003e5460(param_1,pbVar5);
              pcVar1 = local_70;
              if (local_68 == (char *)0x0) break;
              if (((1 < (long)local_68) && (*local_70 == '\0')) && (local_70[1] == '\0')) {
                pcVar1 = local_70 + 2;
                if ((char)local_78 == '\0') {
                  uVar6 = 0x9f;
                  uVar8 = 0x168;
                  local_70 = pcVar1;
                  goto LAB_003e19bc;
                }
                local_68 = local_70 + ((long)local_68 - (long)pcVar1);
                local_78 = local_78 & 0xffffff00;
                local_70 = pcVar1;
                goto LAB_003e20cc;
              }
              if (uVar15 == *(long *)(param_4 + 0x18) - 1U) {
                bVar7 = 0;
              }
              else {
                bVar7 = *pbVar5 & 1;
              }
              iVar3 = FUN_003e2200(uVar6,&local_70,local_68,pbVar5,bVar7,param_8,param_9);
              if (iVar3 == -1) {
                FUN_003e47d0(uVar6,pbVar5);
              }
              else {
                if (iVar3 == 0) goto LAB_003e21bc;
                local_68 = pcVar1 + ((long)local_68 - (long)local_70);
              }
              uVar15 = uVar15 + 1;
              lVar13 = lVar13 + 0x28;
            } while ((long)uVar15 < *(long *)(param_4 + 0x18));
          }
        }
        if ((char)local_78 != '\0') {
          if ((((long)local_68 < 2) || (*local_70 != '\0')) || (local_70[1] != '\0')) {
            uVar6 = 0x89;
            uVar8 = 400;
            break;
          }
          local_70 = local_70 + 2;
        }
LAB_003e20cc:
        if ((uVar12 != 0) || (local_68 == (char *)0x0)) {
          uVar15 = uVar15 & 0xffffffff;
          if ((long)uVar15 < *(long *)(param_4 + 0x18)) {
            do {
              pbVar5 = (byte *)FUN_003e5470(param_1,lVar13,1);
              if (pbVar5 == (byte *)0x0) goto LAB_003e19c4;
              if ((*pbVar5 & 1) == 0) {
                FUN_004806c0(0xd,0x78,0x79,"external/openssl/crypto/asn1/tasn_dec.c",0x1a9);
                goto LAB_003e21bc;
              }
              uVar6 = FUN_003e5460(param_1,pbVar5);
              FUN_003e47d0(uVar6,pbVar5);
              lVar13 = lVar13 + 0x28;
              uVar15 = uVar15 + 1;
            } while ((long)uVar15 < *(long *)(param_4 + 0x18));
          }
          pcVar1 = local_70;
          iVar3 = FUN_003e52f0(param_1,*param_2,(int)local_70 - (int)*param_2,param_4);
          if ((iVar3 != 0) &&
             ((pcVar16 == (code *)0x0 || (iVar3 = (*pcVar16)(5,param_1,param_4,0), iVar3 != 0)))) {
            *param_2 = (long)pcVar1;
            return 1;
          }
          goto LAB_003e2188;
        }
        uVar6 = 0x94;
        uVar8 = 0x195;
      }
    }
    break;
  case 2:
    if (iVar3 != -1) {
      uVar6 = 0xe6;
      uVar8 = 0xe9;
      break;
    }
    if ((pcVar16 != (code *)0x0) && (iVar3 = (*pcVar16)(4,param_1,param_4,0), iVar3 == 0)) {
LAB_003e2188:
      uVar6 = 100;
      uVar8 = 0x1b9;
      break;
    }
    if (*param_1 == 0) {
      iVar3 = FUN_003e49d0(param_1,param_4);
      if (iVar3 == 0) {
        uVar6 = 0x3a;
        uVar8 = 0xf9;
        break;
      }
    }
    else {
      uVar12 = FUN_003e5120(param_1,param_4);
      if ((-1 < (int)uVar12) && ((long)(ulong)uVar12 < *(long *)(param_4 + 0x18))) {
        lVar13 = *(long *)(param_4 + 0x10) + (ulong)uVar12 * 0x28;
        uVar6 = FUN_003e5460(param_1,lVar13);
        FUN_003e47d0(uVar6,lVar13);
        FUN_003e5130(param_1,0xffffffff,param_4);
      }
    }
    local_70 = (char *)*param_2;
    uVar15 = *(ulong *)(param_4 + 0x18);
    if ((long)uVar15 < 1) {
      uVar10 = 0;
      uVar11 = 0;
LAB_003e2024:
      if (uVar15 == uVar11) {
        if ((param_7 & 0xff) != 0) {
          FUN_003e47c0(param_1,param_4);
          return 0xffffffff;
        }
        uVar6 = 0x8f;
        uVar8 = 0x11c;
        break;
      }
      FUN_003e5130(param_1,uVar10 & 0xffffffff,param_4);
      if ((pcVar16 == (code *)0x0) || (iVar3 = (*pcVar16)(5,param_1,param_4,0), iVar3 != 0)) {
        *param_2 = (long)local_70;
        return 1;
      }
      goto LAB_003e2188;
    }
    pbVar5 = *(byte **)(param_4 + 0x10);
    uVar6 = FUN_003e5460(param_1,pbVar5);
    iVar3 = FUN_003e2200(uVar6,&local_70,param_3,pbVar5,1,param_8,param_9);
    if (iVar3 == -1) {
      uVar15 = 1;
      do {
        uVar10 = uVar15;
        pcVar1 = local_68;
        uVar15 = *(ulong *)(param_4 + 0x18);
        if ((long)uVar15 <= (long)uVar10) {
          uVar11 = uVar10 & 0xffffffff;
          goto LAB_003e2024;
        }
        pbVar5 = pbVar5 + 0x28;
        uVar6 = FUN_003e5460(param_1,pbVar5);
        iVar3 = FUN_003e2200(uVar6,&local_70,pcVar1,pbVar5,1,param_8,param_9);
        uVar15 = uVar10 + 1;
      } while (iVar3 == -1);
    }
    else {
      uVar10 = 0;
    }
    if (0 < iVar3) {
      uVar15 = *(ulong *)(param_4 + 0x18);
      uVar11 = uVar10;
      uVar10 = uVar10 & 0xffffffff;
      goto LAB_003e2024;
    }
    FUN_003e47d0(uVar6,pbVar5);
    FUN_004806c0(0xd,0x78,0x3a,"external/openssl/crypto/asn1/tasn_dec.c",0x110);
    if (pbVar5 != (byte *)0x0) {
LAB_003e21bc:
      FUN_00481380(4,"Field=",*(undefined8 *)(pbVar5 + 0x18),", Type=",
                   *(undefined8 *)(param_4 + 0x30));
      return 0;
    }
    goto LAB_003e19c4;
  case 3:
    goto switchD_003e1a30_caseD_3;
  case 4:
    uVar6 = (**(code **)(lVar13 + 0x20))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar6;
  case 5:
    if (iVar3 == -1) {
      local_70 = (char *)*param_2;
      iVar3 = FUN_003e2b30(0,&local_78,local_74,0,0,&local_70,param_3,0xffffffff,0,1,param_8);
      if (iVar3 == 0) {
        uVar6 = 0x3a;
        uVar8 = 199;
      }
      else if (local_74[0] == '\0') {
        param_5 = (ulong)local_78;
        if (local_78 < 0x1f) {
          uVar15 = *(ulong *)(&DAT_03cdd430 + param_5 * 8);
        }
        else {
          uVar15 = 0;
        }
        if ((*(ulong *)(param_4 + 8) & uVar15) != 0) {
          param_6 = 0;
          param_7 = 0;
          goto LAB_003e1b60;
        }
        if ((param_7 & 0xff) != 0) {
          return 0xffffffff;
        }
        uVar6 = 0x8c;
        uVar8 = 0xd9;
      }
      else {
        if ((param_7 & 0xff) != 0) {
          return 0xffffffff;
        }
        uVar6 = 0x8b;
        uVar8 = 0xd0;
      }
    }
    else {
      uVar6 = 0xe6;
      uVar8 = 0xbe;
    }
  }
LAB_003e19bc:
  FUN_004806c0(0xd,0x78,uVar6,"external/openssl/crypto/asn1/tasn_dec.c",uVar8);
LAB_003e19c4:
  FUN_00481380(2,"Type=",*(undefined8 *)(param_4 + 0x30));
switchD_003e1a30_caseD_3:
  return 0;
}


