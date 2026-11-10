/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01447978; name: FUN_01447978
 */


undefined8 FUN_01447978(long param_1,int param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  
  lVar2 = *(long *)(param_1 + 0x38);
  if ((param_2 == 0) && (param_3 < 7)) {
    pcVar3 = (char *)(lVar2 + (ulong)param_3 * 0x50 + (ulong)param_4 * 0x10 + 8);
    if (*pcVar3 == '\0') {
      auVar4 = FUN_01447a08(lVar2,0);
      uVar1 = auVar4._0_8_;
      *(undefined8 *)pcVar3 = uVar1;
      *(long *)(lVar2 + (ulong)param_3 * 0x50 + (ulong)param_4 * 0x10 + 0x10) = auVar4._8_8_;
    }
    else {
      uVar1 = *(undefined8 *)pcVar3;
    }
  }
  else {
    uVar1 = FUN_01447a08(lVar2);
  }
  return uVar1;
}


