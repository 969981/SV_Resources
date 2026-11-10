/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b4f0c; name: FUN_007b4f0c
 */


uint FUN_007b4f0c(long param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 auStack_70 [32];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [32];
  
  FUN_00796584(auStack_70);
  (**(code **)(**(long **)(param_1 + 0x120) + 0x48))(*(long **)(param_1 + 0x120),param_2,auStack_70)
  ;
  uVar3 = (**(code **)(**(long **)(param_1 + 0x120) + 0x88))();
  if ((((uVar3 & 1) == 0) || (*(int *)(param_1 + 0x1c0) == 0)) ||
     (sVar1 = FUN_0079c048(param_1,auStack_70), -1 < sVar1)) {
    uVar2 = FUN_0079cd60(param_1,param_2);
  }
  else {
    FUN_00796868(auStack_40,auStack_70);
    local_88 = 0;
    local_90 = 0x10;
    FUN_0078b2cc(auStack_40,&local_90);
    FUN_0284e3d4(auStack_40);
    FUN_00796584(&local_90);
    FUN_00796868(auStack_40,auStack_70);
    FUN_007968fc(&local_90,auStack_40);
    FUN_0284e3d4(auStack_40);
    FUN_00796868(auStack_40,&local_90);
    local_48 = 0;
    local_50 = 0x10;
    FUN_0078b2cc(auStack_40,&local_50);
    FUN_0284e3d4(auStack_40);
    FUN_007b5580(*(undefined8 *)(param_1 + 0x11d8),&local_90);
    uVar2 = 0;
  }
  return uVar2 & 1;
}


