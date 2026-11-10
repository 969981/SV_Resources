/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01242dcc; name: FUN_01242dcc
 */


void FUN_01242dcc(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  
  FUN_0124e480();
  uVar1 = FUN_0123f5b8();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_0124e480(param_1);
    uVar3 = FUN_01582534(param_1);
    FUN_01247754(auStack_48,uVar2,uVar3);
    while (uVar1 = FUN_01460dbc(auStack_48,&local_28), (uVar1 & 1) != 0) {
      uVar2 = FUN_0124e480(param_1);
      uVar3 = FUN_01582534(param_1);
      uVar1 = FUN_01242e68(uVar2,uVar3,local_28);
      if ((uVar1 & 1) != 0) {
        FUN_012430e4(param_1,local_28);
      }
    }
  }
  return;
}


