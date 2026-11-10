/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01403cc4; name: FUN_01403cc4
 */


void FUN_01403cc4(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x20) * lVar1;
  if (lVar5 != 0) {
    plVar2 = *(long **)(param_1 + 0x18);
    lVar6 = 0;
    plVar4 = plVar2;
    do {
      lVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,param_2);
      if (lVar3 != 0) goto LAB_01403d44;
      plVar4 = (long *)((long)plVar2 + lVar6 + lVar1);
      lVar6 = lVar6 + lVar1;
    } while (lVar5 != lVar6);
  }
  plVar4 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x10))();
  if ((param_1 == 0) || (lVar3 = param_1, *plVar4 != *param_2)) {
    return;
  }
LAB_01403d44:
  FUN_01403d78(param_1,lVar3);
  return;
}


