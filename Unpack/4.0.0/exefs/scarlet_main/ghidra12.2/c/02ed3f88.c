/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ed3f88; name: FUN_02ed3f88
 */


void FUN_02ed3f88(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)&PTR_FUN_0460dea0;
  puVar3 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar5 = (long *)(param_1[0xe] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[0xe] & 3U) == 0) {
        param_1[0xe] = (ulong)plVar5 | 1;
        do {
          lVar4 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar4 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[0xe] = 0;
        if (*puVar3 == '\0') goto LAB_02ed4068;
      }
      else {
        do {
          plVar1 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar1 | 1;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar5 = (long *)(param_1[0xd] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[0xd] & 3U) == 0) {
        param_1[0xd] = (ulong)plVar5 | 1;
        do {
          lVar4 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar4 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[0xd] = 0;
      }
      else {
        do {
          plVar1 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar1 | 1;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
  }
LAB_02ed4068:
  lVar4 = param_1[10];
  if (*(int *)((long)param_1 + 0x5c) < 0) {
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar2 = lVar4 + (long)(param_1 + 10);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar2,0);
  }
  puVar3 = PTR_DAT_047d1a40;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) << 5);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) << 4);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  return;
}


