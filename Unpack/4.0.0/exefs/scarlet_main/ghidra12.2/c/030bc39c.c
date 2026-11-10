/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030bc39c; name: FUN_030bc39c
 */


void FUN_030bc39c(long *param_1,long *param_2,undefined4 *param_3,undefined8 *param_4,ulong param_5)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  float *pfVar9;
  long lVar10;
  undefined4 *puVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  undefined8 *puVar18;
  float fVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar3 = *param_3;
  *param_1 = (long)param_2;
  *(undefined4 *)(param_1 + 0xa2) = uVar3;
  param_1[0x58] = -1;
  if ((param_5 & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = *param_2;
    plVar8 = param_1 + 0x5a;
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x5a] = lVar7;
  }
  local_50 = *param_4;
  uStack_48 = param_4[1];
  uVar4 = *(uint *)(param_4 + 5);
  lVar7 = param_4[4];
  uVar12 = *(uint *)(param_4 + 3);
  FUN_030bdfd4(param_1 + 0x10,param_2,plVar8,(ulong)uVar12,&local_50,lVar7,param_4[2],(ulong)uVar4);
  plVar8 = (long *)*param_1;
  uVar2 = uVar12 >> 0x16;
  if (*(uint *)(plVar8 + 0x51) == uVar2) {
    lVar10 = plVar8[0x3f];
  }
  else {
    lVar13 = *(long *)(*(long *)(*plVar8 + 0x38) + (ulong)uVar2 * 0x100);
    lVar10 = *(long *)(lVar13 + 0x20);
    plVar8[0x3f] = lVar10;
    lVar20 = *(long *)(lVar13 + 0x60);
    plVar8[0x49] = *(long *)(lVar13 + 0x68);
    plVar8[0x48] = lVar20;
    lVar20 = *(long *)(lVar13 + 0x70);
    plVar8[0x4b] = *(long *)(lVar13 + 0x78);
    plVar8[0x4a] = lVar20;
    lVar20 = *(long *)(lVar13 + 0x80);
    plVar8[0x4d] = *(long *)(lVar13 + 0x88);
    plVar8[0x4c] = lVar20;
    lVar20 = *(long *)(lVar13 + 0x98);
    lVar13 = *(long *)(lVar13 + 0x90);
    *(uint *)(plVar8 + 0x51) = uVar2;
    plVar8[0x4f] = lVar20;
    plVar8[0x4e] = lVar13;
  }
  uVar15 = (ulong)uVar12 & 0x3fffff;
  iVar14 = (int)uVar15;
  iVar16 = iVar14 - *(int *)(lVar10 + 0x20);
  iVar6 = *(int *)(lVar10 + 0x50);
  if (iVar14 < *(int *)(lVar10 + 0x20)) {
    if (*(int *)(lVar10 + 0x98) == 0) {
      iVar16 = iVar14;
    }
    else {
      iVar16 = *(int *)(*(long *)(lVar10 + 0x90) + uVar15 * 4);
      if (iVar16 == -1) {
        lVar13 = *(long *)(lVar10 + 0x48) + (long)(iVar6 * iVar14) * 4;
        puVar11 = (undefined4 *)(*(long *)(lVar10 + 0x18) + uVar15 * 0x10);
        lVar20 = lVar13 + (long)iVar6 * 4;
        goto LAB_030bc4b0;
      }
    }
    lVar13 = *(long *)(lVar10 + 0x120) + (long)(iVar16 * iVar6) * 4;
    lVar10 = *(long *)(lVar10 + 0xb0);
  }
  else {
    lVar13 = *(long *)(lVar10 + 0x140) + (long)(iVar6 * iVar16) * 4;
    lVar10 = *(long *)(lVar10 + 0xd0);
  }
  lVar20 = lVar13 + (long)iVar6 * 4;
  puVar11 = (undefined4 *)(lVar10 + (long)iVar16 * 0x10);
LAB_030bc4b0:
  *(uint *)(plVar8 + 0x50) = uVar12;
  *(undefined4 *)(plVar8 + 4) = *puVar11;
  *(undefined4 *)((long)plVar8 + 0x24) = puVar11[1];
  plVar8[5] = *(long *)(puVar11 + 2);
  plVar8[6] = lVar13;
  plVar8[7] = lVar20;
  *(uint *)(plVar8 + 0x38) = uVar12;
  plVar8[0x39] = (long)(plVar8 + 4);
  plVar8[0x3a] = lVar13;
  plVar8[0x3b] = lVar20;
  lVar10 = param_1[2];
  for (uVar5 = *(ushort *)(param_1[4] + 0x4e); -1 < (short)uVar5;
      uVar5 = *(ushort *)(param_1[3] + (ulong)uVar5 * 2)) {
    if (*(int *)(lVar10 + (ulong)uVar5 * 0x10 + 8) == -0x800000) {
      puVar18 = (undefined8 *)(lVar10 + (ulong)uVar5 * 0x10);
      goto LAB_030bc550;
    }
  }
  iVar16 = *(int *)((long)param_1 + 0x2c);
  puVar18 = (undefined8 *)(lVar10 + (long)iVar16 * 0x10);
  *(int *)((long)param_1 + 0x2c) = iVar16 + 1;
  *puVar18 = 0x7f7fffee7f7fffee;
  puVar18[1] = 0xffffff800000;
  *(undefined2 *)(param_1[3] + (long)(short)iVar16 * 2) = *(undefined2 *)(param_1[4] + 0x4e);
  *(short *)(param_1[4] + 0x4e) = (short)iVar16;
LAB_030bc550:
  *(undefined4 *)puVar18 = 0;
  fVar19 = (float)FUN_030be250(param_1 + 0x10,0xff800000);
  *(float *)((long)puVar18 + 4) = fVar19;
  *(ushort *)((long)puVar18 + 0xe) = *(ushort *)((long)puVar18 + 0xe) | 5;
  if (fVar19 < *(float *)((long)param_1 + 0x44)) {
    *(float *)((long)param_1 + 0x44) = fVar19;
    *(undefined4 *)(param_1 + 8) = 0xff800000;
    fVar19 = *(float *)((long)puVar18 + 4);
  }
  if (fVar19 < 3.40282e+38) {
    uVar5 = *(ushort *)(param_1[4] + 0x4e);
    if (-1 < (short)uVar5) {
      do {
        if (*(int *)(param_1[2] + (ulong)uVar5 * 0x10 + 8) == -0x800000) {
          pfVar9 = (float *)(param_1[2] + (ulong)uVar5 * 0x10);
          goto LAB_030bc5dc;
        }
        uVar5 = *(ushort *)(param_1[3] + (ulong)uVar5 * 2);
      } while (-1 < (short)uVar5);
    }
    pfVar9 = (float *)(param_1 + 6);
LAB_030bc5dc:
    fVar19 = *(float *)((long)param_1 + 0x4c);
    fVar21 = *pfVar9;
    fVar22 = pfVar9[1];
    uVar12 = *(uint *)(param_1 + 0xf);
    puVar11 = (undefined4 *)(param_1[0xe] + (long)(int)uVar12 * 8);
    *(uint *)(param_1 + 0xf) = uVar12 + 1;
    *puVar11 = 0xff800000;
    puVar11[1] = fVar21 + fVar19 * fVar22;
    lVar10 = param_1[0xe];
    puVar11 = (undefined4 *)(lVar10 + (long)(int)uVar12 * 8);
    uVar3 = *puVar11;
    iVar16 = puVar11[1];
    if ((int)uVar12 < 1) {
LAB_030bc65c:
      uVar15 = (ulong)(int)uVar12;
    }
    else {
      do {
        uVar2 = uVar12;
        if (-1 < (int)(uVar12 - 1)) {
          uVar2 = uVar12 - 1;
        }
        uVar15 = (ulong)(uint)((int)uVar2 >> 1);
        if (*(int *)(lVar10 + uVar15 * 8 + 4) <= iVar16) goto LAB_030bc65c;
        *(undefined8 *)(lVar10 + (ulong)uVar12 * 8) = *(undefined8 *)(lVar10 + uVar15 * 8);
        lVar10 = param_1[0xe];
        bVar1 = 2 < (int)uVar12;
        uVar12 = (int)uVar2 >> 1;
      } while (bVar1);
    }
    *(undefined4 *)(lVar10 + uVar15 * 8) = uVar3;
    *(int *)(param_1[0xe] + uVar15 * 8 + 4) = iVar16;
  }
  if (0 < (int)uVar4) {
    uVar15 = 0;
    do {
      if (*(int *)(lVar7 + uVar15 * 4) != -1) {
        uVar12 = (uint)uVar15 | 0xff400000;
        uVar17 = (ulong)(uVar12 * -0x61c8864f >> 0x18);
        lVar10 = param_1[2];
        for (uVar5 = *(ushort *)(param_1[4] + uVar17 * 2); -1 < (short)uVar5;
            uVar5 = *(ushort *)(param_1[3] + (ulong)uVar5 * 2)) {
          if (*(uint *)(lVar10 + (ulong)uVar5 * 0x10 + 8) == uVar12) {
            puVar18 = (undefined8 *)(lVar10 + (ulong)uVar5 * 0x10);
            goto LAB_030bc71c;
          }
        }
        iVar16 = *(int *)((long)param_1 + 0x2c);
        puVar18 = (undefined8 *)(lVar10 + (long)iVar16 * 0x10);
        *(int *)((long)param_1 + 0x2c) = iVar16 + 1;
        *puVar18 = 0x7f7fffee7f7fffee;
        *(uint *)(puVar18 + 1) = uVar12;
        *(undefined4 *)((long)puVar18 + 0xc) = 0xffff;
        *(undefined2 *)(param_1[3] + (long)(short)iVar16 * 2) =
             *(undefined2 *)(param_1[4] + uVar17 * 2);
        *(short *)(param_1[4] + uVar17 * 2) = (short)iVar16;
LAB_030bc71c:
        *(undefined4 *)((long)puVar18 + 4) = 0;
        *(ushort *)((long)puVar18 + 0xe) = *(ushort *)((long)puVar18 + 0xe) | 8;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar4);
  }
  return;
}


