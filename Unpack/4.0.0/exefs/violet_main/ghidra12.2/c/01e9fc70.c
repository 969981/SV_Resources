/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9fc70; name: FUN_01e9fc70
 */


undefined8 * FUN_01e9fc70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,0x28,8);
  uVar2 = *param_2;
  *puVar1 = &PTR_LAB_04553a88;
  puVar1[1] = uVar2;
  uVar2 = *param_3;
  puVar1[4] = 0;
  puVar1[2] = uVar2;
  puVar1[3] = 0;
  FUN_01e9a1bc(puVar1 + 3,param_3 + 1);
  return puVar1;
}


