/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fafa0; name: FUN_003fafa0
 */


void FUN_003fafa0(long param_1,undefined8 param_2)

{
  int local_60 [2];
  long local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  long lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 **local_18;
  
  local_38 = *(undefined8 *)(param_1 + 8);
  local_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  uStack_20 = *(undefined8 *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x60) != 0) {
    local_18 = (undefined1 **)0x0;
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_003faff8;
    if (0 < *(int *)(param_1 + 0x58)) {
      uStack_50 = 8;
      local_18 = &local_48;
      local_60[0] = *(int *)(param_1 + 0x58);
      local_58 = *(long *)(param_1 + 0x50);
      local_48 = (undefined1 *)local_60;
      lStack_40 = *(long *)(param_1 + 0x60);
      goto LAB_003faff8;
    }
  }
  local_18 = (undefined1 **)0x0;
LAB_003faff8:
  FUN_003e3920(&local_38,param_2,&DAT_044a2e90);
  return;
}


