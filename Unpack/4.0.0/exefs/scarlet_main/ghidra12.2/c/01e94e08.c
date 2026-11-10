/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e94e08; name: FUN_01e94e08
 */


void FUN_01e94e08(undefined4 *param_1,char param_2,short *param_3,long *param_4)

{
  short sVar1;
  long lVar2;
  
  if (param_2 == -0x7b) {
    sVar1 = *(short *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 2;
  }
  else {
    if (param_2 != -0x7c) {
      sVar1 = (short)param_2;
      goto LAB_01e94e44;
    }
    sVar1 = (short)*(char *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 1;
  }
  param_4[2] = lVar2;
LAB_01e94e44:
  *param_3 = sVar1;
  *param_1 = 0;
  return;
}


