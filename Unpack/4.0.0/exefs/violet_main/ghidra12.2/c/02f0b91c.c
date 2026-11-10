/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0b91c; name: FUN_02f0b91c
 */


void FUN_02f0b91c(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong *puVar14;
  
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(long *)(param_1 + 0xa8) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0xa8),(ulong)*(uint *)(param_1 + 0xb4) << 3);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  FUN_031c46c0(param_1 + 0x90);
  FUN_02f0b1b0(param_1 + 0x78);
  if (0 < (int)*(uint *)(param_1 + 0x8c)) {
    lVar11 = 0;
    lVar12 = (ulong)*(uint *)(param_1 + 0x8c) + 1;
    do {
      if (*(short *)(*(long *)(param_1 + 0x80) + lVar11) != -1) {
        *(undefined2 *)(*(long *)(param_1 + 0x80) + lVar11) = 0xffff;
      }
      lVar12 = lVar12 + -1;
      lVar11 = lVar11 + 0x10;
    } while (lVar12 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = uVar3 & 0x80000000;
  if ((-1 < (int)uVar3) && (*(long *)(param_1 + 0x80) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x80),
               (long)*(int *)(param_1 + 0x8c) * 0x10 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0xffffffff00000000;
  if (*(int *)(param_1 + 0x70) != 0) {
    plVar13 = *(long **)(param_1 + 0x68);
    plVar8 = plVar13 + *(int *)(param_1 + 0x70);
    do {
      plVar8 = plVar8 + -1;
      plVar7 = (long *)*plVar8;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar1 = plVar7 + 2;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    } while (plVar8 != plVar13);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x74)) && (*(long *)(param_1 + 0x68) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x68),(ulong)*(uint *)(param_1 + 0x74) << 3);
  }
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  iVar10 = *(int *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (0 < iVar10) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x38) + lVar11;
      if ((*(int *)(lVar2 + 0x14) != 0x7fffffff) &&
         (plVar8 = *(long **)(lVar2 + 0x28), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 8))();
        iVar10 = *(int *)(param_1 + 0x40);
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x38;
    } while (lVar12 < iVar10);
  }
  puVar6 = PTR_DAT_047d1a08;
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(long *)(param_1 + 0x48),0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x38),(ulong)*(uint *)(param_1 + 0x44) * 0x38);
  }
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar12 = 0;
    do {
      lVar11 = *(long *)(param_1 + 8);
      if (*(int *)(lVar11 + lVar12 * 0x68 + 0x30) != 0x7fffffff) {
        puVar14 = (ulong *)(lVar11 + lVar12 * 0x68 + 0x58);
        uVar9 = *puVar14;
        if (1 < uVar9) {
          (**(code **)(puVar6 + 8))(0,uVar9,0);
        }
        lVar11 = lVar11 + lVar12 * 0x68;
        *puVar14 = 0;
        plVar8 = *(long **)(lVar11 + 0x20);
        *(undefined2 *)(lVar11 + 0x56) = 0;
        if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
          plVar13 = plVar8 + 2;
          do {
            lVar11 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(puVar6 + 8))(0,*(long *)(param_1 + 0x18),0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 8),(ulong)*(uint *)(param_1 + 0x14) * 0x68);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}


