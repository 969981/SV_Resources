/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b379c; name: FUN_008b379c
 */


void FUN_008b379c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[1];
  while (plVar2 != param_1) {
    if ((char)plVar2[0x13] != '\0') {
      (**(code **)(*(long *)plVar2[0x12] + 0x18))((long *)plVar2[0x12],param_2);
    }
    plVar3 = (long *)plVar2[0x12];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      FUN_00896e98(plVar3);
    }
    if (param_1 != plVar2) {
      plVar3 = (long *)plVar2[1];
      lVar1 = *plVar3;
      *(long **)(*plVar2 + 8) = plVar3;
      *plVar3 = *plVar2;
      *(long **)(lVar1 + 8) = plVar2;
      *plVar2 = lVar1;
    }
    FUN_00896e98(plVar2);
    plVar2 = (long *)param_1[1];
  }
  return;
}


