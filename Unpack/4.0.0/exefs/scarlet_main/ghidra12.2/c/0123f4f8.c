/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123f4f8; name: FUN_0123f4f8
 */


void FUN_0123f4f8(undefined8 param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_0124e480();
  uVar2 = FUN_0123f5b8();
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_01582534(param_1);
  FUN_0123f5b0();
  uVar2 = FUN_0123f630();
  if ((uVar2 & 1) == 0) {
    FUN_01582534(param_1);
    uVar3 = FUN_0123f5b0();
    cVar1 = FUN_0123f5c8(uVar3,0);
    if (cVar1 == '\0') {
      return;
    }
  }
  uVar3 = FUN_0124e480(param_1);
  uVar4 = FUN_01582534(param_1);
  uVar2 = FUN_0124e550(uVar3,uVar4);
  FUN_01243584(param_1);
  if ((uVar2 & 1) == 0) {
    FUN_0124c994();
  }
  else {
    FUN_01248c58();
  }
  FUN_0123f5f0(param_1);
  FUN_0123de68(param_1);
  uVar3 = FUN_0123de70();
  FUN_0123fa5c(uVar3,2);
  return;
}


