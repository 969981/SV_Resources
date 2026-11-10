/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02774a58; name: FUN_02774a58
 */


void FUN_02774a58(undefined8 *param_1,undefined8 *param_2)

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
  FUN_00cacc64(param_1 + 8,param_2 + 4);
  uVar1 = param_2[7];
  param_1[10] = param_2[6];
  param_1[0xb] = uVar1;
  *param_1 = thunk_FUN_02774af0;
  param_1[1] = FUN_02774b38;
  param_1[2] = &LAB_02775574;
  param_1[3] = &LAB_027755c8;
  return;
}


