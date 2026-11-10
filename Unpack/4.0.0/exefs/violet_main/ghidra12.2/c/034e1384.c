/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e1384; name: FUN_034e1384
 */


void FUN_034e1384(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  FUN_034e1414();
  lVar2 = *(long *)(param_1 + 0x90);
  if ((lVar2 != 0) &&
     (((0 < *(short *)(lVar2 + 0x90) || (0 < *(short *)(lVar2 + 0x94))) &&
      (iVar3 = *(int *)(param_1 + 0x108), iVar3 != 0)))) {
    lVar2 = (ulong)(iVar3 - 1) << 3;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x100) + lVar2);
      if ((*(char *)(param_2 + 0x20) == '\0') || (plVar1[0x14] == 0)) {
        (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
      }
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -8;
    } while (iVar3 != 0);
  }
  return;
}


