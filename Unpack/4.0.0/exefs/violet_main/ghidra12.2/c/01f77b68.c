/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f77b68; name: FUN_01f77b68
 */


long * FUN_01f77b68(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = (long)plVar2;
    return plVar2;
  }
  do {
    iVar1 = FUN_01f77800(param_3,plVar3 + 4);
    if (iVar1 < 0) {
      plVar2 = (long *)*plVar3;
      if (plVar2 == (long *)0x0) {
        *param_2 = (long)plVar3;
        return plVar3;
      }
    }
    else {
      plVar2 = (long *)plVar3[1];
      if (plVar2 == (long *)0x0) {
        *param_2 = (long)plVar3;
        return plVar3 + 1;
      }
    }
    plVar3 = plVar2;
  } while( true );
}


