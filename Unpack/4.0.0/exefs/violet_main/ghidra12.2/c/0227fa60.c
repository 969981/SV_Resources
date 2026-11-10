/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0227fa60; name: FUN_0227fa60
 */


uint FUN_0227fa60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  local_70 = *param_5;
  uStack_68 = param_5[1];
  bVar1 = *param_4;
  pcVar4 = (code *)param_1[1];
  local_60 = param_5[2];
  local_58 = (long *)param_5[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  local_90 = *param_6;
  uStack_88 = param_6[1];
  local_80 = param_6[2];
  local_78 = (long *)param_6[3];
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  bVar2 = (*pcVar4)(param_2,param_3,&local_70,&local_90);
  *param_4 = bVar2 & 1;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  uVar3 = (*(code *)*param_1)(*param_4,bVar1 != 0);
  return uVar3 & 1;
}


