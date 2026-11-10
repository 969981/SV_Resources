/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352d444; name: FUN_0352d444
 */


void FUN_0352d444(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar5 = param_1 + -1;
  *plVar5 = (long)&PTR_FUN_047c8c38;
  *param_1 = (long)&PTR_FUN_047c8ef0;
  param_1[3] = (long)&PTR_FUN_047c8f30;
  param_1[6] = (long)&PTR_LAB_047c8fc8;
  puVar4 = PTR_DAT_047e2fd0;
  plVar6 = (long *)param_1[0x25];
  if (plVar6 != (long *)0x0) {
    if (*(uint *)(param_1 + 0x26) != 0) {
      lVar7 = (ulong)*(uint *)(param_1 + 0x26) * 0x60;
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
      plVar6 = (long *)param_1[0x25];
    }
    *(undefined4 *)(param_1 + 0x26) = 0;
    (**(code **)(puVar4 + 0x30))(0,plVar6);
    param_1[0x25] = 0;
    *(undefined4 *)((long)param_1 + 0x134) = 0;
  }
  plVar6 = (long *)param_1[0x24];
  puVar1 = PTR_DAT_047e7518 + 0x2c8;
  puVar2 = PTR_DAT_047e7518 + 0x308;
  puVar3 = PTR_DAT_047e7518 + 0x3a0;
  *plVar5 = (long)(PTR_DAT_047e7518 + 0x10);
  *param_1 = (long)puVar1;
  param_1[3] = (long)puVar2;
  param_1[6] = (long)puVar3;
  if (plVar6 == (long *)0x0) goto LAB_0352d584;
  if (*plVar6 == 0) {
LAB_0352d570:
    (**(code **)(puVar4 + 0x30))(2,plVar6);
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 0;
    (**(code **)(puVar4 + 0x30))(2);
    *plVar6 = 0;
    *(undefined4 *)((long)plVar6 + 0xc) = 0;
    plVar6 = (long *)param_1[0x24];
    if (plVar6 != (long *)0x0) goto LAB_0352d570;
  }
  param_1[0x24] = 0;
LAB_0352d584:
  puVar1 = PTR_DAT_047e7200 + 0x288;
  puVar2 = PTR_DAT_047e7200 + 0x2c8;
  puVar3 = PTR_DAT_047e7200 + 0x360;
  *plVar5 = (long)(PTR_DAT_047e7200 + 0x10);
  *param_1 = (long)puVar1;
  param_1[3] = (long)puVar2;
  param_1[6] = (long)puVar3;
  if ((long *)param_1[0x1f] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (param_1 + 0x1e != (long *)param_1[0x1f]) {
      (**(code **)(puVar4 + 0x30))(0);
    }
    param_1[0x1f] = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
  }
  FUN_034a68b4(plVar5);
  return;
}


