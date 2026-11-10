/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01801104; name: FUN_01801104
 */


ulong FUN_01801104(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char local_18 [4];
  int local_14;
  
  if (param_2 != 0) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,local_18,1,0);
      uVar3 = uVar3 & 0xffffffff;
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar5 = 0;
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    if ((uVar3 & 1) != 0) {
      uVar3 = 0;
      if (local_18[0] != '\x05') goto LAB_01801250;
      plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,4,plVar1[1]);
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_14,4,0);
        uVar3 = uVar3 & 0xffffffff;
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      uVar5 = 0;
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
      if ((uVar3 & 1) != 0) {
        uVar3 = 0;
        if (local_14 == 4) {
          uVar5 = FUN_011aa080(param_1,4,param_2,4);
          uVar3 = uVar5 & 0xffffffffffffff00;
          uVar5 = uVar5 & 0xff;
        }
        goto LAB_01801250;
      }
    }
  }
  uVar3 = 0;
  uVar5 = 0;
LAB_01801250:
  return uVar3 | uVar5;
}


