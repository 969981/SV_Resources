/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012375d0; name: FUN_012375d0
 */


void FUN_012375d0(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1[0xb] != 0) {
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) {
      plVar8 = (long *)*plVar6;
      pcVar2 = (code *)plVar6[7];
      if (pcVar2 != (code *)0x0) {
        plVar6[8] = 0;
        plVar6[9] = 0;
        plVar6[6] = 0;
        plVar6[7] = 0;
        (*pcVar2)(plVar6 + 10);
      }
      if ((long *)plVar6[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar6[5] + 0x20))();
      }
      plVar7 = (long *)param_1[7];
      uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,0xb0,0x10);
      }
      else {
        FUN_00c48fe8(plVar7,plVar6,0xb0,0x10);
      }
      while (plVar8 != (long *)0x0) {
        plVar6 = (long *)*plVar8;
        pcVar2 = (code *)plVar8[7];
        if (pcVar2 != (code *)0x0) {
          plVar8[8] = 0;
          plVar8[9] = 0;
          plVar8[6] = 0;
          plVar8[7] = 0;
          (*pcVar2)(plVar8 + 10);
        }
        if ((long *)plVar8[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar8[5] + 0x20))();
        }
        plVar7 = (long *)param_1[7];
        uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,plVar8,0xb0,0x10);
          plVar8 = plVar6;
        }
        else {
          FUN_00c48fe8(plVar7,plVar8,0xb0,0x10);
          plVar8 = plVar6;
        }
      }
    }
    uVar5 = param_1[1];
    param_1[6] = 0;
    if (uVar5 != 0) {
      uVar1 = uVar5 & 3;
      if (uVar5 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
        } while ((uVar5 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar1 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar4) = 0;
          uVar1 = uVar1 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar1 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


