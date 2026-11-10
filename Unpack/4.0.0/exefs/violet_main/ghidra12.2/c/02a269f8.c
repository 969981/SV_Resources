/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a269f8; name: FUN_02a269f8
 */


void FUN_02a269f8(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar2 = (long *)param_1[6];
  while (plVar2 != (long *)0x0) {
    plVar6 = (long *)param_1[7];
    plVar7 = (long *)*plVar2;
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar2,0x30,8);
      plVar2 = plVar7;
    }
    else {
      FUN_00c48fe8(plVar6,plVar2,0x30,8);
      plVar2 = plVar7;
    }
  }
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 == 0) {
    return;
  }
  lVar1 = param_1[1];
  plVar2 = (long *)param_1[2];
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x02a26acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 << 3,8);
    return;
  }
  FUN_00c48fe8(plVar2,lVar5,lVar1 << 3,8);
  return;
}


