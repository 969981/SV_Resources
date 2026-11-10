/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00401560; name: FUN_00401560
 */


void FUN_00401560(long param_1)

{
  int iVar1;
  int local_28 [2];
  undefined1 *local_20;
  undefined1 local_4 [4];
  
  iVar1 = FUN_003eb2b0(*(undefined8 *)(param_1 + 0x10));
  local_28[0] = iVar1 + 0xe;
  if (-1 < iVar1 + 7) {
    local_28[0] = iVar1 + 7;
  }
  local_20 = local_4;
  local_28[0] = local_28[0] >> 3;
  local_28[1] = 2;
  local_4[0] = 0xff;
  iVar1 = FUN_003e5020(local_28,0);
  FUN_003def90(1,iVar1 << 1,0x10);
  return;
}


