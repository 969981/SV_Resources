/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022017f8; name: FUN_022017f8
 */


void FUN_022017f8(long param_1,long param_2,uint param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (param_4 != 0) {
    if (0 < (int)param_3) {
      uVar13 = 0;
      do {
        puVar7 = PTR_DAT_047d19f0;
        puVar1 = (undefined8 *)
                 (param_1 + 0x48 +
                 (ulong)*(ushort *)(param_2 + uVar13 * 2) * 0x40 + *(long *)(param_1 + 0x48));
        puVar2 = (undefined8 *)(param_4 + uVar13 * 0x40);
        plVar14 = puVar1 + 6;
        lVar11 = 0;
        if (*plVar14 != 0) {
          lVar11 = *plVar14 + (long)plVar14;
        }
        iVar8 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar11 + 0x18) * 0x200 +
                            0xc0))();
        plVar12 = puVar2 + 6;
        lVar11 = 0;
        if (*plVar12 != 0) {
          lVar11 = *plVar12 + (long)plVar12;
        }
        iVar9 = (**(code **)(*(long *)puVar7 + (ulong)*(byte *)(lVar11 + 0x18) * 0x200 + 0xc0))();
        uVar4 = *(undefined2 *)((long)puVar1 + 0x1c);
        if (puVar2 != puVar1) {
          uVar16 = puVar2[1];
          uVar15 = *puVar2;
          uVar18 = puVar2[3];
          uVar17 = puVar2[2];
          uVar19 = puVar2[4];
          uVar20 = puVar2[7];
          lVar11 = *plVar12;
          plVar3 = (long *)0x0;
          if (*plVar14 != 0) {
            plVar3 = (long *)(*plVar14 + (long)plVar14);
          }
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar19;
          puVar1[1] = uVar16;
          *puVar1 = uVar15;
          puVar1[3] = uVar18;
          puVar1[2] = uVar17;
          puVar1[7] = uVar20;
          *plVar14 = lVar11;
          lVar11 = 0;
          if (*plVar12 != 0) {
            lVar11 = (long)plVar12 + (*plVar12 - (long)plVar14);
          }
          *plVar14 = lVar11;
          if (((lVar11 != 0) && (lVar11 = lVar11 + (long)plVar14, lVar11 != 0)) &&
             (*(long *)(lVar11 + 8) != 0)) {
            plVar14 = (long *)(lVar11 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *plVar14 = *plVar14 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
            plVar14 = plVar3 + 2;
            do {
              lVar11 = *plVar14;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *plVar14 = lVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar3 + 0x18))();
            }
          }
        }
        *(undefined2 *)((long)puVar1 + 0x1c) = uVar4;
        *(int *)(param_1 + 0x98) = (iVar9 - iVar8) + *(int *)(param_1 + 0x98);
        uVar13 = uVar13 + 1;
      } while (uVar13 != param_3);
    }
    FUN_00cb0a40(param_1,param_2,param_3);
    uVar13 = FUN_00cb2110(param_1);
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar10 = 2;
      if ((uVar13 & 1) != 0) {
        uVar10 = 3;
      }
      FUN_00cb04b4(param_1 + 0xa0,param_1,uVar10);
      return;
    }
  }
  return;
}


