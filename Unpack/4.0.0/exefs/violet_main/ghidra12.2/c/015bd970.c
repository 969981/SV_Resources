/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015bd970; name: FUN_015bd970
 */


void FUN_015bd970(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return;
  }
  plVar1 = (long *)*param_1;
  uVar3 = param_2 + (param_1[1] - *plVar1 >> 3) * -0xf0f0f0f0f0f0f0f;
  if ((long)uVar3 < 1) {
    lVar4 = 0x1d - uVar3;
    lVar2 = SUB168(SEXT816(lVar4) * SEXT816(0x7777777777777777),8) - lVar4;
    lVar2 = (lVar2 >> 4) - (lVar2 >> 0x3f);
    *param_1 = (long)(plVar1 + lVar2);
    lVar2 = plVar1[lVar2];
    uVar3 = ((lVar4 / 0x1e) * 0x1e - lVar4) + 0x1d;
  }
  else {
    *param_1 = (long)(plVar1 + uVar3 / 0x1e);
    lVar2 = plVar1[uVar3 / 0x1e];
    uVar3 = uVar3 % 0x1e;
  }
  param_1[1] = lVar2 + uVar3 * 0x88;
  return;
}


