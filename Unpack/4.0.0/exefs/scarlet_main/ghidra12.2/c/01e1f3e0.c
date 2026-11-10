/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1f3e0; name: FUN_01e1f3e0
 */


ulong FUN_01e1f3e0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_01e1f418(*(undefined8 *)(param_1 + 0x78));
    uVar2 = uVar1 & 0xff00;
    uVar1 = uVar1 & 0xff;
  }
  return uVar1 | uVar2;
}


