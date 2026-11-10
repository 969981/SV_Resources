/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03165e70; name: FUN_03165e70
 */


void FUN_03165e70(long param_1,long *param_2,ulong param_3,long *param_4)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  bool bVar22;
  
  lVar12 = param_2[1];
  uVar10 = (int)lVar12 - 1;
  uVar4 = *(uint *)*param_2;
  uVar5 = ((uint *)*param_2)[(int)uVar10];
  uVar7 = *(uint *)(param_1 + 0x108);
  uVar19 = (ulong)uVar7;
  uVar6 = *(undefined2 *)(*param_4 + (long)(int)uVar10 * 2);
  bVar1 = uVar4 > uVar5;
  uVar13 = *(uint *)(param_1 + 0x10c) & 0x7fffffff;
  iVar17 = (int)((long)(int)uVar7 + 1);
  if (uVar4 <= uVar5) {
    if ((int)uVar13 <= (int)uVar7) {
      FUN_03168014(param_1 + 0x100,PTR_PTR_047d1a50,(long)iVar17);
    }
    *(int *)(param_1 + 0x108) = iVar17;
    iVar17 = (int)(uVar19 & 0xffff) + 1;
    iVar21 = ((*(int *)(param_1 + 0xf8) >> 5) + 1) * iVar17;
    if ((int)(*(uint *)(param_1 + 0xf4) & 0x7fffffff) < iVar21) {
      FUN_02eb1f88(param_1 + 0xe8,PTR_PTR_047d1a50,(long)iVar21);
    }
    uVar13 = *(uint *)(param_1 + 0xf0);
    if ((int)uVar13 < iVar21) {
      *(int *)(param_1 + 0xf0) = iVar21;
      memset((void *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar13 * 4),0,
             (ulong)(iVar21 + ~uVar13) * 4 + 4);
    }
    else if (iVar21 < (int)uVar13) {
      *(int *)(param_1 + 0xf0) = iVar21;
    }
    iVar17 = ((*(int *)(param_1 + 0xe0) >> 5) + 1) * iVar17;
    if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < iVar17) {
      FUN_02eb1f88(param_1 + 0xd0,PTR_PTR_047d1a50,(long)iVar17);
    }
    uVar13 = *(uint *)(param_1 + 0xd8);
    if ((int)uVar13 < iVar17) {
      *(int *)(param_1 + 0xd8) = iVar17;
      memset((void *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar13 * 4),0,
             (ulong)(iVar17 + ~uVar13) * 4 + 4);
    }
    else if (iVar17 < (int)uVar13) {
      *(int *)(param_1 + 0xd8) = iVar17;
    }
    puVar11 = (uint *)(*(long *)(param_1 + 0x100) + (uVar19 & 0xffff) * 0x20);
    *puVar11 = uVar4;
    uVar13 = uVar5;
  }
  else {
    if ((int)uVar13 <= (int)uVar7) {
      FUN_03168014(param_1 + 0x100,PTR_PTR_047d1a50,(long)(int)uVar7 + 1);
    }
    *(int *)(param_1 + 0x108) = iVar17;
    iVar17 = (int)(uVar19 & 0xffff) + 1;
    iVar21 = ((*(int *)(param_1 + 0xf8) >> 5) + 1) * iVar17;
    if ((int)(*(uint *)(param_1 + 0xf4) & 0x7fffffff) < iVar21) {
      FUN_02eb1f88(param_1 + 0xe8,PTR_PTR_047d1a50,(long)iVar21);
    }
    uVar13 = *(uint *)(param_1 + 0xf0);
    if ((int)uVar13 < iVar21) {
      *(int *)(param_1 + 0xf0) = iVar21;
      memset((void *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar13 * 4),0,
             (ulong)(iVar21 + ~uVar13) * 4 + 4);
    }
    else if (iVar21 < (int)uVar13) {
      *(int *)(param_1 + 0xf0) = iVar21;
    }
    iVar17 = ((*(int *)(param_1 + 0xe0) >> 5) + 1) * iVar17;
    if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < iVar17) {
      FUN_02eb1f88(param_1 + 0xd0,PTR_PTR_047d1a50,(long)iVar17);
    }
    uVar13 = *(uint *)(param_1 + 0xd8);
    if ((int)uVar13 < iVar17) {
      *(int *)(param_1 + 0xd8) = iVar17;
      memset((void *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar13 * 4),0,
             (ulong)(iVar17 + ~uVar13) * 4 + 4);
    }
    else if (iVar17 < (int)uVar13) {
      *(int *)(param_1 + 0xd8) = iVar17;
    }
    puVar11 = (uint *)(*(long *)(param_1 + 0x100) + (uVar19 & 0xffff) * 0x20);
    *puVar11 = uVar5;
    uVar13 = uVar4;
  }
  puVar11[1] = uVar13;
  *(undefined2 *)((long)puVar11 + 0x12) = 0xffff;
  *(undefined2 *)(puVar11 + 2) = uVar6;
  *(undefined4 *)((long)puVar11 + 10) = 0xffff0000;
  uVar13 = *(int *)(param_1 + 0xe0) >> 5;
  pvVar2 = (void *)(*(long *)(param_1 + 0xd0) + (long)(int)((uVar13 + 1) * (uVar7 & 0xffff)) * 4);
  if (uVar13 != 0xffffffff) {
    memset(pvVar2,0,(-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2) + 4);
  }
  iVar17 = 1 << (ulong)((uint)param_3 & 0x1f);
  *(int *)((long)pvVar2 + ((param_3 & 0xffffffff) >> 3 & 0x1ffffffc)) = iVar17;
  if ((int)lVar12 < 2) {
    uVar13 = uVar4;
  }
  else {
    uVar18 = 0;
    uVar20 = uVar19;
    uVar14 = uVar4;
    bVar22 = bVar1;
    do {
      uVar6 = *(undefined2 *)(*param_4 + uVar18 * 2);
      uVar13 = *(uint *)(*param_2 + uVar18 * 4 + 4);
      uVar8 = *(uint *)(param_1 + 0x108);
      uVar19 = (ulong)uVar8;
      bVar1 = uVar13 > uVar14;
      uVar3 = *(uint *)(param_1 + 0x10c) & 0x7fffffff;
      iVar21 = (int)((long)(int)uVar8 + 1);
      if (uVar13 <= uVar14) {
        if ((int)uVar3 <= (int)uVar8) {
          FUN_03168014(param_1 + 0x100,PTR_PTR_047d1a50,(long)iVar21);
        }
        uVar16 = uVar19 & 0xffff;
        *(int *)(param_1 + 0x108) = iVar21;
        iVar21 = (int)uVar16 + 1;
        iVar9 = ((*(int *)(param_1 + 0xf8) >> 5) + 1) * iVar21;
        if ((int)(*(uint *)(param_1 + 0xf4) & 0x7fffffff) < iVar9) {
          FUN_02eb1f88(param_1 + 0xe8,PTR_PTR_047d1a50,(long)iVar9);
        }
        uVar3 = *(uint *)(param_1 + 0xf0);
        if ((int)uVar3 < iVar9) {
          *(int *)(param_1 + 0xf0) = iVar9;
          memset((void *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar3 * 4),0,
                 (ulong)(iVar9 + ~uVar3) * 4 + 4);
        }
        else if (iVar9 < (int)uVar3) {
          *(int *)(param_1 + 0xf0) = iVar9;
        }
        iVar21 = ((*(int *)(param_1 + 0xe0) >> 5) + 1) * iVar21;
        if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < iVar21) {
          FUN_02eb1f88(param_1 + 0xd0,PTR_PTR_047d1a50,(long)iVar21);
        }
        uVar3 = *(uint *)(param_1 + 0xd8);
        if ((int)uVar3 < iVar21) {
          *(int *)(param_1 + 0xd8) = iVar21;
          memset((void *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar3 * 4),0,
                 (ulong)(iVar21 + ~uVar3) * 4 + 4);
        }
        else if (iVar21 < (int)uVar3) {
          *(int *)(param_1 + 0xd8) = iVar21;
        }
        puVar11 = (uint *)(*(long *)(param_1 + 0x100) + uVar16 * 0x20);
        *(undefined2 *)(puVar11 + 2) = uVar6;
        *(undefined2 *)((long)puVar11 + 0x12) = 0xffff;
        *puVar11 = uVar13;
        puVar11[1] = uVar14;
        *(undefined4 *)((long)puVar11 + 10) = 0xffff0000;
        uVar14 = *(int *)(param_1 + 0xe0) >> 5;
        pvVar2 = (void *)(*(long *)(param_1 + 0xd0) + (long)(int)((uVar14 + 1) * (int)uVar16) * 4);
        if (uVar14 != 0xffffffff) {
          memset(pvVar2,0,(-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2) + 4);
        }
        *(int *)((long)pvVar2 + ((param_3 & 0xffffffff) >> 5) * 4) = iVar17;
        if (!bVar22) {
          *(short *)(*(long *)(param_1 + 0x100) + uVar16 * 0x20 + 0xc) = (short)uVar20;
        }
      }
      else {
        if ((int)uVar3 <= (int)uVar8) {
          FUN_03168014(param_1 + 0x100,PTR_PTR_047d1a50,(long)(int)uVar8 + 1);
        }
        *(int *)(param_1 + 0x108) = iVar21;
        iVar15 = (int)(uVar19 & 0xffff);
        iVar21 = iVar15 + 1;
        iVar9 = ((*(int *)(param_1 + 0xf8) >> 5) + 1) * iVar21;
        if ((int)(*(uint *)(param_1 + 0xf4) & 0x7fffffff) < iVar9) {
          FUN_02eb1f88(param_1 + 0xe8,PTR_PTR_047d1a50,(long)iVar9);
        }
        uVar3 = *(uint *)(param_1 + 0xf0);
        if ((int)uVar3 < iVar9) {
          *(int *)(param_1 + 0xf0) = iVar9;
          memset((void *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar3 * 4),0,
                 (ulong)(iVar9 + ~uVar3) * 4 + 4);
        }
        else if (iVar9 < (int)uVar3) {
          *(int *)(param_1 + 0xf0) = iVar9;
        }
        iVar21 = ((*(int *)(param_1 + 0xe0) >> 5) + 1) * iVar21;
        if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < iVar21) {
          FUN_02eb1f88(param_1 + 0xd0,PTR_PTR_047d1a50,(long)iVar21);
        }
        uVar3 = *(uint *)(param_1 + 0xd8);
        if ((int)uVar3 < iVar21) {
          *(int *)(param_1 + 0xd8) = iVar21;
          memset((void *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar3 * 4),0,
                 (ulong)(iVar21 + ~uVar3) * 4 + 4);
        }
        else if (iVar21 < (int)uVar3) {
          *(int *)(param_1 + 0xd8) = iVar21;
        }
        puVar11 = (uint *)(*(long *)(param_1 + 0x100) + (uVar19 & 0xffff) * 0x20);
        *(undefined2 *)(puVar11 + 2) = uVar6;
        *(undefined2 *)((long)puVar11 + 0x12) = 0xffff;
        *puVar11 = uVar14;
        puVar11[1] = uVar13;
        *(undefined4 *)((long)puVar11 + 10) = 0xffff0000;
        uVar3 = *(int *)(param_1 + 0xe0) >> 5;
        pvVar2 = (void *)(*(long *)(param_1 + 0xd0) + (long)(int)((uVar3 + 1) * iVar15) * 4);
        if (uVar3 != 0xffffffff) {
          memset(pvVar2,0,(-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2) + 4);
        }
        *(int *)((long)pvVar2 + (param_3 >> 5 & 0x7ffffff) * 4) = iVar17;
        if (bVar22) {
          *(short *)(*(long *)(param_1 + 0x100) + (uVar20 & 0xffff) * 0x20 + 0xc) = (short)uVar8;
        }
        else {
          iVar21 = *(int *)(param_1 + 0x98);
          lVar12 = (long)iVar21;
          if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) <= iVar21) {
            FUN_03165928(param_1 + 0x90,PTR_PTR_047d1a50,lVar12 + 1);
            iVar21 = *(int *)(param_1 + 0x98);
          }
          *(int *)(param_1 + 0x98) = (int)(lVar12 + 1);
          puVar11 = (uint *)(*(long *)(param_1 + 0x90) + (long)iVar21 * 0x10);
          *puVar11 = uVar14 << 2 | 1;
          *(short *)(puVar11 + 1) = (short)uVar8;
          *(short *)((long)puVar11 + 6) = (short)uVar20;
        }
      }
      uVar18 = uVar18 + 1;
      uVar20 = uVar19;
      uVar14 = uVar13;
      bVar22 = bVar1;
    } while (uVar10 != uVar18);
  }
  if (uVar5 < uVar4) {
    if (bVar1) {
      *(short *)(*(long *)(param_1 + 0x100) + (uVar19 & 0xffff) * 0x20 + 0xc) = (short)uVar7;
    }
    else {
      iVar17 = *(int *)(param_1 + 0x98);
      lVar12 = (long)iVar17;
      if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) <= iVar17) {
        FUN_03165928(param_1 + 0x90,PTR_PTR_047d1a50,lVar12 + 1);
        iVar17 = *(int *)(param_1 + 0x98);
      }
      *(int *)(param_1 + 0x98) = (int)(lVar12 + 1);
      puVar11 = (uint *)(*(long *)(param_1 + 0x90) + (long)iVar17 * 0x10);
      *puVar11 = uVar13 << 2 | 1;
      *(short *)(puVar11 + 1) = (short)uVar7;
      *(short *)((long)puVar11 + 6) = (short)uVar19;
    }
  }
  else if (!bVar1) {
    *(short *)(*(long *)(param_1 + 0x100) + (ulong)(uVar7 & 0xffff) * 0x20 + 0xc) = (short)uVar19;
  }
  return;
}


