/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018072d0; name: FUN_018072d0
 */


void FUN_018072d0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00ff84dc();
  lVar1 = param_2[3];
  lVar2 = param_2[4];
  lVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = lVar3;
  param_1[3] = lVar1;
  param_1[4] = lVar2;
  if (param_2[2] == 0) {
    return;
  }
  lVar1 = *param_2;
  plVar4 = (long *)param_2[1];
  *(undefined8 *)(*plVar4 + 8) = *(undefined8 *)(lVar1 + 8);
  **(long **)(lVar1 + 8) = *plVar4;
  *(long **)(*param_1 + 8) = plVar4;
  *plVar4 = *param_1;
  *param_1 = lVar1;
  *(long **)(lVar1 + 8) = param_1;
  param_1[2] = param_1[2] + param_2[2];
  param_2[2] = 0;
  return;
}


