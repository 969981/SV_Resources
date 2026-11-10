/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002992ac; name: FUN_002992ac
 */


void FUN_002992ac(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  long *local_58;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  long *plStack_38;
  
  plStack_38 = *(long **)(param_2 + 0x20);
  local_40 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  local_48 = *(undefined8 **)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
                    /* try { // try from 002992dc to 002992e7 has its CatchHandler @ 0029956c */
  FUN_00330158(param_1,&local_40,&local_48);
  puVar6 = local_48;
  local_48 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_0049e790(PTR_LAB_047cba48,puVar6);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar5 = PTR_DAT_047cc688;
  param_1[5] = 0;
  *param_1 = (long)(puVar5 + 0x10);
                    /* try { // try from 00299364 to 00299373 has its CatchHandler @ 0029950c */
  piVar7 = (int *)FUN_00343a90(*(undefined8 *)(param_2 + 8),"grpc.fake_resolver.response_generator")
  ;
  if ((piVar7 == (int *)0x0) || (*piVar7 != 2)) {
    param_1[6] = 0;
  }
  else {
    lVar8 = *(long *)(piVar7 + 4);
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    param_1[6] = lVar8;
  }
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  local_50 = "grpc.fake_resolver.response_generator";
                    /* try { // try from 002993dc to 002993e7 has its CatchHandler @ 002994b4 */
  lVar8 = FUN_003438e0(*(undefined8 *)(param_2 + 8),&local_50,1);
  param_1[5] = lVar8;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
                    /* try { // try from 0029940c to 00299413 has its CatchHandler @ 0029946c */
    local_58 = param_1;
    FUN_002995dc(param_1[6],&local_58);
    plVar1 = local_58;
    if (local_58 != (long *)0x0) {
      plVar2 = local_58 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_58 + 8))(local_58);
        FUN_0049e790(PTR_LAB_047cba48,plVar1);
      }
    }
  }
  return;
}


