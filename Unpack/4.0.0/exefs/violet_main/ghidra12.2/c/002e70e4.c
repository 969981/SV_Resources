/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e70e4; name: FUN_002e70e4
 */


undefined8 FUN_002e70e4(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar3) {
    lVar2 = *(long *)(param_1 + 8);
    do {
      uVar1 = uVar3 >> 1;
      if (*(int *)(lVar2 + (ulong)uVar1 * 8 + 4) < param_2) {
        lVar2 = lVar2 + (ulong)(uVar1 + 1) * 8;
        uVar3 = uVar3 - (uVar1 + 1);
      }
      else {
        uVar3 = uVar1;
        if (*(int *)(lVar2 + (ulong)uVar1 * 8) <= param_2) {
          return 1;
        }
      }
    } while (0 < (int)uVar3);
  }
  return 0;
}


