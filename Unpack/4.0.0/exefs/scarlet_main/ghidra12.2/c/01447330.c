/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01447330; name: FUN_01447330
 */


void FUN_01447330(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int local_1c;
  int aiStack_18 [2];
  
  piVar1 = *(int **)(param_1 + 0x110);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x118)) {
      local_1c = param_3;
      aiStack_18[0] = param_2;
      FUN_00ed5784(param_1 + 0x110,aiStack_18,&local_1c);
      return;
    }
    if ((*piVar1 == param_2) && (piVar1[1] == param_3)) break;
    piVar1 = piVar1 + 8;
  }
  uVar2 = param_4[1];
  *(undefined8 *)(piVar1 + 4) = *param_4;
  *(undefined8 *)(piVar1 + 6) = uVar2;
  return;
}


