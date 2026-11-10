/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00328ce4; name: FUN_00328ce4
 */


void FUN_00328ce4(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  
  puVar6 = PTR_LAB_047cba48;
  puVar11 = *(undefined8 **)(param_1 + 8);
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (puVar9 != puVar11) {
    uVar10 = *(ulong *)(param_1 + 0x20);
    plVar12 = (long *)((long)puVar11 + (uVar10 >> 5 & 0x7fffffffffffff8));
    uVar3 = *(long *)(param_1 + 0x28) + uVar10;
    lVar13 = *plVar12 + (uVar10 & 0xff) * 0x10;
    lVar1 = *(long *)((long)puVar11 + (uVar3 >> 5 & 0x7fffffffffffff8)) + (uVar3 & 0xff) * 0x10;
    if (lVar1 != lVar13) {
      do {
        puVar11 = *(undefined8 **)(lVar13 + 8);
        if (puVar11 != (undefined8 *)0x0) {
          plVar2 = puVar11 + 1;
          do {
            lVar8 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)*puVar11)(puVar11);
            FUN_0049e790(puVar6,puVar11);
          }
        }
        lVar13 = lVar13 + 0x10;
        if (lVar13 - *plVar12 == 0x1000) {
          plVar12 = plVar12 + 1;
          lVar13 = *plVar12;
        }
      } while (lVar1 != lVar13);
      puVar11 = *(undefined8 **)(param_1 + 8);
      puVar9 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar6 = PTR_LAB_047cba48;
  lVar13 = (long)puVar9 - (long)puVar11;
  while (uVar3 = lVar13 >> 3, 2 < uVar3) {
    FUN_0049e790(puVar6,*puVar11);
    puVar11 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar11;
    lVar13 = *(long *)(param_1 + 0x10) - (long)puVar11;
  }
  if (uVar3 == 1) {
    uVar7 = 0x80;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    uVar7 = 0x100;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  return;
}


