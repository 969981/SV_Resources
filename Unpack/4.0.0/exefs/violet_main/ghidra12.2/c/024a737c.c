/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a737c; name: FUN_024a737c
 */


void FUN_024a737c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_28 [8];
  
  if ((long)-param_2 < 0) {
    lVar1 = *(long *)(param_1 + 0xf8) + *(long *)(param_1 + 0x100) * 0x18;
    uVar2 = lVar1 - 0x18;
    do {
      FUN_024a73f4(uVar2,auStack_28);
      uVar2 = uVar2 - 0x18;
    } while (lVar1 + ~param_2 * 0x18 < uVar2);
  }
  return;
}


