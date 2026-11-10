/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02af2338; name: FUN_02af2338
 */


undefined8 FUN_02af2338(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined1 local_14 [4];
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,9,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    local_14[0] = 0xb;
    plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1,plVar1[1]);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,local_14,1,0);
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    local_38 = *param_2;
    plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,8,plVar1[1]);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,8,0);
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 8;
    uVar5 = 1;
  }
  return uVar5;
}


