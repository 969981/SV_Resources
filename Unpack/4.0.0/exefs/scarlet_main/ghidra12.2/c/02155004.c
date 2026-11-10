/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02155004; name: FUN_02155004
 */


undefined8 FUN_02155004(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (param_2 == 0) {
    plVar4 = *(long **)(param_1 + 200);
    *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(*(long *)(param_1 + 0x4a8) + 8);
    lVar3 = *(long *)(param_1 + 0x480);
    local_50 = *(long *)(lVar3 + 0x88);
    uStack_48 = *(undefined8 *)(lVar3 + 0x90);
    local_40 = *(undefined8 *)(lVar3 + 0x98);
    local_38 = *(long **)(lVar3 + 0xa0);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
    (**(code **)(*plVar4 + 0xe8))(plVar4,param_1 + 0x460,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x84) = 0;
    *(undefined1 *)(param_1 + 0x81) = 1;
    FUN_021547ec(param_1);
    FUN_01df1cb8(&local_50);
    FUN_01282188(&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar2 = 1;
  }
  else {
    uVar1 = FUN_021545c4(*(undefined8 *)(param_1 + 0x458));
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      local_50 = param_1;
      FUN_02155114(param_1,&local_50);
      uVar2 = 1;
      *(undefined1 *)(param_1 + 0x84) = 1;
      *(undefined1 *)(param_1 + 0x81) = 0;
    }
  }
  return uVar2;
}


