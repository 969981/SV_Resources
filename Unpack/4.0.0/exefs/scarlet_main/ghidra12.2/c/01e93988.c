/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e93988; name: FUN_01e93988
 */


void FUN_01e93988(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_48 [24];
  
  lVar2 = DAT_04839318;
  bVar1 = DAT_04839318 != 0;
  DAT_04839318 = param_1;
  if (bVar1) {
    FUN_00c4e5a0(auStack_48,0);
    uVar5 = DAT_04839330;
    uVar4 = DAT_04839328;
    plVar3 = DAT_04839320;
    uVar6 = FUN_00c4e564(DAT_04839320);
    if ((uVar6 & 1) == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,uVar4,uVar5);
    }
    else {
      FUN_00c48fe8(plVar3,lVar2,uVar4,uVar5);
    }
    FUN_00c4e70c(auStack_48);
  }
  return;
}


