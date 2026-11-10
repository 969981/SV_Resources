/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e1d28; name: FUN_002e1d28
 */


undefined8 FUN_002e1d28(uint *param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  undefined8 uVar11;
  size_t sVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  ulong uVar16;
  char *pcVar17;
  char *pcVar18;
  ulong uVar19;
  short *__s;
  short *psVar20;
  char *__s_00;
  undefined8 local_78;
  long local_70;
  long lStack_68;
  
  lStack_68 = param_2[1];
  local_70 = *param_2;
  if ((param_2[1] == 0) || (*(char *)*param_2 != '[')) {
    *param_4 = 1;
    *(undefined8 *)(param_4 + 2) = 0;
    *(undefined8 *)(param_4 + 4) = 0;
  }
  else {
    uVar2 = *param_1;
    lVar8 = FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (lVar8 != 0) {
      FUN_002e4418(lVar8,0x14,uVar2 & 0x3ffe);
    }
    lVar9 = FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (lVar9 != 0) {
      FUN_002e6250(lVar9);
    }
    *(long *)(lVar8 + 0x20) = lVar9;
    lVar9 = *param_2;
    lVar1 = param_2[1];
    pcVar18 = (char *)(lVar9 + 1);
    uVar19 = lVar1 - 1;
    *param_2 = (long)pcVar18;
    param_2[1] = uVar19;
    if (uVar19 != 0) {
      if (*pcVar18 != '^') {
        bVar6 = false;
LAB_002e1e40:
        uVar2 = *(uint *)PTR_DAT_047cc910;
        uVar3 = *(uint *)PTR_DAT_047cc918;
        bVar5 = true;
LAB_002e1e64:
        do {
          pcVar18 = (char *)*param_2;
          cVar4 = *pcVar18;
          if ((!bVar5) && (cVar4 == ']')) {
            *param_2 = (long)(pcVar18 + 1);
            param_2[1] = uVar19 - 1;
            if (bVar6) {
              FUN_002e6a8c(*(undefined8 *)(lVar8 + 0x20));
            }
            *param_3 = lVar8;
            return 1;
          }
          if (bVar5 || cVar4 != '-') {
            if ((((2 < uVar19) && (cVar4 == '[')) && (pcVar18[1] == ':')) &&
               ((1 < (long)uVar19 && (3 < (long)uVar19)))) {
              uVar14 = *param_1;
              uVar11 = *(undefined8 *)(lVar8 + 0x20);
              pcVar17 = pcVar18 + 2;
              do {
                if ((*pcVar17 == ':') && (pcVar17[1] == ']')) {
                  sVar10 = (long)(pcVar17 + 2) - (long)pcVar18;
                  if ((int)uVar2 < 1) goto LAB_002e2104;
                  puVar13 = (undefined8 *)PTR_PTR_047cc928;
                  if (sVar10 != 0) {
                    uVar16 = (ulong)uVar2;
                    goto LAB_002e2078;
                  }
                  uVar16 = (ulong)uVar2;
                  goto LAB_002e20e4;
                }
                pcVar17 = pcVar17 + 1;
              } while (pcVar17 <= pcVar18 + (uVar19 - 2));
            }
            if (((uVar19 < 3) || (cVar4 != '\\')) || ((byte)(pcVar18[1] | 0x20U) != 0x70))
            goto LAB_002e1f14;
            iVar7 = FUN_002e0e60(param_2,*param_1,*(undefined8 *)(lVar8 + 0x20),param_4);
            if (iVar7 != 0) {
              if (iVar7 != 1) goto LAB_002e1f14;
              goto LAB_002e2124;
            }
          }
          else {
            if (((*(byte *)((long)param_1 + 1) >> 1 & 1) == 0) &&
               ((uVar19 = uVar19 - 1, uVar19 == 0 || (pcVar18[1] != ']')))) {
              uVar15 = (undefined4)uVar19;
              if (3 < uVar19) {
                uVar15 = 4;
              }
              iVar7 = FUN_002eaaa0(pcVar18 + 1,uVar15);
              if (iVar7 != 0) {
                iVar7 = FUN_002ea8f0(&local_78,pcVar18 + 1);
                if ((int)local_78 < 0x110000) {
                  if ((iVar7 != 1) || ((int)local_78 != 0xfffd)) {
                    if (-1 < iVar7) {
                      *param_4 = 4;
                      *(long *)(param_4 + 2) = *param_2;
                      *(long *)(param_4 + 4) = (long)(iVar7 + 1);
                    }
                    goto LAB_002e2124;
                  }
                }
                else {
                  local_78 = CONCAT44(local_78._4_4_,0xfffd);
                }
              }
              *param_4 = 0xc;
              *(undefined8 *)(param_4 + 2) = 0;
              *(undefined8 *)(param_4 + 4) = 0;
              goto LAB_002e2124;
            }
LAB_002e1f14:
            uVar14 = *param_1;
            if ((((uVar14 >> 7 & 1) != 0) && (uVar19 = param_2[1], 1 < uVar19)) &&
               ((psVar20 = (short *)*param_2, (char)*psVar20 == '\\' && (0 < (int)uVar3)))) {
              puVar13 = (undefined8 *)PTR_PTR_047cc920;
              uVar16 = (ulong)uVar3;
              do {
                __s = (short *)*puVar13;
                if (((__s != (short *)0x0) && (sVar10 = strlen((char *)__s), sVar10 == 2)) &&
                   ((__s == psVar20 || (*__s == *psVar20)))) {
                  *param_2 = (long)(psVar20 + 1);
                  param_2[1] = uVar19 - 2;
                  uVar11 = *(undefined8 *)(lVar8 + 0x20);
                  uVar15 = *(undefined4 *)(puVar13 + 1);
                  goto LAB_002e1fec;
                }
                puVar13 = puVar13 + 6;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            local_78 = 0;
            uVar19 = FUN_002e1b30(param_1,param_2,&local_78,&local_70,param_4);
            if ((uVar19 & 1) == 0) goto LAB_002e2124;
            FUN_002e0990(*(undefined8 *)(lVar8 + 0x20),local_78 & 0xffffffff,local_78._4_4_,
                         *param_1 | 4);
          }
          uVar19 = param_2[1];
          bVar5 = false;
        } while (uVar19 != 0);
        goto LAB_002e2114;
      }
      uVar19 = lVar1 - 2;
      *param_2 = lVar9 + 2;
      param_2[1] = uVar19;
      if ((*param_1 & 0x804) != 4) {
        FUN_002e626c(*(undefined8 *)(lVar8 + 0x20),10,10);
        uVar19 = param_2[1];
      }
      if (uVar19 != 0) {
        bVar6 = true;
        goto LAB_002e1e40;
      }
    }
LAB_002e2114:
    *param_4 = 5;
    *(long *)(param_4 + 4) = lStack_68;
    *(long *)(param_4 + 2) = local_70;
LAB_002e2124:
    FUN_002e4804(lVar8);
  }
  return 0;
LAB_002e20e4:
  if (((char *)*puVar13 == (char *)0x0) || (*(char *)*puVar13 == '\0')) goto LAB_002e20c4;
  uVar16 = uVar16 - 1;
  puVar13 = puVar13 + 6;
  if (uVar16 == 0) {
    sVar10 = 0;
    goto LAB_002e2104;
  }
  goto LAB_002e20e4;
LAB_002e2078:
  __s_00 = (char *)*puVar13;
  if (__s_00 == (char *)0x0) {
    if (sVar10 == 0) goto LAB_002e20a0;
  }
  else {
    sVar12 = strlen(__s_00);
    if (sVar12 == sVar10) {
LAB_002e20a0:
      if ((__s_00 == pcVar18) || (iVar7 = memcmp(__s_00,pcVar18,sVar10), iVar7 == 0))
      goto LAB_002e20c4;
    }
  }
  uVar16 = uVar16 - 1;
  puVar13 = puVar13 + 6;
  if (uVar16 == 0) goto LAB_002e2104;
  goto LAB_002e2078;
LAB_002e20c4:
  *param_2 = (long)(pcVar17 + 2);
  param_2[1] = uVar19 - sVar10;
  uVar15 = *(undefined4 *)(puVar13 + 1);
LAB_002e1fec:
  FUN_002e1250(uVar11,puVar13,uVar15,uVar14);
  uVar19 = param_2[1];
  bVar5 = false;
  if (uVar19 == 0) goto LAB_002e2114;
  goto LAB_002e1e64;
LAB_002e2104:
  *param_4 = 4;
  *(char **)(param_4 + 2) = pcVar18;
  *(size_t *)(param_4 + 4) = sVar10;
  goto LAB_002e2124;
}


