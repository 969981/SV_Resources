/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e2fc90; name: FUN_00e2fc90
 */


void FUN_00e2fc90(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  param_1[4] = *param_2;
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_00e2ea04(param_1 + 5,param_2 + 1);
  uVar2 = param_2[3];
  param_2[3] = 0;
  *param_1 = &LAB_027306a8;
  param_1[1] = &LAB_027306cc;
  param_1[7] = uVar2;
  param_1[2] = &LAB_0273083c;
  param_1[3] = &LAB_02730920;
  return;
}


