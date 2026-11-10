/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f46148; name: FUN_00f46148
 */


uint FUN_00f46148(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 local_4c [4];
  long local_48 [4];
  undefined1 auStack_28 [8];
  
  FUN_017522c8(local_48,param_1 + 0xc0,0x100);
  local_4c[0] = 10;
  if (local_48[0] != 0) {
    FUN_00f45578(auStack_28,local_4c,local_48[0] + 8);
    if (local_48[0] != 0) {
      FUN_0289c6dc(auStack_28,param_2,local_48[0] + 8);
    }
  }
  uVar1 = FUN_00f45e9c(param_1,local_48);
  FUN_01694aa8(local_48);
  return uVar1 & 1;
}


