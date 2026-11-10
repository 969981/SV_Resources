/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01893664; name: FUN_01893664
 */


void FUN_01893664(undefined8 param_1,undefined2 *param_2,undefined8 param_3,long *param_4)

{
  short sVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  long *plStack_70;
  short local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined3 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_0189372c(&local_40);
  uVar2 = FUN_01246e90(param_1);
  sVar1 = FUN_01893740(uVar2,*param_2,param_3,param_4,&local_40);
  if (sVar1 != 0) {
    uVar3 = (**(code **)(*param_4 + 0x200))(param_4);
    if ((uVar3 & 1) == 0) {
      local_68 = 0;
      local_78 = 0;
      plStack_70 = (long *)0x0;
      FUN_0189372c(&local_60);
      local_50 = 0;
      local_4c = 0;
      uStack_48 = 0;
      local_60 = local_40;
      uStack_58 = uStack_38;
      local_78 = param_3;
      plStack_70 = param_4;
      local_68 = sVar1;
      FUN_01461214(param_1);
      uVar2 = FUN_01893738();
      FUN_0189498c(uVar2,auStack_80,&local_78);
    }
  }
  return;
}


