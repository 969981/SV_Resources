/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053fd84; name: FUN_0053fd84
 */


void FUN_0053fd84(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long local_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_047cde78 + 0x10;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)puVar1;
  plVar6 = *(long **)(*param_3 + 0x238);
  plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x78,8);
  puVar1 = PTR_DAT_047cde80 + 0x10;
  plVar4[2] = 0;
  plVar4[3] = (long)plVar6;
  *plVar4 = (long)puVar1;
  plVar4[1] = 0;
  FUN_00540148(plVar4 + 4,param_2,param_3);
  plVar6 = (long *)param_1[2];
  param_1[1] = (long)(plVar4 + 4);
  param_1[2] = (long)plVar4;
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar1 = PTR_DAT_047cde88;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_01cf7e20();
  FUN_006c5550(&local_40);
  param_1[7] = local_40;
  param_1[8] = lStack_38;
  if (local_40 != 0) {
    *(undefined1 *)(local_40 + 8) = 1;
  }
  return;
}


