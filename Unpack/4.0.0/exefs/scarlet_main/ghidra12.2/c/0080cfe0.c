/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080cfe0; name: FUN_0080cfe0
 */


void FUN_0080cfe0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  plVar6 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      piVar4 = *(int **)(param_1 + 0x58);
      goto joined_r0x0080d018;
    }
  }
  piVar4 = *(int **)(param_1 + 0x58);
joined_r0x0080d018:
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      FUN_0078cc00();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  piVar4 = (int *)(param_1 + 0x60);
  if (*piVar4 == 1) {
    FUN_0078cc00(piVar4);
  }
  FUN_0078cac8(piVar4);
  *(undefined1 *)(param_1 + 0x90) = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_018ff39c(param_1 + 0xc0,local_30);
  return;
}


