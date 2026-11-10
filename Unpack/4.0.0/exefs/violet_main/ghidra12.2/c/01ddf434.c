/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ddf434; name: FUN_01ddf434
 */


void FUN_01ddf434(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = FUN_01195854();
  iVar1 = FUN_019aeb9c(uVar2,0);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      FUN_01ddfacc(param_1,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  FUN_01ddf99c(param_1);
  return;
}


