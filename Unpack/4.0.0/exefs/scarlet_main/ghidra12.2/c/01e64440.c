/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e64440; name: FUN_01e64440
 */


bool FUN_01e64440(long param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long local_8;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    bVar2 = false;
    local_8 = 0;
  }
  else {
    FUN_01c27dd8(&local_8);
    if (local_8 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(long *)(param_1 + 0xd8) != 0;
      uVar3 = 2;
      if (!bVar2) {
        uVar3 = 1;
      }
      uVar1 = (uint)bVar2;
      if (*(long *)(param_1 + 0xa20) != 0) {
        uVar1 = uVar3;
      }
      if (*(long *)(param_1 + 0x1368) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(long *)(param_1 + 0x1cb0) != 0) {
        uVar1 = uVar1 + 1;
      }
      bVar2 = *(uint *)(local_8 + 0xf8) == uVar1;
    }
  }
  FUN_01c1abf8(&local_8);
  return bVar2;
}


