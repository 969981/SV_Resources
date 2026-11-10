/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352d5e8; name: FUN_0352d5e8
 */


void FUN_0352d5e8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar5 = param_1 + -4;
  *plVar5 = (long)&PTR_FUN_047c8c38;
  param_1[-3] = (long)&PTR_FUN_047c8ef0;
  *param_1 = (long)&PTR_FUN_047c8f30;
  param_1[3] = (long)&PTR_LAB_047c8fc8;
  puVar4 = PTR_DAT_047e2fd0;
  plVar6 = (long *)param_1[0x22];
  if (plVar6 != (long *)0x0) {
    if (*(uint *)(param_1 + 0x23) != 0) {
      lVar7 = (ulong)*(uint *)(param_1 + 0x23) * 0x60;
      do {
        if (plVar6[10] != 0) {
          (**(code **)(puVar4 + 0x30))(2);
        }
        if (*plVar6 != 0) {
          *(undefined4 *)(plVar6 + 1) = 0;
          (**(code **)(puVar4 + 0x30))(0);
          *plVar6 = 0;
          *(undefined4 *)((long)plVar6 + 0xc) = 0;
        }
        if (plVar6[2] != 0) {
          *(undefined4 *)(plVar6 + 3) = 0;
          (**(code **)(puVar4 + 0x30))(0);
          plVar6[2] = 0;
          *(undefined4 *)((long)plVar6 + 0x1c) = 0;
        }
        plVar6 = plVar6 + 0xc;
        lVar7 = lVar7 + -0x60;
      } while (lVar7 != 0);
      plVar6 = (long *)param_1[0x22];
    }
    *(undefined4 *)(param_1 + 0x23) = 0;
    (**(code **)(puVar4 + 0x30))(0,plVar6);
    param_1[0x22] = 0;
    *(undefined4 *)((long)param_1 + 0x11c) = 0;
  }
  plVar6 = (long *)param_1[0x21];
  puVar1 = PTR_DAT_047e7518 + 0x2c8;
  puVar2 = PTR_DAT_047e7518 + 0x308;
  puVar3 = PTR_DAT_047e7518 + 0x3a0;
  *plVar5 = (long)(PTR_DAT_047e7518 + 0x10);
  param_1[-3] = (long)puVar1;
  *param_1 = (long)puVar2;
  param_1[3] = (long)puVar3;
  if (plVar6 == (long *)0x0) goto LAB_0352d728;
  if (*plVar6 == 0) {
LAB_0352d714:
    (**(code **)(puVar4 + 0x30))(2,plVar6);
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 0;
    (**(code **)(puVar4 + 0x30))(2);
    *plVar6 = 0;
    *(undefined4 *)((long)plVar6 + 0xc) = 0;
    plVar6 = (long *)param_1[0x21];
    if (plVar6 != (long *)0x0) goto LAB_0352d714;
  }
  param_1[0x21] = 0;
LAB_0352d728:
  puVar1 = PTR_DAT_047e7200 + 0x288;
  puVar2 = PTR_DAT_047e7200 + 0x2c8;
  puVar3 = PTR_DAT_047e7200 + 0x360;
  *plVar5 = (long)(PTR_DAT_047e7200 + 0x10);
  param_1[-3] = (long)puVar1;
  *param_1 = (long)puVar2;
  param_1[3] = (long)puVar3;
  if ((long *)param_1[0x1c] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x1d) = 0;
    if (param_1 + 0x1b != (long *)param_1[0x1c]) {
      (**(code **)(puVar4 + 0x30))(0);
    }
    param_1[0x1c] = 0;
    *(undefined4 *)((long)param_1 + 0xec) = 0;
  }
  FUN_034a68b4(plVar5);
  return;
}


