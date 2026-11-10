/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a62a0c; name: FUN_00a62a0c
 */


undefined8 FUN_00a62a0c(long param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  __compar_fn_t __compar;
  int *piVar2;
  void *pvVar3;
  uint *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  ushort *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *local_b0;
  int *local_a8;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_2 == 2) {
    puVar5 = (undefined8 *)(param_1 + 0x60);
  }
  else if (param_2 == 1) {
    puVar5 = (undefined8 *)(param_1 + 0x48);
  }
  else {
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("false","GetDataTable",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/data/pokedex_fbs_data_base.cpp"
                 ,0x7d,"pokedex kind out of range");
    }
    puVar5 = (undefined8 *)(param_1 + 0x30);
  }
  local_78 = *puVar5;
  local_70 = puVar5[1];
  uStack_68 = puVar5[2];
  local_98 = &DAT_fbec41851566601b;
  pcStack_90 = "values";
  local_88 = 6;
  local_80 = (long *)0x0;
  piVar2 = (int *)FUN_00efa07c(&local_78,&local_98);
  if (piVar2 == (int *)0x0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *piVar2;
  }
  __compar = (__compar_fn_t)PTR_LAB_047d5600;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
    __compar = (__compar_fn_t)PTR_LAB_047d5600;
  }
  PTR_LAB_047d5600 = __compar;
  if (iVar12 != 0) {
    iVar11 = 0;
    do {
      local_98 = &DAT_fbec41851566601b;
      pcStack_90 = "values";
      local_88 = 6;
      local_80 = (long *)0x0;
      FUN_00e90ee0(&local_b0,&local_78,&local_98,iVar11);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_a8 != (int *)0x0) {
        if ((*(ushort *)((long)local_a8 - (long)*local_a8) < 7) ||
           (uVar7 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3], uVar7 == 0)) {
          puVar4 = (uint *)0x0;
        }
        else {
          puVar4 = (uint *)((long)local_a8 + uVar7);
          puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        }
        local_98 = "capturenum";
        pvVar3 = bsearch(&local_98,puVar4 + 1,(ulong)*puVar4,4,__compar);
        if ((pvVar3 != (void *)0x0) && (local_a8 != (int *)0x0)) {
          if ((*(ushort *)((long)local_a8 - (long)*local_a8) < 7) ||
             (uVar7 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3], uVar7 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)local_a8 + uVar7);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_98 = "itemid";
          pvVar3 = bsearch(&local_98,puVar4 + 1,(ulong)*puVar4,4,__compar);
          if ((pvVar3 != (void *)0x0) && (local_a8 != (int *)0x0)) {
            if ((*(ushort *)((long)local_a8 - (long)*local_a8) < 7) ||
               (uVar7 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3], uVar7 == 0)) {
              puVar4 = (uint *)0x0;
            }
            else {
              puVar4 = (uint *)((long)local_a8 + uVar7);
              puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
            }
            local_98 = "itemnum";
            pvVar3 = bsearch(&local_98,puVar4 + 1,(ulong)*puVar4,4,__compar);
            if (pvVar3 != (void *)0x0) {
              if ((local_a8 == (int *)0x0) || (*(ushort *)((long)local_a8 - (long)*local_a8) < 7))
              goto LAB_00a62d64;
              uVar7 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3];
              iVar6 = 0;
              if (uVar7 != 0) {
                puVar4 = (uint *)((long)local_a8 + uVar7);
                local_98 = "capturenum";
                puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
                puVar4 = bsearch(&local_98,puVar4 + 1,(ulong)*puVar4,4,__compar);
                if ((puVar4 != (uint *)0x0) && (local_b0 != (int *)0x0)) {
                  piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
                  puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
                  uVar1 = *puVar8;
                  if (uVar1 < 7) {
                    piVar10 = (int *)0x0;
                  }
                  else {
                    piVar10 = (int *)0x0;
                    if ((ulong)puVar8[3] != 0) {
                      puVar4 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
                      piVar10 = (int *)((long)puVar4 + (ulong)*puVar4);
                    }
                  }
                  if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
                     (uVar7 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar7 == 0)) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = (long)*(char *)((long)piVar10 + uVar7) & 0xffffffff;
                  }
                  if (*(long *)(PTR_DAT_047d5608 + uVar7 * 8) == 4) {
                    if (uVar1 < 0xb) {
                      uVar9 = 0;
LAB_00a62d04:
                      iVar6 = 0;
                    }
                    else {
                      uVar9 = 0;
                      if ((ulong)puVar8[5] != 0) {
                        uVar9 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
                      }
                      if ((uVar1 < 0xd) || ((ulong)puVar8[6] == 0)) goto LAB_00a62d04;
                      iVar6 = *(int *)((long)piVar2 + (ulong)puVar8[6]);
                    }
                    if ((uVar9 < *(ushort *)((long)local_b0 - (long)*local_b0)) &&
                       (uVar7 = (ulong)*(ushort *)
                                        (((long)local_b0 - (long)*local_b0) + (ulong)uVar9),
                       uVar7 != 0)) {
                      iVar6 = *(int *)((long)local_b0 + uVar7);
                    }
                    goto LAB_00a62d28;
                  }
                  if ((0xc < uVar1) && ((ulong)puVar8[6] != 0)) {
                    iVar6 = *(int *)((long)piVar2 + (ulong)puVar8[6]);
                    goto LAB_00a62d28;
                  }
                }
LAB_00a62d64:
                iVar6 = 0;
              }
LAB_00a62d28:
              if ((param_3 < iVar6) && (iVar6 <= param_4)) {
                return 1;
              }
            }
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar12 != iVar11);
  }
  return 0;
}


