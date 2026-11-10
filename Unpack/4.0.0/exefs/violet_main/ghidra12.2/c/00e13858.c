/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e13858; name: FUN_00e13858
 */


ulong FUN_00e13858(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  plVar5 = (long *)(param_1 + 0x40);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00e13894;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00e13894;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00e13894:
  lVar4 = *(long *)(param_1 + 0x78);
  lVar2 = *(long *)(param_1 + 0x80) - lVar4;
  if (lVar2 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x80) == lVar4) {
LAB_00e13904:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar6 = 1;
    uVar7 = 0;
    uVar8 = 1;
    while( true ) {
      plVar5 = (long *)(**(code **)(**(long **)(lVar4 + uVar7 * 0x20) + 0x40))();
      if (*plVar5 == *param_2) goto LAB_00e13958;
      if ((ulong)(lVar2 >> 5) <= uVar8) break;
      lVar4 = *(long *)(param_1 + 0x78);
      bVar3 = (ulong)(*(long *)(param_1 + 0x80) - lVar4 >> 5) <= uVar8;
      uVar7 = uVar8;
      uVar8 = (ulong)((int)uVar8 + 1);
      if (bVar3) goto LAB_00e13904;
    }
  }
  uVar6 = 0;
  uVar7 = uVar8;
LAB_00e13958:
  *(undefined8 *)(param_1 + 0x40) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
  return uVar6 | uVar7 << 0x20;
}


