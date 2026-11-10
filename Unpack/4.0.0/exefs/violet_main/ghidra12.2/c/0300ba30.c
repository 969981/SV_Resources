/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300ba30; name: FUN_0300ba30
 */


void FUN_0300ba30(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  *param_1 = (long)&PTR_LAB_04613060;
  puVar5 = PTR_PTR_047d1a50;
  puVar4 = PTR_DAT_047d1a08;
  if ((int)param_1[4] != 0) {
    plVar9 = (long *)param_1[3];
    plVar10 = plVar9 + (int)param_1[4];
    do {
      plVar10 = plVar10 + -1;
      lVar8 = *plVar10;
      if (lVar8 != 0) {
        plVar6 = *(long **)(lVar8 + 0xa0);
        if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
          plVar1 = plVar6 + 2;
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
            (**(code **)(*plVar6 + 0x18))();
          }
        }
        *(undefined4 *)(lVar8 + 0x58) = 0;
        if ((-1 < (int)*(uint *)(lVar8 + 0x5c)) && (*(long *)(lVar8 + 0x50) != 0)) {
          (**(code **)(*(long *)puVar5 + 0x20))
                    (puVar5,*(long *)(lVar8 + 0x50),(ulong)*(uint *)(lVar8 + 0x5c) * 0x50);
        }
        *(undefined8 *)(lVar8 + 0x50) = 0;
        *(undefined4 *)(lVar8 + 0x5c) = 0x80000000;
        *(undefined4 *)(lVar8 + 0x48) = 0;
        if ((-1 < (int)*(uint *)(lVar8 + 0x4c)) && (*(long *)(lVar8 + 0x40) != 0)) {
          (**(code **)(*(long *)puVar5 + 0x20))
                    (puVar5,*(long *)(lVar8 + 0x40),(ulong)*(uint *)(lVar8 + 0x4c) * 0x30);
        }
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(undefined4 *)(lVar8 + 0x4c) = 0x80000000;
        (**(code **)(puVar4 + 8))(0,lVar8,0);
      }
    } while (plVar10 != plVar9);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 3);
  }
  param_1[3] = 0;
  puVar4 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


