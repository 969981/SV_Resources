/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6ef04; name: FUN_01e6ef04
 */


void FUN_01e6ef04(int *param_1,undefined4 *param_2,long *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  int local_18 [2];
  
  local_38 = 6;
  FUN_0111b0ac(local_18,&local_38);
  if (local_18[0] == 0) {
    lVar2 = *param_3;
    lVar3 = param_3[2];
    uVar1 = *param_2;
    *(undefined2 *)((undefined4 *)(lVar2 + lVar3) + 1) = *(undefined2 *)(param_2 + 1);
    *(undefined4 *)(lVar2 + lVar3) = uVar1;
    param_3[2] = param_3[2] + 6;
  }
  *param_1 = local_18[0];
  return;
}


