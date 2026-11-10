/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02969240; name: FUN_02969240
 */


void FUN_02969240(undefined8 param_1,uint param_2,long *param_3,undefined2 param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_80;
  uint local_7c;
  undefined2 local_78;
  undefined2 local_76;
  uint local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar1 = (**(code **)(*param_3 + 0x98))(param_3);
  uVar2 = FUN_02968f90(param_1,uVar1,0);
  uVar3 = (**(code **)(*param_3 + 0x510))(param_3,7);
  if (((uVar2 & 1) != 0) || ((uVar3 & 1) != 0)) {
    local_7c = 7;
    local_80 = uVar1;
    FUN_0293ed60(param_1,&local_80);
    local_7c = CONCAT22(local_7c._2_2_,3);
    local_80 = uVar1;
    FUN_02940be0(param_1,&local_80);
  }
  local_7c = local_7c & 0xffffff00;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_76 = 0x82;
  local_80 = param_2;
  local_78 = param_4;
  local_74 = uVar1;
  FUN_01907920(param_1,&local_80);
  FUN_02969340(param_1,param_2,param_3);
  return;
}


