/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015bce24; name: FUN_015bce24
 */


void FUN_015bce24(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = param_1[1];
  if (lVar1 == param_1[2]) {
    uVar2 = FUN_015bcf24(param_1,(param_1[1] - *param_1 >> 3) * -0x7dc11f7047dc11f7 + 1);
    FUN_015bcf88(auStack_58,uVar2,(param_1[1] - *param_1 >> 3) * -0x7dc11f7047dc11f7,param_1 + 3);
    FUN_015bd314(param_1 + 3,local_48,param_2);
    local_48 = local_48 + 0x1c8;
    FUN_015bd01c(param_1,auStack_58);
    FUN_015bd0c4(auStack_58);
    return;
  }
  FUN_015bd314(param_1 + 3,lVar1,param_2);
  param_1[1] = lVar1 + 0x1c8;
  return;
}


