/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1bd40; name: FUN_01e1bd40
 */


void FUN_01e1bd40(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 0x10);
  lVar1 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,0x48,8);
  if (lVar1 == 0) {
    (**(code **)(*(long *)*puVar2 + 0xe8))();
  }
  *param_1 = lVar1;
  param_1[1] = (long)puVar2;
  FUN_01e1be1c(puVar2,lVar1 + 0x20,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


