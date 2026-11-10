/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e5bc4; name: FUN_029e5bc4
 */


void FUN_029e5bc4(long param_1,undefined8 *param_2)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  long *local_38;
  
  lVar7 = *(long *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x50);
  do {
    if (lVar7 == lVar2) {
      return;
    }
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar6 + 0x1a);
      sVar8 = *(short *)(lVar6 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_029e5c48;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_029e5c48:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar6 + 0x10) != 0) {
            plVar9 = (long *)(*(long *)(lVar6 + 0x10) + -8);
            local_38 = plVar9;
            (*(code *)*param_2)(param_2 + 4,&local_38);
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
          break;
        }
        sVar8 = sVar3;
      } while (sVar3 != 0);
    }
    lVar7 = lVar7 + 0x30;
  } while( true );
}


