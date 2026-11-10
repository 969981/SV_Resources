/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e3118; name: FUN_017e3118
 */


void FUN_017e3118(char *param_1,code *param_2,ulong param_3)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    FUN_017e3180(param_1 + 8);
  }
  else if (cVar1 == '\x03') {
    FUN_017e3588(param_1 + 8);
  }
  else if (((cVar1 == '\x01') || (cVar1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
    }
    (*param_2)(0);
  }
  return;
}


