/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0277e420; name: FUN_0277e420
 */


void FUN_0277e420(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  
  if (param_3[2] != 0) {
    lVar1 = *param_3;
    plVar2 = (long *)param_3[1];
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = *plVar2;
    *(long **)(*param_2 + 8) = plVar2;
    *plVar2 = *param_2;
    *param_2 = lVar1;
    *(long **)(lVar1 + 8) = param_2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_3[2];
    param_3[2] = 0;
  }
  return;
}


