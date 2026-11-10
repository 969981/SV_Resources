/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cce6e4; name: FUN_00cce6e4
 */


void FUN_00cce6e4(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [16];
  long local_58;
  undefined8 local_48;
  
  lVar4 = param_1[1];
  if ((ulong)((param_1[2] - lVar4 >> 4) * -0x5555555555555555) < param_2) {
    uVar1 = FUN_00cce944(param_1,param_2 + (lVar4 - *param_1 >> 4) * -0x5555555555555555);
    FUN_00cce9a0(auStack_68,uVar1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555,param_1 + 3);
    FUN_00cce844(local_48,local_58);
    if (((param_2 != 1) && (FUN_00cce844(local_48,local_58 + 0x30), param_2 != 2)) &&
       (FUN_00cce844(local_48,local_58 + 0x60), param_2 != 3)) {
      lVar4 = local_58 + 0x90;
      lVar3 = param_2 * 0x30 + -0x90;
      do {
        FUN_00cce844(local_48,lVar4);
        lVar4 = lVar4 + 0x30;
        lVar3 = lVar3 + -0x30;
      } while (lVar3 != 0);
    }
    local_58 = local_58 + param_2 * 0x30;
    FUN_00ccea34(param_1,auStack_68);
    FUN_00cceadc(auStack_68);
  }
  else {
    lVar3 = lVar4;
    if (param_2 != 0) {
      lVar3 = lVar4 + param_2 * 0x30;
      lVar2 = param_2 * 0x30;
      do {
        FUN_00cce844(param_1 + 3,lVar4);
        lVar4 = lVar4 + 0x30;
        lVar2 = lVar2 + -0x30;
      } while (lVar2 != 0);
    }
    param_1[1] = lVar3;
  }
  return;
}


