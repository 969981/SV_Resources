/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d1e980; name: FUN_00d1e980
 */


void FUN_00d1e980(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = *param_2;
  uStack_48 = param_2[1];
  local_40 = param_2[2];
  local_38 = (long *)param_2[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  local_70 = &DAT_cbf29ce484222645;
  bVar1 = *param_3;
  pbVar2 = param_3;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar2;
  }
  local_60 = 1;
  local_58 = (long *)0x0;
  local_90 = *param_4;
  uStack_88 = param_4[1];
  local_80 = param_4[2];
  local_78 = (long *)param_4[3];
  pbStack_68 = param_3;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  FUN_00d1ea9c(param_1,&local_50,&local_70,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


