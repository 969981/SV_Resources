/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bcd88; name: FUN_027bcd88
 */


void FUN_027bcd88(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      FUN_027bd2a8(param_1,param_2 + 1);
      return;
    }
    if (iVar1 == 0) {
      *param_1 = 1;
      goto LAB_027bcdc0;
    }
  }
  *param_1 = 0;
LAB_027bcdc0:
  FUN_027bd26c(param_1 + 2,&DAT_03c886bc);
  param_1[10] = 0;
  return;
}


