/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e411c; name: FUN_021e411c
 */


undefined8 FUN_021e411c(long *param_1)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  char local_28 [4];
  undefined4 local_24;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,1,plVar3[1]);
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,local_28,1,0);
    uVar5 = uVar5 & 0xffffffff;
  }
  lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar7 = 0;
  *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  if (((uVar5 & 1) != 0) && (local_28[0] == '\x05')) {
    plVar3 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
    plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
    uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,4,plVar3[1]);
    if ((uVar5 & 1) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,&local_24,4,0);
      uVar2 = uVar2 ^ 1;
    }
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 4;
    if (((uVar2 & 1) == 0) && (cVar1 = FUN_021e4274(param_1,local_24), cVar1 != '\0')) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
}


