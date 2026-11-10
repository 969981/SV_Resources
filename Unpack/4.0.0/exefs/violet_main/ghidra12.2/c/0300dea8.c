/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300dea8; name: FUN_0300dea8
 */


void FUN_0300dea8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  FUN_0300e008();
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
  }
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x10))();
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      if (((~*(uint *)(*(long *)(param_1 + 8) + lVar6 * 0x10 + 8) & 0xffffff) != 0) &&
         (plVar4 = *(long **)(*(long *)(param_1 + 8) + lVar6 * 0x10), plVar4 != (long *)0x0)) {
        if (plVar4[1] != 0) {
          plVar1 = plVar4 + 2;
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        iVar5 = *(int *)(param_1 + 0x10);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(long *)(param_1 + 0x18),0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 8),(ulong)*(uint *)(param_1 + 0x14) << 4);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}


