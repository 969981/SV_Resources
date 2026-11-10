/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f22dc; name: FUN_021f22dc
 */


void FUN_021f22dc(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00d75438(*(undefined8 *)(param_1 + 0x70));
  iVar2 = FUN_00ddf348(*(undefined8 *)(param_1 + 0x70));
  if ((uint)(iVar2 + param_2) <= uVar1) {
    uVar1 = iVar2 + param_2;
  }
  FUN_00f14810(*(undefined8 *)(param_1 + 0x70),uVar1);
  return;
}


