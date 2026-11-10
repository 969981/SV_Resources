/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278d784; name: FUN_0278d784
 */


ulong FUN_0278d784(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_18;
  
  local_18 = 4;
  if ((*param_1 == 0) || ((param_1[1] & 0x1fffffffffffffffU) == 0)) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0278e280(*param_1,&local_18);
    uVar2 = uVar1 & 0xff00;
    uVar1 = uVar1 & 0xff;
  }
  return uVar1 | uVar2;
}


