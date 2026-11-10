/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fc7c00; name: FUN_00fc7c00
 */


void FUN_00fc7c00(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint *puVar3;
  int *piVar4;
  ulong uVar5;
  ushort *puVar6;
  int *piVar7;
  char *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  piVar4 = *(int **)(param_2 + 8);
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_70 = "FavoriteActionList";
    puVar3 = bsearch(&local_70,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 != (uint *)0x0) {
      piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar6 = (ushort *)((long)piVar4 - (long)*piVar4);
      if (*puVar6 < 7) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)0x0;
        if ((ulong)puVar6[3] != 0) {
          puVar3 = (uint *)((long)piVar4 + (ulong)puVar6[3]);
          piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if (((4 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
          (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 != 0)) &&
         (*(char *)((long)piVar7 + uVar5) == '\x11')) {
        piVar4 = (int *)((long)((long)piVar4 + (ulong)puVar6[3]) +
                        (ulong)*(uint *)((long)piVar4 + (ulong)puVar6[3]));
        if ((10 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
           (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar5 != 0)) {
          uVar1 = *(ushort *)((long)piVar4 + uVar5);
          if ((ulong)uVar1 != 0) {
            local_70 = (char *)0x3563004ad7cc2b7f;
            pcStack_68 = "FavoriteActionList";
            local_60 = 0x12;
            local_58 = (long *)0x0;
            uVar2 = FUN_00dbb83c(param_2,&local_70,0);
            *(undefined4 *)param_1 = uVar2;
            if (local_58 != (long *)0x0) {
              (**(code **)(*local_58 + 0x20))();
            }
            if (uVar1 != 1) {
              local_70 = (char *)0x3563004ad7cc2b7f;
              pcStack_68 = "FavoriteActionList";
              local_60 = 0x12;
              local_58 = (long *)0x0;
              uVar2 = FUN_00dbb83c(param_2,&local_70,1);
              *(undefined4 *)((long)param_1 + 4) = uVar2;
              if (local_58 != (long *)0x0) {
                (**(code **)(*local_58 + 0x20))();
              }
              if (uVar1 != 2) {
                local_70 = (char *)0x3563004ad7cc2b7f;
                pcStack_68 = "FavoriteActionList";
                local_60 = 0x12;
                local_58 = (long *)0x0;
                uVar2 = FUN_00dbb83c(param_2,&local_70,2);
                *(undefined4 *)(param_1 + 1) = uVar2;
                if (local_58 != (long *)0x0) {
                  (**(code **)(*local_58 + 0x20))();
                }
                if (uVar1 != 3) {
                  local_70 = (char *)0x3563004ad7cc2b7f;
                  pcStack_68 = "FavoriteActionList";
                  local_60 = 0x12;
                  local_58 = (long *)0x0;
                  uVar2 = FUN_00dbb83c(param_2,&local_70,3);
                  *(undefined4 *)((long)param_1 + 0xc) = uVar2;
                  if (local_58 != (long *)0x0) {
                    (**(code **)(*local_58 + 0x20))();
                  }
                  if (uVar1 != 4) {
                    local_70 = (char *)0x3563004ad7cc2b7f;
                    pcStack_68 = "FavoriteActionList";
                    local_60 = 0x12;
                    local_58 = (long *)0x0;
                    uVar2 = FUN_00dbb83c(param_2,&local_70,4);
                    *(undefined4 *)(param_1 + 2) = uVar2;
                    if (local_58 != (long *)0x0) {
                      (**(code **)(*local_58 + 0x20))();
                    }
                    if (uVar1 != 5) {
                      local_70 = (char *)0x3563004ad7cc2b7f;
                      pcStack_68 = "FavoriteActionList";
                      local_60 = 0x12;
                      local_58 = (long *)0x0;
                      uVar2 = FUN_00dbb83c(param_2,&local_70,5);
                      *(undefined4 *)((long)param_1 + 0x14) = uVar2;
                      if (local_58 != (long *)0x0) {
                        (**(code **)(*local_58 + 0x20))();
                      }
                      if (uVar1 != 6) {
                        uVar5 = 6;
                        do {
                          local_70 = (char *)0x3563004ad7cc2b7f;
                          pcStack_68 = "FavoriteActionList";
                          local_60 = 0x12;
                          local_58 = (long *)0x0;
                          uVar2 = FUN_00dbb83c(param_2,&local_70,uVar5 & 0xffffffff);
                          *(undefined4 *)((long)param_1 + uVar5 * 4) = uVar2;
                          if (local_58 != (long *)0x0) {
                            (**(code **)(*local_58 + 0x20))();
                          }
                          uVar5 = uVar5 + 1;
                        } while (uVar1 != uVar5);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


