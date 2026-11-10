/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0028f35c; name: FUN_0028f35c
 */


void FUN_0028f35c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = param_1 + 1;
  FUN_0025cef0(param_1,*plVar4);
  *param_1 = *param_2;
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *plVar4 = lVar2;
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar3 == 0) {
    *param_1 = plVar4;
    return;
  }
  *(long **)(lVar2 + 0x10) = plVar4;
  *param_2 = plVar1;
  *plVar1 = 0;
  param_2[2] = 0;
  return;
}


