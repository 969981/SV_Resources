/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015bdd14; name: FUN_015bdd14
 */


void FUN_015bdd14(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return;
  }
  plVar1 = (long *)*param_1;
  uVar3 = param_2 + (param_1[1] - *plVar1 >> 2) * 0x2e8ba2e8ba2e8ba3;
  if ((long)uVar3 < 1) {
    lVar4 = 0x5c - uVar3;
    lVar2 = SUB168(SEXT816(lVar4) * SEXT816(-0x2c0b02c0b02c0b03),8);
    lVar2 = (lVar2 >> 4) - (lVar2 >> 0x3f);
    *param_1 = (long)(plVar1 + lVar2);
    lVar2 = plVar1[lVar2];
    uVar3 = ((lVar4 / 0x5d) * 0x5d - lVar4) + 0x5c;
  }
  else {
    *param_1 = (long)(plVar1 + uVar3 / 0x5d);
    lVar2 = plVar1[uVar3 / 0x5d];
    uVar3 = uVar3 % 0x5d;
  }
  param_1[1] = lVar2 + uVar3 * 0x2c;
  return;
}


