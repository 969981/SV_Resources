/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f4eb0c; name: FUN_02f4eb0c
 */


void FUN_02f4eb0c(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar5 = PTR_DAT_047e4890;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xe],(ulong)*(uint *)((long)param_1 + 0x7c) << 1);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xb],(ulong)*(uint *)((long)param_1 + 100) << 1);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  puVar5 = PTR_DAT_047e3360;
  if ((int)param_1[10] != 0) {
    lVar8 = param_1[9];
    lVar7 = lVar8 + (long)(int)param_1[10] * 0x10;
    do {
      lVar9 = lVar7 + -0x10;
      if (*puVar5 != '\0') {
        plVar6 = (long *)(*(ulong *)(lVar7 + -8) & 0xfffffffffffffffc);
        if (plVar6 != (long *)0x0) {
          if ((*(ulong *)(lVar7 + -8) & 3) == 0) {
            *(ulong *)(lVar7 + -8) = (ulong)plVar6 | 1;
            do {
              lVar2 = *plVar6;
              plVar6 = (long *)(plVar6[1] & 0xfffffffffffffffc);
              (**(code **)(lVar2 + 8))();
            } while (plVar6 != (long *)0x0);
            *(undefined8 *)(lVar7 + -8) = 0;
          }
          else {
            do {
              plVar1 = (long *)(plVar6[1] & 0xfffffffffffffffc);
              plVar6[1] = (ulong)plVar1 | 1;
              plVar6 = plVar1;
            } while (plVar1 != (long *)0x0);
          }
        }
      }
      lVar7 = lVar9;
    } while (lVar9 != lVar8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) << 4);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  plVar6 = (long *)param_1[3];
  *param_1 = (long)(PTR_DAT_047e4898 + 0x10);
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
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
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


