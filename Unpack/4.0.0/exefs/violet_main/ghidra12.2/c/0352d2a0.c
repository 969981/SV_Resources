/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352d2a0; name: FUN_0352d2a0
 */


void FUN_0352d2a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)param_1[0x26];
  *param_1 = (long)&PTR_FUN_047c8c38;
  param_1[1] = (long)&PTR_FUN_047c8ef0;
  param_1[4] = (long)&PTR_FUN_047c8f30;
  param_1[7] = (long)&PTR_LAB_047c8fc8;
  puVar4 = PTR_DAT_047e2fd0;
  if (plVar5 != (long *)0x0) {
    if (*(uint *)(param_1 + 0x27) != 0) {
      lVar6 = (ulong)*(uint *)(param_1 + 0x27) * 0x60;
      do {
        if (plVar5[10] != 0) {
          (**(code **)(puVar4 + 0x30))(2);
        }
        if (*plVar5 != 0) {
          *(undefined4 *)(plVar5 + 1) = 0;
          (**(code **)(puVar4 + 0x30))(0);
          *plVar5 = 0;
          *(undefined4 *)((long)plVar5 + 0xc) = 0;
        }
        if (plVar5[2] != 0) {
          *(undefined4 *)(plVar5 + 3) = 0;
          (**(code **)(puVar4 + 0x30))(0);
          plVar5[2] = 0;
          *(undefined4 *)((long)plVar5 + 0x1c) = 0;
        }
        plVar5 = plVar5 + 0xc;
        lVar6 = lVar6 + -0x60;
      } while (lVar6 != 0);
      plVar5 = (long *)param_1[0x26];
    }
    *(undefined4 *)(param_1 + 0x27) = 0;
    (**(code **)(puVar4 + 0x30))(0,plVar5);
    param_1[0x26] = 0;
    *(undefined4 *)((long)param_1 + 0x13c) = 0;
  }
  plVar5 = (long *)param_1[0x25];
  puVar1 = PTR_DAT_047e7518 + 0x2c8;
  puVar2 = PTR_DAT_047e7518 + 0x308;
  puVar3 = PTR_DAT_047e7518 + 0x3a0;
  *param_1 = (long)(PTR_DAT_047e7518 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[4] = (long)puVar2;
  param_1[7] = (long)puVar3;
  if (plVar5 == (long *)0x0) goto LAB_0352d3e0;
  if (*plVar5 == 0) {
LAB_0352d3cc:
    (**(code **)(puVar4 + 0x30))(2,plVar5);
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 0;
    (**(code **)(puVar4 + 0x30))(2);
    *plVar5 = 0;
    *(undefined4 *)((long)plVar5 + 0xc) = 0;
    plVar5 = (long *)param_1[0x25];
    if (plVar5 != (long *)0x0) goto LAB_0352d3cc;
  }
  param_1[0x25] = 0;
LAB_0352d3e0:
  puVar1 = PTR_DAT_047e7200 + 0x288;
  puVar2 = PTR_DAT_047e7200 + 0x2c8;
  puVar3 = PTR_DAT_047e7200 + 0x360;
  *param_1 = (long)(PTR_DAT_047e7200 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[4] = (long)puVar2;
  param_1[7] = (long)puVar3;
  if ((long *)param_1[0x20] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x21) = 0;
    if (param_1 + 0x1f != (long *)param_1[0x20]) {
      (**(code **)(puVar4 + 0x30))(0);
    }
    param_1[0x20] = 0;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
  }
  FUN_034a68b4(param_1);
  return;
}


