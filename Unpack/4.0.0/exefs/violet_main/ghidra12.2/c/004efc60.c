/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004efc60; name: FUN_004efc60
 */


long FUN_004efc60(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  undefined *puVar17;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *local_68;
  
  uVar13 = *(uint *)(param_1 + 6);
  uVar8 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
  if ((uVar8 & 1) == 0) {
    lVar3 = FUN_00514564();
  }
  else {
    lVar3 = (uVar8 & 0xfffffffffffffffe) + 8;
  }
  lVar3 = FUN_00514d68(lVar3);
  lVar3 = lVar3 + (ulong)uVar13;
  if (*(uint *)(param_1 + 5) != 0xffffffff) {
    lVar4 = FUN_004ef3e8(param_2 + (ulong)*(uint *)(param_1 + 5));
    lVar3 = lVar4 + lVar3;
  }
  if (-1 < (int)param_1[9]) {
    lVar4 = 0;
    puVar17 = PTR_DAT_047cd750;
    do {
      lVar14 = *(long *)(*param_1 + 0x28);
      lVar16 = lVar14 + lVar4 * 0x98;
      if (*(int *)(lVar16 + 0x3c) != 3) {
        lVar9 = *(long *)(lVar14 + lVar4 * 0x98 + 0x58);
        if ((lVar9 == 0) ||
           (((*(int *)(lVar9 + 0x18) == 1 && (*(char *)(**(long **)(lVar9 + 0x20) + 0x41) != '\0'))
            || (*(int *)(param_2 +
                        (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                                     (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x30)
                                                  ) >> 4) * -0x55555554)) ==
                *(int *)(lVar14 + lVar4 * 0x98 + 0x44))))) {
          puVar12 = (undefined8 *)(lVar14 + lVar4 * 0x98 + 0x30);
          puVar5 = (ulong *)*puVar12;
          if (puVar5 != (ulong *)0x0) {
            puStack_80 = PTR_LAB_047cd728;
            local_88 = lVar16;
            if (*puVar5 != 0xffffffffffffffff) {
              local_70 = &puStack_80;
              local_68 = &local_88;
              local_78 = &local_70;
              std::__call_once(puVar5,&local_78,(_func_void_void_ptr *)&LAB_004f9a40);
            }
          }
          puVar15 = (uint *)(lVar14 + lVar4 * 0x98 + 0x38);
          if (*(int *)(puVar17 + (ulong)*puVar15 * 4) == 10) {
            if (param_1[1] != param_2) {
              plVar6 = (long *)FUN_004f1094(param_1,param_2,lVar16);
              if ((long *)*plVar6 != (long *)0x0) {
                lVar14 = (**(code **)(*(long *)*plVar6 + 0x88))();
                goto LAB_004efcec;
              }
            }
          }
          else if (*(int *)(puVar17 + (ulong)*puVar15 * 4) == 9) {
            uVar8 = FUN_004f9a80(param_1 + 1,lVar16);
            if ((uVar8 & 1) == 0) {
              lVar9 = param_1[1];
              if (*(char *)(lVar14 + lVar4 * 0x98 + 0x43) == '\0') {
                plVar6 = (long *)(*(long *)(lVar14 + lVar4 * 0x98 + 0x50) + 0x28);
              }
              else {
                lVar11 = *(long *)(lVar14 + lVar4 * 0x98 + 0x60);
                if (lVar11 == 0) {
                  plVar6 = (long *)(*(long *)(lVar14 + lVar4 * 0x98 + 0x28) + 0x80);
                }
                else {
                  plVar6 = (long *)(lVar11 + 0x50);
                }
              }
              uVar13 = (int)((ulong)(lVar16 - *plVar6) >> 3) * 0x286bca1b;
              uVar13 = *(uint *)(param_1[2] +
                                (-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2)
                                );
              puVar5 = (ulong *)*puVar12;
              if (puVar5 != (ulong *)0x0) {
                puStack_80 = PTR_LAB_047cd728;
                local_88 = lVar16;
                if (*puVar5 != 0xffffffffffffffff) {
                  local_70 = &puStack_80;
                  local_68 = &local_88;
                  local_78 = &local_70;
                  std::__call_once(puVar5,&local_78,(_func_void_void_ptr *)&LAB_004f9a40);
                }
              }
              uVar2 = *puVar15;
              if ((uVar2 == 0xc) || (uVar2 == 9)) {
                uVar13 = uVar13 & 0xfffffffe;
              }
              lVar14 = *(long *)(lVar9 + (ulong)uVar13);
              plVar6 = (long *)FUN_004f0f58(param_1,param_2,lVar16);
              if (*plVar6 != lVar14) {
                lVar14 = FUN_0052b0a0();
                lVar3 = lVar3 + lVar14 + 0x18;
              }
              puVar17 = PTR_DAT_047cd750;
            }
            else {
              FUN_004f0e1c(param_1,param_2,lVar16);
              lVar14 = FUN_0052b0a0();
LAB_004efcec:
              lVar3 = lVar14 + lVar3;
            }
          }
        }
        goto switchD_004efd90_default;
      }
      puVar12 = (undefined8 *)(lVar14 + lVar4 * 0x98 + 0x30);
      puVar5 = (ulong *)*puVar12;
      if (puVar5 != (ulong *)0x0) {
        puStack_80 = PTR_LAB_047cd728;
        local_88 = lVar16;
        if (*puVar5 != 0xffffffffffffffff) {
          local_70 = &puStack_80;
          local_68 = &local_88;
          local_78 = &local_70;
          std::__call_once(puVar5,&local_78,(_func_void_void_ptr *)&LAB_004f9a40);
        }
      }
      puVar15 = (uint *)(lVar14 + lVar4 * 0x98 + 0x38);
      uVar13 = *puVar15;
      switch(*(undefined4 *)(puVar17 + (ulong)uVar13 * 4)) {
      case 1:
      case 8:
        lVar14 = FUN_004f01c4(param_1,param_2,lVar16);
        break;
      case 2:
        lVar14 = FUN_004f0300(param_1,param_2,lVar16);
        goto LAB_004eff24;
      case 3:
        lVar14 = FUN_004f043c(param_1,param_2,lVar16);
        break;
      case 4:
        lVar14 = FUN_004f0578(param_1,param_2,lVar16);
        goto LAB_004eff24;
      case 5:
        lVar14 = FUN_004f06b4(param_1,param_2,lVar16);
LAB_004eff24:
        iVar7 = *(int *)(lVar14 + 4);
        lVar14 = (long)iVar7 << 3;
        goto LAB_004eff4c;
      case 6:
        lVar14 = FUN_004f07f0(param_1,param_2,lVar16);
        break;
      case 7:
        lVar14 = FUN_004f092c(param_1,param_2,lVar16);
        iVar7 = *(int *)(lVar14 + 4);
        lVar14 = (long)iVar7;
        goto LAB_004eff4c;
      case 9:
        lVar16 = FUN_004f0a68(param_1,param_2,lVar16);
        lVar14 = (long)*(int *)(lVar16 + 0xc) << 3;
        piVar10 = *(int **)(lVar16 + 0x10);
        if (piVar10 != (int *)0x0) {
          if (0 < *piVar10) {
            lVar9 = 0;
            do {
              lVar11 = FUN_0052b0a0(*(undefined8 *)(piVar10 + lVar9 * 2 + 2));
              lVar14 = lVar14 + lVar11 + 0x18;
              piVar10 = *(int **)(lVar16 + 0x10);
              lVar9 = lVar9 + 1;
            } while (lVar9 < *piVar10);
          }
LAB_004f00b0:
          lVar14 = lVar14 + 8;
        }
        goto LAB_004f00b4;
      case 10:
        puVar5 = (ulong *)*puVar12;
        if (puVar5 != (ulong *)0x0) {
          puStack_80 = PTR_LAB_047cd728;
          local_88 = lVar16;
          if (*puVar5 != 0xffffffffffffffff) {
            local_70 = &puStack_80;
            local_68 = &local_88;
            local_78 = &local_70;
            std::__call_once(puVar5,&local_78,(_func_void_void_ptr *)&LAB_004f9a40);
          }
          uVar13 = *puVar15;
        }
        if ((uVar13 == 0xb) && (uVar8 = FUN_004a64c0(lVar16), (uVar8 & 1) != 0)) {
          FUN_004f0ba4(param_1,param_2,lVar16);
          lVar14 = FUN_004fdd14();
          goto LAB_004efcec;
        }
        lVar16 = FUN_004f0ce0(param_1,param_2,lVar16);
        lVar14 = (long)*(int *)(lVar16 + 0xc) << 3;
        piVar10 = *(int **)(lVar16 + 0x10);
        if (piVar10 != (int *)0x0) {
          if (0 < *piVar10) {
            lVar9 = 0;
            do {
              lVar11 = (**(code **)(**(long **)(piVar10 + lVar9 * 2 + 2) + 0x88))();
              piVar10 = *(int **)(lVar16 + 0x10);
              lVar9 = lVar9 + 1;
              lVar14 = lVar11 + lVar14;
            } while (lVar9 < *piVar10);
          }
          goto LAB_004f00b0;
        }
LAB_004f00b4:
        lVar3 = lVar14 + lVar3;
      default:
        goto switchD_004efd90_default;
      }
      iVar7 = *(int *)(lVar14 + 4);
      lVar14 = (long)iVar7 << 2;
LAB_004eff4c:
      lVar14 = lVar14 + 8;
      if (iVar7 < 1) {
        lVar14 = 0;
      }
      lVar3 = lVar14 + lVar3;
switchD_004efd90_default:
      bVar1 = lVar4 < (int)param_1[9];
      lVar4 = lVar4 + 1;
    } while (bVar1);
  }
  return lVar3;
}


