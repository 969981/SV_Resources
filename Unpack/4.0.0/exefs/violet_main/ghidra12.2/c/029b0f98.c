/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b0f98; name: FUN_029b0f98
 */


void FUN_029b0f98(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [16];
  long local_58;
  undefined8 local_48;
  
  lVar2 = param_1[1];
  if ((ulong)((param_1[2] - lVar2 >> 5) * -0x5555555555555555) < param_2) {
    uVar1 = FUN_029b14d8(param_1,param_2 + (lVar2 - *param_1 >> 5) * -0x5555555555555555);
    FUN_029b1534(auStack_68,uVar1,(param_1[1] - *param_1 >> 5) * -0x5555555555555555,param_1 + 3);
    lVar4 = param_2 * 0x60;
    lVar2 = local_58;
    do {
      FUN_029b13d4(local_48,lVar2);
      lVar2 = lVar2 + 0x60;
      lVar4 = lVar4 + -0x60;
    } while (lVar4 != 0);
    local_58 = local_58 + param_2 * 0x60;
    FUN_029b15c4(param_1,auStack_68);
    FUN_029b166c(auStack_68);
  }
  else {
    lVar4 = lVar2;
    if (param_2 != 0) {
      lVar4 = lVar2 + param_2 * 0x60;
      lVar3 = param_2 * 0x60;
      do {
        FUN_029b13d4(param_1 + 3,lVar2);
        lVar2 = lVar2 + 0x60;
        lVar3 = lVar3 + -0x60;
      } while (lVar3 != 0);
    }
    param_1[1] = lVar4;
  }
  return;
}


