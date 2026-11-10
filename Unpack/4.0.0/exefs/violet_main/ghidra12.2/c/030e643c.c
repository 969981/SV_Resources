/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e643c; name: FUN_030e643c
 */


void FUN_030e643c(long param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  uint *puVar18;
  int local_80;
  undefined2 local_7c;
  undefined4 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_2 * 0x10;
  iVar4 = (int)*(short *)(lVar5 + 10) + (int)*(short *)(lVar5 + 8);
  if (iVar4 < 0x17) {
    plVar17 = (long *)(param_1 + 0x10);
    lVar5 = FUN_030e7a5c(plVar17,param_2);
    if (lVar5 == 0) {
      uVar11 = 0;
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (ulong)*(uint *)(lVar5 + 4);
      uVar11 = (lVar5 - *(long *)(param_1 + 0x20)) * 0x20000000;
    }
    if ((int)(uVar8 | uVar11) < 0) {
      uVar3 = FUN_030e96b8(plVar17,param_2);
      if (*(uint *)(param_1 + 0x18) == uVar3) {
        iVar4 = uVar3 + 1;
        if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) <= (int)uVar3) {
          FUN_030e97b4(plVar17,(long)iVar4);
          uVar3 = *(uint *)(param_1 + 0x18);
        }
        piVar16 = (int *)(*(long *)(param_1 + 0x10) + (long)(int)uVar3 * 8);
        *piVar16 = *param_2;
        piVar16[1] = 0x800000;
        *(int *)(param_1 + 0x18) = iVar4;
        return;
      }
      lVar5 = *plVar17 + ((long)((ulong)uVar3 << 0x20) >> 0x1d);
      uVar3 = 0x800000;
    }
    else {
      lVar5 = *plVar17 + ((long)((uVar8 | uVar11) << 0x20) >> 0x1d);
      uVar3 = *(uint *)(lVar5 + 4) | 0x800000;
    }
    *(uint *)(lVar5 + 4) = uVar3;
  }
  else {
    plVar17 = (long *)(param_1 + 0x30);
    lVar5 = FUN_030e7e50(plVar17,param_2);
    if (lVar5 == 0) {
      uVar9 = 0;
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 4);
      uVar9 = ((int)lVar5 - (int)*(undefined8 *)(param_1 + 0x40)) * 0x20000000;
    }
    if ((int)(uVar3 | uVar9) < 0) {
      local_68 = 0;
      local_80 = 0;
      local_7c = 0;
      local_78 = (undefined4 *)0x0;
      local_70 = 0x8000000000000000;
      FUN_02eb1718(&local_78,0,iVar4,0);
      local_7c = CONCAT11(1,(undefined1)local_7c);
      iVar4 = FUN_030e98c8(plVar17,param_2);
      puVar14 = local_78;
      if (*(int *)(param_1 + 0x38) == iVar4) {
        iVar2 = iVar4 + 1;
        if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) <= iVar4) {
          FUN_030e99c4(plVar17,(long)iVar2);
          iVar4 = *(int *)(param_1 + 0x38);
        }
        uVar11 = local_70;
        puVar14 = local_78;
        lVar5 = *plVar17;
        piVar16 = (int *)(lVar5 + (long)iVar4 * 0x28);
        *piVar16 = *param_2;
        plVar17 = (long *)(piVar16 + 4);
        *plVar17 = 0;
        piVar16[2] = local_80;
        *(undefined2 *)(piVar16 + 3) = local_7c;
        puVar18 = (uint *)(piVar16 + 6);
        puVar18[0] = 0;
        puVar18[1] = 0x80000000;
        uVar3 = (uint)local_70;
        if ((int)(uint)local_70 < 1) {
          *plVar17 = 0;
          *puVar18 = 0;
          piVar16[7] = 0x80000000;
        }
        else {
          puVar6 = (undefined4 *)
                   (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                             (PTR_PTR_047d1a50,(local_70 & 0xffffffff) << 2);
          uVar9 = uVar3 & 3;
          *plVar17 = (long)puVar6;
          *puVar18 = uVar3;
          piVar16[7] = uVar3;
          if (2 < uVar3 - 1) {
            iVar10 = -(uVar3 & 0xfffffffc);
            puVar7 = puVar6;
            do {
              *puVar7 = *puVar14;
              puVar7[1] = puVar14[1];
              puVar7[2] = puVar14[2];
              puVar1 = puVar14 + 3;
              puVar6 = puVar7 + 4;
              puVar14 = puVar14 + 4;
              iVar10 = iVar10 + 4;
              puVar7[3] = *puVar1;
              puVar7 = puVar6;
            } while (iVar10 != 0);
          }
          if ((uVar11 & 3) != 0) {
            do {
              uVar9 = uVar9 - 1;
              *puVar6 = *puVar14;
              puVar6 = puVar6 + 1;
              puVar14 = puVar14 + 1;
            } while (uVar9 != 0);
          }
        }
        *(undefined4 *)(lVar5 + (long)iVar4 * 0x28 + 0x20) = local_68;
        *(int *)(param_1 + 0x38) = iVar2;
      }
      else {
        lVar13 = *plVar17;
        lVar5 = lVar13 + (long)iVar4 * 0x28;
        lVar15 = (long)iVar4;
        *(int *)(lVar5 + 8) = local_80;
        *(undefined2 *)(lVar5 + 0xc) = local_7c;
        if ((int *)(lVar5 + 8) != &local_80) {
          iVar4 = (uint)local_70;
          lVar12 = (long)(int)(uint)local_70;
          if ((int)(*(uint *)(lVar13 + lVar15 * 0x28 + 0x1c) & 0x7fffffff) < (int)(uint)local_70) {
            FUN_02eb1edc((undefined8 *)(lVar5 + 0x10),PTR_PTR_047d1a50,lVar12);
          }
          memcpy(*(void **)(lVar5 + 0x10),puVar14,lVar12 << 2);
          *(int *)(lVar13 + lVar15 * 0x28 + 0x18) = iVar4;
        }
        *(undefined4 *)(lVar13 + lVar15 * 0x28 + 0x20) = local_68;
      }
      uVar3 = local_70._4_4_;
      uVar11 = (ulong)local_70._4_4_;
      local_70 = (ulong)local_70._4_4_ << 0x20;
      if ((-1 < (int)uVar3) && (local_78 != (undefined4 *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_78,uVar11 << 2);
      }
    }
    else {
      *(undefined1 *)(*plVar17 + (long)(int)(uVar3 | uVar9) * 0x28 + 0xd) = 1;
    }
  }
  return;
}


