/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029f7004; name: FUN_029f7004
 */


void FUN_029f7004(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_18 [8];
  
  puVar1 = *(undefined8 **)(param_1 + 0xf0);
  for (puVar2 = *(undefined8 **)(param_1 + 0xe8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x38))(auStack_18,(long *)*puVar2,*param_2);
    FUN_00e5023c(auStack_18);
  }
  return;
}


