/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b2d714; name: FUN_01b2d714
 */


void FUN_01b2d714(undefined8 param_1,char *param_2)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  short sVar7;
  long *plVar8;
  long *local_8;
  
  cVar2 = *param_2;
  if (cVar2 == '\x02') {
    lVar5 = *(long *)(param_2 + 8);
    if (lVar5 != 0) {
      if (*(short *)(lVar5 + 0x1a) == 0) {
        local_8 = (long *)0x0;
      }
      else {
        psVar1 = (short *)(lVar5 + 0x1a);
        sVar7 = *(short *)(lVar5 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar7) {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_01b2d7f4;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01b2d7f4:
            bVar4 = false;
          }
          if (bVar4) {
            local_8 = (long *)0x0;
            if (*(long *)(lVar5 + 0x10) != 0) {
              local_8 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
            }
            break;
          }
          local_8 = (long *)0x0;
          sVar7 = sVar3;
        } while (sVar3 != 0);
      }
      goto LAB_01b2d73c;
    }
LAB_01b2d738:
    local_8 = (long *)0x0;
  }
  else {
    if (cVar2 == '\x01') {
      plVar8 = *(long **)(param_2 + 8);
      local_8 = plVar8;
      if (plVar8 == (long *)0x0) goto LAB_01b2d73c;
      pcVar6 = *(code **)(*plVar8 + 0x58);
    }
    else {
      if (cVar2 != '\0') goto LAB_01b2d738;
      plVar8 = *(long **)(param_2 + 8);
      local_8 = plVar8;
      if (plVar8 == (long *)0x0) goto LAB_01b2d73c;
      pcVar6 = *(code **)(*plVar8 + 0x58);
    }
    (*pcVar6)(plVar8);
    local_8 = plVar8;
  }
LAB_01b2d73c:
  FUN_01b2f254(param_1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x60))();
  }
  return;
}


