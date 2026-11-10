/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e7e5c; name: FUN_020e7e5c
 */


undefined4 FUN_020e7e5c(long param_1,short param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),0);
  uVar2 = 0;
  if (sVar1 != param_2) {
    uVar2 = 1;
    sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),1);
    if (sVar1 != param_2) {
      uVar2 = 2;
      sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),2);
      if (sVar1 != param_2) {
        sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),3);
        uVar2 = 3;
        if (sVar1 != param_2) {
          uVar2 = 4;
        }
        return uVar2;
      }
    }
  }
  return uVar2;
}


