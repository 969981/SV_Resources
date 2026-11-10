/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e83e2c; name: FUN_00e83e2c
 */


void FUN_00e83e2c(long *param_1,long *param_2,long *param_3,char *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  size_t sVar6;
  undefined8 uVar7;
  char *pcVar8;
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
  uVar2 = *(uint *)*param_3;
  sVar6 = strlen(param_4);
  plVar9 = (long *)PTR_PTR_047d4508;
  pcVar12 = (char *)((long)&local_60 - (lVar13 + (ulong)uVar2 + sVar6 + 0x10 & 0xfffffffffffffff0));
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
    pcVar8 = strrchr(pcVar12,0x2f);
    if (pcVar8 == (char *)0x0) {
      *pcVar12 = '\0';
    }
    else {
      *pcVar8 = '\0';
    }
  }
  pcVar12 = (char *)0x0;
  if (*param_3 != 0) {
    pcVar12 = (char *)(*param_3 + 4);
  }
  cVar3 = *pcVar12;
  pcVar8 = local_60;
  while( true ) {
    local_60 = pcVar8;
    if (cVar3 != '.') {
      sVar6 = strlen(pcVar8);
      pcVar4 = local_60;
      (pcVar8 + sVar6)[0] = '/';
      (pcVar8 + sVar6)[1] = '\0';
      strcat(local_60,pcVar12);
      sVar6 = strlen(param_4);
      if (sVar6 == 0) {
        if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
          local_58 = (long *)FUN_00d44228();
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x18))(local_58);
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar7 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar7;
          FUN_00cf9884(&local_58,uVar7,pcVar4);
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
    cVar3 = pcVar12[1];
    if (cVar3 == '.') {
      pcVar8 = strrchr(pcVar8,0x2f);
      if (pcVar8 == (char *)0x0) break;
      *pcVar8 = '\0';
      cVar3 = pcVar12[2];
      lVar14 = 2;
    }
    else {
      lVar14 = 1;
    }
    if (cVar3 != '/') break;
    pcVar12 = pcVar12 + 1 + lVar14;
    cVar3 = *pcVar12;
    pcVar8 = local_60;
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


