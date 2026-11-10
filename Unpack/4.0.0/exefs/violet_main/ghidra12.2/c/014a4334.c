/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014a4334; name: FUN_014a4334
 */


void FUN_014a4334(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 + 0x20 != param_2 + 8) {
    plVar1 = *(long **)(param_2 + 0x10);
    lVar2 = *plVar1;
    *(long **)(*(long *)(param_2 + 8) + 8) = plVar1;
    *plVar1 = *(long *)(param_2 + 8);
    *(long *)(lVar2 + 8) = param_2 + 8;
    *(long *)(param_2 + 8) = lVar2;
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}


