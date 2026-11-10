/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a61b94; name: FUN_00a61b94
 */


undefined8 FUN_00a61b94(long param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  __compar_fn_t __compar;
  undefined *puVar2;
  int *piVar3;
  void *pvVar4;
  uint *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  ushort *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
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
    puVar6 = (undefined8 *)(param_1 + 0x60);
  }
  else if (param_2 == 1) {
    puVar6 = (undefined8 *)(param_1 + 0x48);
  }
  else {
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("false","GetDataTable",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/data/pokedex_fbs_data_base.cpp"
                 ,0x7d,"pokedex kind out of range");
    }
    puVar6 = (undefined8 *)(param_1 + 0x30);
  }
  local_78 = *puVar6;
  local_70 = puVar6[1];
  uStack_68 = puVar6[2];
  local_98 = &DAT_fbec41851566601b;
  pcStack_90 = "values";
  local_88 = 6;
  local_80 = (long *)0x0;
  piVar3 = (int *)FUN_00efa07c(&local_78,&local_98);
  if (piVar3 == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *piVar3;
  }
  __compar = (__compar_fn_t)PTR_LAB_047d5600;
  puVar2 = PTR_DAT_047d5608;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
    __compar = (__compar_fn_t)PTR_LAB_047d5600;
    puVar2 = PTR_DAT_047d5608;
  }
  PTR_LAB_047d5600 = __compar;
  PTR_DAT_047d5608 = puVar2;
  if (iVar13 != 0) {
    iVar12 = 0;
    do {
      local_98 = &DAT_fbec41851566601b;
      pcStack_90 = "values";
      local_88 = 6;
      local_80 = (long *)0x0;
      FUN_00e90ee0(&local_b0,&local_78,&local_98,iVar12);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_a8 != (int *)0x0) {
        if ((*(ushort *)((long)local_a8 - (long)*local_a8) < 7) ||
           (uVar8 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3], uVar8 == 0)) {
          puVar5 = (uint *)0x0;
        }
        else {
          puVar5 = (uint *)((long)local_a8 + uVar8);
          puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
        }
        local_98 = "DevNo";
        pvVar4 = bsearch(&local_98,puVar5 + 1,(ulong)*puVar5,4,__compar);
        if ((pvVar4 != (void *)0x0) && (local_a8 != (int *)0x0)) {
          if ((*(ushort *)((long)local_a8 - (long)*local_a8) < 7) ||
             (uVar8 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3], uVar8 == 0)) {
            puVar5 = (uint *)0x0;
          }
          else {
            puVar5 = (uint *)((long)local_a8 + uVar8);
            puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
          }
          local_98 = "FormNo";
          pvVar4 = bsearch(&local_98,puVar5 + 1,(ulong)*puVar5,4,__compar);
          if (pvVar4 != (void *)0x0) {
            if ((local_a8 == (int *)0x0) || (*(ushort *)((long)local_a8 - (long)*local_a8) < 7))
            goto LAB_00a61fa8;
            uVar8 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3];
            iVar7 = 0;
            if (uVar8 != 0) {
              puVar5 = (uint *)((long)local_a8 + uVar8);
              local_98 = "DevNo";
              puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
              puVar5 = bsearch(&local_98,puVar5 + 1,(ulong)*puVar5,4,__compar);
              if ((puVar5 != (uint *)0x0) && (local_b0 != (int *)0x0)) {
                piVar3 = (int *)((long)puVar5 + (ulong)*puVar5);
                puVar9 = (ushort *)((long)piVar3 - (long)*piVar3);
                uVar1 = *puVar9;
                if (uVar1 < 7) {
                  piVar11 = (int *)0x0;
                }
                else {
                  piVar11 = (int *)0x0;
                  if ((ulong)puVar9[3] != 0) {
                    puVar5 = (uint *)((long)piVar3 + (ulong)puVar9[3]);
                    piVar11 = (int *)((long)puVar5 + (ulong)*puVar5);
                  }
                }
                if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
                   (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = (long)*(char *)((long)piVar11 + uVar8) & 0xffffffff;
                }
                if (*(long *)(puVar2 + uVar8 * 8) == 4) {
                  if (uVar1 < 0xb) {
                    uVar10 = 0;
LAB_00a61e30:
                    iVar7 = 0;
                  }
                  else {
                    uVar10 = 0;
                    if ((ulong)puVar9[5] != 0) {
                      uVar10 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar9[5]);
                    }
                    if ((uVar1 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_00a61e30;
                    iVar7 = *(int *)((long)piVar3 + (ulong)puVar9[6]);
                  }
                  if ((uVar10 < *(ushort *)((long)local_b0 - (long)*local_b0)) &&
                     (uVar8 = (ulong)*(ushort *)(((long)local_b0 - (long)*local_b0) + (ulong)uVar10)
                     , uVar8 != 0)) {
                    iVar7 = *(int *)((long)local_b0 + uVar8);
                  }
                  goto LAB_00a61e54;
                }
                if ((0xc < uVar1) && ((ulong)puVar9[6] != 0)) {
                  iVar7 = *(int *)((long)piVar3 + (ulong)puVar9[6]);
                  goto LAB_00a61e54;
                }
              }
LAB_00a61fa8:
              iVar7 = 0;
            }
LAB_00a61e54:
            if (iVar7 == param_3) {
              if ((local_a8 == (int *)0x0) || (*(ushort *)((long)local_a8 - (long)*local_a8) < 7))
              goto LAB_00a61fc8;
              uVar8 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3];
              iVar7 = 0;
              if (uVar8 != 0) {
                puVar5 = (uint *)((long)local_a8 + uVar8);
                local_98 = "FormNo";
                puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
                puVar5 = bsearch(&local_98,puVar5 + 1,(ulong)*puVar5,4,__compar);
                if ((puVar5 != (uint *)0x0) && (local_b0 != (int *)0x0)) {
                  piVar3 = (int *)((long)puVar5 + (ulong)*puVar5);
                  puVar9 = (ushort *)((long)piVar3 - (long)*piVar3);
                  uVar1 = *puVar9;
                  if (uVar1 < 7) {
                    piVar11 = (int *)0x0;
                  }
                  else {
                    piVar11 = (int *)0x0;
                    if ((ulong)puVar9[3] != 0) {
                      puVar5 = (uint *)((long)piVar3 + (ulong)puVar9[3]);
                      piVar11 = (int *)((long)puVar5 + (ulong)*puVar5);
                    }
                  }
                  if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
                     (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = (long)*(char *)((long)piVar11 + uVar8) & 0xffffffff;
                  }
                  if (*(long *)(puVar2 + uVar8 * 8) == 4) {
                    if (uVar1 < 0xb) {
                      uVar10 = 0;
LAB_00a61f50:
                      iVar7 = 0;
                    }
                    else {
                      uVar10 = 0;
                      if ((ulong)puVar9[5] != 0) {
                        uVar10 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar9[5]);
                      }
                      if ((uVar1 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_00a61f50;
                      iVar7 = *(int *)((long)piVar3 + (ulong)puVar9[6]);
                    }
                    if ((uVar10 < *(ushort *)((long)local_b0 - (long)*local_b0)) &&
                       (uVar8 = (ulong)*(ushort *)
                                        (((long)local_b0 - (long)*local_b0) + (ulong)uVar10),
                       uVar8 != 0)) {
                      iVar7 = *(int *)((long)local_b0 + uVar8);
                    }
                    goto LAB_00a61f74;
                  }
                  if ((0xc < uVar1) && ((ulong)puVar9[6] != 0)) {
                    iVar7 = *(int *)((long)piVar3 + (ulong)puVar9[6]);
                    goto LAB_00a61f74;
                  }
                }
LAB_00a61fc8:
                iVar7 = 0;
              }
LAB_00a61f74:
              if (iVar7 == param_4) {
                return 1;
              }
            }
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar13 != iVar12);
  }
  return 0;
}


