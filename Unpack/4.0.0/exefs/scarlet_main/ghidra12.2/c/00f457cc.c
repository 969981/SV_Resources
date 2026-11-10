/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f457cc; name: FUN_00f457cc
 */


uint FUN_00f457cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long local_50 [4];
  undefined1 auStack_18 [4];
  undefined1 local_14 [4];
  
  FUN_017522c8(local_50,param_1 + 0xc0,0x100);
  local_14[0] = 6;
  if (local_50[0] != 0) {
    FUN_00f45578(auStack_18,local_14,local_50[0] + 8);
    if (local_50[0] != 0) {
      FUN_00f459d8(auStack_18,param_3,local_50[0] + 8);
    }
  }
  uVar1 = FUN_019d5a58(param_1,param_2,local_50);
  FUN_01694aa8(local_50);
  return uVar1 & 1;
}


