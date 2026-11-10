/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0304a590; name: FUN_0304a590
 */


void FUN_0304a590(long *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong *puVar12;
  
  uVar2 = *(uint *)(param_1 + 0xb);
  *param_1 = (long)(PTR_DAT_047e4ee0 + 0x10);
  if (0 < (int)uVar2) {
    uVar11 = 0;
    do {
      plVar9 = *(long **)(param_1[10] + uVar11 * 8);
      if ((param_1[0xc] != 0) && ((*(byte *)(plVar9 + 3) & 1) == 0)) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
        *(byte *)(plVar9 + 3) = *(byte *)(plVar9 + 3) | 1;
      }
      if (plVar9[1] != 0) {
        plVar10 = plVar9 + 2;
        do {
          lVar8 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar2);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[0xc] != 0) {
    puVar5 = (ulong *)FUN_00dbb5e0(*(undefined8 *)(param_1[0xc] + 0x908),3);
    if ((long *)(*puVar5 & 0xfffffffffffffffc) != (long *)0x0) {
      plVar9 = (long *)(*puVar5 & 0xfffffffffffffffc);
      puVar12 = puVar5;
      do {
        puVar7 = (ulong *)(plVar9 + 1);
        plVar10 = (long *)(*puVar7 & 0xfffffffffffffffc);
        if ((long *)plVar9[2] == param_1) {
          if ((*puVar5 & 3) == 0) {
            *puVar12 = *puVar12 & 3 | (ulong)plVar10;
            (**(code **)(*plVar9 + 8))();
            puVar7 = puVar12;
          }
          else {
            *puVar7 = (ulong)plVar10 | 1;
          }
        }
        plVar9 = plVar10;
        puVar12 = puVar7;
      } while (plVar10 != (long *)0x0);
    }
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[10],(ulong)*(uint *)((long)param_1 + 0x5c) << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  *param_1 = (long)(PTR_DAT_047e4ec8 + 0x10);
  if ((int)param_1[7] != 0) {
    plVar10 = (long *)param_1[6];
    plVar9 = plVar10 + (int)param_1[7];
    do {
      plVar9 = plVar9 + -1;
      plVar6 = (long *)*plVar9;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (plVar9 != plVar10);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  param_1[6] = 0;
  if ((param_1[4] & 1U) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[4] - 1,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


