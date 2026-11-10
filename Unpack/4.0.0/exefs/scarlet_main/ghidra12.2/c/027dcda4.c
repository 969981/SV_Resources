/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027dcda4; name: FUN_027dcda4
 */


void FUN_027dcda4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_30;
  long *local_28;
  
  local_30 = *param_2;
  if (param_2[1] == 0) {
    local_28 = (long *)0x0;
  }
  else {
    local_28 = (long *)std::__shared_weak_count::lock();
    if (local_28 != (long *)0x0) {
                    /* try { // try from 027dcdcc to 027dcdd7 has its CatchHandler @ 027dce3c */
      FUN_0054251c(param_1,&local_30);
      if (local_28 != (long *)0x0) {
        plVar1 = local_28 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
          std::__shared_weak_count::__release_weak();
          return;
        }
      }
      return;
    }
  }
                    /* try { // try from 027dce34 to 027dce37 has its CatchHandler @ 027dce38 */
  FUN_00540d00();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 027dce34 with catch @ 027dce38
                        */
  FUN_001fc5f0();
}


