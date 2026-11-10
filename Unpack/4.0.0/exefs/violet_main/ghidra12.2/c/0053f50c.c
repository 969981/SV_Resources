/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053f50c; name: FUN_0053f50c
 */


void FUN_0053f50c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar6 = *(long *)(lVar7 + 0x30);
  *(undefined8 *)(lVar7 + 0x28) = uVar2;
  *(long *)(lVar7 + 0x30) = lVar3;
  if (lVar6 == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


