/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02219c88; name: FUN_02219c88
 */


void FUN_02219c88(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  void *__src;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x28);
    __src = *(void **)(param_2 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar1) {
      FUN_02ef62a4(param_1 + 0x20,(long)iVar1);
    }
    memcpy(*(void **)(param_1 + 0x20),__src,(long)iVar1 << 1);
    *(int *)(param_1 + 0x28) = iVar1;
  }
  plVar4 = *(long **)(param_1 + 0x30);
  plVar5 = *(long **)(param_2 + 0x30);
  if (plVar4 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar5 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4 = *(long **)(param_1 + 0x30);
      plVar5 = *(long **)(param_2 + 0x30);
    }
    *(long **)(param_1 + 0x30) = plVar5;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar5 = plVar4 + 2;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02219d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x18))();
        return;
      }
    }
  }
  return;
}


