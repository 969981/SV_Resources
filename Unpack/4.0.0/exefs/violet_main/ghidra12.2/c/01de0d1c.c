/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01de0d1c; name: FUN_01de0d1c
 */


uint FUN_01de0d1c(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_2[1];
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_014a24ec();
    iVar4 = 8;
    if (iVar2 != 2) {
      iVar4 = 4;
    }
    uVar3 = *param_2 + iVar4 * (iVar1 + -1) & 0xff;
  }
  return uVar3;
}


