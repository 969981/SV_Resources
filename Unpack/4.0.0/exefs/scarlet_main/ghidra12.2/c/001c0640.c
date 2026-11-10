/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c0640; name: FUN_001c0640
 */


long FUN_001c0640(long *param_1,long *param_2,int *param_3,int *param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  ulong local_88 [5];
  
  uVar15 = param_1[3];
  uVar14 = param_2[3];
  puVar7 = (ulong *)*param_1;
  lVar6 = *param_2;
  lVar19 = 0x46 - uVar15;
  if (-1 < (long)(0x3f - uVar15)) {
    lVar19 = 0x3f - uVar15;
  }
  lVar13 = 0x46 - uVar14;
  if (-1 < (long)(0x3f - uVar14)) {
    lVar13 = 0x3f - uVar14;
  }
  uVar3 = (long)puVar7 - (lVar19 >> 3);
  lVar13 = lVar13 >> 3;
  uVar8 = lVar6 + lVar13;
  if (uVar8 < uVar3) {
    FUN_0015c3d0();
    if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
      (**(code **)PTR_PTR_047cb868)
                (0,"v:\\devel\\projects\\oodle2\\core\\newlz_offsets.cpp",0x4f0,
                 "OODLE ERROR : corruption : vb1_init <= vb2_init\n");
    }
    FUN_0015c3f0();
  }
  else {
    uVar16 = param_2[2];
    lVar19 = lVar6 - (long)puVar7;
    uVar17 = param_1[2];
    if (lVar19 < 0x21) {
      piVar5 = param_3;
    }
    else {
      piVar9 = param_3;
      do {
        if (param_4 < piVar9) {
          return -1;
        }
        uVar11 = (*puVar7 & 0xff00ff00ff00ff00) >> 8 | (*puVar7 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar17 = (uVar11 >> 0x20 | uVar11 << 0x20) >> (0x3f - uVar15 & 0x3f) | uVar17;
        if (uVar17 >> 0x33 == 0) {
          return -1;
        }
        uVar16 = *(ulong *)(lVar6 + -8) >> (0x3f - uVar14 & 0x3f) | uVar16;
        if (uVar16 >> 0x33 == 0) {
          return -1;
        }
        uVar2 = LZCOUNT(uVar17) << 1 | 1;
        puVar7 = (ulong *)((long)puVar7 + ((long)uVar15 >> 3));
        uVar11 = uVar2 + 6;
        uVar12 = uVar11 + (uVar15 & 7);
        uVar15 = LZCOUNT(uVar16) << 1 | 1;
        *piVar9 = (int)(uVar17 >> (0x3a - uVar2 & 0x3f)) + -0x40;
        piVar9[1] = (int)(uVar16 >> (0x3a - uVar15 & 0x3f)) + -0x40;
        uVar2 = *puVar7;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar11 = (uVar2 >> 0x20 | uVar2 << 0x20) >> (0x3f - uVar12 & 0x3f) |
                 uVar17 << (uVar11 & 0x3f);
        if (uVar11 >> 0x33 == 0) {
          return -1;
        }
        lVar6 = lVar6 - ((long)uVar14 >> 3);
        uVar15 = uVar15 + 6;
        uVar2 = uVar15 + (uVar14 & 7);
        uVar10 = *(ulong *)(lVar6 + -8) >> (0x3f - uVar2 & 0x3f) | uVar16 << (uVar15 & 0x3f);
        if (uVar10 >> 0x33 == 0) {
          return -1;
        }
        uVar1 = LZCOUNT(uVar11) << 1 | 1;
        puVar7 = (ulong *)((long)puVar7 + (uVar12 >> 3));
        uVar14 = uVar1 + 6;
        lVar6 = lVar6 - (uVar2 >> 3);
        lVar19 = lVar6 - (long)puVar7;
        uVar15 = uVar14 + (uVar12 & 7);
        uVar12 = LZCOUNT(uVar10) << 1 | 1;
        uVar17 = uVar11 << (uVar14 & 0x3f);
        uVar14 = uVar12 + 6;
        uVar16 = uVar10 << (uVar14 & 0x3f);
        piVar5 = piVar9 + 4;
        piVar9[2] = (int)(uVar11 >> (0x3a - uVar1 & 0x3f)) + -0x40;
        piVar9[3] = (int)(uVar10 >> (0x3a - uVar12 & 0x3f)) + -0x40;
        uVar14 = uVar14 + (uVar2 & 7);
        piVar9 = piVar5;
      } while (0x20 < lVar19);
      lVar13 = 0x46 - uVar14;
      if (-1 < (long)(0x3f - uVar14)) {
        lVar13 = 0x3f - uVar14;
      }
      lVar13 = lVar13 >> 3;
    }
    lVar4 = (long)puVar7 - uVar3;
    puVar18 = local_88;
    local_88[3] = 0;
    local_88[4] = 0;
    lVar6 = uVar8 - lVar6;
    if (7 < lVar4) {
      lVar4 = 8;
    }
    local_88[1] = 0;
    local_88[2] = 0;
    if (7 < lVar6) {
      lVar6 = 8;
    }
    local_88[0] = 0;
    memcpy((void *)((long)puVar18 - lVar4),(void *)((long)puVar7 - lVar4),lVar19 + lVar6 + lVar4);
    if (piVar5 <= param_4) {
      lVar19 = (long)puVar18 + lVar19;
      uVar8 = lVar19 + lVar13;
      piVar5 = piVar5 + 1;
      while( true ) {
        uVar3 = (*puVar18 & 0xff00ff00ff00ff00) >> 8 | (*puVar18 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar17 = (uVar3 >> 0x20 | uVar3 << 0x20) >> (0x3f - uVar15 & 0x3f) | uVar17;
        puVar18 = (ulong *)((long)puVar18 + ((long)uVar15 >> 3));
        if (uVar17 >> 0x33 == 0) break;
        uVar11 = LZCOUNT(uVar17) << 1 | 1;
        uVar3 = uVar11 + 6;
        uVar15 = uVar3 + (uVar15 & 7);
        lVar6 = 0x46 - uVar15;
        if (-1 < (long)(0x3f - uVar15)) {
          lVar6 = 0x3f - uVar15;
        }
        uVar12 = (long)puVar18 - (lVar6 >> 3);
        if (uVar8 < uVar12) goto LAB_001c09a0;
        piVar5[-1] = (int)(uVar17 >> (0x3a - uVar11 & 0x3f)) + -0x40;
        uVar11 = *(ulong *)(lVar19 + -8) >> (0x3f - uVar14 & 0x3f) | uVar16;
        lVar19 = lVar19 - ((long)uVar14 >> 3);
        if (uVar11 >> 0x33 == 0) {
          if (uVar12 <= lVar19 + (0x32 - (uVar14 & 7) >> 3)) {
            return -1;
          }
          goto joined_r0x001c09a8;
        }
        uVar2 = LZCOUNT(uVar11) << 1 | 1;
        uVar16 = uVar2 + 6;
        uVar14 = uVar16 + (uVar14 & 7);
        lVar6 = 0x46 - uVar14;
        if (-1 < (long)(0x3f - uVar14)) {
          lVar6 = 0x3f - uVar14;
        }
        uVar8 = lVar19 + (lVar6 >> 3);
        if (uVar8 < uVar12) goto joined_r0x001c09a8;
        uVar17 = uVar17 << (uVar3 & 0x3f);
        uVar16 = uVar11 << (uVar16 & 0x3f);
        piVar9 = piVar5 + 1;
        *piVar5 = (int)(uVar11 >> (0x3a - uVar2 & 0x3f)) + -0x40;
        piVar5 = piVar5 + 2;
        if (param_4 < piVar9) {
          return -1;
        }
      }
      if ((long)puVar18 - (0x32 - (uVar15 & 7) >> 3) <= uVar8) {
        return -1;
      }
LAB_001c09a0:
      piVar5 = piVar5 + -1;
joined_r0x001c09a8:
      if (param_4 < piVar5) {
        return -1;
      }
      lVar19 = (long)piVar5 - (long)param_3 >> 2;
      if (lVar19 != param_5 && param_5 != 0) {
        lVar19 = -1;
      }
      return lVar19;
    }
  }
  return -1;
}


