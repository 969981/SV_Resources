/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349aa74; name: FUN_0349aa74
 */


void FUN_0349aa74(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x3f0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,PTR_PTR_047e71e0);
    *(undefined8 *)(param_1 + 0x3f0) = 0;
  }
  FUN_03480ed4(param_1 + 0x390);
  puVar4 = PTR_DAT_047e6d08;
  lVar6 = *(long *)(param_1 + 0x400);
  if (lVar6 != 0) {
    bVar1 = *(byte *)(param_1 + 0x408);
    if (bVar1 != 0) {
      if ((bVar1 < 9) && (*(uint *)PTR_DAT_047e6d08 == (uint)*(ushort *)(param_1 + 0x410))) {
        plVar5 = &DAT_048afcf8 + (bVar1 - 1);
        do {
          lVar7 = *plVar5;
          *(long *)(lVar6 + -0x20) = lVar7;
          while (*plVar5 == lVar7) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar6 + -0x20;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              *(undefined4 *)(lVar6 + -0x18) = 0;
              goto LAB_0349ab40;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,lVar6 + -0x20);
    }
  }
LAB_0349ab40:
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x40c) = 0x2b;
  *(undefined8 *)(param_1 + 0x414) = 0;
  *(undefined8 *)(param_1 + 0x41c) = 0x3f800000ffffffff;
  *(undefined8 *)(param_1 + 0x424) = 0x1ffffffff;
  lVar6 = *(long *)(param_1 + 0x430);
  if (lVar6 != 0) {
    bVar1 = *(byte *)(param_1 + 0x438);
    if (bVar1 != 0) {
      if ((bVar1 < 9) && (*(uint *)puVar4 == (uint)*(ushort *)(param_1 + 0x440))) {
        plVar5 = &DAT_048afcf8 + (bVar1 - 1);
        do {
          lVar7 = *plVar5;
          *(long *)(lVar6 + -0x20) = lVar7;
          while (*plVar5 == lVar7) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar6 + -0x20;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              *(undefined4 *)(lVar6 + -0x18) = 0;
              goto LAB_0349abf0;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,lVar6 + -0x20);
    }
  }
LAB_0349abf0:
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x43c) = 0x2b;
  *(undefined8 *)(param_1 + 0x444) = 0;
  *(undefined8 *)(param_1 + 0x44c) = 0x3f800000ffffffff;
  *(undefined8 *)(param_1 + 0x454) = 0x1ffffffff;
  FUN_034a0dc8(param_1 + 0x128);
  *(undefined2 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x11e) = 0;
  if (*(long **)(param_1 + 0x388) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x388) + 0x18))();
    *(undefined8 *)(param_1 + 0x388) = 0;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}


