/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028eeb44; name: FUN_028eeb44
 */


void FUN_028eeb44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  uVar1 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  param_1[9] = 0;
  param_1[8] = 0;
  FUN_00d0a71c(param_1 + 8,param_2 + 4);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_2[8];
  param_1[0xb] = param_2[7];
  param_1[0xc] = uVar1;
  *param_1 = thunk_FUN_028eec34;
  param_1[1] = FUN_028eec7c;
  param_1[2] = &LAB_028ef824;
  param_1[3] = &LAB_028ef880;
  return;
}


