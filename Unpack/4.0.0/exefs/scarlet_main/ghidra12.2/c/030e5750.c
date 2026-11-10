/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e5750; name: FUN_030e5750
 */


void FUN_030e5750(long param_1,long *param_2,int *param_3,undefined4 *param_4,long *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  long *plVar18;
  undefined4 local_90 [2];
  int local_88 [2];
  int local_80;
  ushort local_7c;
  undefined4 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar4 = FUN_030e7e50(param_2,param_3);
  if (lVar4 == 0) {
    uVar9 = 0;
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(uint *)(lVar4 + 4);
    uVar9 = ((int)lVar4 - (int)param_2[2]) * 0x20000000;
  }
  uVar6 = uVar6 | uVar9;
  if ((int)uVar6 < 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_3 * 0x10;
    local_78 = (undefined4 *)0x0;
    local_70 = 0x8000000000000000;
    local_68 = 0;
    local_80 = 0;
    local_7c = 0;
    FUN_02eb1718(&local_78,0,(int)*(short *)(lVar4 + 10) + (int)*(short *)(lVar4 + 8),0);
    local_80 = local_80 + 1;
    local_7c = local_7c & 0xff00;
    FUN_02eb1718(&local_78,0,local_68,0);
    local_88[0] = *param_3;
    local_90[0] = *param_4;
    FUN_030e7bd4(param_1,local_88,local_90,param_5 + 2);
    iVar3 = FUN_030e98c8(param_2,param_3);
    puVar16 = local_78;
    if ((int)param_2[1] == iVar3) {
      iVar2 = iVar3 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar3) {
        FUN_030e99c4(param_2,(long)iVar2);
        iVar3 = (int)param_2[1];
      }
      uVar8 = local_70;
      puVar16 = local_78;
      lVar4 = *param_2;
      piVar17 = (int *)(lVar4 + (long)iVar3 * 0x28);
      *piVar17 = *param_3;
      plVar18 = (long *)(piVar17 + 4);
      *plVar18 = 0;
      piVar17[2] = local_80;
      *(ushort *)(piVar17 + 3) = local_7c;
      puVar15 = (uint *)(piVar17 + 6);
      puVar15[0] = 0;
      puVar15[1] = 0x80000000;
      uVar6 = (uint)local_70;
      if ((int)(uint)local_70 < 1) {
        *plVar18 = 0;
        *puVar15 = 0;
        piVar17[7] = 0x80000000;
      }
      else {
        puVar12 = (undefined4 *)
                  (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                            (PTR_PTR_047d1a50,(local_70 & 0xffffffff) << 2);
        uVar9 = uVar6 & 3;
        *plVar18 = (long)puVar12;
        *puVar15 = uVar6;
        piVar17[7] = uVar6;
        if (2 < uVar6 - 1) {
          iVar10 = -(uVar6 & 0xfffffffc);
          puVar5 = puVar12;
          do {
            *puVar5 = *puVar16;
            puVar5[1] = puVar16[1];
            puVar5[2] = puVar16[2];
            puVar1 = puVar16 + 3;
            puVar12 = puVar5 + 4;
            puVar16 = puVar16 + 4;
            iVar10 = iVar10 + 4;
            puVar5[3] = *puVar1;
            puVar5 = puVar12;
          } while (iVar10 != 0);
        }
        if ((uVar8 & 3) != 0) {
          do {
            uVar9 = uVar9 - 1;
            *puVar12 = *puVar16;
            puVar12 = puVar12 + 1;
            puVar16 = puVar16 + 1;
          } while (uVar9 != 0);
        }
      }
      *(undefined4 *)(lVar4 + (long)iVar3 * 0x28 + 0x20) = local_68;
      *(int *)(param_2 + 1) = iVar2;
    }
    else {
      lVar11 = *param_2;
      lVar4 = lVar11 + (long)iVar3 * 0x28;
      lVar14 = (long)iVar3;
      *(int *)(lVar4 + 8) = local_80;
      *(ushort *)(lVar4 + 0xc) = local_7c;
      if ((int *)(lVar4 + 8) != &local_80) {
        iVar3 = (uint)local_70;
        lVar13 = (long)(int)(uint)local_70;
        if ((int)(*(uint *)(lVar11 + lVar14 * 0x28 + 0x1c) & 0x7fffffff) < (int)(uint)local_70) {
          FUN_02eb1edc((undefined8 *)(lVar4 + 0x10),PTR_PTR_047d1a50,lVar13);
        }
        memcpy(*(void **)(lVar4 + 0x10),puVar16,lVar13 << 2);
        *(int *)(lVar11 + lVar14 * 0x28 + 0x18) = iVar3;
      }
      *(undefined4 *)(lVar11 + lVar14 * 0x28 + 0x20) = local_68;
    }
    iVar3 = (int)param_5[1];
    lVar4 = (long)iVar3;
    iVar2 = *param_3;
    if ((int)(*(uint *)((long)param_5 + 0xc) & 0x7fffffff) <= iVar3) {
      FUN_030e71f8(param_5,lVar4 + 1);
      iVar3 = (int)param_5[1];
    }
    puVar7 = (undefined1 *)(*param_5 + (long)iVar3 * 0xc);
    *puVar7 = 2;
    *(int *)(puVar7 + 4) = iVar2;
    *(int *)(param_5 + 1) = (int)(lVar4 + 1);
  }
  else {
    lVar11 = *param_2;
    lVar4 = lVar11 + (long)(int)uVar6 * 0x28;
    lVar14 = (long)(int)uVar6;
    local_80 = *(int *)(lVar4 + 8);
    local_7c = *(ushort *)(lVar4 + 0xc);
    local_78 = (undefined4 *)0x0;
    local_70 = 0x8000000000000000;
    uVar6 = *(uint *)(lVar4 + 0x18);
    if ((int)uVar6 < 1) {
      local_78 = (undefined4 *)0x0;
      local_70 = 0x8000000000000000;
      lVar4 = lVar11;
    }
    else {
      puVar12 = *(undefined4 **)(lVar11 + lVar14 * 0x28 + 0x10);
      local_78 = (undefined4 *)
                 (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar6 << 2)
      ;
      uVar9 = uVar6 & 3;
      local_70 = CONCAT44(uVar6,uVar6);
      puVar16 = local_78;
      if (2 < uVar6 - 1) {
        iVar3 = -(uVar6 & 0xfffffffc);
        puVar5 = local_78;
        do {
          *puVar5 = *puVar12;
          puVar5[1] = puVar12[1];
          puVar5[2] = puVar12[2];
          puVar1 = puVar12 + 3;
          puVar16 = puVar5 + 4;
          puVar12 = puVar12 + 4;
          iVar3 = iVar3 + 4;
          puVar5[3] = *puVar1;
          puVar5 = puVar16;
        } while (iVar3 != 0);
      }
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar16 = *puVar12;
        puVar16 = puVar16 + 1;
        puVar12 = puVar12 + 1;
      }
      lVar4 = *param_2;
    }
    puVar16 = local_78;
    local_80 = local_80 + 1;
    local_68 = *(undefined4 *)(lVar11 + lVar14 * 0x28 + 0x20);
    lVar11 = lVar4 + lVar14 * 0x28;
    *(int *)(lVar11 + 8) = local_80;
    *(ushort *)(lVar11 + 0xc) = local_7c;
    if ((int *)(lVar11 + 8) != &local_80) {
      iVar3 = (uint)local_70;
      lVar13 = (long)(int)(uint)local_70;
      if ((int)(*(uint *)(lVar4 + lVar14 * 0x28 + 0x1c) & 0x7fffffff) < (int)(uint)local_70) {
        FUN_02eb1edc((undefined8 *)(lVar11 + 0x10),PTR_PTR_047d1a50,lVar13);
      }
      memcpy(*(void **)(lVar11 + 0x10),puVar16,lVar13 << 2);
      *(int *)(lVar4 + lVar14 * 0x28 + 0x18) = iVar3;
    }
    *(undefined4 *)(lVar4 + lVar14 * 0x28 + 0x20) = local_68;
  }
  uVar6 = local_70._4_4_;
  uVar8 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (int)uVar6) && (local_78 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_78,uVar8 << 2);
  }
  return;
}


