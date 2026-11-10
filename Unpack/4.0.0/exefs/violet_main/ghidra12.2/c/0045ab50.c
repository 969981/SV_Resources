/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045ab50; name: FUN_0045ab50
 */


undefined8 FUN_0045ab50(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != (undefined8 *)0x0) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
    iVar1 = closedir(*(DIR **)*param_1);
    free((void *)*param_1);
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 == -1) {
      return 0;
    }
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0;
}


