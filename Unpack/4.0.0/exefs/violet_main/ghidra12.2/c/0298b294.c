/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298b294; name: FUN_0298b294
 */


undefined1
FUN_0298b294(undefined8 param_1,undefined4 *param_2,undefined2 *param_3,undefined8 param_4,
            undefined8 param_5,byte param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  byte local_66;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_38 [8];
  
  FUN_0189372c(&local_60);
  uVar1 = FUN_01893e2c(*param_3);
  uVar2 = FUN_01893e94(*param_3);
  FUN_0297db40(param_1,uVar2,param_4,&local_60);
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_0189372c(&local_80);
  local_6c = *param_2;
  local_80 = local_60;
  uStack_78 = uStack_58;
  local_70 = 5;
  local_68 = 0x100;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = uVar1;
  local_66 = param_6 & 1;
  FUN_01461214(param_1);
  uVar3 = FUN_01893738();
  FUN_0189498c(uVar3,local_38,&local_98);
  return local_38[0];
}


