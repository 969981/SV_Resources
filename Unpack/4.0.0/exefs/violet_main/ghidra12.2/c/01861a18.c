/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01861a18; name: FUN_01861a18
 */


void FUN_01861a18(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  puVar2 = (undefined8 *)FUN_01861a70(*param_2,param_2[1],*(undefined8 *)param_1[1]);
  if ((undefined8 *)param_2[1] != puVar2) {
    (**(code **)(*(long *)*puVar2 + 0xa8))();
    *(undefined **)(lVar1 + 0xa8) = PTR_FUN_047d9428;
    *(undefined8 *)(lVar1 + 0xb0) = 0;
  }
  return;
}


