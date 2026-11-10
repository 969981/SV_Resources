/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029bd79c; name: FUN_029bd79c
 */


void FUN_029bd79c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)*param_1;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    uVar4 = param_1[2];
    uVar3 = *(ulong *)(lVar2 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar3 = uVar4 - 1 & uVar3;
    }
    else if (uVar4 <= uVar3) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar3 / uVar4;
      }
      uVar3 = uVar3 - uVar1 * uVar4;
    }
    if (uVar3 != param_1[1]) {
      *param_1 = 0;
    }
  }
  return;
}


