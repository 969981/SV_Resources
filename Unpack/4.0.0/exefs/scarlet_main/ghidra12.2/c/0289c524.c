/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289c524; name: FUN_0289c524
 */


uint FUN_0289c524(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_50;
  undefined1 local_44 [4];
  long local_40 [4];
  
  FUN_017522c8(local_40,param_1 + 0xc0,0x100);
  local_44[0] = 5;
  if (local_40[0] != 0) {
    FUN_00f45578(&local_50,local_44,local_40[0] + 8);
    if (local_40[0] != 0) {
      FUN_0289c5bc(&local_50,param_2,local_40[0] + 8);
    }
  }
  local_50 = FUN_013fbdd0();
  uVar1 = FUN_019d5a58(param_1,&local_50,local_40);
  FUN_01694aa8(local_40);
  return uVar1 & 1;
}


