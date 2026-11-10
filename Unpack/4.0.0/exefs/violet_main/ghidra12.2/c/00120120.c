/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00120120; name: FUN_00120120
 */


uint FUN_00120120(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (param_3 + *(int *)(param_1 + 4) * param_2) - 1;
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = uVar2 / param_3;
  }
  if (uVar2 < param_3) {
    uVar3 = 1;
  }
  uVar4 = FUN_00120240(param_1,uVar3);
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 < uVar4 || uVar2 - uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = uVar2 - uVar4;
    if (uVar3 + uVar4 <= uVar2) {
      uVar1 = uVar3;
    }
    uVar4 = uVar4 | uVar1 << 4;
  }
  return uVar4;
}


