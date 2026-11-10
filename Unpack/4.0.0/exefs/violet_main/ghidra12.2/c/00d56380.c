/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d56380; name: FUN_00d56380
 */


void FUN_00d56380(uint *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_48;
  uint *local_40;
  undefined4 local_38;
  
  local_88 = &local_48;
  uVar1 = *param_1;
  local_48 = param_2;
  uVar2 = FUN_00d56460(uVar1,uVar1 ^ (int)uVar1 >> 0x1f,&local_88,param_1 + 2,param_5,param_6,0,0);
  if ((uVar2 & 1) == 0) {
    local_80 = *param_2;
    local_78 = param_2[1];
    uStack_70 = param_2[2];
    local_88 = (undefined8 **)((ulong)local_88 & 0xffffffff00000000);
    if (*param_1 == 0) {
      local_40 = (uint *)&local_80;
      FUN_00d5a180(0,&local_40,param_1 + 2);
    }
    else {
      local_38 = 0;
      local_40 = param_1;
      FUN_00d5a110(&local_40,&local_80);
    }
    FUN_00d56620((ulong)local_88 & 0xffffffff,(uint)local_88 ^ (int)(uint)local_88 >> 0x1f,&local_40
                 ,&local_80,param_5,param_6,0,0);
  }
  return;
}


