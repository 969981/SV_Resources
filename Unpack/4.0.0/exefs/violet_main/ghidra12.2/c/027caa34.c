/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027caa34; name: FUN_027caa34
 */


long * FUN_027caa34(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  if ((long *)*plVar3 == (long *)0x0) {
    *param_2 = plVar3;
    return plVar3;
  }
  plVar4 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar3;
  do {
    iVar1 = FUN_027ca9f8(param_3,plVar3 + 4);
    if (iVar1 < 0) {
      plVar2 = (long *)*plVar3;
      if (plVar2 == (long *)0x0) {
        *param_2 = plVar3;
        return plVar3;
      }
      plVar4 = plVar3;
    }
    else {
      iVar1 = FUN_027ca9f8(plVar3 + 4,param_3);
      if (-1 < iVar1) {
LAB_027caaa8:
        *param_2 = plVar3;
        return plVar4;
      }
      plVar4 = plVar3 + 1;
      plVar2 = (long *)*plVar4;
      if (plVar2 == (long *)0x0) goto LAB_027caaa8;
    }
    plVar3 = plVar2;
  } while( true );
}


