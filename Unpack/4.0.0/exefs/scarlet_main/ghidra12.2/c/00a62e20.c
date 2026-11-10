/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a62e20; name: FUN_00a62e20
 */


undefined1  [16] FUN_00a62e20(long param_1,int param_2,uint param_3)

{
  ushort uVar1;
  __compar_fn_t __compar;
  int *piVar2;
  void *pvVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ushort *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  ulong uVar12;
  short sVar13;
  int iVar14;
  undefined1 auVar15 [16];
  int *local_b0;
  int *local_a8;
  char *local_98;
  char *local_90;
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
  local_90 = "values";
  local_88 = 6;
  local_80 = (long *)0x0;
  piVar2 = (int *)FUN_00efa07c(&local_78,&local_98);
  if (piVar2 == (int *)0x0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *piVar2;
  }
  __compar = (__compar_fn_t)PTR_LAB_047d5600;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
    __compar = (__compar_fn_t)PTR_LAB_047d5600;
  }
  PTR_LAB_047d5600 = __compar;
  if (iVar14 != 0) {
    iVar11 = 0;
    do {
      local_98 = &DAT_fbec41851566601b;
      local_90 = "values";
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
        local_98 = "devNo";
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
          local_98 = "formNo";
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
            local_98 = "sex";
            pvVar3 = bsearch(&local_98,puVar4 + 1,(ulong)*puVar4,4,__compar);
            if (pvVar3 != (void *)0x0) {
              local_98 = (char *)0x78caf6e2a4e0765b;
              local_90 = "devNo";
              local_88 = 5;
              local_80 = (long *)0x0;
              piVar2 = (int *)FUN_00d5a5a8(&local_b0,&local_98);
              if (((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) ||
                 (uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar7 == 0)) {
                sVar13 = 0;
              }
              else {
                sVar13 = (short)*(undefined4 *)((long)piVar2 + uVar7);
              }
              if (local_80 != (long *)0x0) {
                (**(code **)(*local_80 + 0x20))();
              }
              if ((param_3 & 0xffff) == (int)sVar13) {
                if (((local_a8 == (int *)0x0) || (*(ushort *)((long)local_a8 - (long)*local_a8) < 7)
                    ) || (uVar7 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3],
                         uVar7 == 0)) {
LAB_00a632b0:
                  uVar7 = 0;
                }
                else {
                  puVar4 = (uint *)((long)local_a8 + uVar7);
                  local_98 = "formNo";
                  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
                  puVar4 = bsearch(&local_98,puVar4 + 1,(ulong)*puVar4,4,
                                   (__compar_fn_t)PTR_LAB_047d5600);
                  if ((puVar4 == (uint *)0x0) || (local_b0 == (int *)0x0)) goto LAB_00a632b0;
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
LAB_00a631e8:
                      uVar7 = 0;
                    }
                    else {
                      uVar9 = 0;
                      if ((ulong)puVar8[5] != 0) {
                        uVar9 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
                      }
                      if ((uVar1 < 0xd) || ((ulong)puVar8[6] == 0)) goto LAB_00a631e8;
                      uVar7 = (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[6]);
                    }
                    if ((uVar9 < *(ushort *)((long)local_b0 - (long)*local_b0)) &&
                       (uVar12 = (ulong)*(ushort *)
                                         (((long)local_b0 - (long)*local_b0) + (ulong)uVar9),
                       uVar12 != 0)) {
                      uVar7 = (ulong)*(uint *)((long)local_b0 + uVar12);
                    }
                  }
                  else {
                    if ((uVar1 < 0xd) || ((ulong)puVar8[6] == 0)) goto LAB_00a632b0;
                    uVar7 = (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[6]);
                  }
                }
                local_80 = (long *)0x0;
                local_98 = (char *)0x68a3732777251727;
                local_90 = "sex";
                local_88 = 3;
                piVar2 = (int *)FUN_00d27b5c(&local_b0,&local_98);
                if (((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) ||
                   (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar12 == 0)) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = (ulong)*(uint *)((long)piVar2 + uVar12);
                }
                if (local_80 != (long *)0x0) {
                  (**(code **)(*local_80 + 0x20))();
                }
                uVar5 = (ulong)param_3 & 0xffff;
                goto LAB_00a631ac;
              }
            }
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar14 != iVar11);
  }
  uVar12 = 0;
  uVar7 = 0;
  uVar5 = 0;
LAB_00a631ac:
  auVar15._8_8_ = uVar12;
  auVar15._0_8_ = uVar5 | uVar7 << 0x20;
  return auVar15;
}


