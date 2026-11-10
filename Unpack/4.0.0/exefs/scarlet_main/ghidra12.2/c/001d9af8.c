/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d9af8; name: FUN_001d9af8
 */


long FUN_001d9af8(char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  size_t sVar12;
  int *piVar13;
  char cVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  int iVar19;
  long lVar20;
  uint local_9c;
  uint local_98;
  int local_94;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_6c;
  undefined8 local_68;
  
  puVar7 = PTR_PTR_047cb980;
  uVar10 = 0xffffffff;
  local_68 = 0xffffffffffffffff;
  local_6c = -1;
  cVar14 = *param_1;
  if (cVar14 == '\0') {
    local_98 = 0xffffffff;
    local_9c = 0xffffffff;
    iVar11 = -1;
  }
  else {
    bVar8 = false;
    iVar19 = -1;
    iVar11 = -1;
    uVar15 = 0;
    lVar17 = 0xffffffff;
    local_9c = 0xffffffff;
    local_98 = 0xffffffff;
    uVar16 = 0xffffffff;
    pcVar18 = param_1;
LAB_001d9b64:
    do {
      iVar9 = FUN_001cb2b0(cVar14);
      if (iVar9 == 0) {
        pcVar18 = pcVar18 + 1;
        cVar14 = *pcVar18;
        if (cVar14 != '\0') goto LAB_001d9b64;
      }
      iVar9 = FUN_001cb328(*pcVar18);
      if (iVar9 == 0) {
        iVar9 = FUN_001cb28c(*pcVar18);
        if (iVar9 != 0) {
          local_94 = 0;
          if (local_6c == -1) {
            iVar9 = sscanf(pcVar18,"%02d:%02d:%02d%n",(long)&local_68 + 4,&local_68,&local_6c,
                           &local_94);
            if (iVar9 == 3) {
              pcVar18 = pcVar18 + local_94;
              iVar11 = iVar19;
            }
            else {
              if ((local_6c != -1) ||
                 (iVar9 = sscanf(pcVar18,"%02d:%02d%n",(long)&local_68 + 4,&local_68,&local_94),
                 iVar9 != 2)) goto LAB_001d9bd0;
              pcVar18 = pcVar18 + local_94;
              local_6c = 0;
              iVar11 = iVar19;
            }
          }
          else {
LAB_001d9bd0:
            piVar13 = __errno_location();
            iVar9 = *piVar13;
            piVar13 = __errno_location();
            *piVar13 = 0;
            lVar20 = strtol(pcVar18,&local_90,10);
            piVar13 = __errno_location();
            iVar4 = *piVar13;
            piVar13 = __errno_location();
            if (*piVar13 != iVar9) {
              piVar13 = __errno_location();
              *piVar13 = iVar9;
            }
            if (lVar20 != (int)lVar20) {
              return -1;
            }
            if (iVar4 != 0) {
              return -1;
            }
            uVar10 = FUN_001ec190(lVar20);
            if ((((iVar11 == -1) && (param_1 < pcVar18)) && ((int)uVar10 < 0x579)) &&
               ((long)local_90 - (long)pcVar18 == 4)) {
              cVar14 = pcVar18[-1];
              if ((cVar14 == '-') || (cVar14 == '+')) {
                iVar11 = uVar10 + ((int)uVar10 / 100) * -0x28;
                iVar19 = iVar11 * -0x3c;
                if (cVar14 != '+') {
                  iVar19 = iVar11 * 0x3c;
                }
                bVar6 = true;
              }
              else {
                iVar19 = -1;
                bVar6 = false;
              }
LAB_001d9e74:
              bVar5 = bVar6;
            }
            else {
              bVar5 = false;
              bVar6 = false;
              if ((local_98 != 0xffffffff) || ((local_9c & (uint)uVar16) != 0xffffffff))
              goto LAB_001d9e74;
              if ((long)local_90 - (long)pcVar18 == 8) {
                local_9c = (int)uVar10 / 10000;
                uVar16 = (ulong)(((int)uVar10 % 10000) / 100 - 1);
                local_98 = (int)uVar10 % 100;
                bVar5 = true;
              }
            }
            bVar6 = (bool)(!bVar8 & (bVar5 ^ 1U) & local_98 == 0xffffffff);
            if (bVar6) {
              bVar8 = true;
            }
            bVar6 = (bool)(uVar10 - 1 < 0x1f & bVar6);
            uVar1 = uVar10;
            if (!bVar6) {
              uVar1 = local_98;
            }
            pcVar18 = local_90;
            iVar11 = iVar19;
            local_98 = uVar1;
            if (((local_9c != 0xffffffff) || (!bVar8)) || (bVar5 || bVar6)) {
              if (!bVar5 && !bVar6) {
                return -1;
              }
            }
            else {
              if ((int)uVar10 < 100) {
                if ((int)uVar10 < 0x47) {
                  uVar10 = uVar10 + 2000;
                }
                else {
                  uVar10 = uVar10 + 0x76c;
                }
              }
              bVar8 = uVar1 != 0xffffffff;
              local_9c = uVar10;
            }
          }
          iVar19 = iVar11;
        }
      }
      else {
        local_80 = 0;
        uStack_78 = 0;
        local_90 = (char *)0x0;
        uStack_88 = 0;
        iVar9 = sscanf(pcVar18,"%31[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]",&local_90
                      );
        if (iVar9 == 0) {
          sVar12 = 0;
        }
        else {
          sVar12 = strlen((char *)&local_90);
        }
        if ((int)lVar17 == -1) {
          lVar17 = 0;
          ppuVar3 = &PTR_s_Monday_04484a30;
          if (sVar12 < 4) {
            ppuVar3 = (undefined **)PTR_PTR_047cb978;
          }
          do {
            iVar9 = FUN_001e0990(&local_90,ppuVar3[lVar17]);
            if (iVar9 != 0) goto LAB_001d9d78;
            lVar17 = lVar17 + 1;
          } while ((int)lVar17 != 7);
          lVar17 = 0xffffffff;
        }
        if ((uint)uVar16 == 0xffffffff) {
          uVar16 = 0;
          do {
            iVar9 = FUN_001e0990(&local_90,*(undefined8 *)(puVar7 + uVar16 * 8));
            if (iVar9 != 0) goto LAB_001d9d78;
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 != 0xc);
          uVar16 = 0xffffffff;
        }
        if (iVar11 != -1) {
          return -1;
        }
        lVar20 = 0;
        while (iVar11 = FUN_001e0990(&local_90,&DAT_03cc06f0 + lVar20), iVar11 == 0) {
          lVar20 = lVar20 + 0xc;
          if ((int)lVar20 == 0x33c) {
            return -1;
          }
        }
        iVar11 = *(int *)((long)&DAT_03cc06f8 + lVar20) * 0x3c;
        iVar19 = iVar11;
LAB_001d9d78:
        pcVar18 = pcVar18 + sVar12;
      }
      uVar10 = (uint)uVar16;
      if (4 < uVar15) break;
      cVar14 = *pcVar18;
      uVar15 = uVar15 + 1;
    } while (cVar14 != '\0');
    if (local_6c != -1) goto LAB_001d9f48;
  }
  local_6c = 0;
  local_68 = 0;
LAB_001d9f48:
  if (((((local_9c - 0x76f < 0x87) && (local_9c != 0xffffffff)) &&
       ((uVar10 != 0xffffffff && ((local_98 != 0xffffffff && (local_6c < 0x3d)))))) &&
      ((int)uVar10 < 0xc)) &&
     ((((int)local_98 < 0x20 && (local_68._4_4_ < 0x18)) && ((int)local_68 < 0x3c)))) {
    uVar15 = uVar10;
    if ((int)uVar10 < 0) {
      iVar19 = (int)(0xb - uVar10) / 0xc;
      local_9c = iVar19 + local_9c;
      uVar15 = (iVar19 * 0xc - (0xb - uVar10)) + 0xb;
    }
    iVar9 = local_9c - ((int)uVar10 < 2);
    iVar4 = (int)((ulong)((long)iVar9 * -0x51eb851f) >> 0x20);
    iVar19 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar19 = iVar9;
    }
    iVar2 = 0;
    if (iVar11 != -1) {
      iVar2 = iVar11;
    }
    lVar17 = ((long)(int)local_68 +
             ((long)local_68._4_4_ +
             ((long)*(int *)(&DAT_03cc0a2c + (ulong)uVar15 * 4) + (long)(int)local_98 +
              (long)(int)(local_9c - 0x7b2) * 0x16d +
             (long)(((iVar4 >> 5) - (iVar4 >> 0x1f)) + (iVar19 >> 2) + iVar9 / 400 + -0x1dd)) * 0x18
             ) * 0x3c) * 0x3c + (long)local_6c + -0x15180;
    if ((iVar2 < 1) || (lVar17 <= (long)(ulong)(0x7fffffff - iVar2))) {
      lVar17 = lVar17 + iVar2;
      lVar20 = 0;
      if (lVar17 != -1) {
        lVar20 = lVar17;
      }
      return lVar20;
    }
  }
  return -1;
}


