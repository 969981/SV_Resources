/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e49b4; name: FUN_017e49b4
 */


void FUN_017e49b4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)param_1[6];
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)*plVar5;
    pcVar3 = (code *)plVar5[7];
    if (pcVar3 != (code *)0x0) {
      plVar5[8] = 0;
      plVar5[9] = 0;
      plVar5[6] = 0;
      plVar5[7] = 0;
      (*pcVar3)(plVar5 + 10);
    }
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 0x20))();
    }
    plVar6 = (long *)param_1[7];
    uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0xb0,0x10);
    }
    else {
      FUN_00c48fe8(plVar6,plVar5,0xb0,0x10);
    }
    while (plVar4 != (long *)0x0) {
      plVar5 = (long *)*plVar4;
      pcVar3 = (code *)plVar4[7];
      if (pcVar3 != (code *)0x0) {
        plVar4[8] = 0;
        plVar4[9] = 0;
        plVar4[6] = 0;
        plVar4[7] = 0;
        (*pcVar3)(plVar4 + 10);
      }
      if ((long *)plVar4[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[5] + 0x20))();
      }
      plVar6 = (long *)param_1[7];
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0xb0,0x10);
        plVar4 = plVar5;
      }
      else {
        FUN_00c48fe8(plVar6,plVar4,0xb0,0x10);
        plVar4 = plVar5;
      }
    }
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_017e4b40(param_1 + 1);
  return;
}


