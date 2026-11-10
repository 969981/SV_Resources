/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03484164; name: FUN_03484164
 */


void FUN_03484164(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)param_1[0x24];
  *param_1 = (long)&PTR_FUN_047c2c60;
  param_1[1] = (long)&PTR_FUN_047c2ee0;
  param_1[7] = (long)&PTR_FUN_047c2fb8;
  param_1[4] = (long)&PTR_FUN_047c2f20;
  if (*(uint *)(param_1 + 0x25) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 0x25) << 3;
    do {
      FUN_034889bc(*puVar3,0);
      (**(code **)(*(long *)*puVar3 + 0x18))();
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    puVar3 = (undefined8 *)param_1[0x24];
  }
  puVar1 = PTR_DAT_047e2fd0;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x25) = 0;
    (**(code **)(puVar1 + 0x30))(0,puVar3);
    param_1[0x24] = 0;
    *(undefined4 *)((long)param_1 + 300) = 0;
  }
  param_1[0x26] = 0;
  if (param_1[0x22] != 0) {
    *(undefined4 *)(param_1 + 0x23) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0x22] = 0;
    *(undefined4 *)((long)param_1 + 0x11c) = 0;
  }
  puVar2 = PTR_DAT_047e71f8;
  puVar1 = PTR_DAT_047e71f8 + 0x290;
  *param_1 = (long)(PTR_DAT_047e71f8 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[4] = (long)(puVar2 + 0x2d0);
  param_1[7] = (long)(puVar2 + 0x368);
  FUN_03489800(param_1);
  return;
}


