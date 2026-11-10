/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297efec; name: FUN_0297efec
 */


bool FUN_0297efec(int *param_1,int param_2)

{
  int *piVar1;
  
  if (*param_1 != param_2) {
    piVar1 = param_1 + 2;
    if (((((*piVar1 == param_2) || (piVar1 = param_1 + 4, *piVar1 == param_2)) ||
         (piVar1 = param_1 + 6, *piVar1 == param_2)) ||
        ((piVar1 = param_1 + 8, *piVar1 == param_2 || (piVar1 = param_1 + 10, *piVar1 == param_2))))
       || ((piVar1 = param_1 + 0xc, *piVar1 == param_2 ||
           ((piVar1 = param_1 + 0xe, *piVar1 == param_2 ||
            (piVar1 = param_1 + 0x10, *piVar1 == param_2)))))) goto LAB_0297effc;
    param_1 = param_1 + 0x12;
    if (*param_1 != param_2) {
      return false;
    }
  }
  piVar1 = param_1;
LAB_0297effc:
  return *(char *)((long)piVar1 + 5) != '\0';
}


