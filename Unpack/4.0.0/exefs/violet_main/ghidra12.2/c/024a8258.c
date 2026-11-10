/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a8258; name: FUN_024a8258
 */


void FUN_024a8258(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar2 = (long *)param_1[1];
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = *plVar2;
    param_1[2] = 0;
    while (plVar2 != param_1) {
      plVar3 = (long *)plVar2[1];
      FUN_024a6f80(plVar2 + 2);
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar2,0x20,8);
      plVar2 = plVar3;
    }
  }
  return;
}


