/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0027deb0; name: FUN_0027deb0
 */


void FUN_0027deb0(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  
  if ((param_2 == 4) || (param_3 == 4)) {
LAB_0027df50:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_2 == 1) {
    lVar1 = *(long *)(param_1 + 0x218);
    if (lVar1 == 0) goto LAB_0027df50;
    plVar2 = (long *)(param_1 + 0x218);
  }
  else if (param_2 == 3) {
    lVar1 = *(long *)(param_1 + 0x220);
    if (lVar1 == 0) goto LAB_0027df50;
    plVar2 = (long *)(param_1 + 0x220);
  }
  else {
    if (param_2 != 2) goto LAB_0027df10;
    lVar1 = *(long *)(param_1 + 0x210);
    if (lVar1 == 0) goto LAB_0027df50;
    plVar2 = (long *)(param_1 + 0x210);
  }
  *plVar2 = lVar1 + -1;
LAB_0027df10:
  if (param_3 == 1) {
    plVar2 = (long *)(param_1 + 0x218);
  }
  else if (param_3 == 3) {
    plVar2 = (long *)(param_1 + 0x220);
  }
  else {
    if (param_3 != 2) {
      return;
    }
    plVar2 = (long *)(param_1 + 0x210);
  }
  *plVar2 = *plVar2 + 1;
  return;
}


