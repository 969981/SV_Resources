/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02959670; name: FUN_02959670
 */


undefined8 FUN_02959670(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(param_1 + 0x30));
  if ((plVar1 == (long *)0x0) || (uVar2 = (**(code **)(*plVar1 + 0x78))(), (uVar2 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


