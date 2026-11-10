/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038c320; name: FUN_0038c320
 */


long * FUN_0038c320(undefined8 *param_1,char *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 != (undefined8 *)0x0) && (uVar3 = param_1[1], uVar3 != 0)) {
    plVar2 = (long *)*param_1;
    if (param_2 == (char *)0x0) {
      uVar4 = 0;
      do {
        if (*plVar2 == 0) {
          return plVar2;
        }
        uVar4 = uVar4 + 1;
        plVar2 = plVar2 + 3;
      } while (uVar4 < uVar3);
    }
    else {
      uVar4 = 0;
      do {
        if (((char *)*plVar2 != (char *)0x0) &&
           (iVar1 = strcmp((char *)*plVar2,param_2), iVar1 == 0)) {
          return plVar2;
        }
        uVar4 = uVar4 + 1;
        plVar2 = plVar2 + 3;
      } while (uVar4 < uVar3);
    }
  }
  return (long *)0x0;
}


