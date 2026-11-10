/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0295abf0; name: FUN_0295abf0
 */


undefined8 FUN_0295abf0(long param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined2 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  uint uStack_90;
  undefined1 auStack_8c [92];
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_3);
  uVar1 = (**(code **)(*plVar2 + 0x2a8))();
  if ((uVar1 == 0) || (uVar3 = FUN_02942dc0(param_1,param_2,param_3), (uVar3 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    memset(auStack_8c,0,0x5c);
    local_a0 = 0x101;
    local_9c = 0x1820154;
    local_a8 = param_2;
    uStack_a4 = param_3;
    uStack_98 = param_2;
    local_94 = param_3;
    uStack_90 = (uint)uVar1;
    FUN_02940660(param_1,&local_a8);
    uVar4 = 1;
  }
  return uVar4;
}


