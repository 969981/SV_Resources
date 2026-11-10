/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00102840; name: FUN_00102840
 */


undefined8 FUN_00102840(long param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  uint *puVar16;
  uint uVar17;
  long lVar18;
  ulong *puVar19;
  uint *local_98;
  uint *puStack_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  int local_70;
  undefined4 uStack_6c;
  uint local_68;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    return 0;
  }
  if ((param_2 >> 8 & 1) != 0) {
    uVar8 = FUN_0011f640();
    param_1 = FUN_001020a0(param_1,uVar8);
    if (param_1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      return 0;
    }
  }
  lVar18 = *(long *)(param_1 + 0xb0);
  uVar12 = *(uint *)(param_1 + 0x124);
  puVar3 = *(uint **)(param_1 + 0xc0);
  lVar4 = *(long *)(param_1 + 200);
  FUN_00100470(param_1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    return 0;
  }
  puVar1 = (uint *)((long)puVar3 + (ulong)uVar12);
  iVar9 = FUN_0011f640();
  uVar14 = (param_2 >> 4 & 0xf) + (param_2 & 0xf);
  uVar12 = 0;
  puVar13 = puVar3;
  if ((0 < *(int *)(param_1 + 0x38)) && (uVar5 = *(uint *)(param_1 + 0x134), puVar3 <= puVar1)) {
LAB_00102974:
    if (puVar3 <= puVar13) {
      puVar16 = puVar13 + 1;
      uVar7 = *puVar13;
      if ((uVar5 <= uVar14) && (0 < *(int *)(param_1 + 300))) {
        iVar10 = 0;
        do {
          if (*(uint *)(lVar4 + (long)iVar10 * 4) == uVar12) {
            if (((uVar7 != 0) && (iVar10 != -1)) && (uVar17 = *puVar16 & 0xfffffff0, uVar17 != 0)) {
              puVar19 = (ulong *)(*(long *)(param_1 + 0x1b8) + (long)iVar10 * 0x1c0);
              uVar15 = puVar19[4];
              puVar2 = (uint *)((long)puVar16 + (ulong)uVar7);
              puVar13 = puVar13 + 2;
              goto LAB_00102a14;
            }
            break;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(param_1 + 300));
      }
      goto LAB_00102958;
    }
  }
LAB_00102afc:
  iVar10 = FUN_0011f640();
  if ((*(int *)(param_1 + 0x44) != 0) &&
     (((lVar18 != 0 || (*(long *)(param_1 + 0x1c0) != 0)) && ((param_2 & 0xf0) != 0)))) {
    uVar12 = *(uint *)(param_1 + 0x20);
    iVar11 = FUN_0010c810(*(undefined4 *)(param_1 + 0x118));
    if (iVar11 == 0) {
      uVar12 = uVar12 & 0xffedfdff;
      if (uVar14 < 2) {
        uVar14 = uVar12 | 0x20200;
      }
      else {
        uVar14 = uVar12 | *(uint *)(param_1 + 0x20) & 0x100000 | 0x200;
      }
      uVar12 = uVar14 & 0xfffffdff;
      if ((param_2 & 0xf) != 0) {
        uVar12 = uVar14;
      }
      if (((uVar12 ^ 0xffffffff) & 0x20200) == 0) goto LAB_00102c34;
    }
    else {
      uVar12 = uVar12 & 0xfffdfdff;
    }
    if (((puVar13 < puVar1) && (puVar3 <= puVar13)) &&
       ((lVar18 != 0 || (*(long *)(param_1 + 0x1c0) != 0)))) {
      iVar11 = FUN_0010c810(*(undefined4 *)(param_1 + 0x118));
      if (iVar11 == 0) {
        uVar12 = FUN_00107d30(lVar18,puVar13,*(undefined4 *)(param_1 + 0x128),puVar1,param_1 + 0x170
                              ,uVar12,*(undefined4 *)(param_1 + 0x24),
                              *(undefined4 *)(param_1 + 0x118));
      }
      else {
        uVar12 = FUN_0010ce00(lVar18,puVar13,*(uint *)(param_1 + 0x24) >> 0x14 & 1,
                              *(uint *)(param_1 + 0x24) >> 2 & 1,*(undefined4 *)(param_1 + 0x128),
                              puVar1,param_1 + 0x130,param_2 & 0xff,*(undefined8 *)(param_1 + 0x6b0)
                              ,*(undefined8 *)(param_1 + 0x1c0));
      }
    }
  }
LAB_00102c34:
  *(int *)(param_1 + 0x664) = (iVar10 - iVar9) + *(int *)(param_1 + 0x664);
  iVar9 = FUN_0011f640();
  *(int *)(param_1 + 0x660) = (iVar9 - iVar10) + *(int *)(param_1 + 0x660);
  if (*(uint *)(param_1 + 0x6cc) < uVar12) {
    *(uint *)(param_1 + 0x6cc) = uVar12;
  }
  if ((param_2 >> 9 & 1) == 0) {
    return 1;
  }
  FUN_001023e0(param_1,iVar9);
  return 0;
  while( true ) {
    *puVar19 = local_88;
    uVar17 = uVar17 - local_68;
    puVar13 = local_98;
    if (uVar17 == 0) break;
LAB_00102a14:
    if (((puVar1 < puVar2) || (puVar1 < puVar13)) || (puVar13 < puVar3)) break;
    local_88 = *puVar19;
    uVar6 = *(uint *)((long)puVar19 + 0xc);
    iVar10 = (int)local_88 - (int)puVar19[5];
    local_80 = puVar19[2];
    uVar6 = (uVar6 - iVar10) + (-uVar6 & iVar10 >> 0x1f);
    local_78 = puVar19[3];
    local_70 = 0;
    if ((uVar6 & 0xffffffc0) != 0) {
      local_70 = (uVar6 & 0xffffffc0) - 0x10;
    }
    uStack_6c = 0;
    local_98 = puVar13;
    puStack_90 = puVar2;
    FUN_00103c70(uVar15,&local_88,&local_98);
    if (uVar17 < local_68) {
      uVar15 = *puVar19 + (ulong)uVar17;
      *puVar19 = uVar15;
      if (puVar19[3] < uVar15) {
        *puVar19 = uVar15 - *(uint *)((long)puVar19 + 0xc);
      }
      break;
    }
  }
LAB_00102958:
  uVar12 = uVar12 + 1;
  puVar13 = (uint *)((long)puVar16 + (ulong)uVar7);
  if ((*(int *)(param_1 + 0x38) <= (int)uVar12) || (puVar1 < puVar13)) goto LAB_00102afc;
  goto LAB_00102974;
}


