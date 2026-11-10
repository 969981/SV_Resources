/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030efb44; name: FUN_030efb44
 */


bool FUN_030efb44(undefined8 param_1,long param_2,undefined8 param_3,short *param_4,int *param_5)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  int iVar22;
  int local_9c;
  int *local_98;
  undefined8 local_90;
  long local_88;
  int *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar8 = *(long *)(param_2 + 0x20);
    lVar21 = lVar8;
  }
  else {
    lVar8 = FUN_0307d71c();
    lVar21 = *(long *)(param_2 + 0x20);
  }
  iVar14 = *(int *)(lVar21 + 0x30);
  iVar22 = *(int *)(lVar21 + 0x20);
  iVar7 = *param_5;
  lVar19 = *(long *)(lVar8 + 0xd0);
  local_98 = (int *)0x0;
  local_90 = 0x8000000000000000;
  lVar21 = tpidr_el0;
  lVar9 = *(long *)(lVar21 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar21 + 0x1000b8) = lVar9;
  }
  local_88 = *(long *)(*(long *)(lVar9 + 0x3d0) + 0x10);
  if (*(long *)(local_88 + 8) == 0) {
    local_78 = 0x20;
    local_70 = 0x20;
    if (local_88 == 0) goto LAB_030efc70;
    local_68 = 0x40;
    if (*(ulong *)(local_88 + 0x28) < 0x40) {
LAB_030efc24:
      piVar6 = (int *)FUN_031cf3b4(local_88,&local_68);
    }
    else {
      piVar6 = *(int **)(local_88 + 0x38);
      if (*(int **)(local_88 + 0x40) < piVar6 + 0x10) goto LAB_030efc24;
      *(int **)(local_88 + 0x38) = piVar6 + 0x10;
    }
  }
  else {
    local_88 = 0;
LAB_030efc70:
    local_70 = 0x20;
    local_78 = 0x20;
    piVar6 = (int *)(**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
  }
  piVar1 = (int *)(lVar19 + (long)iVar7 * 0x10);
  local_98 = piVar6;
  local_80 = piVar6;
  local_90 = CONCAT44(0x80000008,(uint)local_90);
  piVar20 = piVar1 + 2;
  iVar14 = *piVar1 - iVar14;
  iVar7 = iVar14 + (short)*piVar20;
  local_9c = iVar7;
  if ((short)*piVar20 < 1) {
LAB_030eff04:
    bVar5 = false;
  }
  else {
    lVar9 = (long)iVar14;
    lVar21 = (long)iVar14 * 0x14 + 0xc;
    do {
      if ((*(short *)(*(long *)(lVar8 + 0x110) + lVar9 * 2) == *param_4) &&
         (*(int *)(*(long *)(*(long *)(param_2 + 0x20) + 0xe0) + lVar21) == -1)) {
        if ((local_90 & 1) == 0) {
LAB_030efd3c:
          uVar16 = (long)(int)(uint)local_90 + 1;
          if ((int)(local_90._4_4_ & 0x7fffffff) <= (int)(uint)local_90) {
            FUN_030f07e0(&local_98,uVar16);
            piVar6 = local_98;
          }
          piVar6[(int)(uint)local_90] = (int)lVar9;
          goto LAB_030efd6c;
        }
LAB_030efd74:
        uVar15 = (uint)local_90;
      }
      else {
        if ((int)(uint)local_90 % 2 != 1) goto LAB_030efd74;
        uVar16 = (ulong)((uint)local_90 - 1);
        if ((int)lVar9 != piVar6[(int)((uint)local_90 - 1)] + 1) goto LAB_030efd3c;
LAB_030efd6c:
        local_90 = CONCAT44(local_90._4_4_,(uint)uVar16);
        uVar15 = (uint)uVar16;
      }
      lVar9 = lVar9 + 1;
      lVar21 = lVar21 + 0x14;
    } while (lVar9 < iVar7);
    if ((int)uVar15 % 2 == 1) {
      uVar16 = (long)(int)uVar15 - 1;
      if (iVar7 != local_98[uVar16] + 1) {
        uVar16 = (ulong)(uVar15 + 1);
        if ((int)(local_90._4_4_ & 0x7fffffff) <= (int)uVar15) {
          FUN_030f07e0(&local_98,(long)(int)(uVar15 + 1));
          uVar15 = (uint)local_90;
        }
        local_98[(int)uVar15] = iVar7;
      }
      uVar15 = (uint)uVar16;
      local_90 = CONCAT44(local_90._4_4_,uVar15);
    }
    if (uVar15 == 0) goto LAB_030eff04;
    if (*(int *)(param_2 + 0x40) != 0) {
      lVar21 = (long)*(int *)(param_2 + 0x40) * 0x18;
      plVar17 = *(long **)(param_2 + 0x38);
      iVar14 = *param_5;
      do {
        lVar9 = *plVar17;
        if (lVar9 != 0) {
          if ((char)plVar17[2] != '\x01') {
            lVar9 = FUN_03065a74(plVar17);
          }
          local_68 = CONCAT44(local_68._4_4_,iVar14 + iVar22);
          FUN_03077488(lVar9,param_2,&local_68);
        }
        plVar17 = plVar17 + 3;
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != 0);
    }
    piVar6 = local_98;
    if ((int)uVar15 < 1) {
      iVar14 = 0;
    }
    else {
      uVar11 = (ulong)uVar15 - 1 >> 1;
      uVar16 = uVar11 + 1;
      if (uVar11 == 0) {
        iVar14 = 0;
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        iVar14 = 0;
        lVar9 = -(uVar16 & 0xfffffffffffffffe);
        do {
          puVar2 = (uint *)(local_98 + lVar21);
          lVar21 = lVar21 + 4;
          lVar9 = lVar9 + 2;
          iVar14 = iVar14 + ~*puVar2 + puVar2[1] + ~puVar2[2] + puVar2[3];
        } while (lVar9 != 0);
        if ((uVar16 & 1) == 0) goto LAB_030efef4;
      }
      iVar14 = iVar14 + ~local_98[lVar21] + *(int *)((long)local_98 + (lVar21 << 2 | 4U));
    }
LAB_030efef4:
    iVar22 = (int)(short)*piVar20 - (int)(short)iVar14;
    if (iVar22 < 3) goto LAB_030eff04;
    *(short *)piVar20 = (short)iVar22;
    *(int *)(lVar8 + 0x164) = *(int *)(lVar8 + 0x164) + iVar14;
    if (0 < (int)uVar15) {
      iVar7 = *local_98;
      lVar21 = 0;
      iVar22 = iVar7;
      while( true ) {
        if (iVar22 != iVar7) {
          puVar12 = (undefined4 *)(*(long *)(lVar8 + 0xe0) + (long)iVar7 * 0x14);
          puVar10 = (undefined4 *)(*(long *)(lVar8 + 0xe0) + (long)iVar22 * 0x14);
          *puVar10 = *puVar12;
          puVar10[1] = puVar12[1];
          uVar13 = *(undefined8 *)(puVar12 + 2);
          *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(puVar12 + 4);
          *(undefined8 *)(puVar10 + 2) = uVar13;
          *(undefined2 *)((long)puVar10 + 0x12) = *(undefined2 *)((long)puVar12 + 0x12);
          *(undefined2 *)(*(long *)(lVar8 + 0x110) + (long)iVar22 * 2) =
               *(undefined2 *)(*(long *)(lVar8 + 0x110) + (long)iVar7 * 2);
          iVar3 = *(int *)(lVar8 + 0x60);
          memcpy((void *)(*(long *)(lVar8 + 0x150) + (long)(iVar3 * iVar22) * 4),
                 (void *)(*(long *)(lVar8 + 0x150) + (long)(iVar3 * iVar7) * 4),(long)iVar3 << 2);
          iVar7 = iVar22;
        }
        uVar16 = lVar21 << 2;
        lVar21 = lVar21 + 2;
        uVar16 = uVar16 | 4;
        *(undefined4 *)(*(long *)(lVar8 + 0xe0) + (long)iVar7 * 0x14 + 4) =
             *(undefined4 *)
              (*(long *)(*(long *)(param_2 + 0x20) + 0xe0) +
               (long)*(int *)((long)piVar6 + uVar16) * 0x14 + -0x10);
        iVar7 = *(int *)((long)piVar6 + uVar16);
        piVar1 = piVar6 + lVar21;
        if ((int)uVar15 <= (int)lVar21) {
          piVar1 = &local_9c;
        }
        iVar3 = *piVar1;
        iVar4 = iVar3 - iVar7;
        if (0 < iVar4) {
          iVar18 = iVar22 + 1;
          do {
            local_68 = CONCAT44(local_68._4_4_,iVar18);
            local_70 = CONCAT44(local_70._4_4_,iVar7);
            FUN_030e9e20(param_1,param_2,&local_68,&local_70);
            iVar7 = iVar7 + 1;
            iVar18 = iVar18 + 1;
          } while (iVar3 != iVar7);
        }
        if ((int)uVar15 <= (int)lVar21) break;
        iVar7 = piVar6[lVar21];
        iVar22 = iVar4 + iVar22 + 1;
      }
    }
    bVar5 = iVar14 != 0;
  }
  piVar6 = local_98;
  if (local_80 == local_98) {
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_88 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_030f012c;
  }
  uVar16 = local_78 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_88 + 0x28) < uVar16) ||
     (*(long *)(local_88 + 0x38) != uVar16 + (long)local_80)) {
    if (local_80 == (int *)0x0) goto LAB_030f012c;
    if (*(ulong *)(local_88 + 0x28) < uVar16 + 0x40) {
      *(int *)(*(long *)(local_88 + 0x30) + 0x20) = *(int *)(*(long *)(local_88 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_88 + 0x10) + 0x18))
                (*(long **)(local_88 + 0x10),(long)local_80 - (long)local_80[-1],uVar16 + 0x44);
      goto LAB_030f012c;
    }
    if (*(long *)(local_88 + 0x38) != uVar16 + (long)local_80) {
      FUN_031cf778();
      goto LAB_030f012c;
    }
    *(int **)(local_88 + 0x38) = local_80;
  }
  else {
    *(int **)(local_88 + 0x38) = local_80;
    if (*(int **)(local_88 + 0x48) != local_80) goto LAB_030f012c;
  }
  FUN_031cf578();
LAB_030f012c:
  uVar11 = local_90;
  uVar16 = local_90 >> 0x20;
  local_90 = uVar16 << 0x20;
  if ((piVar6 != (int *)0x0) && (-1 < (long)uVar11)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,piVar6,uVar16 << 2);
  }
  return bVar5;
}


