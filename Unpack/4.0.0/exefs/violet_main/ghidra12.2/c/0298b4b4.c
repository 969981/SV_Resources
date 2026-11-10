/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298b4b4; name: FUN_0298b4b4
 */


undefined1 FUN_0298b4b4(undefined8 param_1,undefined1 param_2,char param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 local_48 [8];
  undefined1 local_40;
  char local_3f;
  char local_3e;
  undefined4 local_3c;
  undefined2 local_38;
  
  plVar1 = (long *)FUN_0124acbc();
  local_3f = (**(code **)(*plVar1 + 0x68))(plVar1,PTR_DAT_047e2708);
  local_3f = local_3f + param_3;
  local_38 = 0;
  local_40 = param_2;
  local_3e = param_3;
  local_3c = param_4;
  FUN_01461214(param_1);
  uVar2 = FUN_0123e064();
  FUN_01249ed0(uVar2,local_48,&local_40);
  return local_48[0];
}


