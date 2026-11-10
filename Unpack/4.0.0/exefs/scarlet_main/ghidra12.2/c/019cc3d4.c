/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019cc3d4; name: FUN_019cc3d4
 */


void FUN_019cc3d4(ulong *param_1,ulong *param_2)

{
  char *__s;
  char cVar1;
  bool bVar2;
  size_t sVar3;
  void *__dest;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  if (__s == (char *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    sVar3 = strlen(__s);
    sVar3 = (size_t)((int)sVar3 + 1);
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar3);
    memcpy(__dest,__s,sVar3);
    plVar4 = (long *)param_1[1];
    *param_1 = (ulong)__dest | 1;
  }
  plVar5 = (long *)param_2[1];
  if (plVar4 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar5 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[1];
      plVar5 = (long *)param_2[1];
    }
    param_1[1] = (ulong)plVar5;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar5 = plVar4 + 2;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  memcpy(param_1 + 2,param_2 + 2,0x40);
  return;
}


