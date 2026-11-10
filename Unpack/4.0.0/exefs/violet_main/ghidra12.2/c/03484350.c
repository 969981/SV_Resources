/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03484350; name: FUN_03484350
 */


void FUN_03484350(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  param_1[-4] = (long)&PTR_FUN_047c2c60;
  param_1[-3] = (long)&PTR_FUN_047c2ee0;
  puVar3 = (undefined8 *)param_1[0x20];
  param_1[3] = (long)&PTR_FUN_047c2fb8;
  *param_1 = (long)&PTR_FUN_047c2f20;
  if (*(uint *)(param_1 + 0x21) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 0x21) << 3;
    do {
      FUN_034889bc(*puVar3,0);
      (**(code **)(*(long *)*puVar3 + 0x18))();
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    puVar3 = (undefined8 *)param_1[0x20];
  }
  puVar1 = PTR_DAT_047e2fd0;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x21) = 0;
    (**(code **)(puVar1 + 0x30))(0,puVar3);
    param_1[0x20] = 0;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
  }
  param_1[0x22] = 0;
  if (param_1[0x1e] != 0) {
    *(undefined4 *)(param_1 + 0x1f) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0x1e] = 0;
    *(undefined4 *)((long)param_1 + 0xfc) = 0;
  }
  puVar2 = PTR_DAT_047e71f8;
  puVar1 = PTR_DAT_047e71f8 + 0x290;
  param_1[-4] = (long)(PTR_DAT_047e71f8 + 0x10);
  param_1[-3] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0x2d0);
  param_1[3] = (long)(puVar2 + 0x368);
  FUN_03489800(param_1 + -4);
  return;
}


