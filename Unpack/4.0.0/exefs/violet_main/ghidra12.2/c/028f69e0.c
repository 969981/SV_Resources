/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f69e0; name: FUN_028f69e0
 */


void FUN_028f69e0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x40);
  for (plVar1 = *(long **)(param_1 + 0x38); plVar1 != plVar2; plVar1 = plVar1 + 4) {
    (*(code *)**(undefined8 **)(*plVar1 + 0x400))(*plVar1 + 0x400);
  }
  FUN_028f6a40((long *)(param_1 + 0x38));
  FUN_028f6ad0(param_1);
  return;
}


