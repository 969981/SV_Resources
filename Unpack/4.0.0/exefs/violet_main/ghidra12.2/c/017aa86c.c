/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017aa86c; name: FUN_017aa86c
 */


void FUN_017aa86c(long *param_1,long *param_2,char *param_3,char *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
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
  sVar4 = strlen(param_3);
  sVar5 = strlen(param_4);
  plVar7 = (long *)PTR_PTR_047d4508;
  pcVar9 = (char *)((long)&local_60 - (lVar12 + sVar4 + sVar5 + 0x10 & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar13 != 0) {
    puVar1 = (undefined8 *)(lVar13 + 0x38);
  }
  local_60 = pcVar9;
  strcpy(pcVar9,(char *)*puVar1);
  if (pcVar9[lVar12 + -1] == '/') {
    pcVar9[lVar12 + -1] = '\0';
  }
  else {
    pcVar8 = strrchr(pcVar9,0x2f);
    if (pcVar8 == (char *)0x0) {
      *pcVar9 = '\0';
    }
    else {
      *pcVar8 = '\0';
    }
  }
  cVar2 = *param_3;
  pcVar9 = local_60;
  while( true ) {
    local_60 = pcVar9;
    if (cVar2 != '.') {
      sVar4 = strlen(pcVar9);
      pcVar8 = local_60;
      (pcVar9 + sVar4)[0] = '/';
      (pcVar9 + sVar4)[1] = '\0';
      strcat(local_60,param_3);
      sVar4 = strlen(param_4);
      if (sVar4 == 0) {
        if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
          local_58 = (long *)FUN_00d44228();
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x18))(local_58);
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar3 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar6 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar6;
          FUN_00cf9884(&local_58,uVar6,pcVar8);
        }
        lVar13 = param_2[5];
        *param_1 = (long)local_58;
        plVar10 = (long *)PTR_DAT_047d8b70;
        if (local_58 != (long *)0x0) {
          plVar7 = local_58 + 7;
          plVar10 = local_58 + 6;
        }
        lVar12 = *plVar7;
        if (local_58 == (long *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar11 = local_58[8];
        }
        param_1[1] = *plVar10;
        param_1[2] = lVar12;
        param_1[3] = lVar11;
        param_1[4] = 0;
        if (local_58 == (long *)0x0) {
          param_1[4] = 0;
        }
        else {
          (**(code **)(*local_58 + 0x18))(local_58);
          plVar7 = (long *)param_1[4];
          param_1[4] = (long)local_58;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x20))();
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
    cVar2 = param_3[1];
    if (cVar2 == '.') {
      pcVar9 = strrchr(pcVar9,0x2f);
      if (pcVar9 == (char *)0x0) break;
      *pcVar9 = '\0';
      cVar2 = param_3[2];
      lVar13 = 2;
    }
    else {
      lVar13 = 1;
    }
    if (cVar2 != '/') break;
    param_3 = param_3 + 1 + lVar13;
    cVar2 = *param_3;
    pcVar9 = local_60;
  }
  plVar7 = (long *)FUN_00da5204();
  plVar10 = (long *)*plVar7;
  *param_1 = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))();
  }
  param_1[1] = plVar7[1];
  param_1[2] = plVar7[2];
  param_1[3] = plVar7[3];
  plVar10 = (long *)plVar7[4];
  param_1[4] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))();
  }
  *(int *)(param_1 + 5) = (int)plVar7[5];
  return;
}


