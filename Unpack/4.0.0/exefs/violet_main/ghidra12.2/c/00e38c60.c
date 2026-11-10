/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e38c60; name: FUN_00e38c60
 */


void FUN_00e38c60(long param_1,undefined8 param_2,long param_3,void *param_4,size_t param_5)

{
  long lVar1;
  undefined *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = PTR_DAT_047d8e88 + 0x10;
  local_68 = (long *)0x0;
  FUN_00dc5c18(&local_70,0,param_2,0,*(undefined8 *)(param_1 + 8));
  if ((local_68 != (long *)0x0) && (local_68[0x3b] != 0)) {
    lVar1 = (**(code **)(*local_68 + 0x70))();
    memcpy(param_4,(void *)(lVar1 + param_3),param_5);
  }
  FUN_00db239c(&local_70);
  return;
}


