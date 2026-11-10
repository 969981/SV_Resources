/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc1eb0; name: FUN_01dc1eb0
 */


float FUN_01dc1eb0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    fVar3 = 0.0;
  }
  else {
    (**(code **)(*plVar2 + 0x58))(plVar2);
    lVar1 = FUN_00c8c7b4(plVar2[0x2e],param_2);
    (**(code **)(*plVar2 + 0x60))(plVar2);
    fVar3 = 0.0;
    if (lVar1 != 0) {
      fVar3 = *(float *)(lVar1 + 0x30);
      for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x18)) {
        fVar3 = fVar3 + *(float *)(lVar1 + 0x30);
      }
    }
  }
  return fVar3;
}


