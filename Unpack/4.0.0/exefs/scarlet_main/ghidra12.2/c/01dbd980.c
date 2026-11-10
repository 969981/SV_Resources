/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dbd980; name: FUN_01dbd980
 */


bool FUN_01dbd980(long *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  if (*param_1 == 0) {
    bVar2 = false;
  }
  else {
    uVar3 = FUN_01539950(*(undefined8 *)(*param_1 + 0x70));
    if ((uVar3 & 0xff) - 0x1e < 5) {
      bVar2 = true;
    }
    else {
      uVar1 = uVar3 & 0xfe;
      bVar2 = true;
      if ((uVar1 != 0x2a) && (uVar1 != 0x2c)) {
        bVar2 = uVar1 == 0x32 || (uVar3 & 0xff) - 0x2f < 3;
      }
    }
  }
  return bVar2;
}


