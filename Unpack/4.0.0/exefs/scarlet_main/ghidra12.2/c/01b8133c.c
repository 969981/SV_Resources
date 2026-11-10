/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b8133c; name: FUN_01b8133c
 */


void FUN_01b8133c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0483b008;
  if (DAT_0483b008 != (code *)0x0) {
    DAT_0483b010 = 0;
    DAT_0483b018 = 0;
    DAT_0483b000 = 0;
    DAT_0483b008 = (code *)0x0;
    (*pcVar1)(&DAT_0483b020);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1 + 4,&DAT_0483b020);
    DAT_0483b018 = param_1[3];
    DAT_0483b008 = (code *)param_1[1];
    DAT_0483b000 = *param_1;
    DAT_0483b010 = param_1[2];
  }
  return;
}


