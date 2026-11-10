/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0110f548; name: FUN_0110f548
 */


void FUN_0110f548(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  undefined *__s2;
  long *plVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long *local_60;
  long *local_58 [2];
  char *local_48;
  
  pcVar10 = (char *)*param_2;
  sVar4 = strlen(pcVar10);
  pcVar5 = (char *)((long)local_58 + (-8 - (sVar4 + 0x10 & 0xfffffffffffffff0)));
  local_48 = pcVar5;
  pcVar10 = strcpy(pcVar5,pcVar10);
  pcVar10 = strrchr(pcVar10,0x2e);
  pcVar5 = strrchr(pcVar5,0x2f);
  if (pcVar5 < pcVar10) {
    *pcVar10 = '\0';
  }
  __s2 = PTR_s_data___047d8b68;
  if (param_4 == 0) {
    pcVar10 = (char *)*param_2;
    sVar4 = strlen(PTR_s_data___047d8b68);
    iVar3 = strncmp(pcVar10,__s2,sVar4);
    if (iVar3 == 0) goto LAB_0110f5f0;
    FUN_01110048(local_58,PTR_s_data___047d8b68,&local_48,param_3);
    plVar2 = local_58[0];
    local_58[0] = (long *)0x0;
    *param_1 = plVar2;
    plVar6 = (long *)PTR_DAT_047d8b70;
    if (plVar2 != (long *)0x0) {
      plVar6 = plVar2 + 6;
    }
    plVar1 = (long *)PTR_PTR_047d4508;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 7;
    }
    lVar8 = *plVar1;
    if (plVar2 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = plVar2[8];
    }
    param_1[1] = *plVar6;
    param_1[2] = lVar8;
    param_1[3] = lVar9;
    param_1[4] = 0;
    if (plVar2 == (long *)0x0) {
      param_1[4] = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x18))(plVar2);
      plVar6 = (long *)param_1[4];
      param_1[4] = plVar2;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 5) = 0;
  }
  else {
    if (param_4 == 2) {
      uVar7 = FUN_0110ffbc(param_2);
      if ((uVar7 & 1) == 0) {
        FUN_01110048(local_58,PTR_DAT_047d8c38,&local_48,param_3);
        plVar2 = local_58[0];
        local_58[0] = (long *)0x0;
        *param_1 = plVar2;
        plVar6 = (long *)PTR_DAT_047d8b70;
        if (plVar2 != (long *)0x0) {
          plVar6 = plVar2 + 6;
        }
        plVar1 = (long *)PTR_PTR_047d4508;
        if (plVar2 != (long *)0x0) {
          plVar1 = plVar2 + 7;
        }
        lVar8 = *plVar1;
        if (plVar2 == (long *)0x0) {
          lVar9 = 0;
        }
        else {
          lVar9 = plVar2[8];
        }
        param_1[1] = *plVar6;
        param_1[2] = lVar8;
        param_1[3] = lVar9;
        param_1[4] = 0;
        if (plVar2 == (long *)0x0) {
          param_1[4] = 0;
        }
        else {
          (**(code **)(*plVar2 + 0x18))(plVar2);
          plVar6 = (long *)param_1[4];
          param_1[4] = plVar2;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))();
          }
        }
        *(undefined4 *)(param_1 + 5) = 2;
        goto LAB_0110f654;
      }
    }
    else if ((param_4 == 4) && (uVar7 = FUN_01110000(param_2), (uVar7 & 1) == 0)) {
      pcVar5 = (char *)*param_2;
      pcVar10 = strchr(pcVar5,0x2f);
      strncpy((char *)local_58,pcVar5,(long)pcVar10 - (long)pcVar5);
      *(undefined1 *)((long)local_58 + ((long)pcVar10 - (long)pcVar5)) = 0;
      FUN_01110048(&local_60,local_58,&local_48,param_3);
      plVar2 = local_60;
      local_60 = (long *)0x0;
      *param_1 = plVar2;
      plVar6 = (long *)PTR_DAT_047d8b70;
      if (plVar2 != (long *)0x0) {
        plVar6 = plVar2 + 6;
      }
      plVar1 = (long *)PTR_PTR_047d4508;
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 7;
      }
      lVar8 = *plVar1;
      if (plVar2 == (long *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = plVar2[8];
      }
      param_1[1] = *plVar6;
      param_1[2] = lVar8;
      param_1[3] = lVar9;
      param_1[4] = 0;
      if (plVar2 == (long *)0x0) {
        param_1[4] = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x18))(plVar2);
        plVar6 = (long *)param_1[4];
        param_1[4] = plVar2;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
      }
      *(undefined4 *)(param_1 + 5) = 4;
      FUN_00d0c0a4(param_1);
      plVar6 = local_60;
      goto joined_r0x0110f770;
    }
LAB_0110f5f0:
    FUN_0110f910(local_58,&local_48,param_3);
    plVar2 = local_58[0];
    local_58[0] = (long *)0x0;
    *param_1 = plVar2;
    plVar6 = (long *)PTR_DAT_047d8b70;
    if (plVar2 != (long *)0x0) {
      plVar6 = plVar2 + 6;
    }
    plVar1 = (long *)PTR_PTR_047d4508;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 7;
    }
    lVar8 = *plVar1;
    if (plVar2 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = plVar2[8];
    }
    param_1[1] = *plVar6;
    param_1[2] = lVar8;
    param_1[3] = lVar9;
    param_1[4] = 0;
    if (plVar2 == (long *)0x0) {
      param_1[4] = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x18))(plVar2);
      plVar6 = (long *)param_1[4];
      param_1[4] = plVar2;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(int *)(param_1 + 5) = param_4;
  }
LAB_0110f654:
  FUN_00d0c0a4(param_1);
  plVar6 = local_58[0];
joined_r0x0110f770:
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  return;
}


