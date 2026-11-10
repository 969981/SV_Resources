/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ed4128; name: FUN_02ed4128
 */


void FUN_02ed4128(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = (long)&PTR_FUN_0460dea0;
  puVar3 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar6 = (long *)(param_1[0xe] & 0xfffffffffffffffc);
    if (plVar6 != (long *)0x0) {
      if ((param_1[0xe] & 3U) == 0) {
        param_1[0xe] = (ulong)plVar6 | 1;
        do {
          lVar5 = *plVar6;
          plVar6 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          (**(code **)(lVar5 + 8))();
        } while (plVar6 != (long *)0x0);
        param_1[0xe] = 0;
        if (*puVar3 == '\0') goto LAB_02ed4208;
      }
      else {
        do {
          plVar1 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          plVar6[1] = (ulong)plVar1 | 1;
          plVar6 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar6 = (long *)(param_1[0xd] & 0xfffffffffffffffc);
    if (plVar6 != (long *)0x0) {
      if ((param_1[0xd] & 3U) == 0) {
        param_1[0xd] = (ulong)plVar6 | 1;
        do {
          lVar5 = *plVar6;
          plVar6 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          (**(code **)(lVar5 + 8))();
        } while (plVar6 != (long *)0x0);
        param_1[0xd] = 0;
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
LAB_02ed4208:
  puVar3 = PTR_DAT_047d1a08;
  lVar5 = param_1[10];
  if (*(int *)((long)param_1 + 0x5c) < 0) {
    lVar2 = 0;
    if (lVar5 != 0) {
      lVar2 = lVar5 + (long)(param_1 + 10);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar2,0);
  }
  puVar4 = PTR_DAT_047d1a40;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = (long)(puVar4 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x02ed42d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar3 + 8))(0,param_1,0);
  return;
}


