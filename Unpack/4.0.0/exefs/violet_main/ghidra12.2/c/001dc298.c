/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001dc298; name: FUN_001dc298
 */


undefined8 FUN_001dc298(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0xe8);
  if (puVar2 == (uint *)0x0) {
    uVar1 = 3;
  }
  else {
    if (((*puVar2 >> (ulong)(param_2 & 0x1f) & 1) != 0) && (*(code **)(puVar2 + 2) != (code *)0x0))
    {
      (**(code **)(puVar2 + 2))();
    }
    uVar1 = 0;
  }
  return uVar1;
}


