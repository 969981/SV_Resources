/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01246540; name: FUN_01246540
 */


void FUN_01246540(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [56];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  FUN_01582534();
  uVar3 = FUN_0123f5b0();
  cVar1 = FUN_0123f5c8(uVar3,0);
  FUN_012466dc(auStack_78);
  FUN_01248a98(param_1,auStack_78);
  FUN_01247dcc(param_1,auStack_78);
  FUN_01246704(param_1,auStack_78);
  FUN_01246e90(param_1);
  FUN_01246b30();
  FUN_0123de68(param_1);
  uVar3 = FUN_0123de70();
  uVar4 = FUN_012438a4(uVar3,1);
  if ((uVar4 & 1) != 0) {
    return;
  }
  FUN_0123de68(param_1);
  FUN_0123de70();
  FUN_0123de78();
  uVar3 = FUN_0124e480(param_1);
  uVar4 = FUN_010a9b4c(uVar3,0x20);
  if ((uVar4 & 1) == 0) {
    FUN_01461214(param_1);
    uVar3 = FUN_0124a964();
    FUN_0123fa64(uVar3,auStack_40,auStack_38);
  }
  uVar4 = FUN_0124a808(param_1);
  if ((uVar4 & 1) == 0) {
    FUN_01582534(param_1);
    uVar3 = FUN_0123f5b0();
    cVar2 = FUN_0123f5c8(uVar3,0);
    uVar3 = FUN_0124e480(param_1);
    if (cVar1 == cVar2) {
      uVar4 = FUN_0124e488(uVar3);
      if ((uVar4 & 1) == 0) {
        return;
      }
      FUN_012468e8(param_1);
      uVar4 = FUN_01246ccc();
      if ((uVar4 & 1) == 0) {
        return;
      }
      FUN_0123de68(param_1);
      uVar3 = FUN_0123de70();
      uVar5 = 5;
    }
    else {
      uVar5 = FUN_01582534(param_1);
      uVar4 = FUN_0124e550(uVar3,uVar5);
      FUN_01243584(param_1);
      if ((uVar4 & 1) == 0) {
        FUN_0124c994();
      }
      else {
        FUN_01248c58();
      }
      FUN_01249b94(param_1);
      FUN_0123de68(param_1);
      uVar3 = FUN_0123de70();
      uVar5 = 2;
    }
  }
  else {
    FUN_0123de68(param_1);
    uVar3 = FUN_0123de70();
    uVar5 = 7;
  }
  FUN_0123fa5c(uVar3,uVar5);
  return;
}


