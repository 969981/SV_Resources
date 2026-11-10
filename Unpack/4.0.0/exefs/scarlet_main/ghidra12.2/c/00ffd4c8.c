/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ffd4c8; name: FUN_00ffd4c8
 */


void FUN_00ffd4c8(long *param_1,long *param_2,long param_3,char *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  char cStack_61;
  char *local_60;
  long *local_58;
  
  lVar13 = *param_2;
  if (lVar13 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(lVar13 + 0x40);
  }
  lVar10 = *(long *)(param_3 + 0x10);
  sVar5 = strlen(param_4);
  plVar8 = (long *)PTR_PTR_047d4508;
  pcVar11 = (char *)((long)&local_60 - (lVar12 + lVar10 + sVar5 + 0x10 & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar13 != 0) {
    puVar1 = (undefined8 *)(lVar13 + 0x38);
  }
  local_60 = pcVar11;
  strcpy(pcVar11,(char *)*puVar1);
  if (pcVar11[lVar12 + -1] == '/') {
    pcVar11[lVar12 + -1] = '\0';
  }
  else {
    pcVar6 = strrchr(pcVar11,0x2f);
    if (pcVar6 == (char *)0x0) {
      *pcVar11 = '\0';
    }
    else {
      *pcVar6 = '\0';
    }
  }
  pcVar11 = *(char **)(param_3 + 8);
  cVar2 = *pcVar11;
  pcVar6 = local_60;
  while( true ) {
    local_60 = pcVar6;
    if (cVar2 != '.') {
      sVar5 = strlen(pcVar6);
      pcVar3 = local_60;
      (pcVar6 + sVar5)[0] = '/';
      (pcVar6 + sVar5)[1] = '\0';
      strcat(local_60,pcVar11);
      sVar5 = strlen(param_4);
      if (sVar5 == 0) {
        if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
          local_58 = (long *)FUN_00d44228();
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x18))(local_58);
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar4 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar7 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar7;
          FUN_00cf9884(&local_58,uVar7,pcVar3);
        }
        lVar13 = param_2[5];
        *param_1 = (long)local_58;
        plVar9 = (long *)PTR_DAT_047d8b70;
        if (local_58 != (long *)0x0) {
          plVar8 = local_58 + 7;
          plVar9 = local_58 + 6;
        }
        lVar12 = *plVar8;
        if (local_58 == (long *)0x0) {
          lVar10 = 0;
        }
        else {
          lVar10 = local_58[8];
        }
        param_1[1] = *plVar9;
        param_1[2] = lVar12;
        param_1[3] = lVar10;
        param_1[4] = 0;
        if (local_58 == (long *)0x0) {
          param_1[4] = 0;
        }
        else {
          (**(code **)(*local_58 + 0x18))(local_58);
          plVar8 = (long *)param_1[4];
          param_1[4] = (long)local_58;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))();
          }
        }
        *(int *)(param_1 + 5) = (int)lVar13;
        FUN_00d0c0a4(param_1);
      }
      else {
        FUN_00e89224(param_1,&local_60,param_4,(int)param_2[5]);
      }
      return;
    }
    cVar2 = pcVar11[1];
    if (cVar2 == '.') {
      pcVar6 = strrchr(pcVar6,0x2f);
      if (pcVar6 == (char *)0x0) break;
      *pcVar6 = '\0';
      cVar2 = pcVar11[2];
      lVar13 = 2;
    }
    else {
      lVar13 = 1;
    }
    if (cVar2 != '/') break;
    pcVar11 = pcVar11 + 1 + lVar13;
    cVar2 = *pcVar11;
    pcVar6 = local_60;
  }
  plVar8 = (long *)FUN_00da5204();
  plVar9 = (long *)*plVar8;
  *param_1 = (long)plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  param_1[1] = plVar8[1];
  param_1[2] = plVar8[2];
  param_1[3] = plVar8[3];
  plVar9 = (long *)plVar8[4];
  param_1[4] = (long)plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  *(int *)(param_1 + 5) = (int)plVar8[5];
  return;
}


