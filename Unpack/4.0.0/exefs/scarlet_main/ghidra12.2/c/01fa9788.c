/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa9788; name: FUN_01fa9788
 */


void FUN_01fa9788(long *param_1,long param_2,undefined1 *param_3)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  void *pvVar9;
  int *piVar10;
  uint *puVar11;
  undefined1 *puVar12;
  long lVar13;
  ushort *puVar14;
  ulong uVar15;
  int *piVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  int *local_70;
  undefined8 uStack_68;
  
  if ((*(long *)(param_2 + 0x1650) != 0) &&
     (lVar8 = FUN_01289558(*(long *)(param_2 + 0x1650) + 0x108,&local_98), lVar8 != 0)) {
    if (*(char *)(lVar8 + 0x11a) == '\0') {
      local_70 = (int *)0x0;
      uStack_68 = 0;
      local_78 = 0;
    }
    else {
      local_78 = *(undefined8 *)(lVar8 + 0x120);
      local_70 = *(int **)(lVar8 + 0x128);
      uStack_68 = *(undefined8 *)(lVar8 + 0x130);
      if (local_70 != (int *)0x0) {
        if ((*(ushort *)((long)local_70 - (long)*local_70) < 7) ||
           (uVar15 = (ulong)((ushort *)((long)local_70 - (long)*local_70))[3], uVar15 == 0)) {
          puVar11 = (uint *)0x0;
        }
        else {
          puVar11 = (uint *)((long)local_70 + uVar15);
          puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        }
        local_98 = "values";
        pvVar9 = bsearch(&local_98,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
        puVar7 = PTR_LAB_047d5600;
        if (pvVar9 != (void *)0x0) {
          iVar18 = 0;
          while( true ) {
            local_98 = &DAT_fbec41851566601b;
            pcStack_90 = "values";
            local_88 = 6;
            local_80 = (long *)0x0;
            piVar10 = (int *)FUN_00efa07c(&local_78,&local_98);
            if (piVar10 == (int *)0x0) {
              iVar19 = 0;
            }
            else {
              iVar19 = *piVar10;
            }
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x20))();
            }
            if (iVar19 <= iVar18) break;
            local_98 = &DAT_fbec41851566601b;
            pcStack_90 = "values";
            local_88 = 6;
            local_80 = (long *)0x0;
            FUN_00e90ee0(param_1,&local_78,&local_98,iVar18);
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x20))();
            }
            piVar10 = (int *)param_1[1];
            if (piVar10 != (int *)0x0) {
              if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 7) ||
                 (uVar15 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar15 == 0)) {
                puVar11 = (uint *)0x0;
              }
              else {
                puVar11 = (uint *)((long)piVar10 + uVar15);
                puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
              }
              local_98 = "table_name";
              pvVar9 = bsearch(&local_98,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)puVar7);
              if (pvVar9 != (void *)0x0) {
                piVar10 = (int *)param_1[1];
                if (((piVar10 == (int *)0x0) || (*(ushort *)((long)piVar10 - (long)*piVar10) < 7))
                   || (uVar15 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar15 == 0)
                   ) {
LAB_01fa9a00:
                  puVar12 = (undefined1 *)0x0;
                }
                else {
                  puVar11 = (uint *)((long)piVar10 + uVar15);
                  local_98 = "table_name";
                  puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
                  puVar11 = bsearch(&local_98,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)puVar7);
                  puVar12 = (undefined1 *)0x0;
                  if ((puVar11 != (uint *)0x0) && (puVar12 = (undefined1 *)0x0, *param_1 != 0)) {
                    piVar10 = (int *)((long)puVar11 + (ulong)*puVar11);
                    puVar14 = (ushort *)((long)piVar10 - (long)*piVar10);
                    if (*puVar14 < 7) {
                      piVar16 = (int *)0x0;
                    }
                    else {
                      piVar16 = (int *)0x0;
                      if ((ulong)puVar14[3] != 0) {
                        puVar11 = (uint *)((long)piVar10 + (ulong)puVar14[3]);
                        piVar16 = (int *)((long)puVar11 + (ulong)*puVar11);
                      }
                    }
                    if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
                       (uVar15 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar15 == 0
                       )) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = (long)*(char *)((long)piVar16 + uVar15) & 0xffffffff;
                    }
                    if (*(long *)(PTR_DAT_047d5608 + uVar15 * 8) == 8) {
                      puVar12 = (undefined1 *)FUN_015efc20();
                    }
                    else {
                      if ((*puVar14 < 0xd) || ((ulong)puVar14[6] == 0)) goto LAB_01fa9a00;
                      puVar12 = *(undefined1 **)((long)piVar10 + (ulong)puVar14[6]);
                    }
                  }
                }
                puVar6 = param_3;
                if (param_3 == &DAT_cbf29ce484222645) {
                  puVar6 = &DAT_afc4d6c05abef19e;
                }
                if (puVar12 == puVar6) {
                  return;
                }
              }
            }
            iVar18 = iVar18 + 1;
          }
        }
      }
    }
  }
  lVar8 = *(long *)(param_2 + 0x1688);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar17 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar17) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01fa9ad8;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01fa9ad8:
        bVar5 = false;
      }
      if (bVar5) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          lVar13 = FUN_01289558(lVar8 + 0xe0,&local_98);
          if (lVar13 == 0) goto LAB_01fa9dbc;
          if (*(char *)(lVar13 + 0x11a) == '\0') {
            local_70 = (int *)0x0;
            uStack_68 = 0;
            local_78 = 0;
            goto LAB_01fa9dbc;
          }
          local_78 = *(undefined8 *)(lVar13 + 0x120);
          local_70 = *(int **)(lVar13 + 0x128);
          uStack_68 = *(undefined8 *)(lVar13 + 0x130);
          if (local_70 == (int *)0x0) goto LAB_01fa9dbc;
          if ((*(ushort *)((long)local_70 - (long)*local_70) < 7) ||
             (uVar15 = (ulong)((ushort *)((long)local_70 - (long)*local_70))[3], uVar15 == 0)) {
            puVar11 = (uint *)0x0;
          }
          else {
            puVar11 = (uint *)((long)local_70 + uVar15);
            puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
          }
          local_98 = "values";
          pvVar9 = bsearch(&local_98,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
          puVar7 = PTR_LAB_047d5600;
          if (pvVar9 == (void *)0x0) goto LAB_01fa9dbc;
          iVar18 = 0;
          goto LAB_01fa9ba0;
        }
        break;
      }
      sVar17 = sVar2;
    } while (sVar2 != 0);
  }
  goto LAB_01fa9a7c;
LAB_01fa9ba0:
  local_98 = &DAT_fbec41851566601b;
  pcStack_90 = "values";
  local_88 = 6;
  local_80 = (long *)0x0;
  piVar10 = (int *)FUN_00efa07c(&local_78,&local_98);
  if (piVar10 == (int *)0x0) {
    iVar19 = 0;
  }
  else {
    iVar19 = *piVar10;
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (iVar19 <= iVar18) goto LAB_01fa9dbc;
  local_98 = &DAT_fbec41851566601b;
  pcStack_90 = "values";
  local_88 = 6;
  local_80 = (long *)0x0;
  FUN_00e90ee0(param_1,&local_78,&local_98,iVar18);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  piVar10 = (int *)param_1[1];
  if (piVar10 != (int *)0x0) {
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 7) ||
       (uVar15 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar15 == 0)) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = (uint *)((long)piVar10 + uVar15);
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    }
    local_98 = "table_name";
    pvVar9 = bsearch(&local_98,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)puVar7);
    if (pvVar9 != (void *)0x0) {
      piVar10 = (int *)param_1[1];
      if (((piVar10 == (int *)0x0) || (*(ushort *)((long)piVar10 - (long)*piVar10) < 7)) ||
         (uVar15 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar15 == 0)) {
LAB_01fa9d5c:
        puVar12 = (undefined1 *)0x0;
      }
      else {
        puVar11 = (uint *)((long)piVar10 + uVar15);
        local_98 = "table_name";
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        puVar11 = bsearch(&local_98,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)puVar7);
        puVar12 = (undefined1 *)0x0;
        if ((puVar11 != (uint *)0x0) && (puVar12 = (undefined1 *)0x0, *param_1 != 0)) {
          piVar10 = (int *)((long)puVar11 + (ulong)*puVar11);
          puVar14 = (ushort *)((long)piVar10 - (long)*piVar10);
          if (*puVar14 < 7) {
            piVar16 = (int *)0x0;
          }
          else {
            piVar16 = (int *)0x0;
            if ((ulong)puVar14[3] != 0) {
              puVar11 = (uint *)((long)piVar10 + (ulong)puVar14[3]);
              piVar16 = (int *)((long)puVar11 + (ulong)*puVar11);
            }
          }
          if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
             (uVar15 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar15 == 0)) {
            uVar15 = 0;
          }
          else {
            uVar15 = (long)*(char *)((long)piVar16 + uVar15) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar15 * 8) == 8) {
            puVar12 = (undefined1 *)FUN_015efc20();
          }
          else {
            if ((*puVar14 < 0xd) || ((ulong)puVar14[6] == 0)) goto LAB_01fa9d5c;
            puVar12 = *(undefined1 **)((long)piVar10 + (ulong)puVar14[6]);
          }
        }
      }
      puVar6 = param_3;
      if (param_3 == &DAT_cbf29ce484222645) {
        puVar6 = &DAT_afc4d6c05abef19e;
      }
      if (puVar12 == puVar6) goto LAB_01fa9d9c;
    }
  }
  iVar18 = iVar18 + 1;
  goto LAB_01fa9ba0;
LAB_01fa9dbc:
  bVar5 = true;
  goto LAB_01fa9dc0;
LAB_01fa9d9c:
  bVar5 = false;
LAB_01fa9dc0:
  lVar13 = *(long *)(lVar8 + 8);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar17 = *psVar1;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar3) {
      *psVar1 = sVar17 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar17 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))();
  }
  else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (bVar5) {
LAB_01fa9a7c:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}


