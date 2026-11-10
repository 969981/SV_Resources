/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0164ec3c; name: FUN_0164ec3c
 */


void FUN_0164ec3c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[2] - param_1[1];
  if (lVar4 != 0) {
    param_1[2] = param_1[2] + ((lVar4 - 0x844U) / 0x844 ^ 0xffffffffffffffff) * 0x844;
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar1 = param_1[3];
  plVar5 = *(long **)param_1[4];
  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar5,lVar4,lVar1 - lVar4,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0164ece4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar1 - lVar4,4);
  return;
}


