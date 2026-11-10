/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016a37b4; name: FUN_016a37b4
 */


void FUN_016a37b4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar2) {
    lVar1 = param_2[1];
  }
  else {
    FUN_016a3560(param_1 + 3,param_2[1] + -0x14,lVar4 + -0x14);
    lVar3 = param_2[1];
    lVar1 = lVar3 + -0x14;
    param_2[1] = lVar1;
    if (lVar4 + -0x14 != lVar2) {
      do {
        FUN_016a3560(param_1 + 3,lVar3 + -0x28,lVar4 + -0x28);
        lVar3 = param_2[1];
        lVar4 = lVar4 + -0x14;
        lVar1 = lVar3 + -0x14;
        param_2[1] = lVar1;
      } while (lVar2 + 0x14 != lVar4);
    }
    lVar2 = *param_1;
  }
  *param_1 = lVar1;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}


