/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e94e0; name: FUN_003e94e0
 */


undefined8 FUN_003e94e0(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  if ((int)param_2 <= (int)param_3) {
    param_3 = param_2;
  }
  iVar2 = param_3 + 1;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 1;
    }
    iVar1 = FUN_003e9110(param_1,&DAT_03bf391f);
  } while (iVar1 == 1);
  return 0;
}


