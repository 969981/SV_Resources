/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03489800; name: FUN_03489800
 */


void FUN_03489800(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_DAT_047e7200 + 0x10;
  puVar2 = PTR_DAT_047e7200 + 0x288;
  puVar3 = PTR_DAT_047e7200 + 0x360;
  param_1[4] = (long)(PTR_DAT_047e7200 + 0x2c8);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  param_1[7] = (long)puVar3;
  if ((long *)param_1[0x20] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x21) = 0;
    if (param_1 + 0x1f != (long *)param_1[0x20]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    param_1[0x20] = 0;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
  }
  FUN_034a68b4(param_1);
  return;
}


