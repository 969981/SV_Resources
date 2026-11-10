/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f46bac; name: FUN_00f46bac
 */


void FUN_00f46bac(int *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  int local_18 [2];
  
  local_38 = 9;
  FUN_0111b0ac(local_18,&local_38);
  if (local_18[0] == 0) {
    lVar1 = *param_3;
    lVar2 = param_3[2];
    uVar3 = *param_2;
    *(undefined1 *)((undefined8 *)(lVar1 + lVar2) + 1) = *(undefined1 *)(param_2 + 1);
    *(undefined8 *)(lVar1 + lVar2) = uVar3;
    param_3[2] = param_3[2] + 9;
  }
  *param_1 = local_18[0];
  return;
}


