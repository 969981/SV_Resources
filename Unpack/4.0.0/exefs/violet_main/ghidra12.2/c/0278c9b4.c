/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278c9b4; name: FUN_0278c9b4
 */


undefined8 FUN_0278c9b4(void)

{
  int iVar1;
  undefined8 local_18;
  
  if ((DAT_047ecd84 == 0) && (iVar1 = FUN_001c3b1c(3,1), iVar1 != 0)) {
    local_18 = 0;
  }
  else {
    iVar1 = FUN_001e4b44(&local_18);
    if (iVar1 != 0) {
      local_18 = 0;
    }
  }
  return local_18;
}


