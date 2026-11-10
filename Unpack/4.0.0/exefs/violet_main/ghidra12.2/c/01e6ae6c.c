/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6ae6c; name: FUN_01e6ae6c
 */


void FUN_01e6ae6c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long local_18;
  
  plVar2 = *(long **)(param_1 + 0x80);
  plVar1 = *(long **)(param_1 + 0x88);
  if ((plVar2 != plVar1) && (*plVar2 != param_2)) {
    do {
      plVar2 = plVar2 + 1;
      if (plVar1 == plVar2) {
        plVar2 = plVar1;
        goto LAB_01e6ae98;
      }
    } while (*plVar2 != param_2);
  }
LAB_01e6ae98:
  if (plVar1 == plVar2) {
    local_18 = param_2;
    FUN_01e6b02c((long *)(param_1 + 0x80),&local_18);
  }
  return;
}


