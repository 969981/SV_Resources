/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cf48b4; name: FUN_01cf48b4
 */


void FUN_01cf48b4(undefined1 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_019b511c();
  lVar2 = DAT_0483a578;
  DAT_0483a570 = DAT_0483a578;
  *param_1 = 0;
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x38) != '\0')) {
    uVar1 = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *param_1 = 1;
  }
  return;
}


