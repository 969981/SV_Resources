/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


