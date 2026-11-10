/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00892f70; name: FUN_00892f70
 */


void FUN_00892f70(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  while (plVar3 != param_1) {
    if (((char)plVar3[0x13] != '\0') && (plVar1 = (long *)plVar3[0x12], plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      plVar1 = (long *)plVar3[0x12];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
        FUN_00896e98(plVar1);
      }
      plVar3[0x12] = 0;
    }
    if (param_1 != plVar3) {
      plVar1 = (long *)plVar3[1];
      lVar2 = *plVar1;
      *(long **)(*plVar3 + 8) = plVar1;
      *plVar1 = *plVar3;
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
    }
    FUN_00896e98(plVar3);
    plVar3 = (long *)param_1[1];
  }
  return;
}


