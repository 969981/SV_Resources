/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e5e30; name: FUN_030e5e30
 */


void FUN_030e5e30(long param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  int *piVar21;
  int local_88 [2];
  int local_80 [2];
  int local_78 [2];
  long local_70;
  undefined8 local_68;
  
  plVar2 = (long *)(param_1 + 0x50);
  if (*param_2 == *param_4) {
    local_70 = 0;
    local_68 = -0x8000000000000000;
    iVar6 = FUN_030e62e8(plVar2,param_2,&local_70);
    lVar17 = local_68;
    uVar10 = (ulong)local_68._4_4_;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < lVar17) && (local_70 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_70,uVar10 << 3);
    }
    lVar17 = *plVar2 + (long)iVar6 * 0x18;
    plVar18 = (long *)(lVar17 + 8);
    piVar15 = (int *)(lVar17 + 0x10);
    iVar9 = *piVar15;
    if (iVar9 != 0) {
      lVar17 = (long)iVar9 << 3;
      piVar21 = (int *)*plVar18;
      do {
        if (*piVar21 != -2) {
          bVar4 = false;
          goto LAB_030e60a4;
        }
        lVar17 = lVar17 + -8;
        piVar21 = piVar21 + 2;
      } while (lVar17 != 0);
    }
    bVar4 = true;
LAB_030e60a4:
    iVar3 = param_3;
    if (param_3 <= param_5) {
      iVar3 = param_5;
    }
    if (iVar9 <= iVar3) {
      iVar1 = iVar3 + 1;
      if ((int)(*(uint *)(*plVar2 + (long)iVar6 * 0x18 + 0x14) & 0x7fffffff) <= iVar3) {
        FUN_030e93a4(plVar18,PTR_PTR_047d1a50,(long)iVar1);
        iVar9 = *piVar15;
      }
      if ((iVar9 <= iVar3) || (iVar1 < iVar9)) {
        *piVar15 = iVar1;
      }
    }
    piVar15 = (int *)(*plVar18 + (long)param_3 * 8);
    *piVar15 = *param_2;
    piVar15[1] = param_5;
    piVar15 = (int *)(*plVar18 + (long)param_5 * 8);
    *piVar15 = *param_2;
    piVar15[1] = param_3;
    if (!bVar4) {
      return;
    }
    local_78[0] = *param_2;
    piVar15 = local_78;
  }
  else {
    lVar17 = FUN_030e94b4(plVar2,param_2);
    if (lVar17 == 0) {
      uVar11 = 0;
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(uint *)(lVar17 + 4);
      uVar11 = ((int)lVar17 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000;
    }
    if ((int)(uVar7 | uVar11) < 0) {
      local_70 = 0;
      local_68 = -0x8000000000000000;
      FUN_030e67ec(plVar2,param_2,&local_70);
      lVar17 = local_68;
      uVar10 = (ulong)local_68._4_4_;
      local_68 = (ulong)local_68._4_4_ << 0x20;
      if ((-1 < lVar17) && (local_70 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_70,uVar10 << 3);
      }
    }
    lVar17 = FUN_030e94b4(plVar2,param_4);
    if (lVar17 == 0) {
      uVar11 = 0;
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(uint *)(lVar17 + 4);
      uVar11 = ((int)lVar17 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000;
    }
    if ((int)(uVar7 | uVar11) < 0) {
      local_70 = 0;
      local_68 = -0x8000000000000000;
      FUN_030e67ec(plVar2,param_4,&local_70);
      lVar17 = local_68;
      uVar10 = (ulong)local_68._4_4_;
      local_68 = (ulong)local_68._4_4_ << 0x20;
      if ((-1 < lVar17) && (local_70 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_70,uVar10 << 3);
      }
    }
    lVar17 = FUN_030e94b4(plVar2,param_2);
    if (lVar17 == 0) {
      uVar11 = 0;
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(uint *)(lVar17 + 4);
      uVar11 = ((int)lVar17 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000;
    }
    lVar17 = FUN_030e94b4(plVar2,param_4);
    if (lVar17 == 0) {
      uVar12 = 0;
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = *(uint *)(lVar17 + 4);
      uVar12 = ((int)lVar17 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000;
    }
    lVar20 = *plVar2;
    lVar17 = lVar20 + (long)(int)(uVar7 | uVar11) * 0x18;
    uVar8 = uVar8 | uVar12;
    puVar19 = (undefined8 *)(lVar17 + 8);
    piVar15 = (int *)*puVar19;
    plVar2 = (long *)(lVar20 + (long)(int)uVar8 * 0x18 + 8);
    piVar21 = (int *)(lVar17 + 0x10);
    iVar6 = *piVar21;
    lVar17 = (long)iVar6;
    if (iVar6 != 0) {
      lVar13 = lVar17 << 3;
      piVar16 = piVar15;
      do {
        if (*piVar16 != -2) {
          bVar4 = false;
          goto LAB_030e613c;
        }
        lVar13 = lVar13 + -8;
        piVar16 = piVar16 + 2;
      } while (lVar13 != 0);
    }
    bVar4 = true;
LAB_030e613c:
    piVar16 = (int *)(lVar20 + (long)(int)uVar8 * 0x18 + 0x10);
    if (*piVar16 != 0) {
      lVar13 = (long)*piVar16 << 3;
      piVar14 = (int *)*plVar2;
      do {
        if (*piVar14 != -2) {
          bVar5 = false;
          goto LAB_030e6174;
        }
        lVar13 = lVar13 + -8;
        piVar14 = piVar14 + 2;
      } while (lVar13 != 0);
    }
    bVar5 = true;
LAB_030e6174:
    if (param_3 < iVar6) {
      piVar15 = piVar15 + (long)param_3 * 2;
    }
    else {
      if ((int)(*(uint *)(lVar20 + (long)(int)(uVar7 | uVar11) * 0x18 + 0x14) & 0x7fffffff) <= iVar6
         ) {
        FUN_030e93a4(puVar19,PTR_PTR_047d1a50,(long)(iVar6 + 1));
        lVar17 = (long)*piVar21;
        piVar15 = (int *)*puVar19;
      }
      piVar15 = piVar15 + lVar17 * 2;
      *piVar21 = iVar6 + 1;
    }
    *piVar15 = *param_4;
    piVar15[1] = param_5;
    iVar6 = *piVar16;
    if (param_5 < iVar6) {
      piVar15 = (int *)(*plVar2 + (long)param_5 * 8);
    }
    else {
      lVar17 = (long)iVar6;
      if ((int)(*(uint *)(lVar20 + (long)(int)uVar8 * 0x18 + 0x14) & 0x7fffffff) <= iVar6) {
        FUN_030e93a4(plVar2,PTR_PTR_047d1a50,lVar17 + 1);
        iVar6 = *piVar16;
      }
      lVar20 = *plVar2;
      *piVar16 = (int)(lVar17 + 1);
      piVar15 = (int *)(lVar20 + (long)iVar6 * 8);
    }
    *piVar15 = *param_2;
    piVar15[1] = param_3;
    if (bVar4) {
      local_80[0] = *param_2;
      FUN_030e643c(param_1,local_80);
    }
    if (!bVar5) {
      return;
    }
    local_88[0] = *param_4;
    piVar15 = local_88;
  }
  FUN_030e643c(param_1,piVar15);
  return;
}


