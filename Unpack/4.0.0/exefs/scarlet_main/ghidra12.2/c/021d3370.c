/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d3370; name: FUN_021d3370
 */


bool FUN_021d3370(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar1 == uVar2) {
    uVar1 = param_1[1];
    uVar2 = param_2[1];
    if (uVar1 == uVar2) {
      uVar1 = param_1[2];
      uVar2 = param_2[2];
      if (uVar1 == uVar2) {
        uVar1 = param_1[3];
        uVar2 = param_2[3];
        if (uVar1 == uVar2) {
          return false;
        }
      }
    }
  }
  return uVar1 < uVar2;
}


