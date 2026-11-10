/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0028e920; name: FUN_0028e920
 */


long FUN_0028e920(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 local_50;
  long *plStack_48;
  undefined8 *local_38;
  
  lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x170);
  if (lVar5 != 0) {
    plStack_48 = (long *)param_1[1];
    local_50 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    local_38 = (undefined8 *)0x0;
                    /* try { // try from 0028e97c to 0028e98f has its CatchHandler @ 0028ea10 */
    FUN_002bccd0(lVar5,&local_50,*param_2,*param_3,param_3[1],&local_38,param_5,*param_6);
    puVar4 = local_38;
    local_38 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
    }
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return lVar5;
}


