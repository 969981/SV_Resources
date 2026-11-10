/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cf4340; name: FUN_01cf4340
 */


undefined8 FUN_01cf4340(void)

{
  long lVar1;
  ulong uVar2;
  
  FUN_019b511c();
  lVar1 = DAT_0483a578;
  DAT_0483a570 = DAT_0483a578;
  if (((DAT_0483a578 != 0) && (uVar2 = FUN_01f6db1c(), (uVar2 & 1) != 0)) &&
     (*(int *)(lVar1 + 0x30) == 0)) {
    if (*(long *)(lVar1 + 0x50) == 0) {
      return 0;
    }
    uVar2 = FUN_01f6dab4();
    if (((uVar2 & 1) != 0) && (*(char *)(lVar1 + 0x35) != '\0')) {
      *(undefined4 *)(lVar1 + 0x30) = 6;
      return 1;
    }
  }
  return 0;
}


