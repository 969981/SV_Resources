/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f6ce0; name: FUN_002f6ce0
 */


void FUN_002f6ce0(char *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *__s;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = param_3[1];
  local_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  __s = (char *)FUN_00366f90(&local_60);
  pcVar4 = strrchr(__s,0x2f);
  local_68 = 0;
  if ((void *)*param_5 != (void *)0x0) {
    free((void *)*param_5);
    *param_5 = 0;
  }
  if ((void *)param_5[1] != (void *)0x0) {
    free((void *)param_5[1]);
    param_5[1] = 0;
  }
  plVar8 = (long *)param_5[2];
  if (plVar8 != (long *)0x0) {
    do {
      lVar6 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      FUN_00270ba4(plVar8);
      FUN_0049e790(PTR_LAB_047cba48,plVar8);
    }
    param_5[2] = 0;
  }
  if (pcVar4 == (char *)0x0) {
    *__s = '\0';
  }
  else if (pcVar4 != __s) {
    pcVar7 = pcVar4 + 1;
    *pcVar4 = '\0';
    goto LAB_002f6d8c;
  }
  pcVar7 = "";
LAB_002f6d8c:
  uVar5 = FUN_0038ccb0(pcVar7);
  uStack_88 = param_2[1];
  local_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  pcVar4 = (char *)FUN_00366f90(&local_90);
  if (param_1 == (char *)0x0) {
    param_1 = "";
  }
  else {
    iVar3 = strcmp(param_1,"https");
    if (((iVar3 == 0) && (pcVar7 = strrchr(pcVar4,0x3a), pcVar7 != (char *)0x0)) &&
       (iVar3 = strcmp(pcVar7 + 1,"443"), iVar3 == 0)) {
      *pcVar7 = '\0';
    }
  }
  FUN_0038d930(&local_68,"%s://%s%s",param_1,pcVar4,__s);
  *param_5 = local_68;
  param_5[1] = uVar5;
  if (param_4 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_4,0x10);
      if (bVar2) {
        *param_4 = *param_4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_5[2] = param_4;
  free(__s);
  free(pcVar4);
  return;
}


