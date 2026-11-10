/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02923b34; name: FUN_02923b34
 */


undefined4 FUN_02923b34(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x9e);
  if (*(byte *)(param_1 + 0x9e) == 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x136);
    if (uVar1 == 0) {
      uVar1 = (uint)*(byte *)(param_1 + 0x1ce);
      if (uVar1 == 0) {
        uVar1 = (uint)*(byte *)(param_1 + 0x266);
        if (uVar1 == 0) {
          return 0;
        }
        lVar2 = 3;
      }
      else {
        lVar2 = 2;
      }
    }
    else {
      lVar2 = 1;
    }
  }
  else {
    lVar2 = 0;
  }
  return *(undefined4 *)(param_1 + lVar2 * 0x98 + (ulong)(uVar1 - 1) * 4 + 8);
}


