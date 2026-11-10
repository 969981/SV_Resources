/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fab5e4; name: FUN_01fab5e4
 */


void FUN_01fab5e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5
                 )

{
  int *piVar1;
  ushort uVar2;
  undefined *__compar;
  void *pvVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  ushort *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_98 [8];
  int *local_90;
  char *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  piVar5 = *(int **)(param_5 + 8);
  if (piVar5 != (int *)0x0) {
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
       (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar7 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)piVar5 + uVar7);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_80 = "values";
    pvVar3 = bsearch(&local_80,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (pvVar3 != (void *)0x0) {
      local_80 = &DAT_fbec41851566601b;
      pcStack_78 = "values";
      local_70 = 6;
      local_68 = (long *)0x0;
      piVar5 = (int *)FUN_00efa07c(param_5,&local_80);
      if (piVar5 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar5;
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      __compar = PTR_LAB_047d5600;
      if (0 < iVar12) {
        iVar11 = 0;
        do {
          local_80 = &DAT_fbec41851566601b;
          pcStack_78 = "values";
          local_70 = 6;
          local_68 = (long *)0x0;
          FUN_00e90ee0(auStack_98,param_5,&local_80,iVar11);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if (local_90 != (int *)0x0) {
            if ((*(ushort *)((long)local_90 - (long)*local_90) < 7) ||
               (uVar7 = (ulong)((ushort *)((long)local_90 - (long)*local_90))[3], uVar7 == 0)) {
              puVar4 = (uint *)0x0;
            }
            else {
              puVar4 = (uint *)((long)local_90 + uVar7);
              puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
            }
            local_80 = "raidEnemyInfo";
            pvVar3 = bsearch(&local_80,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
            if (pvVar3 != (void *)0x0) {
              local_80 = (char *)0x327f0cb5e5b3025b;
              pcStack_78 = "raidEnemyInfo";
              local_70 = 0xd;
              local_68 = (long *)0x0;
              FUN_00d996a8(param_1,auStack_98,&local_80);
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              piVar5 = (int *)param_1[1];
              if ((piVar5 == (int *)0x0) || (*(ushort *)((long)piVar5 - (long)*piVar5) < 7))
              goto LAB_01fab8a0;
              uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
              iVar6 = 0;
              if (uVar7 != 0) {
                puVar4 = (uint *)((long)piVar5 + uVar7);
                puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
                local_80 = "no";
                puVar4 = bsearch(&local_80,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
                if ((puVar4 != (uint *)0x0) && (piVar5 = (int *)*param_1, piVar5 != (int *)0x0)) {
                  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
                  puVar8 = (ushort *)((long)piVar1 - (long)*piVar1);
                  uVar2 = *puVar8;
                  if (uVar2 < 7) {
                    piVar10 = (int *)0x0;
                  }
                  else {
                    piVar10 = (int *)0x0;
                    if ((ulong)puVar8[3] != 0) {
                      puVar4 = (uint *)((long)piVar1 + (ulong)puVar8[3]);
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
                    if (uVar2 < 0xb) {
                      uVar9 = 0;
LAB_01fab8cc:
                      iVar6 = 0;
                    }
                    else {
                      uVar9 = 0;
                      if ((ulong)puVar8[5] != 0) {
                        uVar9 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar8[5]);
                      }
                      if ((uVar2 < 0xd) || ((ulong)puVar8[6] == 0)) goto LAB_01fab8cc;
                      iVar6 = *(int *)((long)piVar1 + (ulong)puVar8[6]);
                    }
                    if ((uVar9 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
                       (uVar7 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar9),
                       uVar7 != 0)) {
                      iVar6 = *(int *)((long)piVar5 + uVar7);
                    }
                    goto LAB_01fab870;
                  }
                  if ((0xc < uVar2) && ((ulong)puVar8[6] != 0)) {
                    iVar6 = *(int *)((long)piVar1 + (ulong)puVar8[6]);
                    goto LAB_01fab870;
                  }
                }
LAB_01fab8a0:
                iVar6 = 0;
              }
LAB_01fab870:
              if (iVar6 == param_4) {
                return;
              }
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar12 != iVar11);
      }
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


