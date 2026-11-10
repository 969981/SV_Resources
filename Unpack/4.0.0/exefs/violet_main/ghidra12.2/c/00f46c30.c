/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f46c30; name: FUN_00f46c30
 */


uint FUN_00f46c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long local_50 [4];
  undefined1 auStack_18 [4];
  undefined1 local_14 [4];
  
  FUN_017522c8(local_50,param_1 + 0xc0,0x100);
  local_14[0] = 0xd;
  if (local_50[0] != 0) {
    FUN_00f45578(auStack_18,local_14,local_50[0] + 8);
    if (local_50[0] != 0) {
      FUN_0289c86c(auStack_18,param_3,local_50[0] + 8);
    }
  }
  uVar1 = FUN_019d5a58(param_1,param_2,local_50);
  FUN_01694aa8(local_50);
  return uVar1 & 1;
}


