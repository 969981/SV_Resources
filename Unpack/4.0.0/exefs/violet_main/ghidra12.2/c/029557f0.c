/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029557f0; name: FUN_029557f0
 */


void FUN_029557f0(long param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 local_60;
  uint uStack_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  plVar3 = (long *)FUN_018d5cec(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  if (((plVar3 != (long *)0x0) &&
      (uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,0x15f), (uVar4 & 1) != 0)) &&
     (uVar4 = (**(code **)(*plVar3 + 0x5b0))(plVar3), (uVar4 & 1) == 0)) {
    uVar1 = *(ushort *)(plVar3 + 0xe3);
    uVar2 = FUN_015c78d0(param_1,param_2);
    uVar5 = 0;
    switch(uVar2) {
    case 1:
    case 6:
      uVar5 = 1;
      break;
    case 2:
    case 5:
      uVar5 = 2;
      break;
    case 3:
      uVar5 = 3;
    }
    if (uVar5 != uVar1) {
      local_58 = 0x101;
      local_56 = 0;
      local_4c = 0;
      local_44 = 0;
      local_3c = 0;
      local_34 = 0;
      _local_60 = CONCAT44(uVar5,param_2);
      local_54 = 0x82004c;
      uStack_50 = param_2;
      FUN_019079a0(param_1,&local_60);
    }
  }
  return;
}


