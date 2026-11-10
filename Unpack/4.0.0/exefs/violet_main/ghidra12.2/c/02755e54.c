/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02755e54; name: FUN_02755e54
 */


void FUN_02755e54(long param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = FUN_02755f38(param_1 + 0x240);
  if ((uVar2 & 1) == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_02755f50(param_1 + 0x240);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
  }
  uVar2 = FUN_02755f38(param_1 + 0x2e8);
  if ((((((uVar2 & 1) != 0) || (uVar2 = FUN_02755f38(param_1 + 0x340), (uVar2 & 1) != 0)) ||
       (uVar2 = FUN_02755f38(param_1 + 0x398), (uVar2 & 1) != 0)) ||
      (uVar2 = FUN_02755f38(param_1 + 0x3f0), fVar4 = fVar3, (uVar2 & 1) != 0)) &&
     (fVar4 = (float)FUN_02755fa0(param_1 + 0x2a0), fVar4 <= fVar3)) {
    fVar4 = fVar3;
  }
  lVar1 = param_1 + 0x45c;
  fVar3 = (float)FUN_02756078(lVar1);
  if (1.1920929e-07 < fVar4 - fVar3) {
    FUN_02756080(lVar1);
    *(undefined4 *)(param_1 + 0x45c) = 1;
    FUN_02755de4(lVar1,*(undefined4 *)(param_1 + 0x478));
    FUN_0275609c(fVar4,lVar1);
    return;
  }
  return;
}


