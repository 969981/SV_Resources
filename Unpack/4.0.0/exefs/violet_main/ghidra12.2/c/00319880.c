/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00319880; name: FUN_00319880
 */


undefined8 FUN_00319880(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = param_1[2];
  lVar5 = 0;
  lVar6 = lVar4;
  do {
    while( true ) {
      lVar1 = lVar5 + ((ulong)(lVar6 - lVar5) >> 1);
      uVar2 = *(uint *)(*param_1 + lVar1 * 4);
      if (param_2 <= uVar2) break;
      lVar5 = lVar1 + 1;
    }
    lVar6 = lVar1;
  } while (param_2 < uVar2);
  uVar3 = *(undefined8 *)(param_1[1] + lVar1 * 8);
  *(undefined8 *)(param_1[1] + lVar1 * 8) = 0;
  lVar5 = param_1[3];
  param_1[3] = lVar5 + 1;
  if (lVar5 + 1 == lVar4) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return uVar3;
}


