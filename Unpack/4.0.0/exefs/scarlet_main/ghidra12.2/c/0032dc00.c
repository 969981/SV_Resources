/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032dc00; name: FUN_0032dc00
 */


void FUN_0032dc00(long *param_1,long *param_2,char *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined *local_110;
  undefined8 uStack_108;
  char *local_e0;
  size_t local_d8;
  char *local_b0;
  undefined8 uStack_a8;
  byte local_80 [8];
  ulong local_78;
  ulong local_70;
  long local_68;
  long *local_60;
  long *local_58;
  undefined8 uStack_50;
  long local_48;
  
  plVar8 = param_2 + 1;
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = *plVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar6 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  puVar4 = PTR_DAT_047ccc30;
  if (plVar6 == (long *)0x0) {
    if (param_2 != (long *)0x0) {
      do {
        lVar7 = *plVar8;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 1) {
        (**(code **)(*param_2 + 8))(param_2);
        FUN_0049e790(PTR_LAB_047cba48,param_2);
        plVar6 = (long *)0x0;
        local_68 = param_2[2];
        local_60 = (long *)param_2[3];
        goto joined_r0x0032dc94;
      }
    }
    plVar6 = (long *)0x0;
    local_68 = param_2[2];
    local_60 = (long *)param_2[3];
  }
  else {
    plVar6[2] = 0;
    *plVar6 = (long)(puVar4 + 0x10);
    plVar6[1] = (long)param_2;
    local_68 = param_2[2];
    local_60 = (long *)param_2[3];
  }
joined_r0x0032dc94:
  if (local_60 != (long *)0x0) {
    plVar8 = local_60 + 1;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
                    /* try { // try from 0032dcbc to 0032dccf has its CatchHandler @ 0032de8c */
  local_58 = plVar6;
  uStack_50 = param_4;
  (**(code **)(*param_2 + 0x48))(&local_48,param_2,param_3,&local_68);
  plVar8 = local_58;
  local_58 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)*plVar8)(plVar8);
    FUN_0049e790(PTR_LAB_047cba48,plVar8);
  }
  if (local_60 != (long *)0x0) {
    plVar8 = local_60 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_48 != 0) {
    plVar6[2] = local_48;
    plVar8 = (long *)param_2[5];
    local_b0 = "Created new LB policy \"";
    uStack_a8 = 0x17;
    local_e0 = param_3;
    if (param_3 == (char *)0x0) {
      local_d8 = 0;
    }
    else {
      local_d8 = strlen(param_3);
    }
    local_110 = &DAT_03c246d6;
    uStack_108 = 1;
                    /* try { // try from 0032dd80 to 0032dd97 has its CatchHandler @ 0032de68 */
    FUN_00395a70(local_80,&local_b0,&local_e0,&local_110);
    bVar5 = (local_80[0] & 1) != 0;
    uVar1 = (ulong)(local_80[0] >> 1);
    if (bVar5) {
      uVar1 = local_78;
    }
    uVar2 = (ulong)local_80 | 1;
    if (bVar5) {
      uVar2 = local_70;
    }
                    /* try { // try from 0032ddbc to 0032ddc7 has its CatchHandler @ 0032de48 */
    (**(code **)(*plVar8 + 0x28))(plVar8,0,uVar2,uVar1);
    if ((local_80[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
                    /* try { // try from 0032ddec to 0032ddef has its CatchHandler @ 0032de44 */
    FUN_00358260(*(undefined8 *)(local_48 + 0x20),param_2[4]);
  }
  *param_1 = local_48;
  return;
}


