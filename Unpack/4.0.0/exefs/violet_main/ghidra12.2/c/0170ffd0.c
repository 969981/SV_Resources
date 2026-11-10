/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0170ffd0; name: FUN_0170ffd0
 */


void FUN_0170ffd0(undefined8 *param_1,long *param_2,ulong param_3,int param_4)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  void *pvVar5;
  uint *puVar6;
  long lVar7;
  ushort uVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  ushort *puVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  long *plVar18;
  int *local_88;
  int *local_80;
  char *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  char *local_38;
  
  plVar18 = param_2 + 1;
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01712c04;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "setRandSeed";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    local_70 = (char *)0x2acb2b6e9c753ba1;
    pcStack_68 = "setRandSeed";
    local_60 = 0xb;
    local_58 = (long *)0x0;
    uVar11 = FUN_00cf7518(param_2,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if ((uVar11 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      piVar9 = (int *)*plVar18;
      if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
         (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
LAB_017128a8:
        uVar10 = 0;
      }
      else {
        puVar6 = (uint *)((long)piVar9 + uVar11);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        local_70 = "randSeed";
        puVar6 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
        uVar10 = 0;
        if ((puVar6 != (uint *)0x0) && (uVar10 = 0, *param_2 != 0)) {
          piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
          puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
          if (*puVar12 < 7) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = (int *)0x0;
            if ((ulong)puVar12[3] != 0) {
              puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
              piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
            }
          }
          if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
             (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 8) {
            uVar10 = FUN_015efc20();
          }
          else {
            if ((*puVar12 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_017128a8;
            uVar10 = *(undefined8 *)((long)piVar9 + (ulong)puVar12[6]);
          }
        }
      }
      *param_1 = uVar10;
    }
  }
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01712c04;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "setPersonalRand";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    local_70 = (char *)0x821d0da4684b2024;
    pcStack_68 = "setPersonalRand";
    local_60 = 0xf;
    local_58 = (long *)0x0;
    uVar11 = FUN_00cf7518(param_2,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if ((uVar11 & 1) != 0) {
      piVar9 = (int *)*plVar18;
      if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
         (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
LAB_017128b0:
        uVar10 = 0;
      }
      else {
        puVar6 = (uint *)((long)piVar9 + uVar11);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        local_70 = "personalRand";
        puVar6 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
        uVar10 = 0;
        if ((puVar6 != (uint *)0x0) && (uVar10 = 0, *param_2 != 0)) {
          piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
          puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
          if (*puVar12 < 7) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = (int *)0x0;
            if ((ulong)puVar12[3] != 0) {
              puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
              piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
            }
          }
          if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
             (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 8) {
            uVar10 = FUN_015efc20();
          }
          else {
            if ((*puVar12 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_017128b0;
            uVar10 = *(undefined8 *)((long)piVar9 + (ulong)puVar12[6]);
          }
        }
      }
      param_1[2] = uVar10;
    }
  }
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01712c04;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "rareType";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    local_70 = (char *)0x8b234e727eb8a7d5;
    pcStack_68 = "rareType";
    local_60 = 8;
    local_58 = (long *)0x0;
    piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
    if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
       (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)((long)piVar9 + uVar11);
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (iVar17 == 0) {
      uVar10 = 0x3ffffffff;
    }
    else if (iVar17 == 1) {
      uVar10 = 0x1ffffffff;
    }
    else {
      if (iVar17 != 2) goto LAB_01710168;
      uVar10 = 0x2ffffffff;
    }
    param_1[3] = uVar10;
  }
LAB_01710168:
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) {
LAB_01712c04:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","SetupInitialSpec",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/pokemon/poke_tool/pokepara_make.cpp"
               ,0x54);
  }
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "devId";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 == (void *)0x0) goto LAB_01712c04;
  local_70 = (char *)0x78d4e1e2a4e8a731;
  pcStack_68 = "devId";
  local_60 = 5;
  local_58 = (long *)0x0;
  piVar9 = (int *)FUN_00d5a5a8(param_2,&local_70);
  if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
    uVar8 = 0;
  }
  else {
    uVar8 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
    if ((ulong)uVar8 != 0) {
      uVar8 = *(ushort *)((long)piVar9 + (ulong)uVar8);
    }
  }
  *(ushort *)(param_1 + 5) = uVar8;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "formId";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    local_70 = (char *)0x42b42644edb5736a;
    pcStack_68 = "formId";
    local_60 = 6;
    local_58 = (long *)0x0;
    uVar4 = FUN_00d928d0(param_2,&local_70);
    *(undefined2 *)((long)param_1 + 0x2a) = uVar4;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "item";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    local_70 = (char *)0xf11db8bc397f5c46;
    pcStack_68 = "item";
    local_60 = 4;
    local_58 = (long *)0x0;
    piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
    if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
      uVar8 = 0;
    }
    else {
      uVar8 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
      if ((ulong)uVar8 != 0) {
        uVar8 = *(ushort *)((long)piVar9 + (ulong)uVar8);
      }
    }
    *(ushort *)((long)param_1 + 0x2c) = uVar8;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "level";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    piVar9 = (int *)*plVar18;
    if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7))
    goto LAB_01712a7c;
    uVar8 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
    if ((ulong)uVar8 != 0) {
      puVar6 = (uint *)((long)piVar9 + (ulong)uVar8);
      local_70 = "level";
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      puVar6 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar6 != (uint *)0x0) && (piVar9 = (int *)*param_2, piVar9 != (int *)0x0)) {
        piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
        puVar12 = (ushort *)((long)piVar13 - (long)*piVar13);
        uVar8 = *puVar12;
        if (uVar8 < 7) {
          piVar15 = (int *)0x0;
        }
        else {
          piVar15 = (int *)0x0;
          if ((ulong)puVar12[3] != 0) {
            puVar6 = (uint *)((long)piVar13 + (ulong)puVar12[3]);
            piVar15 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
        }
        if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
           (uVar11 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar11 == 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = (long)*(char *)((long)piVar15 + uVar11) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
          if (uVar8 < 0xb) {
            uVar14 = 0;
LAB_01710c44:
            uVar8 = 0;
          }
          else {
            uVar14 = 0;
            if ((ulong)puVar12[5] != 0) {
              uVar14 = (uint)*(ushort *)((long)piVar13 + (ulong)puVar12[5]);
            }
            if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_01710c44;
            uVar8 = (ushort)*(undefined4 *)((long)piVar13 + (ulong)puVar12[6]);
          }
          if ((uVar14 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
             (uVar11 = (ulong)*(ushort *)(((long)piVar9 - (long)*piVar9) + (ulong)uVar14),
             uVar11 != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + uVar11);
          }
          goto LAB_0171045c;
        }
        if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
          uVar8 = (ushort)*(undefined4 *)((long)piVar13 + (ulong)puVar12[6]);
          goto LAB_0171045c;
        }
      }
LAB_01712a7c:
      uVar8 = 0;
    }
LAB_0171045c:
    *(ushort *)((long)param_1 + 0x2e) = uVar8;
  }
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "sex";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    local_70 = (char *)0x68a3732777251727;
    pcStack_68 = "sex";
    local_60 = 3;
    local_58 = (long *)0x0;
    piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
    if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
       (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)((long)piVar9 + uVar11);
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (iVar17 == 0) {
      if ((param_3 & 1) == 0) {
        uVar8 = 0xff;
      }
      else {
        bVar2 = FUN_01712c64(*(undefined2 *)(param_1 + 5),*(undefined2 *)((long)param_1 + 0x2a));
        cVar3 = FUN_00f51268(*(undefined2 *)(param_1 + 5),*(undefined2 *)((long)param_1 + 0x2a));
        *(undefined2 *)(param_1 + 6) = 0;
        if (cVar3 == '\x01') goto LAB_01711d1c;
        if (cVar3 != '\x02') {
          if (bVar2 != 0x32) {
            uVar8 = (ushort)((uint)((int)param_1[2] + (int)((ulong)param_1[2] / 100) * -100) <=
                            (uint)bVar2);
            goto LAB_01710518;
          }
          if (param_4 != 2) goto LAB_01711d1c;
        }
LAB_01711e60:
        uVar8 = 1;
      }
LAB_01710518:
      *(ushort *)(param_1 + 6) = uVar8;
    }
    else if (iVar17 == 1) {
LAB_01711d1c:
      *(undefined2 *)(param_1 + 6) = 0;
    }
    else if (iVar17 == 2) goto LAB_01711e60;
  }
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "seikaku";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    local_70 = (char *)0xc9fd8204968a4108;
    pcStack_68 = "seikaku";
    local_60 = 7;
    local_58 = (long *)0x0;
    piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
    if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
       (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)((long)piVar9 + uVar11);
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (iVar17 != 0) {
      local_70 = (char *)0xc9fd8204968a4108;
      pcStack_68 = "seikaku";
      local_60 = 7;
      local_58 = (long *)0x0;
      piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
      if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
        uVar8 = 0;
      }
      else {
        uVar8 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
        if ((ulong)uVar8 != 0) {
          uVar8 = *(ushort *)((long)piVar9 + (ulong)uVar8);
        }
      }
      *(ushort *)((long)param_1 + 0x32) = uVar8 - 1;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "seikakuHosei";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    local_70 = (char *)0xdf906c93397d70bc;
    pcStack_68 = "seikakuHosei";
    local_60 = 0xc;
    local_58 = (long *)0x0;
    piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
    if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
       (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)((long)piVar9 + uVar11);
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (iVar17 != 0) {
      local_70 = (char *)0xdf906c93397d70bc;
      pcStack_68 = "seikakuHosei";
      local_60 = 0xc;
      local_58 = (long *)0x0;
      piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
      if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) {
        uVar8 = 0;
      }
      else {
        uVar8 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
        if ((ulong)uVar8 != 0) {
          uVar8 = *(ushort *)((long)piVar9 + (ulong)uVar8);
        }
      }
      *(ushort *)((long)param_1 + 0x34) = uVar8 - 1;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "tokuseiIndex";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 == (void *)0x0) goto switchD_01711f4c_default;
  local_70 = (char *)0x98564ad988952b55;
  pcStack_68 = "tokuseiIndex";
  local_60 = 0xc;
  local_58 = (long *)0x0;
  piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
  if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    iVar17 = 0;
  }
  else {
    iVar17 = *(int *)((long)piVar9 + uVar11);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (iVar17 == 0) {
    uVar1 = 0xff;
    goto LAB_01710680;
  }
  switch(iVar17) {
  case 1:
    uVar1 = 0xfe;
    break;
  case 2:
    *(undefined1 *)((long)param_1 + 0x36) = 0;
    goto switchD_01711f4c_default;
  case 3:
    uVar1 = 1;
    break;
  case 4:
    uVar1 = 2;
    break;
  default:
    goto switchD_01711f4c_default;
  }
LAB_01710680:
  *(undefined1 *)((long)param_1 + 0x36) = uVar1;
switchD_01711f4c_default:
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "tokusei";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    local_70 = (char *)0x467eeba702f14ef;
    pcStack_68 = "tokusei";
    local_60 = 7;
    local_58 = (long *)0x0;
    piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
    if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
       (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)((long)piVar9 + uVar11);
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (iVar17 == 2) {
      *(undefined1 *)((long)param_1 + 0x36) = 0;
    }
    else {
      switch(iVar17) {
      case 0:
        uVar1 = 0xff;
        break;
      case 1:
        uVar1 = 0xfe;
        break;
      default:
        goto switchD_01711e48_caseD_2;
      case 3:
        uVar1 = 1;
        break;
      case 4:
        uVar1 = 2;
      }
      *(undefined1 *)((long)param_1 + 0x36) = uVar1;
    }
  }
switchD_01711e48_caseD_2:
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "rareTryCount";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    piVar9 = (int *)*plVar18;
    if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7))
    goto LAB_01712c3c;
    uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
    uVar1 = 0;
    if (uVar11 != 0) {
      puVar6 = (uint *)((long)piVar9 + uVar11);
      local_70 = "rareTryCount";
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      puVar6 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar6 != (uint *)0x0) && (piVar9 = (int *)*param_2, piVar9 != (int *)0x0)) {
        piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
        puVar12 = (ushort *)((long)piVar13 - (long)*piVar13);
        uVar8 = *puVar12;
        if (uVar8 < 7) {
          piVar15 = (int *)0x0;
        }
        else {
          piVar15 = (int *)0x0;
          if ((ulong)puVar12[3] != 0) {
            puVar6 = (uint *)((long)piVar13 + (ulong)puVar12[3]);
            piVar15 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
        }
        if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
           (uVar11 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar11 == 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = (long)*(char *)((long)piVar15 + uVar11) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
          if (uVar8 < 0xb) {
            uVar14 = 0;
LAB_01712a18:
            uVar1 = 0;
          }
          else {
            uVar14 = 0;
            if ((ulong)puVar12[5] != 0) {
              uVar14 = (uint)*(ushort *)((long)piVar13 + (ulong)puVar12[5]);
            }
            if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_01712a18;
            uVar1 = (undefined1)*(undefined4 *)((long)piVar13 + (ulong)puVar12[6]);
          }
          if ((uVar14 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
             (uVar11 = (ulong)*(ushort *)(((long)piVar9 - (long)*piVar9) + (ulong)uVar14),
             uVar11 != 0)) {
            uVar1 = (undefined1)*(undefined4 *)((long)piVar9 + uVar11);
          }
          goto LAB_0171253c;
        }
        if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
          uVar1 = (undefined1)*(undefined4 *)((long)piVar13 + (ulong)puVar12[6]);
          goto LAB_0171253c;
        }
      }
LAB_01712c3c:
      uVar1 = 0;
    }
LAB_0171253c:
    *(undefined1 *)((long)param_1 + 0x37) = uVar1;
  }
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "talentType";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    local_70 = (char *)0xb180f10f4e515f93;
    pcStack_68 = "talentType";
    local_60 = 10;
    local_58 = (long *)0x0;
    piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
    if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
       (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)((long)piVar9 + uVar11);
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (iVar17 == 2) {
      local_60 = 0xb;
      local_58 = (long *)0x0;
      local_70 = (char *)0xf541a6569e8aed88;
      pcStack_68 = "talentValue";
      FUN_00d996a8(&local_88,param_2,&local_70);
      if ((local_80 == (int *)0x0) || (*(ushort *)((long)local_80 - (long)*local_80) < 7))
      goto LAB_01712b5c;
      uVar8 = ((ushort *)((long)local_80 - (long)*local_80))[3];
      if ((ulong)uVar8 != 0) {
        puVar6 = (uint *)((long)local_80 + (ulong)uVar8);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        local_38 = "hp";
        puVar6 = bsearch(&local_38,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar6 != (uint *)0x0) && (local_88 != (int *)0x0)) {
          piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
          puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
          uVar8 = *puVar12;
          if (uVar8 < 7) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = (int *)0x0;
            if ((ulong)puVar12[3] != 0) {
              puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
              piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
            }
          }
          if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
             (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
            if (uVar8 < 0xb) {
              uVar14 = 0;
LAB_0171214c:
              uVar8 = 0;
            }
            else {
              uVar14 = 0;
              if ((ulong)puVar12[5] != 0) {
                uVar14 = (uint)*(ushort *)((long)piVar9 + (ulong)puVar12[5]);
              }
              if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_0171214c;
              uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
            }
            if ((uVar14 < *(ushort *)((long)local_88 - (long)*local_88)) &&
               (uVar11 = (ulong)*(ushort *)(((long)local_88 - (long)*local_88) + (ulong)uVar14),
               uVar11 != 0)) {
              uVar8 = (ushort)*(undefined4 *)((long)local_88 + uVar11);
            }
            goto LAB_01711690;
          }
          if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
            goto LAB_01711690;
          }
        }
LAB_01712b5c:
        uVar8 = 0;
      }
LAB_01711690:
      *(ushort *)(param_1 + 7) = uVar8;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_60 = 0xb;
      local_58 = (long *)0x0;
      local_70 = (char *)0xf541a6569e8aed88;
      pcStack_68 = "talentValue";
      FUN_00d996a8(&local_88,param_2,&local_70);
      if ((local_80 == (int *)0x0) || (*(ushort *)((long)local_80 - (long)*local_80) < 7))
      goto LAB_01712b7c;
      uVar8 = ((ushort *)((long)local_80 - (long)*local_80))[3];
      if ((ulong)uVar8 != 0) {
        puVar6 = (uint *)((long)local_80 + (ulong)uVar8);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        local_38 = "atk";
        puVar6 = bsearch(&local_38,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar6 != (uint *)0x0) && (local_88 != (int *)0x0)) {
          piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
          puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
          uVar8 = *puVar12;
          if (uVar8 < 7) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = (int *)0x0;
            if ((ulong)puVar12[3] != 0) {
              puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
              piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
            }
          }
          if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
             (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
            if (uVar8 < 0xb) {
              uVar14 = 0;
LAB_01712158:
              uVar8 = 0;
            }
            else {
              uVar14 = 0;
              if ((ulong)puVar12[5] != 0) {
                uVar14 = (uint)*(ushort *)((long)piVar9 + (ulong)puVar12[5]);
              }
              if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_01712158;
              uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
            }
            if ((uVar14 < *(ushort *)((long)local_88 - (long)*local_88)) &&
               (uVar11 = (ulong)*(ushort *)(((long)local_88 - (long)*local_88) + (ulong)uVar14),
               uVar11 != 0)) {
              uVar8 = (ushort)*(undefined4 *)((long)local_88 + uVar11);
            }
            goto LAB_017117c8;
          }
          if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
            goto LAB_017117c8;
          }
        }
LAB_01712b7c:
        uVar8 = 0;
      }
LAB_017117c8:
      *(ushort *)((long)param_1 + 0x3a) = uVar8;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_60 = 0xb;
      local_58 = (long *)0x0;
      local_70 = (char *)0xf541a6569e8aed88;
      pcStack_68 = "talentValue";
      FUN_00d996a8(&local_88,param_2,&local_70);
      if ((local_80 == (int *)0x0) || (*(ushort *)((long)local_80 - (long)*local_80) < 7))
      goto LAB_01712b9c;
      uVar8 = ((ushort *)((long)local_80 - (long)*local_80))[3];
      if ((ulong)uVar8 != 0) {
        puVar6 = (uint *)((long)local_80 + (ulong)uVar8);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        local_38 = "def";
        puVar6 = bsearch(&local_38,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar6 != (uint *)0x0) && (local_88 != (int *)0x0)) {
          piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
          puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
          uVar8 = *puVar12;
          if (uVar8 < 7) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = (int *)0x0;
            if ((ulong)puVar12[3] != 0) {
              puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
              piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
            }
          }
          if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
             (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
            if (uVar8 < 0xb) {
              uVar14 = 0;
LAB_01712164:
              uVar8 = 0;
            }
            else {
              uVar14 = 0;
              if ((ulong)puVar12[5] != 0) {
                uVar14 = (uint)*(ushort *)((long)piVar9 + (ulong)puVar12[5]);
              }
              if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_01712164;
              uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
            }
            if ((uVar14 < *(ushort *)((long)local_88 - (long)*local_88)) &&
               (uVar11 = (ulong)*(ushort *)(((long)local_88 - (long)*local_88) + (ulong)uVar14),
               uVar11 != 0)) {
              uVar8 = (ushort)*(undefined4 *)((long)local_88 + uVar11);
            }
            goto LAB_01711900;
          }
          if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
            goto LAB_01711900;
          }
        }
LAB_01712b9c:
        uVar8 = 0;
      }
LAB_01711900:
      *(ushort *)((long)param_1 + 0x3c) = uVar8;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_60 = 0xb;
      local_58 = (long *)0x0;
      local_70 = (char *)0xf541a6569e8aed88;
      pcStack_68 = "talentValue";
      FUN_00d996a8(&local_88,param_2,&local_70);
      if ((local_80 == (int *)0x0) || (*(ushort *)((long)local_80 - (long)*local_80) < 7))
      goto LAB_01712bbc;
      uVar8 = ((ushort *)((long)local_80 - (long)*local_80))[3];
      if ((ulong)uVar8 != 0) {
        puVar6 = (uint *)((long)local_80 + (ulong)uVar8);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        local_38 = "spAtk";
        puVar6 = bsearch(&local_38,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar6 != (uint *)0x0) && (local_88 != (int *)0x0)) {
          piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
          puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
          uVar8 = *puVar12;
          if (uVar8 < 7) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = (int *)0x0;
            if ((ulong)puVar12[3] != 0) {
              puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
              piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
            }
          }
          if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
             (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
            if (uVar8 < 0xb) {
              uVar14 = 0;
LAB_01712170:
              uVar8 = 0;
            }
            else {
              uVar14 = 0;
              if ((ulong)puVar12[5] != 0) {
                uVar14 = (uint)*(ushort *)((long)piVar9 + (ulong)puVar12[5]);
              }
              if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_01712170;
              uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
            }
            if ((uVar14 < *(ushort *)((long)local_88 - (long)*local_88)) &&
               (uVar11 = (ulong)*(ushort *)(((long)local_88 - (long)*local_88) + (ulong)uVar14),
               uVar11 != 0)) {
              uVar8 = (ushort)*(undefined4 *)((long)local_88 + uVar11);
            }
            goto LAB_01711a38;
          }
          if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
            goto LAB_01711a38;
          }
        }
LAB_01712bbc:
        uVar8 = 0;
      }
LAB_01711a38:
      *(ushort *)((long)param_1 + 0x3e) = uVar8;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_60 = 0xb;
      local_58 = (long *)0x0;
      local_70 = (char *)0xf541a6569e8aed88;
      pcStack_68 = "talentValue";
      FUN_00d996a8(&local_88,param_2,&local_70);
      if ((local_80 == (int *)0x0) || (*(ushort *)((long)local_80 - (long)*local_80) < 7))
      goto LAB_01712bdc;
      uVar8 = ((ushort *)((long)local_80 - (long)*local_80))[3];
      if ((ulong)uVar8 != 0) {
        puVar6 = (uint *)((long)local_80 + (ulong)uVar8);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        local_38 = "spDef";
        puVar6 = bsearch(&local_38,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar6 != (uint *)0x0) && (local_88 != (int *)0x0)) {
          piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
          puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
          uVar8 = *puVar12;
          if (uVar8 < 7) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = (int *)0x0;
            if ((ulong)puVar12[3] != 0) {
              puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
              piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
            }
          }
          if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
             (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
            if (uVar8 < 0xb) {
              uVar14 = 0;
LAB_0171217c:
              uVar8 = 0;
            }
            else {
              uVar14 = 0;
              if ((ulong)puVar12[5] != 0) {
                uVar14 = (uint)*(ushort *)((long)piVar9 + (ulong)puVar12[5]);
              }
              if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_0171217c;
              uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
            }
            if ((uVar14 < *(ushort *)((long)local_88 - (long)*local_88)) &&
               (uVar11 = (ulong)*(ushort *)(((long)local_88 - (long)*local_88) + (ulong)uVar14),
               uVar11 != 0)) {
              uVar8 = (ushort)*(undefined4 *)((long)local_88 + uVar11);
            }
            goto LAB_01711b70;
          }
          if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
            goto LAB_01711b70;
          }
        }
LAB_01712bdc:
        uVar8 = 0;
      }
LAB_01711b70:
      *(ushort *)(param_1 + 8) = uVar8;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_60 = 0xb;
      local_58 = (long *)0x0;
      local_70 = (char *)0xf541a6569e8aed88;
      pcStack_68 = "talentValue";
      FUN_00d996a8(&local_88,param_2,&local_70);
      if ((local_80 == (int *)0x0) || (*(ushort *)((long)local_80 - (long)*local_80) < 7))
      goto LAB_01712bfc;
      uVar8 = ((ushort *)((long)local_80 - (long)*local_80))[3];
      if ((ulong)uVar8 != 0) {
        puVar6 = (uint *)((long)local_80 + (ulong)uVar8);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        local_38 = "agi";
        puVar6 = bsearch(&local_38,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar6 != (uint *)0x0) && (local_88 != (int *)0x0)) {
          piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
          puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
          uVar8 = *puVar12;
          if (uVar8 < 7) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = (int *)0x0;
            if ((ulong)puVar12[3] != 0) {
              puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
              piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
            }
          }
          if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
             (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
            if (uVar8 < 0xb) {
              uVar14 = 0;
LAB_01712188:
              uVar8 = 0;
            }
            else {
              uVar14 = 0;
              if ((ulong)puVar12[5] != 0) {
                uVar14 = (uint)*(ushort *)((long)piVar9 + (ulong)puVar12[5]);
              }
              if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_01712188;
              uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
            }
            if ((uVar14 < *(ushort *)((long)local_88 - (long)*local_88)) &&
               (uVar11 = (ulong)*(ushort *)(((long)local_88 - (long)*local_88) + (ulong)uVar14),
               uVar11 != 0)) {
              uVar8 = (ushort)*(undefined4 *)((long)local_88 + uVar11);
            }
            goto LAB_01711ca8;
          }
          if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
            goto LAB_01711ca8;
          }
        }
LAB_01712bfc:
        uVar8 = 0;
      }
LAB_01711ca8:
      *(ushort *)((long)param_1 + 0x42) = uVar8;
    }
    else {
      if (iVar17 != 1) goto LAB_017107f0;
      piVar9 = (int *)*plVar18;
      if (piVar9 == (int *)0x0) {
LAB_01711d7c:
        local_70 = (char *)0x325d83fded7c5d55;
        pcStack_68 = "talentVNum";
      }
      else {
        if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
           (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
          puVar6 = (uint *)0x0;
        }
        else {
          puVar6 = (uint *)((long)piVar9 + uVar11);
          puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        }
        local_70 = "talentVnum";
        pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (pvVar5 == (void *)0x0) goto LAB_01711d7c;
        local_70 = (char *)0x1c5463fd4fc350f5;
        pcStack_68 = "talentVnum";
      }
      local_60 = 10;
      local_58 = (long *)0x0;
      uVar1 = FUN_00d5a2b4(param_2,&local_70);
      *(undefined1 *)((long)param_1 + 0x54) = uVar1;
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
LAB_017107f0:
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "effortValue";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    local_60 = 0xb;
    local_58 = (long *)0x0;
    local_70 = (char *)0xe97ea5f5f5db7c84;
    pcStack_68 = "effortValue";
    FUN_00d996a8(&local_88,param_2,&local_70);
    if ((local_80 == (int *)0x0) || (*(ushort *)((long)local_80 - (long)*local_80) < 7))
    goto LAB_01712a9c;
    uVar8 = ((ushort *)((long)local_80 - (long)*local_80))[3];
    if ((ulong)uVar8 != 0) {
      puVar6 = (uint *)((long)local_80 + (ulong)uVar8);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      local_38 = "hp";
      puVar6 = bsearch(&local_38,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar6 != (uint *)0x0) && (local_88 != (int *)0x0)) {
        piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
        puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
        uVar8 = *puVar12;
        if (uVar8 < 7) {
          piVar13 = (int *)0x0;
        }
        else {
          piVar13 = (int *)0x0;
          if ((ulong)puVar12[3] != 0) {
            puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
            piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
        }
        if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
           (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
          if (uVar8 < 0xb) {
            uVar14 = 0;
LAB_017120a4:
            uVar8 = 0;
          }
          else {
            uVar14 = 0;
            if ((ulong)puVar12[5] != 0) {
              uVar14 = (uint)*(ushort *)((long)piVar9 + (ulong)puVar12[5]);
            }
            if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_017120a4;
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
          }
          if ((uVar14 < *(ushort *)((long)local_88 - (long)*local_88)) &&
             (uVar11 = (ulong)*(ushort *)(((long)local_88 - (long)*local_88) + (ulong)uVar14),
             uVar11 != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)local_88 + uVar11);
          }
          goto LAB_01710f08;
        }
        if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
          uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
          goto LAB_01710f08;
        }
      }
LAB_01712a9c:
      uVar8 = 0;
    }
LAB_01710f08:
    *(ushort *)((long)param_1 + 0x44) = uVar8;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_60 = 0xb;
    local_58 = (long *)0x0;
    local_70 = (char *)0xe97ea5f5f5db7c84;
    pcStack_68 = "effortValue";
    FUN_00d996a8(&local_88,param_2,&local_70);
    if ((local_80 == (int *)0x0) || (*(ushort *)((long)local_80 - (long)*local_80) < 7))
    goto LAB_01712abc;
    uVar8 = ((ushort *)((long)local_80 - (long)*local_80))[3];
    if ((ulong)uVar8 != 0) {
      puVar6 = (uint *)((long)local_80 + (ulong)uVar8);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      local_38 = "atk";
      puVar6 = bsearch(&local_38,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar6 != (uint *)0x0) && (local_88 != (int *)0x0)) {
        piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
        puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
        uVar8 = *puVar12;
        if (uVar8 < 7) {
          piVar13 = (int *)0x0;
        }
        else {
          piVar13 = (int *)0x0;
          if ((ulong)puVar12[3] != 0) {
            puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
            piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
        }
        if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
           (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
          if (uVar8 < 0xb) {
            uVar14 = 0;
LAB_017120b0:
            uVar8 = 0;
          }
          else {
            uVar14 = 0;
            if ((ulong)puVar12[5] != 0) {
              uVar14 = (uint)*(ushort *)((long)piVar9 + (ulong)puVar12[5]);
            }
            if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_017120b0;
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
          }
          if ((uVar14 < *(ushort *)((long)local_88 - (long)*local_88)) &&
             (uVar11 = (ulong)*(ushort *)(((long)local_88 - (long)*local_88) + (ulong)uVar14),
             uVar11 != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)local_88 + uVar11);
          }
          goto LAB_01711040;
        }
        if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
          uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
          goto LAB_01711040;
        }
      }
LAB_01712abc:
      uVar8 = 0;
    }
LAB_01711040:
    *(ushort *)((long)param_1 + 0x46) = uVar8;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_60 = 0xb;
    local_58 = (long *)0x0;
    local_70 = (char *)0xe97ea5f5f5db7c84;
    pcStack_68 = "effortValue";
    FUN_00d996a8(&local_88,param_2,&local_70);
    if ((local_80 == (int *)0x0) || (*(ushort *)((long)local_80 - (long)*local_80) < 7))
    goto LAB_01712adc;
    uVar8 = ((ushort *)((long)local_80 - (long)*local_80))[3];
    if ((ulong)uVar8 != 0) {
      puVar6 = (uint *)((long)local_80 + (ulong)uVar8);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      local_38 = "def";
      puVar6 = bsearch(&local_38,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar6 != (uint *)0x0) && (local_88 != (int *)0x0)) {
        piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
        puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
        uVar8 = *puVar12;
        if (uVar8 < 7) {
          piVar13 = (int *)0x0;
        }
        else {
          piVar13 = (int *)0x0;
          if ((ulong)puVar12[3] != 0) {
            puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
            piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
        }
        if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
           (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
          if (uVar8 < 0xb) {
            uVar14 = 0;
LAB_017120bc:
            uVar8 = 0;
          }
          else {
            uVar14 = 0;
            if ((ulong)puVar12[5] != 0) {
              uVar14 = (uint)*(ushort *)((long)piVar9 + (ulong)puVar12[5]);
            }
            if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_017120bc;
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
          }
          if ((uVar14 < *(ushort *)((long)local_88 - (long)*local_88)) &&
             (uVar11 = (ulong)*(ushort *)(((long)local_88 - (long)*local_88) + (ulong)uVar14),
             uVar11 != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)local_88 + uVar11);
          }
          goto LAB_01711178;
        }
        if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
          uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
          goto LAB_01711178;
        }
      }
LAB_01712adc:
      uVar8 = 0;
    }
LAB_01711178:
    *(ushort *)(param_1 + 9) = uVar8;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_60 = 0xb;
    local_58 = (long *)0x0;
    local_70 = (char *)0xe97ea5f5f5db7c84;
    pcStack_68 = "effortValue";
    FUN_00d996a8(&local_88,param_2,&local_70);
    if ((local_80 == (int *)0x0) || (*(ushort *)((long)local_80 - (long)*local_80) < 7))
    goto LAB_01712afc;
    uVar8 = ((ushort *)((long)local_80 - (long)*local_80))[3];
    if ((ulong)uVar8 != 0) {
      puVar6 = (uint *)((long)local_80 + (ulong)uVar8);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      local_38 = "spAtk";
      puVar6 = bsearch(&local_38,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar6 != (uint *)0x0) && (local_88 != (int *)0x0)) {
        piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
        puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
        uVar8 = *puVar12;
        if (uVar8 < 7) {
          piVar13 = (int *)0x0;
        }
        else {
          piVar13 = (int *)0x0;
          if ((ulong)puVar12[3] != 0) {
            puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
            piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
        }
        if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
           (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
          if (uVar8 < 0xb) {
            uVar14 = 0;
LAB_017120c8:
            uVar8 = 0;
          }
          else {
            uVar14 = 0;
            if ((ulong)puVar12[5] != 0) {
              uVar14 = (uint)*(ushort *)((long)piVar9 + (ulong)puVar12[5]);
            }
            if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_017120c8;
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
          }
          if ((uVar14 < *(ushort *)((long)local_88 - (long)*local_88)) &&
             (uVar11 = (ulong)*(ushort *)(((long)local_88 - (long)*local_88) + (ulong)uVar14),
             uVar11 != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)local_88 + uVar11);
          }
          goto LAB_017112b0;
        }
        if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
          uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
          goto LAB_017112b0;
        }
      }
LAB_01712afc:
      uVar8 = 0;
    }
LAB_017112b0:
    *(ushort *)((long)param_1 + 0x4a) = uVar8;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_60 = 0xb;
    local_58 = (long *)0x0;
    local_70 = (char *)0xe97ea5f5f5db7c84;
    pcStack_68 = "effortValue";
    FUN_00d996a8(&local_88,param_2,&local_70);
    if ((local_80 == (int *)0x0) || (*(ushort *)((long)local_80 - (long)*local_80) < 7))
    goto LAB_01712b1c;
    uVar8 = ((ushort *)((long)local_80 - (long)*local_80))[3];
    if ((ulong)uVar8 != 0) {
      puVar6 = (uint *)((long)local_80 + (ulong)uVar8);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      local_38 = "spDef";
      puVar6 = bsearch(&local_38,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar6 != (uint *)0x0) && (local_88 != (int *)0x0)) {
        piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
        puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
        uVar8 = *puVar12;
        if (uVar8 < 7) {
          piVar13 = (int *)0x0;
        }
        else {
          piVar13 = (int *)0x0;
          if ((ulong)puVar12[3] != 0) {
            puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
            piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
        }
        if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
           (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
          if (uVar8 < 0xb) {
            uVar14 = 0;
LAB_017120d4:
            uVar8 = 0;
          }
          else {
            uVar14 = 0;
            if ((ulong)puVar12[5] != 0) {
              uVar14 = (uint)*(ushort *)((long)piVar9 + (ulong)puVar12[5]);
            }
            if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_017120d4;
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
          }
          if ((uVar14 < *(ushort *)((long)local_88 - (long)*local_88)) &&
             (uVar11 = (ulong)*(ushort *)(((long)local_88 - (long)*local_88) + (ulong)uVar14),
             uVar11 != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)local_88 + uVar11);
          }
          goto LAB_017113e8;
        }
        if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
          uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
          goto LAB_017113e8;
        }
      }
LAB_01712b1c:
      uVar8 = 0;
    }
LAB_017113e8:
    *(ushort *)((long)param_1 + 0x4c) = uVar8;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_60 = 0xb;
    local_58 = (long *)0x0;
    local_70 = (char *)0xe97ea5f5f5db7c84;
    pcStack_68 = "effortValue";
    FUN_00d996a8(&local_88,param_2,&local_70);
    if ((local_80 == (int *)0x0) || (*(ushort *)((long)local_80 - (long)*local_80) < 7))
    goto LAB_01712b3c;
    uVar8 = ((ushort *)((long)local_80 - (long)*local_80))[3];
    if ((ulong)uVar8 != 0) {
      puVar6 = (uint *)((long)local_80 + (ulong)uVar8);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      local_38 = "agi";
      puVar6 = bsearch(&local_38,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar6 != (uint *)0x0) && (local_88 != (int *)0x0)) {
        piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
        puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
        uVar8 = *puVar12;
        if (uVar8 < 7) {
          piVar13 = (int *)0x0;
        }
        else {
          piVar13 = (int *)0x0;
          if ((ulong)puVar12[3] != 0) {
            puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
            piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
        }
        if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
           (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
          if (uVar8 < 0xb) {
            uVar14 = 0;
LAB_017120e0:
            uVar8 = 0;
          }
          else {
            uVar14 = 0;
            if ((ulong)puVar12[5] != 0) {
              uVar14 = (uint)*(ushort *)((long)piVar9 + (ulong)puVar12[5]);
            }
            if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_017120e0;
            uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
          }
          if ((uVar14 < *(ushort *)((long)local_88 - (long)*local_88)) &&
             (uVar11 = (ulong)*(ushort *)(((long)local_88 - (long)*local_88) + (ulong)uVar14),
             uVar11 != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)local_88 + uVar11);
          }
          goto LAB_01711520;
        }
        if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
          uVar8 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)puVar12[6]);
          goto LAB_01711520;
        }
      }
LAB_01712b3c:
      uVar8 = 0;
    }
LAB_01711520:
    *(ushort *)((long)param_1 + 0x4e) = uVar8;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "friendship";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 != (void *)0x0) {
    piVar9 = (int *)*plVar18;
    if ((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7))
    goto LAB_01712c5c;
    uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
    uVar16 = 0;
    if (uVar11 != 0) {
      puVar6 = (uint *)((long)piVar9 + uVar11);
      local_70 = "friendship";
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      puVar6 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar6 != (uint *)0x0) && (piVar9 = (int *)*param_2, piVar9 != (int *)0x0)) {
        piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
        puVar12 = (ushort *)((long)piVar13 - (long)*piVar13);
        uVar8 = *puVar12;
        if (uVar8 < 7) {
          piVar15 = (int *)0x0;
        }
        else {
          piVar15 = (int *)0x0;
          if ((ulong)puVar12[3] != 0) {
            puVar6 = (uint *)((long)piVar13 + (ulong)puVar12[3]);
            piVar15 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
        }
        if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
           (uVar11 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar11 == 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = (long)*(char *)((long)piVar15 + uVar11) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 4) {
          if (uVar8 < 0xb) {
            uVar14 = 0;
LAB_01712a24:
            uVar16 = 0;
          }
          else {
            uVar14 = 0;
            if ((ulong)puVar12[5] != 0) {
              uVar14 = (uint)*(ushort *)((long)piVar13 + (ulong)puVar12[5]);
            }
            if ((uVar8 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_01712a24;
            uVar16 = *(undefined4 *)((long)piVar13 + (ulong)puVar12[6]);
          }
          if ((uVar14 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
             (uVar11 = (ulong)*(ushort *)(((long)piVar9 - (long)*piVar9) + (ulong)uVar14),
             uVar11 != 0)) {
            uVar16 = *(undefined4 *)((long)piVar9 + uVar11);
          }
          goto LAB_0171264c;
        }
        if ((0xc < uVar8) && ((ulong)puVar12[6] != 0)) {
          uVar16 = *(undefined4 *)((long)piVar13 + (ulong)puVar12[6]);
          goto LAB_0171264c;
        }
      }
LAB_01712c5c:
      uVar16 = 0;
    }
LAB_0171264c:
    *(undefined4 *)(param_1 + 10) = uVar16;
  }
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "heightType";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 == (void *)0x0) goto switchD_017126c8_default;
  local_70 = (char *)0xb926f1ef9aefc032;
  pcStack_68 = "heightType";
  local_60 = 10;
  local_58 = (long *)0x0;
  piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
  if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined4 *)((long)piVar9 + uVar11);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  switch(uVar16) {
  case 0:
    uVar4 = 0x100;
    break;
  case 1:
    uVar4 = 0x101;
    break;
  case 2:
    uVar4 = 0x102;
    break;
  case 3:
    uVar4 = 0x103;
    break;
  case 4:
    uVar4 = 0x104;
    break;
  case 5:
    uVar4 = 0x105;
    break;
  case 6:
    local_70 = (char *)0xe5219d7c5f769c85;
    pcStack_68 = "heigntValue";
    local_60 = 0xb;
    local_58 = (long *)0x0;
    uVar4 = FUN_00d928d0(param_2,&local_70);
    *(undefined2 *)(param_1 + 0xb) = uVar4;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  default:
    goto switchD_017126c8_default;
  }
  *(undefined2 *)(param_1 + 0xb) = uVar4;
switchD_017126c8_default:
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "weightType";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 == (void *)0x0) goto switchD_01712748_default;
  local_70 = (char *)0x3f7d63976f07f891;
  pcStack_68 = "weightType";
  local_60 = 10;
  local_58 = (long *)0x0;
  piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
  if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined4 *)((long)piVar9 + uVar11);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  switch(uVar16) {
  case 0:
    uVar4 = 0x100;
    break;
  case 1:
    uVar4 = 0x101;
    break;
  case 2:
    uVar4 = 0x102;
    break;
  case 3:
    uVar4 = 0x103;
    break;
  case 4:
    uVar4 = 0x104;
    break;
  case 5:
    uVar4 = 0x105;
    break;
  case 6:
    local_70 = (char *)0xc64299b44d0166aa;
    pcStack_68 = "waightValue";
    local_60 = 0xb;
    local_58 = (long *)0x0;
    uVar4 = FUN_00d928d0(param_2,&local_70);
    *(undefined2 *)((long)param_1 + 0x56) = uVar4;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  default:
    goto switchD_01712748_default;
  }
  *(undefined2 *)((long)param_1 + 0x56) = uVar4;
switchD_01712748_default:
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "scaleType";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 == (void *)0x0) goto switchD_01710ac8_default;
  local_70 = (char *)0x2d297fc6a7804279;
  pcStack_68 = "scaleType";
  local_60 = 9;
  local_58 = (long *)0x0;
  piVar9 = (int *)FUN_00d27b5c(param_2,&local_70);
  if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    iVar17 = 0;
  }
  else {
    iVar17 = *(int *)((long)piVar9 + uVar11);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (iVar17 == 0) {
    uVar4 = 0x100;
    goto LAB_01710a04;
  }
  switch(iVar17) {
  case 1:
    uVar4 = 0x101;
    break;
  case 2:
    uVar4 = 0x102;
    break;
  case 3:
    uVar4 = 0x103;
    break;
  case 4:
    uVar4 = 0x104;
    break;
  case 5:
    uVar4 = 0x105;
    break;
  case 6:
    local_70 = (char *)0x50f015aa89f0675e;
    pcStack_68 = "scaleValue";
    local_60 = 10;
    local_58 = (long *)0x0;
    uVar4 = FUN_00d928d0(param_2,&local_70);
    *(undefined2 *)((long)param_1 + 0x5a) = uVar4;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  default:
    goto switchD_01710ac8_default;
  }
LAB_01710a04:
  *(undefined2 *)((long)param_1 + 0x5a) = uVar4;
switchD_01710ac8_default:
  piVar9 = (int *)*plVar18;
  if (piVar9 == (int *)0x0) goto LAB_01710a60;
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  local_70 = "trainerId";
  pvVar5 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar5 == (void *)0x0) goto LAB_01710a60;
  piVar9 = (int *)*plVar18;
  if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
LAB_017128b8:
    lVar7 = 0;
  }
  else {
    puVar6 = (uint *)((long)piVar9 + uVar11);
    local_70 = "trainerId";
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    puVar6 = bsearch(&local_70,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
    lVar7 = 0;
    if ((puVar6 != (uint *)0x0) && (lVar7 = 0, *param_2 != 0)) {
      piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
      puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
      if (*puVar12 < 7) {
        piVar13 = (int *)0x0;
      }
      else {
        piVar13 = (int *)0x0;
        if ((ulong)puVar12[3] != 0) {
          puVar6 = (uint *)((long)piVar9 + (ulong)puVar12[3]);
          piVar13 = (int *)((long)puVar6 + (ulong)*puVar6);
        }
      }
      if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
         (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar11 == 0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = (long)*(char *)((long)piVar13 + uVar11) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar11 * 8) == 8) {
        lVar7 = FUN_015efc20();
      }
      else {
        if ((*puVar12 < 0xd) || ((ulong)puVar12[6] == 0)) goto LAB_017128b8;
        lVar7 = *(long *)((long)piVar9 + (ulong)puVar12[6]);
      }
      if (lVar7 == -1) goto LAB_01710a60;
    }
  }
  param_1[4] = lVar7;
LAB_01710a60:
  if ((param_3 & 1) != 0) {
    if (param_1[3] == 0x3ffffffff) {
      param_1[3] = 0x1ffffffff;
    }
    if (*(short *)(param_1 + 0xb) == 0x100) {
      *(undefined2 *)(param_1 + 0xb) = 0x103;
    }
    if (*(short *)((long)param_1 + 0x56) == 0x100) {
      *(undefined2 *)((long)param_1 + 0x56) = 0x103;
    }
    if (*(short *)((long)param_1 + 0x5a) == 0x100) {
      *(undefined2 *)((long)param_1 + 0x5a) = 0x103;
    }
  }
  return;
}


