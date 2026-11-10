/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ec660; name: FUN_004ec660
 */


void FUN_004ec660(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *local_68;
  
  *param_1 = (long)(PTR_DAT_047cda78 + 0x10);
  lVar14 = *(long *)(param_1[2] + 0x20);
  if (((param_1[1] & 1U) == 0) ||
     (plVar9 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar9 != 0 || plVar9 == (long *)0x0)) {
    iVar7 = *(int *)(param_1[2] + 0xc);
  }
  else {
    plVar11 = plVar9 + 1;
    lVar15 = *plVar11;
    if (lVar15 != plVar9[2]) {
                    /* try { // try from 004ecb70 to 004ecb77 has its CatchHandler @ 004ecbb4 */
      FUN_00514600(plVar11);
      lVar15 = *plVar11;
    }
    if (lVar15 != 0) {
      plVar9[2] = lVar15;
      FUN_0049e790(PTR_LAB_047cba48);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar9);
    iVar7 = *(int *)(param_1[2] + 0xc);
  }
  if (iVar7 != -1) {
    FUN_005212b0((long)param_1 + (long)iVar7);
  }
  puVar2 = PTR_DAT_047cd750;
  puVar1 = PTR_LAB_047cd728;
  uVar5 = (ulong)*(uint *)(lVar14 + 0x68);
  if (0 < (int)*(uint *)(lVar14 + 0x68)) {
    lVar15 = 0;
    do {
      lVar16 = *(long *)(lVar14 + 0x28);
      lVar13 = lVar16 + lVar15 * 0x98;
      lVar8 = *(long *)(lVar13 + 0x58);
      if (lVar8 == 0) {
        lVar6 = param_1[2];
LAB_004ec75c:
        lVar8 = lVar16 + lVar15 * 0x98;
        plVar9 = (long *)((long)param_1 + (long)*(int *)(*(long *)(lVar6 + 0x28) + lVar15 * 4));
        puVar10 = (undefined8 *)(lVar8 + 0x30);
        puVar3 = (ulong *)*puVar10;
        if (*(int *)(lVar8 + 0x3c) == 3) {
          if (puVar3 != (ulong *)0x0) {
            puStack_80 = puVar1;
            local_88 = lVar13;
            if (*puVar3 != 0xffffffffffffffff) {
              local_70 = &puStack_80;
              local_68 = &local_88;
              local_78 = &local_70;
                    /* try { // try from 004ec7a8 to 004ec7b7 has its CatchHandler @ 004ecbcc */
              std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)&LAB_004ed5a0);
            }
          }
          puVar17 = (uint *)(lVar16 + lVar15 * 0x98 + 0x38);
          uVar4 = *puVar17;
          switch(*(undefined4 *)(puVar2 + (ulong)uVar4 * 4)) {
          case 1:
          case 8:
            FUN_00531260(plVar9);
            break;
          case 2:
            FUN_00531830(plVar9);
            break;
          case 3:
            FUN_00531548(plVar9);
            break;
          case 4:
            FUN_00531b18(plVar9);
            break;
          case 5:
            FUN_005320e8(plVar9);
            break;
          case 6:
            FUN_00531e00(plVar9);
            break;
          case 7:
            FUN_00530f80(plVar9);
            break;
          case 9:
            FUN_005322a4(plVar9);
            break;
          case 10:
            puVar3 = (ulong *)*puVar10;
            if (puVar3 != (ulong *)0x0) {
              puStack_80 = puVar1;
              local_88 = lVar13;
              if (*puVar3 != 0xffffffffffffffff) {
                local_70 = &puStack_80;
                local_68 = &local_88;
                local_78 = &local_70;
                    /* try { // try from 004eca58 to 004eca7b has its CatchHandler @ 004ecbcc */
                std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)&LAB_004ed5a0);
              }
              uVar4 = *puVar17;
            }
            if ((uVar4 == 0xb) && (uVar5 = FUN_004a64c0(lVar13), (uVar5 & 1) != 0)) {
              (**(code **)*plVar9)(plVar9);
            }
            else {
              puVar17 = (uint *)plVar9[2];
              if ((puVar17 != (uint *)0x0) && (*plVar9 == 0)) {
                uVar5 = (ulong)*puVar17;
                if (0 < (int)*puVar17) {
                  do {
                    puVar17 = puVar17 + 2;
                    puVar10 = *(undefined8 **)puVar17;
                    if (puVar10 != (undefined8 *)0x0) {
                      (**(code **)*puVar10)(puVar10);
                      FUN_0049e790(PTR_LAB_047cba48,puVar10);
                    }
                    uVar5 = uVar5 - 1;
                  } while (uVar5 != 0);
                  puVar17 = (uint *)plVar9[2];
                }
                FUN_0049e700(puVar17);
              }
              plVar9[2] = 0;
            }
          }
        }
        else {
          if (puVar3 != (ulong *)0x0) {
            puStack_80 = puVar1;
            local_88 = lVar13;
            if (*puVar3 != 0xffffffffffffffff) {
              local_70 = &puStack_80;
              local_68 = &local_88;
              local_78 = &local_70;
                    /* try { // try from 004ec8e0 to 004ec983 has its CatchHandler @ 004ecbcc */
              std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)&LAB_004ed5a0);
            }
          }
          puVar17 = (uint *)(lVar16 + lVar15 * 0x98 + 0x38);
          iVar7 = *(int *)(puVar2 + (ulong)*puVar17 * 4);
          if (iVar7 == 9) {
            pbVar12 = (byte *)*plVar9;
            if (pbVar12 !=
                *(byte **)(*(long *)(param_1[2] + 0x40) +
                          (long)*(int *)(*(long *)(param_1[2] + 0x28) + lVar15 * 4)) &&
                pbVar12 != (byte *)0x0) goto LAB_004ec928;
          }
          else {
            puVar3 = (ulong *)*puVar10;
            if (puVar3 != (ulong *)0x0) {
              puStack_80 = puVar1;
              local_88 = lVar13;
              if (*puVar3 != 0xffffffffffffffff) {
                local_70 = &puStack_80;
                local_68 = &local_88;
                local_78 = &local_70;
                std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)&LAB_004ed5a0);
              }
              iVar7 = *(int *)(puVar2 + (ulong)*puVar17 * 4);
            }
            if (((iVar7 == 10) && (*(long **)(param_1[2] + 0x40) != param_1)) &&
               (*(long **)(param_1[2] + 0x40) != (long *)0x0)) {
              pbVar12 = (byte *)*plVar9;
              goto joined_r0x004ec9ac;
            }
          }
        }
      }
      else {
        if (*(int *)(lVar8 + 0x18) == 1) {
          lVar6 = param_1[2];
          if (*(char *)(**(long **)(lVar8 + 0x20) + 0x41) != '\0') goto LAB_004ec75c;
        }
        else {
          lVar6 = param_1[2];
        }
        iVar7 = (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x10) + 0x30)) >> 4);
        if (*(int *)((long)param_1 + (long)(*(int *)(lVar6 + 8) + iVar7 * -0x55555554)) ==
            *(int *)(lVar16 + lVar15 * 0x98 + 0x44)) {
          lVar8 = (long)*(int *)(*(long *)(lVar6 + 0x28) +
                                (long)((int)uVar5 + iVar7 * -0x55555555) * 4);
          puVar10 = (undefined8 *)(lVar16 + lVar15 * 0x98 + 0x30);
          puVar3 = (ulong *)*puVar10;
          if (puVar3 != (ulong *)0x0) {
            puStack_80 = puVar1;
            local_88 = lVar13;
            if (*puVar3 != 0xffffffffffffffff) {
              local_70 = &puStack_80;
              local_68 = &local_88;
              local_78 = &local_70;
                    /* try { // try from 004ec868 to 004ec877 has its CatchHandler @ 004ecbc8 */
              std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)&LAB_004ed5a0);
            }
          }
          puVar17 = (uint *)(lVar16 + lVar15 * 0x98 + 0x38);
          iVar7 = *(int *)(puVar2 + (ulong)*puVar17 * 4);
          if (iVar7 == 9) {
            pbVar12 = *(byte **)((long)param_1 + lVar8);
            if (pbVar12 !=
                *(byte **)(*(long *)(param_1[2] + 0x40) +
                          (ulong)*(uint *)(*(long *)(param_1[2] + 0x28) + lVar15 * 4)) &&
                pbVar12 != (byte *)0x0) {
LAB_004ec928:
              if ((*pbVar12 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar12 + 0x10));
              }
LAB_004ec704:
              FUN_0049e790(PTR_LAB_047cba48,pbVar12);
            }
          }
          else {
            puVar3 = (ulong *)*puVar10;
            if (puVar3 != (ulong *)0x0) {
              puStack_80 = puVar1;
              local_88 = lVar13;
              if (*puVar3 != 0xffffffffffffffff) {
                local_70 = &puStack_80;
                local_68 = &local_88;
                local_78 = &local_70;
                    /* try { // try from 004ec9e4 to 004ec9f3 has its CatchHandler @ 004ecbc8 */
                std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)&LAB_004ed5a0);
              }
              iVar7 = *(int *)(puVar2 + (ulong)*puVar17 * 4);
            }
            if (iVar7 == 10) {
              pbVar12 = *(byte **)((long)param_1 + lVar8);
joined_r0x004ec9ac:
              if (pbVar12 != (byte *)0x0) {
                (*(code *)**(undefined8 **)pbVar12)(pbVar12);
                goto LAB_004ec704;
              }
            }
          }
        }
      }
      uVar5 = (ulong)*(int *)(lVar14 + 0x68);
      lVar15 = lVar15 + 1;
    } while (lVar15 < (long)uVar5);
  }
  return;
}


