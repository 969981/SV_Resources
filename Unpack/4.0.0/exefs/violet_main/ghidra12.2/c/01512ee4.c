/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01512ee4; name: FUN_01512ee4
 */


void FUN_01512ee4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar4) {
    param_1[2] = lVar3 + -0x38;
    FUN_01512fa8();
    lVar3 = param_1[2];
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar3 = param_1[3];
  plVar5 = *(long **)param_1[4];
  uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00c4e600();
    if (0 < *(int *)(lVar2 + 0x12c8)) {
      FUN_00c48fe8(plVar5,lVar4,lVar3 - lVar4,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01512f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3 - lVar4,8);
  return;
}


