/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02357c10; name: FUN_02357c10
 */


uint FUN_02357c10(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  undefined1 local_30;
  long *local_28;
  
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = param_2[2];
  local_40 = (long *)param_2[3];
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x18))();
  }
  local_38 = param_2[4];
  local_30 = *(undefined1 *)(param_2 + 5);
  local_28 = (long *)param_2[6];
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  uVar1 = (*(code *)*param_1)(param_1 + 4,&local_58);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  return uVar1 & 1;
}


