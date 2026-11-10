/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f779b4; name: FUN_01f779b4
 */


void FUN_01f779b4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = param_2;
  lVar2 = *param_2;
  plVar3 = param_2 + 1;
  *param_2 = (long)plVar3;
  *(undefined8 *)(*plVar3 + 0x10) = 0;
  *plVar3 = 0;
  param_2[3] = 0;
  lVar4 = *(long *)(lVar2 + 8);
  if (lVar4 != 0) {
    lVar2 = lVar4;
  }
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    uVar1 = FUN_01f77a54();
    param_1[1] = uVar1;
  }
  return;
}


