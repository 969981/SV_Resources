/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dcc4e8; name: FUN_01dcc4e8
 */


void FUN_01dcc4e8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x28);
  plVar1 = (long *)(param_2 + 8);
  lVar3 = *plVar1;
  *plVar1 = *plVar2;
  *(long **)(lVar3 + 8) = plVar2;
  *(long **)(*plVar2 + 8) = plVar1;
  *plVar2 = lVar3;
  *(long *)(param_2 + 0x18) = param_1;
  *(byte *)(param_2 + 0x58) = *(byte *)(param_2 + 0x58) | 0x10;
  return;
}


