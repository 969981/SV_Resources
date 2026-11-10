/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002cbaa4; name: FUN_002cbaa4
 */


void FUN_002cbaa4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  FUN_0038db40(param_2 + 0x48);
  lVar1 = *(long *)(param_2 + 0x70);
  *param_1 = *(undefined8 *)(param_2 + 0x68);
  plVar2 = param_1 + 1;
  *plVar2 = lVar1;
  lVar3 = *(long *)(param_2 + 0x78);
  param_1[2] = lVar3;
  if (lVar3 == 0) {
    *param_1 = plVar2;
  }
  else {
    *(long **)(lVar1 + 0x10) = plVar2;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 **)(param_2 + 0x68) = (undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x78) = 0;
  }
                    /* try { // try from 002cbaf4 to 002cbafb has its CatchHandler @ 002cbb08 */
  FUN_0038db60(param_2 + 0x48);
  return;
}


