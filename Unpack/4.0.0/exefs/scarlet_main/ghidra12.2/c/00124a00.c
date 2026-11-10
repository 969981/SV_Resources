/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00124a00; name: FUN_00124a00
 */


undefined8 FUN_00124a00(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = getc(*(FILE **)(param_1 + 2));
  if (iVar1 == -1) {
LAB_00124adc:
    uVar2 = 0;
  }
  else {
    if (iVar1 == 0xef) {
      iVar1 = *param_1;
      *param_1 = iVar1 + 1;
      *(undefined1 *)((long)param_1 + (long)iVar1 + 0x10) = 0xef;
      iVar1 = getc(*(FILE **)(param_1 + 2));
      if (iVar1 == -1) goto LAB_00124adc;
      if (iVar1 == 0xbb) {
        iVar1 = *param_1;
        *param_1 = iVar1 + 1;
        *(undefined1 *)((long)param_1 + (long)iVar1 + 0x10) = 0xbb;
        iVar1 = getc(*(FILE **)(param_1 + 2));
        if (iVar1 == -1) goto LAB_00124adc;
        if (iVar1 == 0xbf) {
          *(undefined1 *)((long)param_1 + (long)*param_1 + 0x10) = 0xbf;
          *param_1 = 0;
          iVar1 = getc(*(FILE **)(param_1 + 2));
        }
      }
    }
    *param_2 = iVar1;
    if (iVar1 != 0x23) {
      return 0;
    }
    do {
      iVar1 = getc(*(FILE **)(param_1 + 2));
    } while (iVar1 != 10 && iVar1 != -1);
    iVar1 = getc(*(FILE **)(param_1 + 2));
    uVar2 = 1;
  }
  *param_2 = iVar1;
  return uVar2;
}


