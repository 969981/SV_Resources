/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0221734c; name: FUN_0221734c
 */


void FUN_0221734c(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6)

{
  char *__s;
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  size_t sVar5;
  void *pvVar6;
  int iVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  ulong *puVar15;
  
  plVar13 = (long *)PTR_PTR_047d1a50;
  uVar12 = (ulong)param_5;
  if ((int)param_5 < 1) {
    pvVar4 = (void *)0x0;
    uVar11 = 0;
    uVar14 = 0x80000000;
    if (param_5 != 0) {
      pvVar8 = (void *)(-(ulong)(param_5 >> 0x1f) & 0xffffffc000000000 | uVar12 << 6);
      uVar11 = 0;
      uVar14 = 0x80000000;
      goto LAB_022173bc;
    }
  }
  else {
    pvVar4 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar12 << 6);
    pvVar8 = (void *)((long)pvVar4 + uVar12 * 0x40);
    uVar11 = param_5;
    uVar14 = param_5;
LAB_022173bc:
    uVar9 = (long)pvVar8 + (-0x40 - (long)pvVar4);
    uVar3 = ((uint)(uVar9 >> 6) & 0x3ffffff) + 1;
    pvVar6 = pvVar4;
    if ((uVar3 & 7) != 0) {
      lVar10 = -((ulong)uVar3 & 7);
      do {
        *(undefined8 *)((long)pvVar6 + 0x38) = 0;
        pvVar6 = (void *)((long)pvVar6 + 0x40);
        bVar2 = lVar10 != -1;
        lVar10 = lVar10 + 1;
      } while (bVar2);
    }
    if (0x1bf < uVar9) {
      do {
        *(undefined8 *)((long)pvVar6 + 0x38) = 0;
        *(undefined8 *)((long)pvVar6 + 0x78) = 0;
        *(undefined8 *)((long)pvVar6 + 0xb8) = 0;
        *(undefined8 *)((long)pvVar6 + 0xf8) = 0;
        *(undefined8 *)((long)pvVar6 + 0x138) = 0;
        *(undefined8 *)((long)pvVar6 + 0x178) = 0;
        *(undefined8 *)((long)pvVar6 + 0x1b8) = 0;
        *(undefined8 *)((long)pvVar6 + 0x1f8) = 0;
        pvVar6 = (void *)((long)pvVar6 + 0x200);
      } while (pvVar8 != pvVar6);
    }
  }
  uVar3 = FUN_0221573c(param_2,param_3,param_4,pvVar4,uVar12,param_6);
  if (uVar3 == 0) {
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    *(undefined4 *)(param_1 + 2) = 0;
    goto LAB_02217474;
  }
  if (uVar3 <= param_5) {
    param_5 = uVar3;
  }
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((int)param_5 < 1) {
    if (param_5 != 0) {
      lVar10 = 0;
      goto LAB_02217574;
    }
  }
  else {
    FUN_0147ca38(param_1,param_5);
    lVar10 = (long)(int)param_1[1];
LAB_02217574:
    uVar12 = (ulong)param_5;
    pvVar8 = pvVar4;
    do {
      iVar7 = (int)lVar10;
      if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= lVar10) {
        FUN_0147ca38(param_1,lVar10 + 1);
        iVar7 = (int)param_1[1];
      }
      pvVar6 = (void *)(*param_1 + (long)iVar7 * 0x40);
      memcpy(pvVar6,pvVar8,0x34);
      puVar15 = (ulong *)((long)pvVar6 + 0x38);
      *puVar15 = 0;
      __s = (char *)(*(ulong *)((long)pvVar8 + 0x38) & 0xfffffffffffffffe);
      if (__s != (char *)0x0) {
        sVar5 = strlen(__s);
        sVar5 = (size_t)((int)sVar5 + 1);
        pvVar6 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar5);
        memcpy(pvVar6,__s,sVar5);
        *puVar15 = (ulong)pvVar6 | 1;
      }
      uVar12 = uVar12 - 1;
      pvVar8 = (void *)((long)pvVar8 + 0x40);
      *(int *)(param_1 + 1) = (int)lVar10 + 1;
      lVar10 = lVar10 + 1;
    } while (uVar12 != 0);
  }
  *(uint *)(param_1 + 2) = uVar3;
  plVar13 = (long *)PTR_PTR_047d1a50;
LAB_02217474:
  if (uVar11 != 0) {
    lVar10 = (long)(int)uVar11;
    uVar12 = *(ulong *)((long)pvVar4 + lVar10 * 0x40 + -8);
    if ((uVar12 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar12 - 1,0);
    }
    if ((void *)((long)pvVar4 + lVar10 * 0x40 + -0x40) != pvVar4) {
      uVar12 = *(ulong *)((long)pvVar4 + lVar10 * 0x40 + -0x48);
      if ((uVar12 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar12 - 1,0);
      }
      if ((void *)((long)pvVar4 + lVar10 * 0x40 + -0x80) != pvVar4) {
        uVar12 = *(ulong *)((long)pvVar4 + lVar10 * 0x40 + -0x88);
        if ((uVar12 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar12 - 1,0);
        }
        if ((void *)((long)pvVar4 + lVar10 * 0x40 + -0xc0) != pvVar4) {
          uVar12 = *(ulong *)((long)pvVar4 + lVar10 * 0x40 + -200);
          if ((uVar12 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar12 - 1,0);
          }
          puVar1 = PTR_DAT_047d1a08;
          if ((void *)((long)pvVar4 + lVar10 * 0x40 + -0x100) != pvVar4) {
            lVar10 = lVar10 << 6;
            do {
              uVar12 = *(ulong *)((long)pvVar4 + lVar10 + -0x108);
              if ((uVar12 & 1) != 0) {
                (**(code **)(puVar1 + 8))(0,uVar12 - 1,0);
              }
              lVar10 = lVar10 + -0x40;
            } while (lVar10 != 0x100);
          }
        }
      }
    }
  }
  if (((int)uVar14 < 0) || (pvVar4 == (void *)0x0)) {
    return;
  }
  (**(code **)(*plVar13 + 0x20))(plVar13,pvVar4,(ulong)uVar14 << 6);
  return;
}


