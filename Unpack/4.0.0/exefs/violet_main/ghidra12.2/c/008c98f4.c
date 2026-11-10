/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c98f4; name: FUN_008c98f4
 */


void FUN_008c98f4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x198);
  while (plVar2 != (long *)(param_1 + 400)) {
    plVar1 = (long *)plVar2[1];
    lVar3 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    plVar2 = *(long **)(param_1 + 0x198);
  }
  FUN_008f08f0(param_1 + 8,param_2);
  FUN_00e5c07c(param_1 + 0x50,param_2);
  return;
}


