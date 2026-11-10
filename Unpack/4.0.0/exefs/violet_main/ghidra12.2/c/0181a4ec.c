/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0181a4ec; name: FUN_0181a4ec
 */


int FUN_0181a4ec(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  undefined1 auStack_50 [32];
  undefined8 local_18;
  
  uVar2 = FUN_0124e480();
  uVar3 = FUN_01582534(param_1);
  FUN_01247754(auStack_50,uVar2,uVar3);
  uVar4 = FUN_01460dbc(auStack_50,&local_18);
  iVar5 = 0;
  while ((uVar4 & 1) != 0) {
    uVar2 = FUN_0124e480(param_1);
    uVar3 = FUN_01582534(param_1);
    uVar4 = FUN_01242e68(uVar2,uVar3,local_18);
    if ((uVar4 & 1) != 0) {
      uVar1 = FUN_0181a59c(param_1,local_18);
      iVar5 = iVar5 + (uVar1 & 1);
    }
    uVar4 = FUN_01460dbc(auStack_50,&local_18);
  }
  return iVar5;
}


