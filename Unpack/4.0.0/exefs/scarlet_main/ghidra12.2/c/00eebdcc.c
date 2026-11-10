/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eebdcc; name: FUN_00eebdcc
 */


void FUN_00eebdcc(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00dbf838(*(undefined8 *)(param_1 + 0x70));
  uVar2 = FUN_00dbfb7c(*(undefined8 *)(param_1 + 0x70));
  if ((uVar1 & 0xfff0 ^ uVar1 >> 0x10 ^ uVar2 >> 0x10 ^ uVar2 & 0xfff0) < 0x10) {
    uVar3 = FUN_00dbf838(*(undefined8 *)(param_1 + 0x70));
    uVar4 = FUN_00dbfb7c(*(undefined8 *)(param_1 + 0x70));
    uVar3 = FUN_00ef7994(uVar3,uVar4);
    FUN_00ef3280(*(undefined8 *)(param_1 + 0x70),uVar3);
    return;
  }
  return;
}


