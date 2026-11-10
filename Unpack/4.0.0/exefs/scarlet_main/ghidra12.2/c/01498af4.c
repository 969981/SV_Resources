/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01498af4; name: FUN_01498af4
 */


void FUN_01498af4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0136b004(*(undefined8 *)(param_1 + 0x30));
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_0298fe0c(*(undefined8 *)(param_1 + 0x90),0);
  FUN_01091028(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),uVar2);
  return;
}


