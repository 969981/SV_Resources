/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0130682c; name: FUN_0130682c
 */


void FUN_0130682c(long *param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [16];
  long local_58;
  undefined8 local_48;
  
  lVar4 = param_1[1];
  if ((ulong)((param_1[2] - lVar4 >> 4) * -0x5075075075075075) < param_2) {
    uVar2 = FUN_01307e2c(param_1,param_2 + (lVar4 - *param_1 >> 4) * -0x5075075075075075);
    FUN_013051bc(auStack_68,uVar2,(param_1[1] - *param_1 >> 4) * -0x5075075075075075,param_1 + 3);
    lVar5 = param_2 * 0x230;
    lVar4 = local_58 + lVar5;
    do {
      FUN_013069a8(local_48,local_58,param_3);
      local_58 = local_58 + 0x230;
      lVar5 = lVar5 + -0x230;
    } while (lVar5 != 0);
    local_58 = lVar4;
    FUN_013052f4(param_1,auStack_68);
    FUN_013056e8(auStack_68);
  }
  else {
    lVar5 = lVar4;
    if (param_2 != 0) {
      plVar1 = param_1 + 3;
      lVar5 = lVar4 + param_2 * 0x230;
      FUN_013069a8(plVar1,lVar4,param_3);
      if (((param_2 != 1) && (FUN_013069a8(plVar1,lVar4 + 0x230,param_3), param_2 != 2)) &&
         (FUN_013069a8(plVar1,lVar4 + 0x460,param_3), param_2 != 3)) {
        lVar4 = lVar4 + 0x690;
        lVar3 = param_2 * 0x230 + -0x690;
        do {
          FUN_013069a8(plVar1,lVar4,param_3);
          lVar4 = lVar4 + 0x230;
          lVar3 = lVar3 + -0x230;
        } while (lVar3 != 0);
      }
    }
    param_1[1] = lVar5;
  }
  return;
}


