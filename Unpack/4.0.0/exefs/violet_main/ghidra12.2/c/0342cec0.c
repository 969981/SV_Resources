/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342cec0; name: FUN_0342cec0
 */


undefined8 FUN_0342cec0(long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  *(undefined8 *)((long)param_4 + 0x14) = 0;
  (**(code **)*param_4)(param_4);
  if ((((*(uint *)(param_1 + 0x58) == 0) || (**(long **)(param_1 + 0x50) == param_3)) ||
      (*(uint *)(param_1 + 0x58) < 2)) || ((*(long **)(param_1 + 0x50))[1] != param_3)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_03423e4c(&local_40,param_1,uVar3);
  if (((*(uint *)(param_2 + 0x58) == 0) || (**(long **)(param_2 + 0x50) == param_3)) ||
     ((*(uint *)(param_2 + 0x58) < 2 || ((*(long **)(param_2 + 0x50))[1] != param_3)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_03423e4c(&local_50,param_2,uVar3);
  local_58 = local_38;
  local_68 = local_48;
  uVar1 = FUN_0342cbe0(local_60,local_70,*(undefined8 *)(param_3 + 0xa8),0,param_4);
  if ((uVar1 & 1) != 0) {
    puVar2 = (undefined4 *)(**(code **)(*param_4 + 8))(param_4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[0x1b] = local_40;
      puVar2[0x1c] = uStack_3c;
      puVar2[0x1d] = local_38;
      puVar2[0x1e] = 0;
      *puVar2 = local_50;
      puVar2[1] = uStack_4c;
      puVar2[2] = local_48;
      *(undefined1 *)((long)param_4 + 0x19) = 1;
    }
    *(undefined1 *)((long)param_4 + 0x1a) = 0;
  }
  return 1;
}


