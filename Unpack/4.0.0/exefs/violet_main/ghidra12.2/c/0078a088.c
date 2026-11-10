/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078a088; name: FUN_0078a088
 */


void FUN_0078a088(int param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_047d08b0;
  if (param_1 - 2U < 0x13) {
    lVar3 = *(long *)(&DAT_03d0aac8 + (long)(int)(param_1 - 2U) * 8);
  }
  else {
    lVar3 = 0x13;
  }
  plVar2 = *(long **)(PTR_DAT_047d08b0 + lVar3 * 8);
  if ((int)plVar2[0x20] != 0) {
    (**(code **)(*plVar2 + 0xb0))();
    plVar2 = *(long **)(puVar1 + lVar3 * 8);
  }
  (**(code **)(*plVar2 + 0x20))();
  *(undefined8 *)(puVar1 + lVar3 * 8) = 0;
  return;
}


