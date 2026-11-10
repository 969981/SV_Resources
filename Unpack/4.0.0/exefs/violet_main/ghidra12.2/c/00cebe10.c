/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cebe10; name: FUN_00cebe10
 */


int FUN_00cebe10(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  
  iVar5 = *(int *)(param_1 + 0x3c0);
  if (iVar5 == -1) {
    lVar6 = *(long *)(param_1 + 0x1c8);
    if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
LAB_00cebe40:
      iVar5 = 1;
    }
    else {
      psVar1 = (short *)(lVar6 + 0x1a);
      iVar5 = 1;
      sVar7 = *(short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_00cebe80;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00cebe80:
          bVar4 = false;
        }
        if (bVar4) {
          if (*(long *)(lVar6 + 0x10) != 0) {
            plVar8 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
            iVar5 = FUN_00cebe10(plVar8);
            (**(code **)(*plVar8 + 0x60))(plVar8);
            return iVar5;
          }
          goto LAB_00cebe40;
        }
        sVar7 = sVar2;
      } while (sVar2 != 0);
    }
  }
  return iVar5;
}


