/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0295d640; name: FUN_0295d640
 */


void FUN_0295d640(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,0x36b);
  if ((((uVar2 & 1) != 0) &&
      (uVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,0x36b,param_3), (uVar2 & 1) == 0)) &&
     (uVar2 = (**(code **)(*plVar1 + 0x5b0))(plVar1), (uVar2 & 1) == 0)) {
    local_58 = 0x101;
    local_56 = 0;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    local_34 = 0;
    _local_60 = CONCAT26(1,CONCAT24((short)param_3,param_2));
    local_54 = 0x82004c;
    uStack_50 = param_2;
    FUN_019079a0(param_1,&local_60);
  }
  return;
}


