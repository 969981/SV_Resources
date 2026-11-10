/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03042f68; name: FUN_03042f68
 */


void FUN_03042f68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  *(undefined4 *)(param_1 + 0x110) = 0;
  puVar4 = PTR_PTR_047d1a50;
  if ((-1 < *(int *)(param_1 + 0x114)) && (*(long *)(param_1 + 0x108) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50);
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0x80000000;
  *(undefined4 *)(param_1 + 0x100) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x104)) && (*(long *)(param_1 + 0xf8) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,*(long *)(param_1 + 0xf8),(ulong)*(uint *)(param_1 + 0x104) << 2);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x80000000;
  if (*(int *)(param_1 + 0xf0) != 0) {
    plVar8 = *(long **)(param_1 + 0xe8);
    plVar6 = plVar8 + *(int *)(param_1 + 0xf0);
    do {
      plVar6 = plVar6 + -1;
      plVar5 = (long *)*plVar6;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
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
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar6 != plVar8);
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xf4)) && (*(long *)(param_1 + 0xe8) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,*(long *)(param_1 + 0xe8),(ulong)*(uint *)(param_1 + 0xf4) << 3);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xe4)) && (*(long *)(param_1 + 0xd8) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,*(long *)(param_1 + 0xd8),(ulong)*(uint *)(param_1 + 0xe4) << 2);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xd4)) && (*(long *)(param_1 + 200) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,*(long *)(param_1 + 200),(ulong)*(uint *)(param_1 + 0xd4) << 2);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xc4)) && (*(long *)(param_1 + 0xb8) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,*(long *)(param_1 + 0xb8),(ulong)*(uint *)(param_1 + 0xc4) << 4);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(long *)(param_1 + 0xa8) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,*(long *)(param_1 + 0xa8),(ulong)*(uint *)(param_1 + 0xb4) << 4);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xa4)) && (*(long *)(param_1 + 0x98) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,*(long *)(param_1 + 0x98),(ulong)*(uint *)(param_1 + 0xa4) << 4);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x94)) && (*(long *)(param_1 + 0x88) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,*(long *)(param_1 + 0x88),(ulong)*(uint *)(param_1 + 0x94) << 4);
  }
  plVar6 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar8 = plVar6 + 2;
    do {
      lVar7 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x030431e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))();
      return;
    }
  }
  return;
}


