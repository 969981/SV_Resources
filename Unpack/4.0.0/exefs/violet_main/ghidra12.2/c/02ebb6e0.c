/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ebb6e0; name: FUN_02ebb6e0
 */


void FUN_02ebb6e0(long *param_1,int param_2,int param_3,long *param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *__src;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  void *__dest;
  uint uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  float fVar17;
  ulong local_68;
  
  uVar13 = (ulong)*(uint *)(param_1 + 1);
  if (0 < (int)*(uint *)(param_1 + 1)) {
    lVar8 = 0;
    if (*param_1 != 0) {
      lVar8 = *param_1 + (long)param_1;
    }
    plVar9 = (long *)(lVar8 + uVar13 * 0x18);
    do {
      plVar6 = plVar9 + -3;
      if (*(int *)((long)plVar9 + -0xc) < 0) {
        lVar8 = 0;
        if (*plVar6 != 0) {
          lVar8 = *plVar6 + (long)plVar6;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar8,0);
      }
      uVar5 = (int)uVar13 - 1;
      uVar13 = (ulong)uVar5;
      plVar9 = plVar6;
    } while (uVar5 != 0);
  }
  if (param_2 < 0) {
    param_2 = param_2 + 1;
  }
  param_2 = param_2 >> 1;
  if (param_3 < 0) {
    param_3 = param_3 + 1;
  }
  param_3 = param_3 >> 1;
  iVar1 = param_2;
  if (param_2 <= param_3) {
    iVar1 = param_3;
  }
  uVar5 = 0x21 - (int)LZCOUNT(iVar1 + -1);
  if (iVar1 + -1 == 0) {
    uVar5 = 1;
  }
  uVar7 = *(uint *)((long)param_1 + 0xc);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((uVar7 & 0x7fffffff) < uVar5) {
    local_68 = (ulong)(uVar5 * 0x18);
    plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    plVar9 = (long *)0x0;
    if (*param_1 != 0) {
      plVar9 = (long *)(*param_1 + (long)param_1);
    }
    uVar13 = (ulong)*(uint *)(param_1 + 1);
    if (0 < (int)*(uint *)(param_1 + 1)) {
      plVar12 = plVar6;
      do {
        lVar8 = 0;
        if (*plVar9 != 0) {
          lVar8 = *plVar9 + (long)plVar9;
        }
        lVar11 = 0;
        if (lVar8 != 0) {
          lVar11 = lVar8 - (long)plVar12;
        }
        uVar13 = uVar13 - 1;
        *plVar12 = lVar11;
        *(int *)(plVar12 + 1) = (int)plVar9[1];
        *(undefined4 *)((long)plVar12 + 0xc) = *(undefined4 *)((long)plVar9 + 0xc);
        *plVar9 = 0;
        plVar9[1] = 0;
        *(int *)(plVar12 + 2) = (int)plVar9[2];
        plVar12 = plVar12 + 3;
        plVar9 = plVar9 + 3;
      } while (uVar13 != 0);
    }
    if (*(int *)((long)param_1 + 0xc) < 0) {
      lVar8 = 0;
      if (*param_1 != 0) {
        lVar8 = *param_1 + (long)param_1;
      }
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar8,0);
    }
    lVar8 = 0;
    if (plVar6 != (long *)0x0) {
      lVar8 = (long)plVar6 - (long)param_1;
    }
    *param_1 = lVar8;
    uVar7 = uVar5 | 0x80000000;
    *(uint *)((long)param_1 + 0xc) = uVar7;
  }
  uVar15 = 0;
  do {
    uVar4 = *(uint *)(param_1 + 1);
    if (uVar7 == 0) {
      *(uint *)((long)param_1 + 0xc) = uVar4;
      uVar7 = uVar4;
    }
    if ((int)uVar4 < (int)(uVar7 & 0x7fffffff)) {
      lVar8 = *param_1;
    }
    else {
      uVar7 = uVar4 | (int)uVar4 >> 0x10;
      uVar7 = uVar7 | (int)uVar7 >> 8;
      uVar7 = uVar7 | (int)uVar7 >> 4;
      uVar7 = uVar7 | (int)uVar7 >> 2;
      uVar7 = uVar7 | (int)uVar7 >> 1;
      if ((int)uVar7 < (int)uVar4) goto LAB_02ebbbc0;
      uVar7 = uVar7 + 1;
      local_68 = (long)(int)uVar7 * 0x18;
      plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
      plVar9 = (long *)0x0;
      if (*param_1 != 0) {
        plVar9 = (long *)(*param_1 + (long)param_1);
      }
      uVar13 = (ulong)*(uint *)(param_1 + 1);
      if (0 < (int)*(uint *)(param_1 + 1)) {
        plVar12 = plVar6;
        do {
          lVar8 = 0;
          if (*plVar9 != 0) {
            lVar8 = *plVar9 + (long)plVar9;
          }
          lVar11 = 0;
          if (lVar8 != 0) {
            lVar11 = lVar8 - (long)plVar12;
          }
          uVar13 = uVar13 - 1;
          *plVar12 = lVar11;
          *(int *)(plVar12 + 1) = (int)plVar9[1];
          *(undefined4 *)((long)plVar12 + 0xc) = *(undefined4 *)((long)plVar9 + 0xc);
          *plVar9 = 0;
          plVar9[1] = 0;
          *(int *)(plVar12 + 2) = (int)plVar9[2];
          plVar12 = plVar12 + 3;
          plVar9 = plVar9 + 3;
        } while (uVar13 != 0);
      }
      if (*(int *)((long)param_1 + 0xc) < 0) {
        lVar8 = 0;
        if (*param_1 != 0) {
          lVar8 = *param_1 + (long)param_1;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar8,0);
      }
      lVar8 = 0;
      if (plVar6 != (long *)0x0) {
        lVar8 = (long)plVar6 - (long)param_1;
      }
      *(uint *)((long)param_1 + 0xc) = uVar7 | 0x80000000;
      *param_1 = lVar8;
    }
    lVar11 = (long)(int)uVar4;
    puVar2 = (undefined8 *)((long)param_1 + lVar11 * 0x18 + lVar8);
    *(uint *)(param_1 + 1) = uVar4 + 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    lVar8 = *param_1;
    plVar9 = (long *)((long)param_1 + lVar11 * 0x18 + lVar8);
    *(short *)(plVar9 + 2) = (short)param_2;
    *(short *)((long)plVar9 + 0x12) = (short)param_3;
    puVar14 = (uint *)(plVar9 + 1);
    uVar7 = *puVar14;
    if (uVar7 != param_2 * param_3 * 4) {
      uVar4 = param_2 * param_3 * 4;
      puVar16 = (uint *)((long)param_1 + lVar11 * 0x18 + lVar8 + 0xc);
      uVar10 = *puVar16;
      if (*puVar16 == 0) {
        *puVar16 = uVar7;
        uVar10 = uVar7;
      }
      if ((int)uVar7 < (int)uVar4) {
        uVar3 = uVar10 & 0x7fffffff;
        if ((int)(uVar10 & 0x7fffffff) <= (int)uVar7) {
          uVar3 = uVar7;
        }
        if ((int)uVar3 < (int)uVar4) {
          uVar7 = uVar4 - 1 | (int)(uVar4 - 1) >> 0x10;
          uVar7 = uVar7 | (int)uVar7 >> 8;
          uVar7 = uVar7 | (int)uVar7 >> 4;
          uVar7 = uVar7 | (int)uVar7 >> 2;
          uVar7 = (uVar7 | (int)uVar7 >> 1) + 1;
          if ((int)uVar7 < (int)uVar4) {
LAB_02ebbbc0:
                    /* WARNING: Subroutine does not return */
            FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                         "Capacity reservation overflow");
          }
          local_68 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
          __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
          __src = (void *)0x0;
          if (*plVar9 != 0) {
            __src = (void *)(*plVar9 + (long)plVar9);
          }
          memcpy(__dest,__src,(long)(int)*puVar14 << 2);
          if ((int)*puVar16 < 0) {
            lVar8 = 0;
            if (*plVar9 != 0) {
              lVar8 = *plVar9 + (long)plVar9;
            }
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar8,0);
          }
          lVar8 = 0;
          if (__dest != (void *)0x0) {
            lVar8 = (long)__dest - (long)plVar9;
          }
          *plVar9 = lVar8;
          *puVar16 = uVar7 | 0x80000000;
        }
      }
      *puVar14 = uVar4;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == uVar5) {
      lVar8 = *param_4;
      param_1[3] = lVar8;
      param_1[2] = lVar8;
      fVar17 = ((float)*param_5 - (float)*param_4) * 1.5259022e-05;
      *(float *)(param_1 + 4) = fVar17;
      fVar17 = 1.0 / fVar17;
      if ((float)*param_5 <= (float)*param_4) {
        fVar17 = 0.0;
      }
      *(float *)((long)param_1 + 0x24) = fVar17;
      return;
    }
    iVar1 = param_3 + 2;
    if (-1 < param_3 + 1) {
      iVar1 = param_3 + 1;
    }
    param_3 = iVar1 >> 1;
    iVar1 = param_2 + 2;
    if (-1 < param_2 + 1) {
      iVar1 = param_2 + 1;
    }
    param_2 = iVar1 >> 1;
    uVar7 = *(uint *)((long)param_1 + 0xc);
  } while( true );
}


