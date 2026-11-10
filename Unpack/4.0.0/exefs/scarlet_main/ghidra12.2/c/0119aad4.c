/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0119aad4; name: FUN_0119aad4
 */


void FUN_0119aad4(long *param_1,long *param_2,undefined8 *param_3,char *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  char cStack_61;
  char *local_60;
  long *local_58;
  
  lVar14 = *param_2;
  if (lVar14 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(lVar14 + 0x40);
  }
  sVar5 = strlen((char *)*param_3);
  sVar6 = strlen(param_4);
  plVar9 = (long *)PTR_PTR_047d4508;
  pcVar12 = (char *)((long)&local_60 - (lVar13 + sVar5 + sVar6 + 0x10 & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar14 != 0) {
    puVar1 = (undefined8 *)(lVar14 + 0x38);
  }
  local_60 = pcVar12;
  strcpy(pcVar12,(char *)*puVar1);
  if (pcVar12[lVar13 + -1] == '/') {
    pcVar12[lVar13 + -1] = '\0';
  }
  else {
    pcVar7 = strrchr(pcVar12,0x2f);
    if (pcVar7 == (char *)0x0) {
      *pcVar12 = '\0';
    }
    else {
      *pcVar7 = '\0';
    }
  }
  pcVar12 = (char *)*param_3;
  cVar2 = *pcVar12;
  pcVar7 = local_60;
  while( true ) {
    local_60 = pcVar7;
    if (cVar2 != '.') {
      sVar5 = strlen(pcVar7);
      pcVar3 = local_60;
      (pcVar7 + sVar5)[0] = '/';
      (pcVar7 + sVar5)[1] = '\0';
      strcat(local_60,pcVar12);
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
          uVar8 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar8;
          FUN_00cf9884(&local_58,uVar8,pcVar3);
        }
        lVar14 = param_2[5];
        *param_1 = (long)local_58;
        plVar10 = (long *)PTR_DAT_047d8b70;
        if (local_58 != (long *)0x0) {
          plVar9 = local_58 + 7;
          plVar10 = local_58 + 6;
        }
        lVar13 = *plVar9;
        if (local_58 == (long *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar11 = local_58[8];
        }
        param_1[1] = *plVar10;
        param_1[2] = lVar13;
        param_1[3] = lVar11;
        param_1[4] = 0;
        if (local_58 == (long *)0x0) {
          param_1[4] = 0;
        }
        else {
          (**(code **)(*local_58 + 0x18))(local_58);
          plVar9 = (long *)param_1[4];
          param_1[4] = (long)local_58;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))();
          }
        }
        *(int *)(param_1 + 5) = (int)lVar14;
        FUN_00d0c0a4(param_1);
      }
      else {
        FUN_00e89224(param_1,&local_60,param_4,(int)param_2[5]);
      }
      return;
    }
    cVar2 = pcVar12[1];
    if (cVar2 == '.') {
      pcVar7 = strrchr(pcVar7,0x2f);
      if (pcVar7 == (char *)0x0) break;
      *pcVar7 = '\0';
      cVar2 = pcVar12[2];
      lVar14 = 2;
    }
    else {
      lVar14 = 1;
    }
    if (cVar2 != '/') break;
    pcVar12 = pcVar12 + 1 + lVar14;
    cVar2 = *pcVar12;
    pcVar7 = local_60;
  }
  plVar9 = (long *)FUN_00da5204();
  plVar10 = (long *)*plVar9;
  *param_1 = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))();
  }
  param_1[1] = plVar9[1];
  param_1[2] = plVar9[2];
  param_1[3] = plVar9[3];
  plVar10 = (long *)plVar9[4];
  param_1[4] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))();
  }
  *(int *)(param_1 + 5) = (int)plVar9[5];
  return;
}


