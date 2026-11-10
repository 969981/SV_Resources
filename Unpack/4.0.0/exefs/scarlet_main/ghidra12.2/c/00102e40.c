/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00102e40; name: FUN_00102e40
 */


void FUN_00102e40(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00120240(&DAT_047ec428,1);
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      FUN_00120240(&DAT_047ec428,0xffffffff);
      nn::os::YieldThread();
      uVar2 = uVar2 + 1;
      if (0x1ff < uVar2) {
        FUN_00120c20(1);
        uVar2 = 0;
      }
      iVar1 = FUN_00120240(&DAT_047ec428,1);
    } while (iVar1 != 0);
  }
  return;
}


