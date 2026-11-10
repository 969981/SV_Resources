/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030bdfd4; name: FUN_030bdfd4
 */


void FUN_030bdfd4(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4,
                 undefined8 *param_5,uint *param_6,undefined8 param_7,uint param_8)

{
  uint uVar1;
  short sVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar7 = *param_2;
  uVar5 = param_8;
  if (0xf < (int)param_8) {
    uVar5 = 0x10;
  }
  uVar6 = (uint)param_4;
  *(uint *)(param_1 + 0x2e) = uVar6;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(uint *)(param_1 + 2) = uVar5;
  param_1[0x44] = uVar7;
  uVar18 = param_5[1];
  uVar7 = *param_5;
  param_1[0x45] = param_6;
  param_1[0x46] = param_7;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  param_1[0x2d] = uVar18;
  param_1[0x2c] = uVar7;
  if (param_3 == 0) {
    return;
  }
  if ((int)param_8 < 1) {
    bVar4 = 0;
  }
  else {
    bVar4 = 0;
    uVar12 = uVar5;
    if ((int)uVar5 < 2) {
      uVar12 = 1;
    }
    uVar8 = (ulong)uVar12;
    puVar9 = (uint *)((long)param_1 + 0x1c);
    do {
      uVar12 = *param_6;
      if (uVar12 == 0xffffffff) {
        uVar12 = 0xffffffff;
      }
      else {
        uVar1 = uVar12 & 0x3fffff;
        lVar13 = *(long *)(*(long *)(*(long *)(param_1[0x44] + 0x38) +
                                    ((ulong)(uVar12 >> 0xe) & 0x3ff00)) + 0x20);
        uVar14 = uVar1 - *(int *)(lVar13 + 0x20);
        if ((int)uVar1 < *(int *)(lVar13 + 0x20)) {
          if (*(int *)(lVar13 + 0x98) == 0) {
            uVar14 = uVar1;
LAB_030be0a8:
            lVar13 = *(long *)(lVar13 + 0xb0);
            goto LAB_030be0ac;
          }
          uVar14 = *(uint *)(*(long *)(lVar13 + 0x90) + (ulong)uVar1 * 4);
          if (uVar14 != 0xffffffff) goto LAB_030be0a8;
          lVar13 = *(long *)(lVar13 + 0x18) + (ulong)uVar1 * 0x10;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0xd0);
LAB_030be0ac:
          lVar13 = lVar13 + (long)(int)uVar14 * 0x10;
        }
        uVar12 = uVar12 & 0xffc00000 | (int)*(short *)(lVar13 + 0xc);
        if ((int)*(short *)(lVar13 + 0xc) == 0xffffffff) {
          uVar12 = 0xffffffff;
        }
      }
      param_6 = param_6 + 1;
      *puVar9 = uVar12;
      bVar4 = bVar4 | uVar12 != 0xffffffff;
      *(byte *)((long)param_1 + 0x14) = bVar4;
      uVar8 = uVar8 - 1;
      puVar9 = puVar9 + 1;
    } while (uVar8 != 0);
  }
  if (uVar6 != 0xffffffff) {
    lVar13 = *(long *)(*(long *)(*(long *)(param_1[0x44] + 0x38) + (param_4 >> 0x16 & 0x3ff) * 0x100
                                ) + 0x20);
    uVar6 = uVar6 & 0x3fffff;
    uVar12 = uVar6 - *(int *)(lVar13 + 0x20);
    if ((int)uVar6 < *(int *)(lVar13 + 0x20)) {
      if (*(int *)(lVar13 + 0x98) == 0) {
        uVar12 = uVar6;
LAB_030be14c:
        lVar13 = *(long *)(lVar13 + 0xb0);
        goto LAB_030be150;
      }
      uVar12 = *(uint *)(*(long *)(lVar13 + 0x90) + (ulong)uVar6 * 4);
      if (uVar12 != 0xffffffff) goto LAB_030be14c;
      lVar13 = *(long *)(lVar13 + 0x18) + (ulong)uVar6 * 0x10;
    }
    else {
      lVar13 = *(long *)(lVar13 + 0xd0);
LAB_030be150:
      lVar13 = lVar13 + (long)(int)uVar12 * 0x10;
    }
    sVar2 = *(short *)(lVar13 + 0xc);
    if ((long)sVar2 != 0xffffffffffffffff) {
      uVar6 = (uint)(param_4 & 0xffc00000) | (int)sVar2;
      *(uint *)(param_1 + 3) = uVar6;
      if ((bVar4 != 0) && (uVar6 != 0xffffffff)) {
        FUN_030bf7b0(param_1 + 0x30,param_3,(long)param_1 + 0x1c,uVar5,
                     param_4 & 0xffc00000 | (long)sVar2 & 0xffffffffU);
        uVar5 = *(uint *)(param_1 + 2);
      }
      goto LAB_030be1a4;
    }
  }
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
LAB_030be1a4:
  if (0 < (int)uVar5) {
    lVar13 = 0;
    do {
      uVar6 = *(uint *)((long)param_1 + lVar13 * 4 + 0x1c);
      if (uVar6 != 0xffffffff) {
        plVar10 = (long *)param_1[1];
        uVar12 = uVar6 >> 0x16;
        if (*(uint *)(plVar10 + 0xf) != uVar12) {
          plVar10[3] = *(long *)(*(long *)(*plVar10 + 0x38) + (ulong)uVar12 * 0x100 + 0x10);
          *(uint *)(plVar10 + 0xf) = uVar12;
          plVar10 = (long *)param_1[1];
          uVar5 = *(uint *)(param_1 + 2);
        }
        lVar11 = plVar10[3];
        uVar18 = *(undefined8 *)(lVar11 + 0x40);
        uVar19 = *(undefined8 *)(lVar11 + 0x50);
        uVar20 = *(undefined8 *)(lVar11 + 0x60);
        uVar21 = *(undefined8 *)(lVar11 + 0x70);
        puVar3 = (undefined8 *)
                 (*(long *)(*(long *)(lVar11 + 0x20) + 0x38) + (ulong)(uVar6 & 0x3fffff) * 0x10);
        uVar7 = *puVar3;
        fVar15 = (float)uVar7;
        fVar16 = (float)((ulong)uVar7 >> 0x20);
        fVar17 = (float)puVar3[1];
        (param_1 + lVar13 * 2 + 0xc)[1] =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x78) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar11 + 0x68) >> 0x20) * fVar17 +
                      (float)((ulong)*(undefined8 *)(lVar11 + 0x48) >> 0x20) * fVar15 +
                      (float)((ulong)*(undefined8 *)(lVar11 + 0x58) >> 0x20) * fVar16,
                      (float)*(undefined8 *)(lVar11 + 0x78) +
                      (float)*(undefined8 *)(lVar11 + 0x68) * fVar17 +
                      (float)*(undefined8 *)(lVar11 + 0x48) * fVar15 +
                      (float)*(undefined8 *)(lVar11 + 0x58) * fVar16);
        param_1[lVar13 * 2 + 0xc] =
             CONCAT44((float)((ulong)uVar21 >> 0x20) +
                      (float)((ulong)uVar20 >> 0x20) * fVar17 +
                      (float)((ulong)uVar18 >> 0x20) * fVar15 +
                      (float)((ulong)uVar19 >> 0x20) * fVar16,
                      (float)uVar21 +
                      (float)uVar20 * fVar17 + (float)uVar18 * fVar15 + (float)uVar19 * fVar16);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)uVar5);
  }
  return;
}


