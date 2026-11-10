/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dcf2e8; name: FUN_00dcf2e8
 */


void FUN_00dcf2e8(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      if (0 < (int)*(uint *)(param_1 + 0x100)) {
        lVar6 = *(long *)(param_1 + 0x18);
        uVar7 = (ulong)*(uint *)(param_1 + 0x100);
        do {
          plVar4 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar7 - 1) * 8);
          (**(code **)(*plVar4 + 0x30))(plVar4,param_1,lVar6 + lVar8 * 0x40);
          bVar1 = 1 < (long)uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar1);
        iVar5 = *(int *)(param_1 + 0x20);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  plVar4 = *(long **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar2 = plVar4 + 2;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar1) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  *(long *)(param_1 + 0x28) = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    plVar4 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar1) {
        *plVar4 = *plVar4 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_1 + 0x38) != -1) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x110))
              (*(long **)(param_1 + 0x50),*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
               0);
  }
  (**(code **)(*(long *)PTR_DAT_047d19f0 +
               (ulong)*(byte *)(*(long *)(param_1 + 0x28) + 0x18) * 0x200 + 0x18))
            (*(long *)(param_1 + 0x28),PTR_DAT_047d19b0 + 0x200,param_1 + 0xa0);
  uVar7 = (ulong)*(uint *)(param_1 + 0x100);
  if (0 < (int)*(uint *)(param_1 + 0x100)) {
    do {
      plVar4 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar7 - 1) * 8);
      (**(code **)(*plVar4 + 0x48))(plVar4,param_1);
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
  }
  return;
}


