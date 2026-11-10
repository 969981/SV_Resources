/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a38ac; name: FUN_030a38ac
 */


void FUN_030a38ac(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  
  lVar23 = *(long *)(param_1 + 0x18);
  lVar4 = (long)*(int *)(param_2 + 4);
  lVar9 = (long)*(int *)(param_2 + 8);
  piVar15 = (int *)(lVar23 + lVar9 * 0x38);
  piVar14 = (int *)(lVar23 + lVar4 * 0x38);
  uVar5 = *(uint *)(param_1 + 0x70);
  if (0 < (int)uVar5) {
    lVar11 = lVar23 + lVar4 * 0x38;
    uVar17 = 0;
    do {
      piVar12 = *(int **)(*(long *)(param_1 + 0x68) + uVar17 * 8);
      fVar25 = (float)piVar12[6];
      fVar26 = (float)piVar12[3] + fVar25 * (*(float *)(lVar11 + 8) - (float)piVar12[2]);
      bVar6 = *(float *)(lVar11 + 0xc) < fVar26;
      if ((*(float *)(lVar11 + 0xc) == fVar26) &&
         (bVar6 = *(float *)(lVar11 + 0x18) < fVar25, *(float *)(lVar11 + 0x18) == fVar25)) {
        if (*(byte *)(lVar11 + 4) == *(byte *)(piVar12 + 1)) {
          if (*piVar14 < *piVar12) {
LAB_030a3980:
            iVar10 = (int)uVar17;
            if ((int)uVar5 <= iVar10) goto LAB_030a3a1c;
            lVar13 = lVar23 + lVar9 * 0x38;
            lVar11 = 0;
            goto LAB_030a39a8;
          }
        }
        else if (*(byte *)(lVar11 + 4) < *(byte *)(piVar12 + 1)) goto LAB_030a3980;
      }
      else if (bVar6) goto LAB_030a3980;
      uVar17 = uVar17 + 1;
    } while (uVar5 != uVar17);
  }
  uVar17 = (ulong)uVar5;
  goto LAB_030a3a1c;
LAB_030a39a8:
  do {
    piVar12 = *(int **)(*(long *)(param_1 + 0x68) + (long)iVar10 * 8 + lVar11 * 8);
    fVar25 = (float)piVar12[6];
    fVar26 = (float)piVar12[3] + fVar25 * (*(float *)(lVar13 + 8) - (float)piVar12[2]);
    bVar6 = *(float *)(lVar13 + 0xc) < fVar26;
    if ((*(float *)(lVar13 + 0xc) == fVar26) &&
       (bVar6 = *(float *)(lVar13 + 0x18) < fVar25, *(float *)(lVar13 + 0x18) == fVar25)) {
      if (*(byte *)(lVar13 + 4) == *(byte *)(piVar12 + 1)) {
        if (*piVar15 < *piVar12) {
LAB_030a3a10:
          uVar20 = iVar10 + (int)lVar11;
          goto LAB_030a3a20;
        }
      }
      else if (*(byte *)(lVar13 + 4) < *(byte *)(piVar12 + 1)) goto LAB_030a3a10;
    }
    else if (bVar6) goto LAB_030a3a10;
    lVar11 = lVar11 + 1;
  } while ((long)(int)uVar5 - (long)iVar10 != lVar11);
LAB_030a3a1c:
  uVar20 = uVar5;
LAB_030a3a20:
  uVar16 = (uint)uVar17;
  uVar19 = (long)(int)uVar16 - 1;
  uVar18 = (uint)uVar19;
  if (uVar5 != 0) {
    uVar2 = uVar5;
    if ((int)uVar18 <= (int)uVar5) {
      uVar2 = uVar18;
    }
    if ((int)uVar16 < 1) {
      uVar2 = 0;
    }
    uVar21 = (ulong)uVar2;
    uVar3 = uVar5;
    if ((int)uVar20 <= (int)uVar5) {
      uVar3 = uVar20;
    }
    uVar22 = 0;
    if (-1 < (int)uVar20) {
      uVar22 = uVar3;
    }
    if (uVar22 == uVar5) {
      uVar22 = uVar5 - 1;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + (long)(int)uVar22 * 8) + 0x20) =
           *(undefined4 *)(param_1 + 0x60);
    }
    if ((int)uVar2 < (int)uVar22) {
      uVar24 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3;
      do {
        lVar11 = *(long *)(*(long *)(param_1 + 0x68) + uVar24);
        if (*(int *)(lVar11 + 0x1c) == 0) {
          FUN_030a4544(param_1,uVar21);
          lVar11 = *(long *)(*(long *)(param_1 + 0x68) + uVar24);
        }
        uVar5 = (int)uVar21 + 1;
        uVar21 = (ulong)uVar5;
        uVar24 = uVar24 + 8;
        *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(param_1 + 0x60);
      } while (uVar22 != uVar5);
    }
  }
  if (uVar16 == uVar20) {
    iVar10 = -1;
    if (*(char *)(lVar23 + lVar4 * 0x38 + 4) == '\0') {
      iVar10 = 1;
    }
    if (uVar16 == 0) {
      *(int *)(lVar23 + lVar4 * 0x38 + 0x1c) = iVar10 + 1;
      iVar7 = 1;
      lVar11 = lVar9;
    }
    else {
      iVar7 = *(int *)(*(long *)(*(long *)(param_1 + 0x68) + uVar19 * 8) + 0x1c);
      *(int *)(lVar23 + lVar9 * 0x38 + 0x1c) = iVar7;
      iVar7 = iVar7 + iVar10;
      lVar11 = lVar4;
    }
    *(int *)(lVar23 + lVar11 * 0x38 + 0x1c) = iVar7;
    *(undefined4 *)(lVar23 + lVar4 * 0x38 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(lVar23 + lVar9 * 0x38 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    lVar4 = (long)*(int *)(param_1 + 0x70) + 2;
    uVar5 = *(int *)(param_1 + 0x70) - uVar16;
    iVar10 = (int)lVar4;
    if ((int)(*(uint *)(param_1 + 0x74) & 0x7fffffff) < iVar10) {
      FUN_030a5028((long *)(param_1 + 0x68),lVar4);
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x68) + (long)(int)uVar16 * 8);
    if (0 < (int)uVar5) {
      FUN_031d0240(puVar1 + 2,puVar1,(ulong)uVar5 << 3);
    }
    *puVar1 = piVar14;
    puVar1[1] = piVar15;
    *(int *)(param_1 + 0x70) = iVar10;
    FUN_030a40e4(param_1,uVar19 & 0xffffffff);
    FUN_030a40e4(param_1,uVar17 & 0xffffffff);
    uVar21 = (ulong)(uVar16 + 1);
  }
  else {
    *(undefined4 *)(lVar23 + lVar4 * 0x38 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    puVar8 = (undefined4 *)(lVar23 + lVar9 * 0x38 + 0x20);
    *puVar8 = *(undefined4 *)(param_1 + 0x60);
    iVar10 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = iVar10 + 2;
    if ((int)uVar20 < iVar10) {
      lVar11 = (long)(iVar10 + 1);
      do {
        iVar10 = iVar10 + -1;
        *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar11 * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)iVar10 * 8);
        bVar6 = (int)(uVar20 + 2) < lVar11;
        lVar11 = lVar11 + -1;
      } while (bVar6);
    }
    *(undefined4 *)(lVar23 + lVar9 * 0x38 + 0x1c) =
         *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + (long)(int)uVar20 * 8 + -8) + 0x1c);
    uVar21 = (long)(int)uVar20 + 1;
    *puVar8 = *(undefined4 *)(param_1 + 0x60);
    *(int **)(*(long *)(param_1 + 0x68) + uVar21 * 8) = piVar15;
    iVar10 = -1;
    if (*(char *)(lVar23 + lVar4 * 0x38 + 4) == '\0') {
      iVar10 = 1;
    }
    if ((int)uVar16 < (int)uVar20) {
      lVar9 = (long)(int)uVar20;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar9 * 8);
        *puVar1 = puVar1[-1];
        lVar11 = *(long *)(*(long *)(param_1 + 0x68) + lVar9 * 8);
        lVar9 = lVar9 + -1;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + iVar10;
      } while ((int)uVar16 < lVar9);
    }
    *(int **)(*(long *)(param_1 + 0x68) + (long)(int)uVar16 * 8) = piVar14;
    if (uVar16 == 0) {
      iVar10 = iVar10 + 1;
    }
    else {
      iVar10 = *(int *)(*(long *)(*(long *)(param_1 + 0x68) + (long)(int)uVar18 * 8) + 0x1c) +
               iVar10;
    }
    *(int *)(lVar23 + lVar4 * 0x38 + 0x1c) = iVar10;
    FUN_030a40e4(param_1,uVar19 & 0xffffffff);
    FUN_030a40e4(param_1,uVar17 & 0xffffffff);
    FUN_030a40e4(param_1,uVar20);
  }
  FUN_030a40e4(param_1,uVar21 & 0xffffffff);
  return;
}


