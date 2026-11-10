/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fa110c; name: FUN_00fa110c
 */


void FUN_00fa110c(long *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  size_t sVar6;
  undefined8 uVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  char *__dest;
  long lVar11;
  long lVar12;
  char cStack_51;
  long *local_38;
  
  puVar4 = PTR_DAT_047dd660;
  lVar12 = *(long *)PTR_DAT_047dd660;
  if (lVar12 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x40);
  }
  sVar6 = strlen(param_2);
  plVar9 = (long *)PTR_PTR_047d4508;
  __dest = (char *)((long)register0x00000008 +
                   (-0x50 - (lVar11 + sVar6 + 0x10 & 0xfffffffffffffff0)));
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar12 != 0) {
    puVar1 = (undefined8 *)(lVar12 + 0x38);
  }
  strcpy(__dest,(char *)*puVar1);
  if (__dest[lVar11 + -1] == '/') {
    __dest[lVar11 + -1] = '\0';
  }
  else {
    pcVar8 = strrchr(__dest,0x2f);
    if (pcVar8 == (char *)0x0) {
      *__dest = '\0';
    }
    else {
      *pcVar8 = '\0';
    }
  }
  cVar3 = *param_2;
  while( true ) {
    if (cVar3 != '.') {
      sVar6 = strlen(__dest);
      (__dest + sVar6)[0] = '/';
      (__dest + sVar6)[1] = '\0';
      strcat(__dest,param_2);
      if (*__dest == '\0') {
        local_38 = (long *)FUN_00d44228();
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x18))(local_38);
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
        FUN_00cf9884(&local_38,uVar7,__dest);
      }
      *param_1 = (long)local_38;
      uVar2 = *(undefined4 *)(puVar4 + 0x28);
      plVar10 = (long *)PTR_DAT_047d8b70;
      if (local_38 != (long *)0x0) {
        plVar9 = local_38 + 7;
        plVar10 = local_38 + 6;
      }
      lVar12 = *plVar9;
      if (local_38 == (long *)0x0) {
        lVar11 = 0;
      }
      else {
        lVar11 = local_38[8];
      }
      param_1[1] = *plVar10;
      param_1[2] = lVar12;
      param_1[3] = lVar11;
      param_1[4] = 0;
      plVar9 = (long *)0x0;
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x18))(local_38);
        plVar9 = local_38;
      }
      param_1[4] = (long)plVar9;
      *(undefined4 *)(param_1 + 5) = uVar2;
      FUN_00d0c0a4(param_1);
      return;
    }
    cVar3 = param_2[1];
    if (cVar3 == '.') {
      pcVar8 = strrchr(__dest,0x2f);
      if (pcVar8 == (char *)0x0) break;
      *pcVar8 = '\0';
      cVar3 = param_2[2];
      lVar12 = 2;
    }
    else {
      lVar12 = 1;
    }
    if (cVar3 != '/') break;
    param_2 = param_2 + 1 + lVar12;
    cVar3 = *param_2;
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


