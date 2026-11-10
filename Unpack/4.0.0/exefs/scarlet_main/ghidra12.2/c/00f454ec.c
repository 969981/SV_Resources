/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f454ec; name: FUN_00f454ec
 */


uint FUN_00f454ec(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 local_4c [4];
  long local_48 [4];
  undefined1 auStack_28 [8];
  
  FUN_017522c8(local_48,param_1 + 0xc0,0x100);
  local_4c[0] = 9;
  if (local_48[0] != 0) {
    FUN_00f45578(auStack_28,local_4c,local_48[0] + 8);
    if (local_48[0] != 0) {
      FUN_00f4563c(auStack_28,param_2,local_48[0] + 8);
    }
  }
  uVar1 = FUN_00f45e9c(param_1,local_48);
  FUN_01694aa8(local_48);
  return uVar1 & 1;
}


