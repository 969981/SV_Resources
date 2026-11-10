/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c3f78; name: FUN_006c3f78
 */


void FUN_006c3f78(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if ((*(int *)(param_1 + 0x10) != -1) && (*(char *)(param_1 + 0x70) == '\0')) {
    iVar4 = nn::socket::Shutdown(*(int *)(param_1 + 0x10),2);
    if (iVar4 < 0) {
      nn::socket::GetLastErrno();
    }
    if (*(int *)(param_1 + 0x10) != -1) {
      nn::socket::Close(*(int *)(param_1 + 0x10));
      *(undefined1 *)(param_1 + 0x70) = 1;
    }
  }
  plVar6 = *(long **)(param_1 + 0x80);
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
    }
  }
  plVar6 = *(long **)(param_1 + 0x28);
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
      lVar5 = *(long *)(param_1 + 8);
      goto joined_r0x006c4048;
    }
  }
  lVar5 = *(long *)(param_1 + 8);
joined_r0x006c4048:
  if (lVar5 == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


