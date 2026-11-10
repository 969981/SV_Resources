/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0178012c; name: FUN_0178012c
 */


void FUN_0178012c(long param_1,byte param_2,int param_3,byte param_4)

{
  int *piVar1;
  ulong uVar2;
  
  if (param_2 < 5) {
    uVar2 = (ulong)param_2;
    piVar1 = (int *)(param_1 + uVar2 * 0x60 + 0x10);
    if (((((*piVar1 == param_3) ||
          (piVar1 = (int *)(param_1 + uVar2 * 0x60 + 0x20), *piVar1 == param_3)) ||
         (piVar1 = (int *)(param_1 + uVar2 * 0x60 + 0x30), *piVar1 == param_3)) ||
        (((piVar1 = (int *)(param_1 + uVar2 * 0x60 + 0x40), *piVar1 == param_3 ||
          (piVar1 = (int *)(param_1 + uVar2 * 0x60 + 0x50), *piVar1 == param_3)) ||
         (piVar1 = (int *)(param_1 + uVar2 * 0x60 + 0x60), *piVar1 == param_3)))) &&
       (*(char *)((long)piVar1 + 0xe) == '\0')) {
      *(byte *)((long)piVar1 + 0xe) = param_4 & 1;
      return;
    }
  }
  return;
}


