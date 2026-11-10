/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02981514; name: FUN_02981514
 */


undefined1 FUN_02981514(int *param_1,int param_2)

{
  int *piVar1;
  
  if (*param_1 != param_2) {
    piVar1 = param_1 + 2;
    if (((((*piVar1 == param_2) || (piVar1 = param_1 + 4, *piVar1 == param_2)) ||
         (piVar1 = param_1 + 6, *piVar1 == param_2)) ||
        ((piVar1 = param_1 + 8, *piVar1 == param_2 || (piVar1 = param_1 + 10, *piVar1 == param_2))))
       || ((piVar1 = param_1 + 0xc, *piVar1 == param_2 ||
           ((piVar1 = param_1 + 0xe, *piVar1 == param_2 ||
            (piVar1 = param_1 + 0x10, *piVar1 == param_2)))))) goto LAB_02981524;
    param_1 = param_1 + 0x12;
    if (*param_1 != param_2) {
      return 7;
    }
  }
  piVar1 = param_1;
LAB_02981524:
  return (char)piVar1[1];
}


