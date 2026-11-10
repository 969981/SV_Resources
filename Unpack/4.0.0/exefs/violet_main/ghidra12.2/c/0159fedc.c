/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159fedc; name: FUN_0159fedc
 */


byte FUN_0159fedc(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 auStack_58 [32];
  long *local_38;
  
  local_38 = (long *)0x0;
  FUN_01247754(auStack_58,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  uVar4 = FUN_01460dbc(auStack_58,&local_38);
  if ((uVar4 & 1) == 0) {
    bVar6 = 1;
  }
  else {
    uVar2 = FUN_0159fe8c(*(undefined8 *)(param_1 + 8));
    uVar3 = (**(code **)(*local_38 + 0x98))();
    uVar3 = FUN_01689a40(param_1,uVar3);
    uVar5 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
    uVar4 = FUN_01242ecc(uVar5,uVar2,uVar3);
    if ((uVar4 & 1) == 0) {
      bVar1 = (**(code **)(*local_38 + 0x118))();
      if (bVar1 < 2) {
        bVar1 = 1;
      }
    }
    else {
      bVar1 = 1;
    }
    while (bVar6 = bVar1, uVar4 = FUN_01460dbc(auStack_58,&local_38), (uVar4 & 1) != 0) {
      uVar2 = FUN_0159fe8c(*(undefined8 *)(param_1 + 8));
      uVar3 = (**(code **)(*local_38 + 0x98))();
      uVar3 = FUN_01689a40(param_1,uVar3);
      uVar5 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
      uVar4 = FUN_01242ecc(uVar5,uVar2,uVar3);
      bVar1 = bVar6;
      if (((uVar4 & 1) == 0) && (bVar1 = (**(code **)(*local_38 + 0x118))(), bVar1 <= bVar6)) {
        bVar1 = bVar6;
      }
    }
  }
  return bVar6;
}


