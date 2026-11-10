/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ad614; name: FUN_012ad614
 */


void FUN_012ad614(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0486a0d8;
  if (DAT_0486a0d8 != (code *)0x0) {
    DAT_0486a0e0 = 0;
    DAT_0486a0e8 = 0;
    DAT_0486a0d0 = 0;
    DAT_0486a0d8 = (code *)0x0;
    (*pcVar1)(&DAT_0486a0f0);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1 + 4,&DAT_0486a0f0);
    DAT_0486a0e8 = param_1[3];
    DAT_0486a0d8 = (code *)param_1[1];
    DAT_0486a0d0 = *param_1;
    DAT_0486a0e0 = param_1[2];
  }
  return;
}


