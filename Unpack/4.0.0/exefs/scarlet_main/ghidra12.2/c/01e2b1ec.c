/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e2b1ec; name: FUN_01e2b1ec
 */


undefined8 FUN_01e2b1ec(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    if (param_2 < 1) {
      FUN_029ffc48();
    }
    else {
      FUN_029ffcb8();
    }
    uVar1 = 1;
  }
  return uVar1;
}


