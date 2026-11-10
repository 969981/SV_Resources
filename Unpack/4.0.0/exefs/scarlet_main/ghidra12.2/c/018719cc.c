/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018719cc; name: FUN_018719cc
 */


ulong FUN_018719cc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint local_24;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,4,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar3 = 0;
    uVar5 = 0;
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_24,4,0);
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      uVar5 = 0;
    }
    else {
      uVar3 = (ulong)local_24 << 0x20;
      uVar5 = 1;
    }
  }
  return uVar5 | uVar3;
}


