/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


