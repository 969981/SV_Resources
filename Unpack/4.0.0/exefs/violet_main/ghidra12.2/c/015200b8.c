/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015200b8; name: FUN_015200b8
 */


void FUN_015200b8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  do {
    uVar2 = FUN_0271ac10(*(undefined8 *)(param_1 + 0x30));
    bVar1 = uVar3 < uVar2;
    uVar3 = (ulong)((int)uVar3 + 1);
  } while (bVar1);
  uVar3 = 0;
  do {
    uVar2 = FUN_0271ac2c(*(undefined8 *)(param_1 + 0x30));
    bVar1 = uVar3 < uVar2;
    uVar3 = (ulong)((int)uVar3 + 1);
  } while (bVar1);
  return;
}


