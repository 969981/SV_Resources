/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014faeb4; name: FUN_014faeb4
 */


void FUN_014faeb4(long param_1,uint param_2,int param_3,byte param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  uint local_60;
  int iStack_5c;
  undefined1 local_58;
  byte local_54;
  
  plVar1 = (long *)(param_1 + 0x120);
  lVar7 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar7) {
    lVar4 = nn::os::GetCurrentThread();
LAB_014faefc:
    if (*plVar1 == 0) goto code_r0x014faf04;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x128));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x128));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_014faf0c;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_014faf0c:
    bVar6 = false;
    goto LAB_014faf10;
  }
  bVar6 = true;
LAB_014faf10:
  if ((param_4 & 1) == 0) {
    if ((ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 3) <= (ulong)param_2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar5 = FUN_0132a414(*(undefined8 *)(*(long *)(param_1 + 0x138) + (ulong)param_2 * 8));
    iVar3 = (int)uVar5;
    if ((uVar5 & 0xff00000000) == 0) {
      iVar3 = -1;
    }
    if (iVar3 == param_3) goto LAB_014faf40;
  }
  local_54 = param_4 & 1;
  local_58 = 1;
  local_60 = param_2;
  iStack_5c = param_3;
  FUN_014fb000(param_1,&local_60);
LAB_014faf40:
  if (bVar6) {
    return;
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x128));
  return;
code_r0x014faf04:
  cVar2 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar6) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_014faf0c;
  goto LAB_014faefc;
}


