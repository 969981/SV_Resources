/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dbaf98; name: FUN_00dbaf98
 */


void FUN_00dbaf98(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = (long)&DAT_046ab8e0;
  if ((int)param_1[0x78] != 0) {
    plVar7 = (long *)param_1[0x77];
    plVar8 = plVar7 + (int)param_1[0x78];
    do {
      plVar8 = plVar8 + -1;
      plVar5 = (long *)*plVar8;
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
    } while (plVar8 != plVar7);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c4)) && (param_1[0x77] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x77],(ulong)*(uint *)((long)param_1 + 0x3c4) << 3);
  }
  param_1[0x77] = 0;
  *(undefined4 *)((long)param_1 + 0x3c4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x66) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x334)) && (param_1[0x65] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x65],(ulong)*(uint *)((long)param_1 + 0x334) << 2);
  }
  param_1[0x65] = 0;
  *(undefined4 *)((long)param_1 + 0x334) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) * 0x18);
  }
  param_1[3] = 0;
  puVar4 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


