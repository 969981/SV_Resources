/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02784c3c; name: FUN_02784c3c
 */


void FUN_02784c3c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_28 [8];
  
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  puVar1 = puVar2;
  if (lVar3 != 0) {
    puVar1 = puVar2 + lVar3 * 4;
  }
  if ((puVar1 != puVar2) && (iVar4 = (**(code **)(*(long *)*puVar2 + 0x10))(), iVar4 == 1)) {
    FUN_02784ca4(auStack_28,*(undefined8 *)(param_1 + 0x20),puVar2);
  }
  return;
}


