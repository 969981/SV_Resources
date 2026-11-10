/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e67308; name: FUN_01e67308
 */


void FUN_01e67308(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long local_20;
  undefined8 uStack_18;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  plVar1 = *(long **)(param_1 + 0xc0);
  if ((plVar2 != plVar1) && (param_2 != *plVar2)) {
    do {
      plVar2 = plVar2 + 2;
      if (plVar1 == plVar2) {
        plVar2 = plVar1;
        goto LAB_01e67334;
      }
    } while (param_2 != *plVar2);
  }
LAB_01e67334:
  if (plVar1 == plVar2) {
    local_20 = param_2;
    uStack_18 = param_3;
    FUN_01e67840((long *)(param_1 + 0xb8),&local_20);
  }
  return;
}


