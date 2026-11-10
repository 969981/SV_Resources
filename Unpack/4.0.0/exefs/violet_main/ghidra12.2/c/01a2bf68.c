/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2bf68; name: FUN_01a2bf68
 */


void FUN_01a2bf68(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar3) {
    param_1[2] = lVar2 + -0x10;
    FUN_011afb4c();
    lVar2 = param_1[2];
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar2 = param_1[3];
  plVar4 = *(long **)param_1[4];
  uVar1 = FUN_00c4e564(plVar4);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01a2bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar2 - lVar3,8);
    return;
  }
  FUN_00c48fe8(plVar4,lVar3,lVar2 - lVar3,8);
  return;
}


