/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a6a88; name: FUN_024a6a88
 */


long * FUN_024a6a88(int *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != (long *)0x0) {
    iVar1 = *param_1;
    plVar2 = param_3;
    if (iVar1 == 1) {
      do {
        if ((int)param_2[4] == 1) {
          if (param_1[2] < (int)param_2[5]) goto LAB_024a6ac0;
LAB_024a6ab4:
          param_2 = param_2 + 1;
        }
        else {
          if ((int)param_2[4] < 2) goto LAB_024a6ab4;
LAB_024a6ac0:
          param_3 = param_2;
        }
        param_2 = (long *)*param_2;
      } while (param_2 != (long *)0x0);
    }
    else {
      do {
        param_3 = param_2;
        if ((int)param_2[4] == iVar1 || (int)param_2[4] <= iVar1) {
          param_3 = plVar2;
          param_2 = param_2 + 1;
        }
        param_2 = (long *)*param_2;
        plVar2 = param_3;
      } while (param_2 != (long *)0x0);
    }
  }
  return param_3;
}


