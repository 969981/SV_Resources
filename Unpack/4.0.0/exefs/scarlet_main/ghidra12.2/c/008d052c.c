/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d052c; name: FUN_008d052c
 */


uint FUN_008d052c(ulong param_1,char *param_2,long param_3,int param_4,uint param_5,long param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  int iVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  code *local_c0;
  undefined8 local_98;
  undefined8 local_90;
  long lStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint local_78;
  
  uVar10 = *(uint *)(param_3 + 0xac);
  *(uint *)(param_3 + 0xac) = uVar10 * 0x41c64e6d + 0x3039;
  if (*(long *)(param_3 + 0x3f0) == 0) {
    pcVar17 = (code *)0x0;
    lVar14 = *(long *)(param_3 + 0x3e0);
    if (lVar14 != 0) goto LAB_008d0594;
    pcVar15 = (code *)0x0;
  }
  else {
    pcVar17 = *(code **)(*(long *)(param_3 + 0x3f0) + 0x38);
    lVar14 = *(long *)(param_3 + 0x3e0);
    pcVar15 = (code *)0x0;
    if (lVar14 != 0) {
LAB_008d0594:
      pcVar15 = *(code **)(lVar14 + 0x38);
    }
  }
  if (*(long *)(param_3 + 1000) == 0) {
    local_c0 = (code *)0x0;
  }
  else {
    local_c0 = *(code **)(*(long *)(param_3 + 1000) + 0x38);
  }
  fVar24 = (float)uVar10 * 2.3283064e-10;
  lVar14 = *(long *)(*(long *)(param_3 + 0x238) + 0x10);
  if (*(int *)(lVar14 + 0x874) == 0) {
    cVar5 = *(char *)(lVar14 + 0x838);
    lVar14 = *(long *)(param_3 + 0xa0);
    if (cVar5 == '\r') {
      uVar22 = *(undefined4 *)(lVar14 + 0x88c);
      uVar10 = *(uint *)(lVar14 + 0x888);
    }
    else {
      if (cVar5 != '\x02') goto LAB_008d0638;
      uVar22 = *(undefined4 *)(lVar14 + 0x884);
      uVar10 = *(uint *)(lVar14 + 0x880);
    }
    fVar23 = (float)NEON_ucvtf(uVar22);
    param_4 = (uVar10 - (int)(fVar24 * fVar23 * 0.01 * (float)uVar10)) * param_4;
  }
LAB_008d0638:
  bVar6 = false;
  if (*(char *)(param_3 + 0x6bd) != '\0') {
    if (*param_2 == '\0') {
      bVar6 = true;
    }
    else if (0.0 < (*(float *)(param_3 + 0x44) - *(float *)(*(long *)(param_3 + 0xb0) + 8)) -
                   *(float *)(*(long *)(param_3 + 0xb0) + 0xc)) {
      bVar6 = false;
      *(undefined1 *)(param_3 + 0x6bd) = 0;
    }
    else {
      bVar6 = true;
    }
  }
  if (param_4 < 1) {
    return 0xffffffff;
  }
  iVar21 = 0;
  uVar10 = 0xffffffff;
  uVar8 = param_1;
  if (!bVar6) goto LAB_008d06b8;
  do {
    uVar13 = *(uint *)(param_3 + 0x234);
    bVar6 = true;
    while( true ) {
      lVar20 = (long)(int)uVar13;
      lVar14 = *(long *)(param_3 + 0xb0) + lVar20 * 0x20;
      if ((*(long *)(lVar14 + 0x18) != 0) || (*(long *)(lVar14 + 0x10) != 0)) {
        FUN_008d43d0(param_3,4);
        return uVar10;
      }
      *param_2 = '\x01';
      lVar14 = param_3 + 0x1d0;
      if (*(char *)(*(long *)(param_3 + 0xa0) + 0x752) != '\0') {
        lVar14 = *(long *)(param_3 + 0xc0);
      }
      if (*(int *)(*(long *)(param_3 + 0x238) + 0x88) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(param_3 + 0xb8) + lVar20 * 0x158;
      }
      uVar8 = FUN_008d0980(fVar24,uVar8,param_3,uVar13,*(long *)(param_3 + 0xb0) + lVar20 * 0x20,
                           lVar9,lVar14,uVar13,iVar21,param_4,param_6);
      if ((uVar8 & 1) != 0) {
        *(uint *)(param_3 + 0x6b8) = uVar13;
        puVar1 = (undefined4 *)(*(long *)(lVar14 + 0x10) + lVar20 * 0x10);
        puVar2 = (undefined4 *)(*(long *)(lVar14 + 8) + lVar20 * 0x10);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        if (*(long *)(param_3 + 0x548) != 0) {
          uVar8 = FUN_008d0180(param_1,param_3,uVar13);
        }
        if (param_6 == 0) {
          local_98 = 0;
        }
        else {
          local_98 = *(undefined8 *)(param_6 + 0x50);
        }
        uStack_7c = *(undefined4 *)(*(long *)(param_3 + 0xb0) + lVar20 * 0x20 + 0xc);
        local_90 = 0;
        local_80 = 0;
        lStack_88 = param_3;
        local_78 = uVar13;
        if (pcVar17 != (code *)0x0) {
          uVar8 = (*pcVar17)(&local_98);
        }
        if (pcVar15 == (code *)0x0) {
          if (local_c0 != (code *)0x0) {
            uVar8 = (*local_c0)(&local_98);
          }
        }
        else {
          uVar8 = (*pcVar15)(&local_98);
        }
        *(undefined8 *)(*(long *)(param_3 + 0xb0) + lVar20 * 0x20 + 0x18) = local_90;
        *(undefined8 *)(*(long *)(param_3 + 0xb0) + lVar20 * 0x20 + 0x10) = local_98;
        if (bVar6) {
          iVar3 = 0;
          if (uVar13 + 1 != *(int *)(param_3 + 0x230)) {
            iVar3 = uVar13 + 1;
          }
          *(int *)(param_3 + 0x234) = iVar3;
          if (*(int *)(param_3 + 0x28) < *(int *)(param_3 + 0x230)) {
            *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
          }
        }
        uVar10 = uVar13;
      }
      iVar21 = iVar21 + 1;
      if (iVar21 == param_4) {
        return uVar10;
      }
      if (*(char *)(param_3 + 0x6bd) != '\0') break;
LAB_008d06b8:
      uVar13 = *(uint *)(param_3 + 0x234);
      if (*(char *)(param_3 + 0x6bc) == '\0' && ((param_5 ^ 1) & 1) == 0) {
        uVar4 = *(uint *)(param_3 + 0x28);
        if (uVar4 == 0) {
          uVar13 = 0;
LAB_008d0750:
          bVar6 = true;
LAB_008d0754:
          *(undefined1 *)(param_3 + 0x6bc) = 1;
          uVar16 = (ulong)uVar13;
        }
        else {
          if (*(char *)(*(long *)(param_3 + 0xa0) + 0x752) == '\0') {
            if (0 < (int)uVar4) {
              piVar11 = *(int **)(param_3 + 0xb0);
              uVar16 = 0;
              do {
                if (*piVar11 == 0) {
                  bVar6 = false;
                  goto LAB_008d0760;
                }
                uVar16 = uVar16 + 1;
                piVar11 = piVar11 + 8;
              } while (uVar4 != uVar16);
            }
            goto LAB_008d0750;
          }
          if ((int)uVar4 < 1) goto LAB_008d0750;
          uVar18 = 0;
          uVar16 = 0xffffffff;
          pfVar19 = (float *)(*(long *)(param_3 + 0xb0) + 0xc);
          bVar7 = true;
          do {
            fVar23 = (*(float *)(param_3 + 0x44) - pfVar19[-1]) - *pfVar19;
            uVar12 = (uint)uVar18;
            if (fVar23 <= 0.0) {
              uVar12 = (uint)uVar16;
            }
            uVar16 = (ulong)uVar12;
            uVar18 = uVar18 + 1;
            bVar6 = false;
            if (fVar23 <= 0.0) {
              bVar6 = bVar7;
            }
          } while ((uVar18 < uVar4) && (pfVar19 = pfVar19 + 8, bVar7 = bVar6, fVar23 <= 0.0));
          if (uVar12 == 0xffffffff) goto LAB_008d0754;
        }
LAB_008d0760:
        uVar13 = (uint)uVar16;
      }
      else {
        bVar6 = true;
      }
    }
  } while( true );
}


