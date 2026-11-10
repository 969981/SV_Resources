/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


