/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1bf34; name: FUN_02f1bf34
 */


ulong * FUN_02f1bf34(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  void *__dest;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  char *__s;
  ulong uVar8;
  
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  uVar8 = *param_1;
  if ((char *)(uVar8 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      uVar5 = 0;
    }
    else {
      sVar3 = strlen(__s);
      sVar3 = (size_t)((int)sVar3 + 1);
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar3);
      memcpy(__dest,__s,sVar3);
      uVar5 = (ulong)__dest | 1;
    }
    *param_1 = uVar5;
    if ((uVar8 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
    }
  }
  plVar4 = (long *)param_1[1];
  plVar6 = (long *)param_2[1];
  if (plVar4 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[1];
      plVar6 = (long *)param_2[1];
    }
    param_1[1] = (ulong)plVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  memcpy(param_1 + 2,param_2 + 2,0x40);
  return param_1;
}


