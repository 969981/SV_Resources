/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00568b98; name: FUN_00568b98
 */


void FUN_00568b98(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 3) < param_2) {
    lVar3 = param_1[1];
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 8,8);
    lVar2 = lVar1 + (lVar3 - lVar2);
    lVar3 = *param_1;
    lVar4 = param_1[1];
    lVar5 = lVar2;
    if (lVar4 == lVar3) {
      lVar4 = lVar3;
    }
    else {
      do {
        lVar5 = lVar5 + -8;
        lVar4 = lVar4 + -8;
        FUN_0056b4c4(lVar5,lVar4);
      } while (lVar3 != lVar4);
      lVar3 = param_1[1];
      lVar4 = *param_1;
    }
    *param_1 = lVar5;
    param_1[1] = lVar2;
    lVar2 = param_1[2];
    param_1[2] = lVar1 + param_2 * 8;
    while (lVar3 != lVar4) {
      lVar3 = lVar3 + -8;
      FUN_0056b3f0(lVar3);
    }
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00568c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar2 - lVar4,8);
      return;
    }
  }
  return;
}


