/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030ac290; name: FUN_030ac290
 */


void FUN_030ac290(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  plVar8 = *(long **)(param_1 + 0x228);
  if (plVar8 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == 1) {
      *(undefined1 *)(plVar8 + 6) = 1;
      lVar7 = *(long *)(param_1 + 0x30);
      plVar8[5] = *(long *)(param_1 + 0x38);
      plVar8[4] = lVar7;
      *(undefined4 *)(*(long *)(param_1 + 0x228) + 0x60) = *(undefined4 *)(param_1 + 0x234);
      plVar8 = *(long **)(param_1 + 0x228);
      if (plVar8 == (long *)0x0) {
        return;
      }
      if (plVar8[1] != 0) {
        plVar5 = plVar8 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = *plVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else if (plVar8[1] != 0) {
      plVar5 = plVar8 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_38 = 0;
    local_58 = auStack_48;
    local_50 = -0x7ffffffeffffffff;
    FUN_030af8fc(plVar8,param_2,param_3,&local_58);
    if ((*(byte *)((long)plVar8 + 100) & 0xfd) == 1) {
      FUN_030ac454(param_1,plVar8[0xd]);
    }
    if ((int)plVar8[0xf] != 0) {
      FUN_030ac578(param_1,plVar8[0xe],plVar8[0xe] + (long)(int)plVar8[0xf] * 4,0);
      *(undefined4 *)(plVar8 + 0xf) = 0;
    }
    FUN_030d0f5c(*(undefined8 *)(*(long *)(param_1 + 0x180) + 0x250),local_58,
                 local_58 + local_38 * 0x10);
    if (local_38 != 0) {
      puVar2 = local_58 + local_38 * 0x10;
      puVar9 = local_58;
      do {
        plVar5 = *(long **)(puVar9 + 8);
        if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
          plVar1 = plVar5 + 2;
          do {
            lVar7 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        puVar9 = puVar9 + 0x10;
      } while (puVar9 != puVar2);
    }
    lVar7 = local_50;
    uVar6 = (ulong)local_50._4_4_;
    local_50 = (ulong)local_50._4_4_ << 0x20;
    if ((-1 < lVar7) && (local_58 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_58,uVar6 << 4);
    }
    if (plVar8[1] != 0) {
      plVar5 = plVar8 + 2;
      do {
        lVar7 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
  }
  return;
}


