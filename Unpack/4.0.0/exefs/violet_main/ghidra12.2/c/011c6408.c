/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c6408; name: FUN_011c6408
 */


void FUN_011c6408(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  LightEventType *pLVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  
  uVar3 = *(uint *)(param_3 + 4);
  plVar1 = (long *)(param_2 + 0x40);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_011c644c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x48));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x48));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_011c644c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_011c644c:
  if ((ulong)(*(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78) >> 5) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  plVar7 = *(long **)(*(long *)(param_2 + 0x78) + (ulong)uVar3 * 0x20);
  pLVar2 = (LightEventType *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x40) = 0;
  nn::os::SignalLightEvent(pLVar2);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_011c6498;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_011c6498;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_011c6498:
  (**(code **)(*plVar7 + 0xa8))(param_1,plVar7,param_4);
  *plVar1 = 0;
  nn::os::SignalLightEvent(pLVar2);
  return;
}


