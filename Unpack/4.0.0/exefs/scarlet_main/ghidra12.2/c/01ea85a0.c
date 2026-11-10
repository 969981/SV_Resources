/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea85a0; name: FUN_01ea85a0
 */


ulong FUN_01ea85a0(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = FUN_01ea77c4(*param_1);
  if (uVar1 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 1;
    do {
      plVar2 = (long *)FUN_01ea77d4(*param_1,uVar3);
      if (*plVar2 == 0x19860b274a013a64) goto LAB_01ea8618;
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
    uVar4 = 0;
    uVar3 = uVar1;
  }
LAB_01ea8618:
  return uVar4 | (ulong)uVar3 << 0x20;
}


