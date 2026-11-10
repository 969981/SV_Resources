/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02970c40; name: FUN_02970c40
 */


void FUN_02970c40(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  uVar1 = FUN_02943920(param_1,param_3);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_3);
    uVar1 = FUN_02970d10(param_1,param_2,param_3,plVar2);
    uVar3 = (**(code **)(*plVar2 + 0x4d0))(plVar2,3);
    if ((uVar3 & 1) != 0) {
      local_44 = 0;
      local_4c = 0;
      local_54 = 0;
      local_5c = 0;
      local_64 = 0;
      local_68 = 3;
      if ((uVar1 & 1) == 0) {
        local_64 = CONCAT44(param_3,0x820165);
      }
      local_70 = param_2;
      uStack_6c = param_3;
      FUN_02941e30(param_1,&local_70);
    }
  }
  return;
}


