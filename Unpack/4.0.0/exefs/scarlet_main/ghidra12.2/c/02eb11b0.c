/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eb11b0; name: FUN_02eb11b0
 */


void FUN_02eb11b0(long *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  void *__src;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  void *__dest;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  ulong local_58;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)(param_1 + 2);
  *(uint *)(param_1 + 2) = param_3;
  uVar1 = (int)(param_3 + 0x1f) >> 5;
  if (uVar4 != uVar1) {
    uVar10 = *(uint *)((long)param_1 + 0xc);
    if (*(uint *)((long)param_1 + 0xc) == 0) {
      *(uint *)((long)param_1 + 0xc) = uVar4;
      uVar10 = uVar4;
    }
    puVar9 = PTR_DAT_047d1a08;
    if ((int)uVar4 < (int)uVar1) {
      uVar6 = uVar10 & 0x7fffffff;
      if ((int)(uVar10 & 0x7fffffff) <= (int)uVar4) {
        uVar6 = uVar4;
      }
      if ((int)uVar6 < (int)uVar1) {
        uVar4 = uVar1 - 1 | (int)(uVar1 - 1) >> 0x10;
        uVar4 = uVar4 | (int)uVar4 >> 8;
        uVar4 = uVar4 | (int)uVar4 >> 4;
        uVar4 = uVar4 | (int)uVar4 >> 2;
        uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
        if ((int)uVar4 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow");
        }
        local_58 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
        __src = (void *)0x0;
        if (*param_1 != 0) {
          __src = (void *)(*param_1 + (long)param_1);
        }
        memcpy(__dest,__src,(long)(int)param_1[1] << 2);
        if (*(int *)((long)param_1 + 0xc) < 0) {
          lVar3 = 0;
          if (*param_1 != 0) {
            lVar3 = *param_1 + (long)param_1;
          }
          (**(code **)(puVar9 + 8))(0,lVar3,0);
        }
        param_3 = *(uint *)(param_1 + 2);
        lVar3 = 0;
        if (__dest != (void *)0x0) {
          lVar3 = (long)__dest - (long)param_1;
        }
        *param_1 = lVar3;
        *(uint *)((long)param_1 + 0xc) = uVar4 | 0x80000000;
      }
    }
    *(uint *)(param_1 + 1) = uVar1;
  }
  param_3 = param_3 & (int)param_3 >> 0x1f;
  if ((int)param_2 < (int)param_3) {
    uVar4 = (int)param_3 >> 5;
    uVar6 = -1 << (ulong)(param_3 & 0x1f);
    uVar7 = ~uVar6;
    uVar10 = (int)param_2 >> 5;
    uVar1 = -1 << (ulong)(param_2 & 0x1f);
    uVar8 = -param_4;
    lVar3 = 0;
    if (*param_1 != 0) {
      lVar3 = *param_1 + (long)param_1;
    }
    if (uVar4 == uVar10) {
      uVar1 = uVar1 & uVar7;
      if (uVar1 != 0) {
        *(uint *)(lVar3 + (long)(int)uVar10 * 4) =
             *(uint *)(lVar3 + (long)(int)uVar10 * 4) & (uVar1 ^ 0xffffffff) | uVar1 & uVar8;
      }
    }
    else {
      *(uint *)(lVar3 + (long)(int)uVar10 * 4) =
           *(uint *)(lVar3 + (long)(int)uVar10 * 4) & (uVar1 ^ 0xffffffff) | uVar1 & uVar8;
      if ((param_3 & 0x1f) != 0) {
        *(uint *)(lVar3 + (long)(int)uVar4 * 4) =
             *(uint *)(lVar3 + (long)(int)uVar4 * 4) & uVar6 | uVar7 & uVar8;
      }
      uVar17 = (long)(int)uVar4 + (long)(int)~uVar10;
      puVar16 = (uint *)(lVar3 + (long)(int)uVar10 * 4 + 4);
      puVar12 = puVar16;
      if (((ulong)puVar16 & 0xf) == 0) {
        uVar11 = uVar17;
      }
      else {
        uVar11 = 4 - (((ulong)puVar16 & 0xf) >> 2);
        uVar13 = uVar17;
        if (uVar11 <= uVar17) {
          uVar13 = uVar11;
        }
        uVar11 = uVar17 - uVar13;
        if ((long)uVar13 < 1) {
        }
        else {
          puVar14 = puVar16;
          do {
            puVar12 = puVar14 + 1;
            *puVar14 = uVar8;
            puVar14 = puVar12;
          } while (puVar12 < puVar16 + uVar13);
        }
      }
      if ((3 < uVar11) && (0 < (long)(uVar11 & 0xfffffffffffffffc))) {
        puVar14 = puVar12 + (uVar11 & 0xfffffffffffffffc);
        puVar15 = puVar12;
        do {
          puVar12 = puVar15 + 4;
          *(ulong *)(puVar15 + 2) = CONCAT44(uVar8,uVar8);
          *(ulong *)puVar15 = CONCAT44(uVar8,uVar8);
          puVar15 = puVar12;
        } while (puVar12 < puVar14);
      }
      for (; puVar12 < puVar16 + uVar17; puVar12 = puVar12 + 1) {
        *puVar12 = uVar8;
      }
    }
  }
  if ((int)uVar5 <= (int)param_2) {
    uVar5 = param_2;
  }
  uVar1 = (int)param_1[2] + 0x1f;
  if ((int)(uVar1 & 0xffffffe0) <= (int)uVar5) {
    return;
  }
  uVar1 = (int)uVar1 >> 5;
  lVar3 = 0;
  if (*param_1 != 0) {
    lVar3 = *param_1 + (long)param_1;
  }
  uVar4 = (int)uVar5 >> 5;
  if (uVar1 == uVar4) {
    return;
  }
  puVar16 = (uint *)(lVar3 + (long)(int)uVar4 * 4);
  uVar5 = -1 << (ulong)(uVar5 & 0x1f);
  uVar10 = -param_4;
  puVar12 = puVar16 + 1;
  *puVar16 = *puVar16 & (uVar5 ^ 0xffffffff) | uVar5 & uVar10;
  iVar2 = uVar1 + ~uVar4;
  uVar17 = (ulong)iVar2;
  if (((ulong)puVar12 & 0xf) != 0) {
    uVar13 = 4 - (((ulong)puVar12 & 0xf) >> 2);
    uVar11 = uVar17;
    if (uVar13 <= uVar17) {
      uVar11 = uVar13;
    }
    uVar17 = uVar17 - uVar11;
    if (0 < (long)uVar11) {
      puVar14 = puVar12;
      do {
        puVar16 = puVar14 + 1;
        *puVar14 = uVar10;
        puVar14 = puVar16;
      } while (puVar16 < puVar12 + uVar11);
      goto LAB_02eb14ac;
    }
  }
  puVar16 = puVar12;
LAB_02eb14ac:
  if ((3 < uVar17) && (0 < (long)(uVar17 & 0xfffffffffffffffc))) {
    puVar14 = puVar16 + (uVar17 & 0xfffffffffffffffc);
    puVar15 = puVar16;
    do {
      puVar16 = puVar15 + 4;
      *(ulong *)(puVar15 + 2) = CONCAT44(uVar10,uVar10);
      *(ulong *)puVar15 = CONCAT44(uVar10,uVar10);
      puVar15 = puVar16;
    } while (puVar16 < puVar14);
  }
  for (; puVar16 < puVar12 + iVar2; puVar16 = puVar16 + 1) {
    *puVar16 = uVar10;
  }
  return;
}


