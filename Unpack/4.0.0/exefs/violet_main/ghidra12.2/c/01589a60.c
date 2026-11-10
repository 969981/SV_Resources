/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01589a60; name: FUN_01589a60
 */


void FUN_01589a60(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  char local_48 [8];
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  FUN_01589d88(&local_68,&local_88);
  local_40 = local_68;
  uStack_38 = uStack_60;
  local_68 = 0;
  local_48[0] = '\x01';
  local_30 = local_58;
  uStack_28 = uStack_50;
  FUN_01589b10(param_1,local_48);
  lVar1 = local_40;
  if ((local_48[0] == '\x01') && (local_40 = 0, lVar1 != 0)) {
    FUN_01526e2c(&uStack_38);
    lVar1 = local_68;
    local_68 = 0;
    if (lVar1 != 0) {
      FUN_01526e2c(&uStack_60);
    }
  }
  return;
}


