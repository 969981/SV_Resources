/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03001af8; name: FUN_03001af8
 */


void FUN_03001af8(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  
  if (*(long *)(param_1 + 0x6e0) != 0) {
    uVar3 = *(uint *)(param_1 + 0x6f8);
    if (*(char *)(param_1 + 0x6ec) != '\0') {
      plVar4 = *(long **)(param_1 + 0x6f0);
      if ((int)uVar3 < 1) {
        plVar6 = plVar4;
      }
      else {
        plVar6 = plVar4;
        if (uVar3 != 1) {
          iVar8 = -(uVar3 & 0xfffffffe);
          do {
            plVar5 = plVar4;
            if (*plVar6 != 0) {
              plVar5 = plVar4 + 1;
              *plVar4 = *plVar6;
            }
            plVar4 = plVar5;
            if (plVar6[1] != 0) {
              plVar4 = plVar5 + 1;
              *plVar5 = plVar6[1];
            }
            plVar6 = plVar6 + 2;
            iVar8 = iVar8 + 2;
          } while (iVar8 != 0);
        }
        plVar5 = plVar4;
        if (((uVar3 & 1) != 0) && (*plVar6 != 0)) {
          plVar5 = plVar4 + 1;
          *plVar4 = *plVar6;
        }
        plVar4 = plVar5;
        plVar6 = *(long **)(param_1 + 0x6f0);
      }
      uVar3 = (uint)((ulong)((long)plVar4 - (long)plVar6) >> 3);
      *(undefined1 *)(param_1 + 0x6ec) = 0;
    }
    if (uVar3 != 0) {
      (**(code **)(**(long **)(param_1 + 0x6e0) + 0x28))
                (*(long **)(param_1 + 0x6e0),*(undefined8 *)(param_1 + 0x6f0));
    }
    *(undefined4 *)(param_1 + 0x6f8) = 0;
    *(undefined4 *)(param_1 + 0x6e8) = 0;
  }
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x6fc)) && (*(long *)(param_1 + 0x6f0) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x6f0),(ulong)*(uint *)(param_1 + 0x6fc) << 3);
  }
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x578) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x57c)) && (*(long *)(param_1 + 0x570) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x570),(ulong)*(uint *)(param_1 + 0x57c) << 6);
  }
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined4 *)(param_1 + 0x57c) = 0x80000000;
  if (*(int *)(param_1 + 0x3cc) == 0) {
    plVar4 = *(long **)(param_1 + 0x3b8);
    if (plVar4[1] != 0) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    plVar4 = *(long **)(param_1 + 0x3c0);
    if (plVar4[1] != 0) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x298);
  *(undefined **)(param_1 + 0x340) = PTR_DAT_047d1a00 + 0x10;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  lVar7 = *(long *)(param_1 + 0x290);
  if (lVar7 != 0) {
    *(undefined **)(lVar7 + 0x210) = PTR_DAT_047d1b30 + 0x10;
    if (*(long **)(lVar7 + 0x218) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + 0x218) + 8))();
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar7,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(long *)(param_1 + 0x48) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x48),(ulong)*(uint *)(param_1 + 0x54) << 6);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  return;
}


