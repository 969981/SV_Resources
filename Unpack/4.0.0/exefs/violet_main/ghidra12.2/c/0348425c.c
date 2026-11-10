/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348425c; name: FUN_0348425c
 */


void FUN_0348425c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  plVar3 = param_1 + -1;
  *plVar3 = (long)&PTR_FUN_047c2c60;
  *param_1 = (long)&PTR_FUN_047c2ee0;
  param_1[6] = (long)&PTR_FUN_047c2fb8;
  puVar4 = (undefined8 *)param_1[0x23];
  param_1[3] = (long)&PTR_FUN_047c2f20;
  if (*(uint *)(param_1 + 0x24) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 0x24) << 3;
    do {
      FUN_034889bc(*puVar4,0);
      (**(code **)(*(long *)*puVar4 + 0x18))();
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
    puVar4 = (undefined8 *)param_1[0x23];
  }
  puVar1 = PTR_DAT_047e2fd0;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    (**(code **)(puVar1 + 0x30))(0,puVar4);
    param_1[0x23] = 0;
    *(undefined4 *)((long)param_1 + 0x124) = 0;
  }
  param_1[0x25] = 0;
  if (param_1[0x21] != 0) {
    *(undefined4 *)(param_1 + 0x22) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0x21] = 0;
    *(undefined4 *)((long)param_1 + 0x114) = 0;
  }
  puVar2 = PTR_DAT_047e71f8;
  puVar1 = PTR_DAT_047e71f8 + 0x290;
  *plVar3 = (long)(PTR_DAT_047e71f8 + 0x10);
  *param_1 = (long)puVar1;
  param_1[3] = (long)(puVar2 + 0x2d0);
  param_1[6] = (long)(puVar2 + 0x368);
  FUN_03489800(plVar3);
  return;
}


