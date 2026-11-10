/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edca48; name: FUN_01edca48
 */


undefined8 FUN_01edca48(long param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  
  sVar2 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  sVar3 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  if (sVar2 == 0x2a6) {
    cVar1 = FUN_00cec030(*(undefined8 *)(param_1 + 0x70));
    if ((sVar3 == 0) && (cVar1 != '\0')) {
      FUN_00ef644c(*(undefined8 *)(param_1 + 0x70),0);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      if ((sVar3 == 1) && (cVar1 != '\x01')) {
        uVar4 = 1;
        FUN_00ef644c(*(undefined8 *)(param_1 + 0x70),1);
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


