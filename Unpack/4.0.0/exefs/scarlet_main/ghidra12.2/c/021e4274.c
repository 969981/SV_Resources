/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e4274; name: FUN_021e4274
 */


undefined8 FUN_021e4274(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  char local_38 [4];
  char local_34 [4];
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_38,1,0);
    uVar4 = uVar4 & 0xffffffff;
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  if (((param_2 != 0) && ((uVar4 & 1) != 0)) && (local_38[0] == '\x03')) {
    do {
      plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_34,1,0);
        uVar1 = uVar1 & 1;
      }
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
      if (uVar1 == 0) {
        return 0;
      }
      if (1 < (byte)(local_34[0] - 1U)) {
        return 0;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 1;
}


