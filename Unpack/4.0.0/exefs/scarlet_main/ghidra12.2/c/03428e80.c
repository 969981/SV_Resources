/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03428e80; name: FUN_03428e80
 */


void FUN_03428e80(long *param_1,uint *param_2,long param_3,long param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  char *__s;
  size_t sVar4;
  void *__src;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  float *pfVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  puVar2 = PTR_DAT_047e2fd0;
  iVar5 = (int)param_1[1];
  puVar15 = *(undefined8 **)(param_2 + 2);
  if (puVar15 == (undefined8 *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(puVar15 + 1);
  }
  uVar1 = iVar8 + iVar5;
  if (*param_2 < uVar1) {
    puVar15 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(9,uVar1 * 0x48 + 0x10);
    if (puVar15 == (undefined8 *)0x0) {
      return;
    }
    __src = *(void **)(param_2 + 2);
    if ((__src == (void *)0x0) || (*(int *)((long)__src + 8) == 0)) {
      *puVar15 = 0xffffffffffffffff;
      *(undefined4 *)(puVar15 + 1) = 0;
    }
    else {
      memcpy(puVar15,__src,(ulong)(*(int *)((long)__src + 8) * 0x48 + 0x10));
    }
    if (*(long *)(param_2 + 2) != 0) {
      (**(code **)(puVar2 + 0x30))(9);
    }
    *(undefined8 **)(param_2 + 2) = puVar15;
    *param_2 = uVar1;
    iVar5 = (int)param_1[1];
  }
  if (iVar5 == 0) {
    return;
  }
  uVar17 = 0;
  do {
    lVar18 = *param_1;
    if (puVar15 == (undefined8 *)0x0) {
LAB_03428fac:
      puVar15 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *(uint *)(puVar15 + 1);
      if (*param_2 <= uVar1) goto LAB_03428fac;
      *(uint *)(puVar15 + 1) = uVar1 + 1;
      puVar15 = puVar15 + (ulong)uVar1 * 9 + 2;
    }
    pfVar16 = (float *)(lVar18 + uVar17 * 0xf0);
    fVar24 = *pfVar16;
    fVar23 = pfVar16[1];
    lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x28) + 0x20) + (ulong)param_5 * 0x28;
    fVar26 = *(float *)(lVar6 + 0x1c) - fVar23;
    fVar19 = *(float *)(lVar6 + 0x18) - fVar24;
    fVar21 = pfVar16[2];
    fVar27 = *(float *)(lVar6 + 0x20) - fVar21;
    fVar20 = SQRT(fVar19 * fVar19 + fVar26 * fVar26 + fVar27 * fVar27);
    lVar6 = *(long *)(*(long *)(param_3 + 8) + 0x40);
    fVar19 = *(float *)(lVar6 + 0x78);
    fVar26 = *(float *)(lVar6 + 0x7c);
    fVar27 = *(float *)(lVar6 + 0x80);
    pfVar16 = pfVar16 + 0x3a;
    if (1 < (uint)*pfVar16) {
      lVar6 = (ulong)(uint)*pfVar16 - 1;
      pfVar14 = (float *)(lVar18 + uVar17 * 0xf0 + 0x18);
      fVar28 = fVar23;
      fVar22 = fVar21;
      fVar25 = fVar24;
      do {
        fVar24 = pfVar14[-2];
        fVar23 = pfVar14[-1];
        fVar21 = *pfVar14;
        fVar20 = SQRT((fVar25 - fVar24) * (fVar25 - fVar24) + (fVar28 - fVar23) * (fVar28 - fVar23)
                      + (fVar22 - fVar21) * (fVar22 - fVar21)) + fVar20;
        lVar6 = lVar6 + -1;
        pfVar14 = pfVar14 + 4;
        fVar28 = fVar23;
        fVar22 = fVar21;
        fVar25 = fVar24;
      } while (lVar6 != 0);
    }
    fVar24 = fVar24 - fVar19;
    fVar23 = fVar23 - fVar26;
    fVar21 = fVar21 - fVar27;
    fVar28 = SQRT(fVar24 * fVar24 + fVar23 * fVar23 + fVar21 * fVar21);
    if (fVar28 != 0.0) {
      fVar28 = (fVar28 + fVar20) / fVar28;
      fVar19 = fVar19 + fVar24 * fVar28;
      fVar26 = fVar26 + fVar23 * fVar28;
      fVar27 = fVar27 + fVar21 * fVar28;
    }
    *(float *)((long)puVar15 + 0xc) = fVar27;
    lVar11 = lVar18 + uVar17 * 0xf0;
    *(float *)((long)puVar15 + 4) = fVar19;
    *(float *)(puVar15 + 1) = fVar26;
    puVar15[2] = 0x3f8000003f800000;
    *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(lVar11 + 0xe0);
    puVar15[8] = 0;
    *(undefined4 *)(puVar15 + 7) = 0;
    fVar19 = *pfVar16;
    lVar6 = (long)(int)fVar19;
    do {
      if (lVar6 < 1) goto LAB_03429114;
      lVar13 = *(long *)(lVar11 + 0x78 + lVar6 * 8);
      lVar6 = lVar6 + -1;
    } while (lVar13 == 0);
    __s = *(char **)(lVar13 + 8);
    puVar15[8] = __s;
    uVar10 = 0;
    if (__s != (char *)0x0) {
      sVar4 = strlen(__s);
      uVar10 = (undefined4)sVar4;
    }
    *(undefined4 *)(puVar15 + 7) = uVar10;
    fVar19 = *pfVar16;
LAB_03429114:
    if (fVar19 == 0.0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        if (*(long *)(lVar18 + uVar17 * 0xf0 + 0x80 + uVar7 * 8) != 0) goto LAB_03429148;
        uVar7 = uVar7 + 1;
      } while ((uint)fVar19 != uVar7);
      uVar7 = (ulong)(uint)fVar19;
    }
LAB_03429148:
    fVar19 = (float)uVar7;
    *(char *)((long)puVar15 + 0x1c) = (char)uVar7;
    if ((uint)fVar19 < (uint)*pfVar16) {
      uVar9 = uVar7 & 0xffffffff;
      puVar12 = *(undefined4 **)(lVar18 + uVar17 * 0xf0 + (uVar7 & 0xffffffff) * 8 + 0x80);
      uVar10 = 0;
      if (puVar12 == (undefined4 *)0x0) {
LAB_03429228:
        fVar19 = (float)uVar9;
      }
      else {
        *(undefined4 *)((long)puVar15 + 0x24) = *puVar12;
        uVar7 = uVar9 + 1;
        if (uVar7 < (uint)*pfVar16) {
          puVar12 = *(undefined4 **)(lVar18 + uVar17 * 0xf0 + uVar7 * 8 + 0x80);
          if (puVar12 == (undefined4 *)0x0) {
            uVar10 = 1;
            uVar9 = uVar7;
            goto LAB_03429228;
          }
          *(undefined4 *)(puVar15 + 5) = *puVar12;
          uVar7 = uVar9 + 2;
          if (uVar7 < (uint)*pfVar16) {
            puVar12 = *(undefined4 **)(lVar18 + uVar17 * 0xf0 + uVar7 * 8 + 0x80);
            if (puVar12 == (undefined4 *)0x0) {
              uVar10 = 2;
              uVar9 = uVar7;
              goto LAB_03429228;
            }
            *(undefined4 *)((long)puVar15 + 0x2c) = *puVar12;
            uVar9 = uVar9 + 3;
            if (uVar9 < (uint)*pfVar16) {
              puVar12 = *(undefined4 **)(lVar18 + uVar17 * 0xf0 + uVar9 * 8 + 0x80);
              if (puVar12 == (undefined4 *)0x0) {
                uVar10 = 3;
                goto LAB_03429228;
              }
              *(undefined4 *)(puVar15 + 6) = *puVar12;
              fVar19 = (float)((int)fVar19 + 4);
              uVar10 = 4;
            }
            else {
              fVar19 = (float)((int)fVar19 + 3);
              uVar10 = 3;
            }
          }
          else {
            fVar19 = (float)((int)fVar19 + 2);
            uVar10 = 2;
          }
        }
        else {
          fVar19 = (float)((int)fVar19 + 1);
          uVar10 = 1;
        }
      }
    }
    else {
      uVar10 = 0;
    }
    *(undefined4 *)(puVar15 + 4) = uVar10;
    *(char *)((long)puVar15 + 0x1d) = SUB41(*pfVar16,0) - SUB41(fVar19,0);
    lVar18 = lVar18 + uVar17 * 0xf0;
    *(undefined4 *)puVar15 = *(undefined4 *)(lVar18 + 0xec);
    fVar19 = *(float *)(*(long *)(*(long *)(param_4 + 8) + 0x58) + 0x98);
    bVar3 = *(uint *)(param_1 + 2) <= uVar17;
    uVar17 = uVar17 + 1;
    if (bVar3) {
      fVar19 = 1.0 - fVar19;
    }
    *(float *)((long)puVar15 + 0x14) = fVar19 * *(float *)(lVar18 + 0xe4);
    if (*(uint *)(param_1 + 1) <= uVar17) {
      return;
    }
    puVar15 = *(undefined8 **)(param_2 + 2);
  } while( true );
}


