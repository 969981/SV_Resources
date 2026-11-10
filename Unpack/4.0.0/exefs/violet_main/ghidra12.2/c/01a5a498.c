/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a5a498; name: FUN_01a5a498
 */


void FUN_01a5a498(long *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar4 = (long *)param_1[6];
  if (plVar4 != (long *)0x0) {
    plVar6 = (long *)*plVar4;
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
    plVar5 = (long *)param_1[7];
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,0xb0,0x10);
    }
    else {
      FUN_00c48fe8(plVar5,plVar4,0xb0,0x10);
    }
    while (plVar6 != (long *)0x0) {
      plVar4 = (long *)*plVar6;
      pcVar3 = (code *)plVar6[7];
      if (pcVar3 != (code *)0x0) {
        plVar6[8] = 0;
        plVar6[9] = 0;
        plVar6[6] = 0;
        plVar6[7] = 0;
        (*pcVar3)(plVar6 + 10);
      }
      if ((long *)plVar6[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar6[5] + 0x20))();
      }
      plVar5 = (long *)param_1[7];
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,plVar6,0xb0,0x10);
        plVar6 = plVar4;
      }
      else {
        FUN_00c48fe8(plVar5,plVar6,0xb0,0x10);
        plVar6 = plVar4;
      }
    }
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_01a5a628(param_1 + 1);
  return;
}


