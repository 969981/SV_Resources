/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01259904; name: FUN_01259904
 */


void FUN_01259904(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [16];
  long local_58;
  undefined8 local_48;
  
  lVar2 = param_1[1];
  if ((ulong)((param_1[2] - lVar2 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    uVar1 = FUN_01259de4(param_1,param_2 + (lVar2 - *param_1 >> 3) * 0x6db6db6db6db6db7);
    FUN_01259c00(auStack_68,uVar1,(param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7,param_1 + 3);
    lVar3 = param_2 * 0x38;
    lVar2 = local_58 + lVar3;
    do {
      FUN_01259a14(local_48,local_58);
      local_58 = local_58 + 0x38;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
    local_58 = lVar2;
    FUN_01259c90(param_1,auStack_68);
    FUN_01259d38(auStack_68);
  }
  else {
    lVar4 = param_2 * 0x38;
    lVar3 = lVar2 + lVar4;
    do {
      FUN_01259a14(param_1 + 3,lVar2);
      lVar2 = lVar2 + 0x38;
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
    param_1[1] = lVar3;
  }
  return;
}


