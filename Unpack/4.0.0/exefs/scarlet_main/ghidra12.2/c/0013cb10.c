/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013cb10; name: FUN_0013cb10
 */


void FUN_0013cb10(undefined8 param_1,long param_2,double *param_3,undefined8 *param_4)

{
  bool bVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  double dVar23;
  double local_100;
  undefined1 local_f8;
  double local_f0 [16];
  
  if ((*(byte *)(param_3 + 1) & 0xf) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00125b90(param_1,"table index is nil");
  }
  if (*(byte *)(param_3 + 1) == 0x13) {
    dVar23 = *param_3;
    iVar6 = FUN_0013fed0(dVar23,local_f0,0);
    if (iVar6 == 0) {
      if (NAN(dVar23)) {
                    /* WARNING: Subroutine does not return */
        FUN_00125b90(param_1,"table index is NaN");
      }
    }
    else {
      local_100 = local_f0[0];
      local_f8 = 3;
      param_3 = &local_100;
    }
  }
  if ((*(byte *)(param_4 + 1) & 0xf) == 0) {
    return;
  }
  puVar7 = (undefined8 *)FUN_0013d060(param_2,*(undefined1 *)(param_3 + 1),param_3);
  puVar13 = *(undefined8 **)(param_2 + 0x20);
  if ((*(byte *)(puVar7 + 1) & 0xf) == 0) {
    if (puVar13 == (undefined8 *)0x0) goto LAB_0013cc6c;
  }
  else {
    if (puVar13 == (undefined8 *)0x0) {
LAB_0013cc6c:
      local_f0[0xe] = 0.0;
      local_f0[0xf] = 0.0;
      local_f0[0xc] = 0.0;
      local_f0[0xd] = 0.0;
      local_f0[10] = 0.0;
      local_f0[0xb] = 0.0;
      local_f0[8] = 0.0;
      local_f0[9] = 0.0;
      local_f0[6] = 0.0;
      local_f0[7] = 0.0;
      local_f0[4] = 0.0;
      local_f0[5] = 0.0;
      local_f0[2] = 0.0;
      local_f0[3] = 0.0;
      local_f0[0] = 0.0;
      local_f0[1] = 0.0;
      uVar12 = *(uint *)(param_2 + 0xc);
      if (((char)*(byte *)(param_2 + 10) < '\0') &&
         (uVar16 = uVar12 - (uVar12 >> 1 & 0x55555555),
         uVar16 = (uVar16 & 0x33333333) + (uVar16 >> 2 & 0x33333333),
         1 < (uVar16 + (uVar16 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
        uVar12 = uVar12 | uVar12 >> 1;
        uVar12 = uVar12 | uVar12 >> 2;
        uVar12 = uVar12 | uVar12 >> 4;
        uVar12 = uVar12 | uVar12 >> 8;
        uVar12 = (uVar12 | uVar12 >> 0x10) + 1;
      }
      lVar15 = 0;
      *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0x7f;
      iVar6 = 0;
      uVar16 = 1;
      *(uint *)(param_2 + 0xc) = uVar12;
      uVar18 = 1;
      do {
        uVar20 = uVar18;
        if ((uVar12 < uVar18) && (uVar20 = uVar12, uVar12 < uVar16)) break;
        if (uVar20 < uVar16) {
          iVar19 = 0;
        }
        else {
          iVar19 = 0;
          do {
            uVar5 = uVar16 - 1;
            uVar16 = uVar16 + 1;
            if ((*(byte *)(*(long *)(param_2 + 0x10) + (ulong)uVar5 * 0x10 + 8) & 0xf) != 0) {
              iVar19 = iVar19 + 1;
            }
          } while (uVar16 <= uVar20);
        }
        lVar21 = lVar15 * 4;
        lVar15 = lVar15 + 1;
        iVar6 = iVar19 + iVar6;
        uVar18 = uVar18 << 1;
        *(int *)((long)local_f0 + lVar21) = *(int *)((long)local_f0 + lVar21) + iVar19;
      } while (lVar15 != 0x20);
      uVar12 = ~(-1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f));
      iVar19 = 0;
      iVar22 = 0;
      lVar15 = (long)(int)uVar12 + 1;
      lVar21 = ((long)(int)uVar12 + (long)(int)uVar12 * 2) * 8;
      do {
        lVar3 = *(long *)(param_2 + 0x18) + lVar21;
        if ((*(byte *)(lVar3 + 8) & 0xf) != 0) {
          if (*(char *)(lVar3 + 9) == '\x03') {
            bVar1 = *(long *)(lVar3 + 0x10) - 1U >> 0x1f == 0 && (int)*(long *)(lVar3 + 0x10) != 0;
            if (bVar1) {
              uVar10 = FUN_0012d860();
              uVar10 = -(uVar10 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar10 & 0xffffffff) << 2;
              *(int *)((long)local_f0 + uVar10) = *(int *)((long)local_f0 + uVar10) + 1;
            }
            iVar22 = (uint)bVar1 + iVar22;
          }
          iVar19 = iVar19 + 1;
        }
        lVar21 = lVar21 + -0x18;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      uVar12 = iVar22 + iVar6;
      if (*(char *)(param_3 + 1) == '\x03') {
        iVar22 = 0;
        if (((long)*param_3 - 1U >> 0x1f == 0) && (SUB84(*param_3,0) != 0)) {
          uVar10 = FUN_0012d860();
          uVar10 = -(uVar10 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar10 & 0xffffffff) << 2;
          *(int *)((long)local_f0 + uVar10) = *(int *)((long)local_f0 + uVar10) + 1;
          iVar22 = 1;
        }
        uVar12 = iVar22 + uVar12;
      }
      lVar15 = 0;
      uVar18 = 0;
      uVar16 = 0;
      uVar10 = 1;
      iVar22 = 0;
      do {
        uVar20 = (uint)(uVar10 >> 1);
        iVar11 = iVar22;
        if (uVar12 <= uVar20) break;
        piVar2 = (int *)((long)local_f0 + lVar15);
        lVar15 = lVar15 + 4;
        uVar16 = *piVar2 + uVar16;
        iVar11 = (int)uVar10;
        uVar5 = uVar16;
        if (uVar16 <= uVar20) {
          iVar11 = iVar22;
          uVar5 = uVar18;
        }
        uVar18 = uVar5;
        uVar10 = (ulong)(uint)((int)uVar10 << 1);
        iVar22 = iVar11;
      } while (lVar15 != 0x80);
      FUN_0013c4e0(param_1,param_2,iVar11,((iVar6 + iVar19) - uVar18) + 1);
      puVar13 = (undefined8 *)FUN_0013d560(param_2,param_3);
      if (*(char *)(puVar13 + 1) == ' ') {
        FUN_0013cb10(param_1,param_2,param_3,param_4);
        return;
      }
      *puVar13 = *param_4;
      *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(param_4 + 1);
      return;
    }
    do {
      puVar14 = puVar13;
      if (puVar14 <= *(undefined8 **)(param_2 + 0x18)) goto LAB_0013cc6c;
      puVar13 = puVar14 + -3;
      *(undefined8 **)(param_2 + 0x20) = puVar13;
    } while (*(char *)((long)puVar14 + -0xf) != '\0');
    puVar8 = (undefined8 *)FUN_0013d060(param_2,*(undefined1 *)((long)puVar7 + 9),puVar7 + 2);
    if (puVar8 == puVar7) {
      if (*(int *)((long)puVar7 + 0xc) != 0) {
        *(int *)((long)puVar14 + -0xc) =
             (int)((ulong)((long)puVar7 +
                          ((long)*(int *)((long)puVar7 + 0xc) * 0x18 - (long)puVar13)) >> 3) *
             -0x55555555;
      }
      *(int *)((long)puVar7 + 0xc) = (int)((ulong)((long)puVar13 - (long)puVar7) >> 3) * -0x55555555
      ;
      puVar7 = puVar13;
    }
    else {
      do {
        puVar9 = puVar8;
        puVar8 = puVar9 + (long)*(int *)((long)puVar9 + 0xc) * 3;
      } while (puVar9 + (long)*(int *)((long)puVar9 + 0xc) * 3 != puVar7);
      *(int *)((long)puVar9 + 0xc) = (int)((ulong)((long)puVar13 - (long)puVar9) >> 3) * -0x55555555
      ;
      uVar4 = *puVar7;
      uVar17 = puVar7[2];
      puVar14[-2] = puVar7[1];
      puVar14[-1] = uVar17;
      *puVar13 = uVar4;
      if (*(int *)((long)puVar7 + 0xc) != 0) {
        *(int *)((long)puVar14 + -0xc) =
             *(int *)((long)puVar14 + -0xc) +
             (int)((ulong)((long)puVar7 - (long)puVar13) >> 3) * -0x55555555;
        *(undefined4 *)((long)puVar7 + 0xc) = 0;
      }
      *(undefined1 *)(puVar7 + 1) = 0x10;
    }
  }
  puVar7[2] = *param_3;
  *(undefined1 *)((long)puVar7 + 9) = *(undefined1 *)(param_3 + 1);
  if ((((*(byte *)(param_3 + 1) >> 6 & 1) != 0) && ((*(byte *)(param_2 + 9) >> 5 & 1) != 0)) &&
     ((*(byte *)((long)*param_3 + 9) & 0x18) != 0)) {
    FUN_00129f00(param_1,param_2);
  }
  *puVar7 = *param_4;
  *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_4 + 1);
  return;
}


