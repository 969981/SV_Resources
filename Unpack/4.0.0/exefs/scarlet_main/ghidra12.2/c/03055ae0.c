/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03055ae0; name: FUN_03055ae0
 */


void FUN_03055ae0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong *puVar11;
  
  lVar6 = param_1[6];
  if ((lVar6 != 0) &&
     (plVar4 = (long *)(*(ulong *)(lVar6 + 0x6d0) & 0xfffffffffffffffc), plVar4 != (long *)0x0)) {
    puVar11 = (ulong *)(lVar6 + 0x6d0);
    do {
      puVar7 = (ulong *)(plVar4 + 1);
      plVar10 = (long *)(*puVar7 & 0xfffffffffffffffc);
      if ((long *)plVar4[2] == param_1) {
        if ((*(byte *)(lVar6 + 0x6d0) & 3) == 0) {
          *puVar11 = *puVar11 & 3 | (ulong)plVar10;
          (**(code **)(*plVar4 + 8))();
          puVar7 = puVar11;
        }
        else {
          *puVar7 = (ulong)plVar10 | 1;
        }
      }
      plVar4 = plVar10;
      puVar11 = puVar7;
    } while (plVar10 != (long *)0x0);
  }
  lVar6 = param_1[4];
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[4] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if ((int)param_1[3] != 0) {
    lVar9 = param_1[2];
    lVar6 = lVar9 + (long)(int)param_1[3] * 0x10;
    do {
      plVar4 = *(long **)(lVar6 + -8);
      lVar6 = lVar6 + -0x10;
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar10 = plVar4 + 2;
        do {
          lVar8 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
    } while (lVar6 != lVar9);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[2],(ulong)*(uint *)((long)param_1 + 0x1c) << 4);
  }
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  param_1[2] = 0;
  if ((int)param_1[1] != 0) {
    plVar10 = (long *)*param_1;
    plVar4 = plVar10 + (int)param_1[1];
    do {
      plVar4 = plVar4 + -1;
      plVar5 = (long *)*plVar4;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
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
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar4 != plVar10);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


