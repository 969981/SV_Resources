/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f9cff8; name: FUN_00f9cff8
 */


void FUN_00f9cff8(undefined8 *param_1,undefined8 *param_2,int param_3)

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
  char acStack_60 [8];
  long *local_58;
  long *local_50 [2];
  char *local_28;
  
  pcVar10 = (char *)*param_2;
  sVar4 = strlen(pcVar10);
  pcVar5 = acStack_60 + -(sVar4 + 0x10 & 0xfffffffffffffff0);
  local_28 = pcVar5;
  pcVar10 = strcpy(pcVar5,pcVar10);
  pcVar10 = strrchr(pcVar10,0x2e);
  pcVar5 = strrchr(pcVar5,0x2f);
  if (pcVar5 < pcVar10) {
    *pcVar10 = '\0';
  }
  __s2 = PTR_s_data___047d8b68;
  if (param_3 == 0) {
    pcVar10 = (char *)*param_2;
    sVar4 = strlen(PTR_s_data___047d8b68);
    iVar3 = strncmp(pcVar10,__s2,sVar4);
    if (iVar3 == 0) goto LAB_00f9d09c;
    FUN_00fa1954(local_50,PTR_s_data___047d8b68,&local_28);
    plVar2 = local_50[0];
    local_50[0] = (long *)0x0;
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
    if (param_3 == 2) {
      uVar7 = FUN_00fa17a0(param_2);
      if ((uVar7 & 1) == 0) {
        FUN_00fa1954(local_50,PTR_DAT_047d8c38,&local_28);
        plVar2 = local_50[0];
        local_50[0] = (long *)0x0;
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
        goto LAB_00f9d0fc;
      }
    }
    else if ((param_3 == 4) && (uVar7 = FUN_00fa17e4(param_2), (uVar7 & 1) == 0)) {
      pcVar5 = (char *)*param_2;
      pcVar10 = strchr(pcVar5,0x2f);
      strncpy((char *)local_50,pcVar5,(long)pcVar10 - (long)pcVar5);
      *(undefined1 *)((long)local_50 + ((long)pcVar10 - (long)pcVar5)) = 0;
      FUN_00fa1954(&local_58,local_50,&local_28);
      plVar2 = local_58;
      local_58 = (long *)0x0;
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
      plVar6 = local_58;
      goto joined_r0x00f9d214;
    }
LAB_00f9d09c:
    FUN_00f9d3ac(local_50,&local_28);
    plVar2 = local_50[0];
    local_50[0] = (long *)0x0;
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
    *(int *)(param_1 + 5) = param_3;
  }
LAB_00f9d0fc:
  FUN_00d0c0a4(param_1);
  plVar6 = local_50[0];
joined_r0x00f9d214:
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  return;
}


