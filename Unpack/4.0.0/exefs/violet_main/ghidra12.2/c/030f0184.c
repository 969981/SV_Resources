/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f0184; name: FUN_030f0184
 */


bool FUN_030f0184(undefined8 param_1,long param_2,undefined8 param_3,short *param_4,int *param_5)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  short *psVar20;
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
    lVar19 = lVar8;
  }
  else {
    lVar8 = FUN_0307d71c();
    lVar19 = *(long *)(param_2 + 0x20);
  }
  iVar17 = *(int *)(lVar19 + 0x30);
  iVar14 = *(int *)(lVar19 + 0x20);
  lVar19 = *(long *)(lVar8 + 0xd0) + (long)*param_5 * 0x10;
  psVar20 = (short *)(lVar19 + 10);
  if (*psVar20 == 0) {
    return false;
  }
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
    if (local_88 == 0) goto LAB_030f02c8;
    local_68 = 0x40;
    if (*(ulong *)(local_88 + 0x28) < 0x40) {
LAB_030f0274:
      piVar6 = (int *)FUN_031cf3b4(local_88,&local_68);
    }
    else {
      piVar6 = *(int **)(local_88 + 0x38);
      if (*(int **)(local_88 + 0x40) < piVar6 + 0x10) goto LAB_030f0274;
      *(int **)(local_88 + 0x38) = piVar6 + 0x10;
    }
  }
  else {
    local_88 = 0;
LAB_030f02c8:
    local_70 = 0x20;
    local_78 = 0x20;
    piVar6 = (int *)(**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
  }
  local_98 = piVar6;
  local_80 = piVar6;
  local_90 = CONCAT44(0x80000008,(int)local_90);
  iVar17 = *(int *)(lVar19 + 4) - iVar17;
  iVar22 = iVar17 + *psVar20;
  local_9c = iVar22;
  if (*psVar20 < 1) {
LAB_030f0520:
    bVar5 = false;
  }
  else {
    lVar21 = (long)iVar17;
    lVar19 = (long)iVar17 * 0x14 + 0xc;
    do {
      if ((*(short *)(*(long *)(lVar8 + 0x110) + lVar21 * 2) == *param_4) &&
         (*(int *)(*(long *)(*(long *)(param_2 + 0x20) + 0xe0) + lVar19) == -1)) {
        if ((local_90 & 1) != 0) goto LAB_030f03cc;
LAB_030f0394:
        uVar10 = (long)(int)local_90 + 1;
        if ((int)(local_90._4_4_ & 0x7fffffff) <= (int)local_90) {
          FUN_030f07e0(&local_98,uVar10);
          piVar6 = local_98;
        }
        piVar6[(int)local_90] = (int)lVar21;
LAB_030f03c4:
        local_90 = CONCAT44(local_90._4_4_,(int)uVar10);
      }
      else {
        if ((int)local_90 % 2 == 1) {
          uVar10 = (ulong)((int)local_90 - 1U);
          if ((int)lVar21 != piVar6[(int)((int)local_90 - 1U)] + 1) goto LAB_030f0394;
          goto LAB_030f03c4;
        }
LAB_030f03cc:
        uVar10 = local_90 & 0xffffffff;
      }
      iVar17 = (int)uVar10;
      lVar21 = lVar21 + 1;
      lVar19 = lVar19 + 0x14;
    } while (lVar21 < iVar22);
    if (iVar17 % 2 == 1) {
      uVar15 = (long)iVar17 - 1;
      if (iVar22 != local_98[uVar15] + 1) {
        uVar15 = (ulong)(iVar17 + 1U);
        if ((int)(local_90._4_4_ & 0x7fffffff) <= iVar17) {
          FUN_030f07e0(&local_98,(long)(int)(iVar17 + 1U));
          iVar17 = (int)local_90;
        }
        local_98[iVar17] = iVar22;
      }
      uVar10 = uVar15 & 0xffffffff;
      local_90 = CONCAT44(local_90._4_4_,(int)uVar15);
    }
    iVar17 = (int)uVar10;
    if (iVar17 == 0) goto LAB_030f0520;
    if (*(int *)(param_2 + 0x40) != 0) {
      lVar19 = (long)*(int *)(param_2 + 0x40) * 0x18;
      plVar16 = *(long **)(param_2 + 0x38);
      iVar22 = *param_5;
      do {
        lVar21 = *plVar16;
        if (lVar21 != 0) {
          if ((char)plVar16[2] != '\x01') {
            lVar21 = FUN_03065a74(plVar16);
          }
          local_68 = CONCAT44(local_68._4_4_,iVar22 + iVar14);
          FUN_03077488(lVar21,param_2,&local_68);
        }
        plVar16 = plVar16 + 3;
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != 0);
    }
    piVar6 = local_98;
    if (iVar17 < 1) {
      iVar14 = 0;
    }
    else {
      uVar15 = (uVar10 & 0xffffffff) - 1 >> 1;
      uVar10 = uVar15 + 1;
      if (uVar15 == 0) {
        iVar14 = 0;
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        iVar14 = 0;
        lVar21 = -(uVar10 & 0xfffffffffffffffe);
        do {
          puVar1 = (uint *)(local_98 + lVar19);
          lVar19 = lVar19 + 4;
          lVar21 = lVar21 + 2;
          iVar14 = iVar14 + ~*puVar1 + puVar1[1] + ~puVar1[2] + puVar1[3];
        } while (lVar21 != 0);
        if ((uVar10 & 1) == 0) goto LAB_030f0558;
      }
      iVar14 = iVar14 + ~local_98[lVar19] + *(int *)((long)local_98 + (lVar19 << 2 | 4U));
    }
LAB_030f0558:
    *psVar20 = *psVar20 - (short)iVar14;
    *(int *)(lVar8 + 0x164) = *(int *)(lVar8 + 0x164) + iVar14;
    if (0 < iVar17) {
      iVar7 = *local_98;
      lVar19 = 0;
      iVar22 = iVar7;
      while( true ) {
        if (iVar22 != iVar7) {
          puVar12 = (undefined4 *)(*(long *)(lVar8 + 0xe0) + (long)iVar7 * 0x14);
          puVar11 = (undefined4 *)(*(long *)(lVar8 + 0xe0) + (long)iVar22 * 0x14);
          *puVar11 = *puVar12;
          puVar11[1] = puVar12[1];
          uVar13 = *(undefined8 *)(puVar12 + 2);
          *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar12 + 4);
          *(undefined8 *)(puVar11 + 2) = uVar13;
          *(undefined2 *)((long)puVar11 + 0x12) = *(undefined2 *)((long)puVar12 + 0x12);
          *(undefined2 *)(*(long *)(lVar8 + 0x110) + (long)iVar22 * 2) =
               *(undefined2 *)(*(long *)(lVar8 + 0x110) + (long)iVar7 * 2);
          iVar3 = *(int *)(lVar8 + 0x60);
          memcpy((void *)(*(long *)(lVar8 + 0x150) + (long)(iVar3 * iVar22) * 4),
                 (void *)(*(long *)(lVar8 + 0x150) + (long)(iVar3 * iVar7) * 4),(long)iVar3 << 2);
          iVar7 = iVar22;
        }
        uVar10 = lVar19 << 2;
        lVar19 = lVar19 + 2;
        uVar10 = uVar10 | 4;
        *(undefined4 *)(*(long *)(lVar8 + 0xe0) + (long)iVar7 * 0x14 + 4) =
             *(undefined4 *)
              (*(long *)(*(long *)(param_2 + 0x20) + 0xe0) +
               (long)*(int *)((long)piVar6 + uVar10) * 0x14 + -0x10);
        iVar7 = *(int *)((long)piVar6 + uVar10);
        piVar2 = piVar6 + lVar19;
        if (iVar17 <= (int)lVar19) {
          piVar2 = &local_9c;
        }
        iVar3 = *piVar2;
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
        if (iVar17 <= (int)lVar19) break;
        iVar7 = piVar6[lVar19];
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
    goto LAB_030f0788;
  }
  uVar10 = local_78 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_88 + 0x28) < uVar10) ||
     (*(long *)(local_88 + 0x38) != uVar10 + (long)local_80)) {
    if (local_80 == (int *)0x0) goto LAB_030f0788;
    if (*(ulong *)(local_88 + 0x28) < uVar10 + 0x40) {
      *(int *)(*(long *)(local_88 + 0x30) + 0x20) = *(int *)(*(long *)(local_88 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_88 + 0x10) + 0x18))
                (*(long **)(local_88 + 0x10),(long)local_80 - (long)local_80[-1],uVar10 + 0x44);
      goto LAB_030f0788;
    }
    if (*(long *)(local_88 + 0x38) != uVar10 + (long)local_80) {
      FUN_031cf778();
      goto LAB_030f0788;
    }
    *(int **)(local_88 + 0x38) = local_80;
  }
  else {
    *(int **)(local_88 + 0x38) = local_80;
    if (*(int **)(local_88 + 0x48) != local_80) goto LAB_030f0788;
  }
  FUN_031cf578();
LAB_030f0788:
  uVar15 = local_90;
  uVar10 = local_90 >> 0x20;
  local_90 = uVar10 << 0x20;
  if ((piVar6 != (int *)0x0) && (-1 < (long)uVar15)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,piVar6,uVar10 << 2);
  }
  return bVar5;
}


