/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348b400; name: FUN_0348b400
 */


undefined8 FUN_0348b400(undefined8 *param_1)

{
  int iVar1;
  
  param_1 = (undefined8 *)*param_1;
  iVar1 = *(int *)((long)param_1 + 0x74) + -1;
  *(int *)((long)param_1 + 0x74) = iVar1;
  *(undefined4 *)(param_1 + 0xf) = 3;
  if (iVar1 == 0) {
    (**(code **)*param_1)(param_1);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
  }
  return 1;
}


