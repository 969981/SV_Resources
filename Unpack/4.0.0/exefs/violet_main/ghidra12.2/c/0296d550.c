/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0296d550; name: FUN_0296d550
 */


void FUN_0296d550(long param_1,undefined4 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5e;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  if ((plVar2 != (long *)0x0) && (uVar3 = (**(code **)(*plVar2 + 0x208))(), (uVar3 & 1) != 0)) {
    uVar3 = (**(code **)(*plVar2 + 0x220))(plVar2,0x12);
    if ((uVar3 & 1) != 0) {
      local_5e = 0;
      local_84 = 0;
      local_7c = 0;
      local_74 = 0;
      local_6c = 0;
      local_64 = 0;
      local_38 = 0;
      local_60 = 1;
      local_8c = 0x12;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_90 = param_2;
      local_88 = param_2;
      FUN_01852330(param_1,&local_90);
    }
    uVar3 = (**(code **)(*plVar2 + 0x220))(plVar2,8);
    if ((uVar3 & 1) != 0) {
      local_5e = 0;
      local_84 = 0;
      local_7c = 0;
      local_74 = 0;
      local_6c = 0;
      local_64 = 0;
      local_38 = 0;
      local_60 = 1;
      local_8c = 8;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_90 = param_2;
      local_88 = param_2;
      FUN_01852330(param_1,&local_90);
    }
    local_88._0_2_ = (ushort)(byte)local_88;
    local_90 = param_2;
    uVar1 = FUN_0293d690(param_1,param_2);
    local_88 = local_88 & 0xffffff00;
    local_8c = CONCAT22(0x41c0,CONCAT11(4,uVar1));
    FUN_0293f0a0(param_1,&local_90);
  }
  return;
}


