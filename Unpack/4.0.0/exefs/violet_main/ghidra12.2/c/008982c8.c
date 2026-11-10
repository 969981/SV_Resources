/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008982c8; name: FUN_008982c8
 */


void FUN_008982c8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    plVar3 = (long *)(*(long *)(lVar1 + 0x20) + (long)*(int *)(lVar1 + 0x28) * 0x68);
    *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + 1;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    lVar1 = param_1[4];
    plVar3[5] = param_3;
    plVar3[6] = lVar1;
    *(undefined4 *)(plVar3 + 9) = 0;
    *(undefined4 *)(plVar3 + 0xc) = 0;
    plVar3[2] = param_2;
    plVar2 = (long *)param_1[2];
    lVar1 = *plVar3;
    *plVar3 = *plVar2;
    *(long **)(lVar1 + 8) = plVar2;
    *(long **)(*plVar2 + 8) = plVar3;
    *plVar2 = lVar1;
    *(long **)(*param_1 + (long)(int)param_1[1] * 8 + -8) = plVar3;
  }
  return;
}


