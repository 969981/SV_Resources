/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00400140; name: FUN_00400140
 */


void FUN_00400140(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = FUN_003eb2b0();
  }
  uVar2 = FUN_003eb2b0(*(undefined8 *)(param_1 + 8));
  FUN_003ec4e0(uVar2,iVar1);
  return;
}


