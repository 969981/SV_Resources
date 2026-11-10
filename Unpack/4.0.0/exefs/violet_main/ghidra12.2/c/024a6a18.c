/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a6a18; name: FUN_024a6a18
 */


long * FUN_024a6a18(int *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != (long *)0x0) {
    iVar1 = *param_1;
    if (iVar1 == 1) {
      do {
        if ((int)param_2[4] == 1) {
          if (param_1[2] <= (int)param_2[5]) goto LAB_024a6a50;
LAB_024a6a44:
          param_2 = param_2 + 1;
        }
        else {
          if ((int)param_2[4] < 1) goto LAB_024a6a44;
LAB_024a6a50:
          param_3 = param_2;
        }
        param_2 = (long *)*param_2;
      } while (param_2 != (long *)0x0);
    }
    else {
      do {
        plVar2 = param_2 + 1;
        if ((int)param_2[4] == iVar1 || iVar1 <= (int)param_2[4]) {
          param_3 = param_2;
          plVar2 = param_2;
        }
        param_2 = (long *)*plVar2;
      } while (param_2 != (long *)0x0);
    }
  }
  return param_3;
}


