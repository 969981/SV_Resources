/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00321090; name: FUN_00321090
 */


int FUN_00321090(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_40 [8];
  long *local_38;
  long *local_30;
  
  lVar6 = *(long *)(param_1 + 8);
  iVar3 = FUN_003753a0(lVar6 + 0xd8);
  if ((param_2 != 0) && (iVar3 == 0)) {
    plVar4 = *(long **)(lVar6 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar5 = *(undefined8 *)(lVar6 + 0xb0);
    local_30 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    local_30[4] = lVar6;
    *local_30 = (long)&PTR_LAB_04495358;
    local_30[1] = 0;
    local_30[2] = 0;
    local_38 = local_30 + 3;
    *local_38 = (long)&PTR_LAB_04495390;
                    /* try { // try from 00321108 to 00321117 has its CatchHandler @ 00321164 */
    FUN_003627bc(uVar5,&local_38,auStack_40);
    if (local_30 != (long *)0x0) {
      plVar4 = local_30 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return iVar3;
}


