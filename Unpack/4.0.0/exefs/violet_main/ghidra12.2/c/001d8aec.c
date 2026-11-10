/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d8aec; name: FUN_001d8aec
 */


void FUN_001d8aec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0xef8);
  while (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    FUN_001d8a70(param_1,uVar2);
    if (*(long *)(param_1 + 0xee8) != 0) {
      FUN_001d899c(*(long *)(param_1 + 0xee8),uVar2,0);
    }
    lVar1 = *(long *)(param_1 + 0xef8);
  }
  if (*(long *)(param_1 + 0xee8) == 0) {
    return;
  }
  FUN_001d8a70(*(long *)(param_1 + 0xee8),param_1);
  return;
}


