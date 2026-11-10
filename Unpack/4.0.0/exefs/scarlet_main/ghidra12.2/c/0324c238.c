/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324c238; name: FUN_0324c238
 */


void FUN_0324c238(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_047e6068;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  puVar4 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x104)) && (param_1[0x1f] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1f],(ulong)*(uint *)((long)param_1 + 0x104) << 2);
  }
  *(undefined4 *)((long)param_1 + 0x104) = 0x80000000;
  param_1[0x1f] = 0;
  if ((int)param_1[0x1e] != 0) {
    lVar7 = param_1[0x1d];
    lVar8 = lVar7 + (long)(int)param_1[0x1e] * 0x30;
    do {
      plVar5 = *(long **)(lVar8 + -8);
      lVar8 = lVar8 + -0x30;
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
    } while (lVar8 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x1d],(ulong)*(uint *)((long)param_1 + 0xf4) * 0x30);
  }
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x1b],(ulong)*(uint *)((long)param_1 + 0xe4) << 2);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x19],(ulong)*(uint *)((long)param_1 + 0xd4) << 2);
  }
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < *(int *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  FUN_0324c5b0(param_1 + 0xe);
  FUN_0324c440(param_1 + 5);
  if ((param_1[3] & 1U) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[3] - 1,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


