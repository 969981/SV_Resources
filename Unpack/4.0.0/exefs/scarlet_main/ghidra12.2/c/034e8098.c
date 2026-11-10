/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e8098; name: FUN_034e8098
 */


undefined4
FUN_034e8098(float param_1,undefined8 *param_2,ushort param_3,long param_4,byte param_5,
            ulong param_6,undefined8 *param_7,uint param_8)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  ushort uVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined8 local_90;
  undefined1 local_88;
  
  if (param_2 == (undefined8 *)0x0) {
    return 1;
  }
  uVar12 = *(uint *)(param_2 + 1);
  if (uVar12 == 0) {
    lVar14 = 0;
    fVar19 = 101.0;
    uVar17 = 0;
  }
  else {
    plVar18 = (long *)*param_2;
    plVar2 = plVar18 + uVar12;
    uVar17 = 0;
    if (param_4 != 0) {
      bVar16 = false;
      uVar12 = 2;
      lVar15 = 0;
      fVar20 = 101.0;
      do {
        lVar14 = *plVar18;
        if (*(long *)(lVar14 + 0x28) == param_4) {
          puVar1 = (uint *)(lVar14 + 699);
          uVar8 = *puVar1;
          if (((uVar8 >> 0x10 & 1) != 0) ||
             ((uVar8 & 0x6000000) != 0 || (*(ushort *)(lVar14 + 0x1b0) & 0x100) != 0))
          goto LAB_034e8140;
          fVar19 = *(float *)(lVar14 + 0x2c0);
          uVar17 = uVar17 + 1;
          if (param_1 < fVar19) goto LAB_034e8140;
          if ((param_6 & 1) == 0) {
            uVar6 = 2;
          }
          else {
            if ((uVar8 >> 7 & 1) == 0) {
              uVar8 = uVar8 | 0x80;
              *puVar1 = uVar8;
              plVar4 = *(long **)(lVar14 + 0x188);
              plVar7 = plVar4;
              if ((*(byte *)((long)plVar4 + 0xdb) >> 4 & 1) == 0) {
                do {
                  plVar11 = (long *)plVar7[0x13];
                  if (plVar11 == (long *)0x0) break;
                  plVar7 = plVar11;
                } while ((*(byte *)((long)plVar11 + 0xdb) >> 4 & 1) == 0);
              }
              bVar3 = *(byte *)(plVar7 + 0x1e);
              uVar6 = *(byte *)((long)plVar7 + 0xf1) & 0xf;
              if (uVar6 == 3) {
                uVar5 = (**(code **)(*plVar4 + 0x230))(plVar4,*(undefined8 *)(lVar14 + 0x240));
                param_6 = param_6 & 0xffffffff;
                uVar6 = 1;
                if ((uVar5 & 1) != 0) {
                  uVar6 = 2;
                }
                uVar8 = *puVar1;
              }
              *puVar1 = bVar3 >> 3 & 7 | uVar6 << 3 | uVar8 & 0xffffff80;
            }
            else {
              uVar6 = uVar8 >> 3 & 0xf;
            }
            bVar16 = (bool)(bVar16 | (uVar17 <= param_3 && uVar6 == 0));
            if (uVar6 == 0) goto LAB_034e8140;
          }
          uVar12 = uVar6;
        }
        else {
LAB_034e8140:
          lVar14 = lVar15;
          fVar19 = fVar20;
        }
        plVar18 = plVar18 + 1;
        lVar15 = lVar14;
        fVar20 = fVar19;
      } while (plVar18 != plVar2);
      goto LAB_034e83f4;
    }
    if ((param_6 & 1) != 0) {
      fVar19 = 101.0;
      bVar16 = false;
      lVar14 = 0;
      uVar12 = 2;
      do {
        lVar15 = *plVar18;
        puVar1 = (uint *)(lVar15 + 699);
        uVar8 = *puVar1;
        if (((uVar8 >> 0x10 & 1) == 0) &&
           ((uVar8 & 0x6000000) == 0 && (*(ushort *)(lVar15 + 0x1b0) & 0x100) == 0)) {
          fVar20 = *(float *)(lVar15 + 0x2c0);
          uVar17 = uVar17 + 1;
          if (fVar20 <= param_1) {
            if ((uVar8 >> 7 & 1) == 0) {
              uVar8 = uVar8 | 0x80;
              *puVar1 = uVar8;
              plVar4 = *(long **)(lVar15 + 0x188);
              plVar7 = plVar4;
              if ((*(byte *)((long)plVar4 + 0xdb) >> 4 & 1) == 0) {
                do {
                  plVar11 = (long *)plVar7[0x13];
                  if (plVar11 == (long *)0x0) break;
                  plVar7 = plVar11;
                } while ((*(byte *)((long)plVar11 + 0xdb) >> 4 & 1) == 0);
              }
              bVar3 = *(byte *)(plVar7 + 0x1e);
              uVar6 = *(byte *)((long)plVar7 + 0xf1) & 0xf;
              if (uVar6 == 3) {
                param_6 = param_6 & 0xffffffff;
                uVar5 = (**(code **)(*plVar4 + 0x230))(plVar4,*(undefined8 *)(lVar15 + 0x240));
                uVar6 = 1;
                if ((uVar5 & 1) != 0) {
                  uVar6 = 2;
                }
                uVar8 = *puVar1;
              }
              *puVar1 = bVar3 >> 3 & 7 | uVar6 << 3 | uVar8 & 0xffffff80;
            }
            else {
              uVar6 = uVar8 >> 3 & 0xf;
            }
            if (uVar6 != 0) {
              lVar14 = lVar15;
              uVar12 = uVar6;
              fVar19 = fVar20;
            }
            bVar16 = (bool)(bVar16 | (uVar17 <= param_3 && uVar6 == 0));
          }
        }
        plVar18 = plVar18 + 1;
      } while (plVar18 != plVar2);
      goto LAB_034e83f4;
    }
    fVar19 = 101.0;
    lVar14 = 0;
    lVar15 = (ulong)uVar12 << 3;
    do {
      lVar10 = *plVar18;
      if ((*(uint *)(lVar10 + 699) >> 0x10 & 1) == 0) {
        if ((*(uint *)(lVar10 + 699) & 0x6000000) == 0 && (*(ushort *)(lVar10 + 0x1b0) & 0x100) == 0
           ) {
          uVar17 = uVar17 + 1;
          if (*(float *)(lVar10 + 0x2c0) <= param_1) {
            lVar14 = lVar10;
            fVar19 = *(float *)(lVar10 + 0x2c0);
          }
        }
      }
      plVar18 = plVar18 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  bVar16 = false;
  uVar12 = 2;
LAB_034e83f4:
  if (uVar17 < param_3) {
    return 1;
  }
  bVar13 = false;
  if ((fVar19 <= param_1) && ((fVar19 == param_1 & param_5) == 0)) {
    if (lVar14 == 0) {
      bVar13 = false;
    }
    else {
      *param_7 = *(undefined8 *)(lVar14 + 0x188);
      if (((param_6 & 1) == 0) || (uVar12 == 1)) {
        uVar12 = *(uint *)(lVar14 + 699);
        param_6 = param_6 & 0xffffffff;
        if ((uVar12 >> 0x10 & 1) == 0) {
          *(uint *)(lVar14 + 699) =
               uVar12 & 0xfff00000 | uVar12 & 0xffff | (param_8 & 7) << 0x11 | 0x10000;
        }
        local_90 = 0x400000000;
        local_88 = 0;
        bVar13 = true;
        FUN_034a30a4(lVar14,&local_90,1);
      }
      else {
        bVar13 = true;
      }
    }
  }
  uVar9 = 0x50;
  if ((param_6 & 1) == 0) {
    uVar9 = 2;
  }
  if (bVar16 || bVar13) {
    uVar9 = 1;
  }
  return uVar9;
}


