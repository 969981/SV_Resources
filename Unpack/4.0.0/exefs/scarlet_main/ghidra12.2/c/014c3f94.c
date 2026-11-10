/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c3f94; name: FUN_014c3f94
 */


void FUN_014c3f94(long *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  lVar10 = *param_1;
  if (lVar10 == 0) {
    return;
  }
  lVar6 = param_1[1];
  if (param_1[1] == lVar10) {
    lVar6 = lVar10;
  }
  else {
    do {
      plVar7 = *(long **)(lVar6 + -0x48);
      if (plVar7 != (long *)0x0) {
        plVar5 = (long *)*plVar7;
        if ((code *)plVar7[4] != (code *)0x0) {
          (*(code *)plVar7[4])(plVar7 + 6);
        }
        plVar9 = *(long **)(lVar6 + -0x40);
        uVar1 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,plVar7,0x40,0x10);
        }
        else {
          FUN_00c48fe8(plVar9,plVar7,0x40,0x10);
        }
        while (plVar5 != (long *)0x0) {
          plVar7 = (long *)*plVar5;
          if ((code *)plVar5[4] != (code *)0x0) {
            (*(code *)plVar5[4])(plVar5 + 6);
          }
          plVar9 = *(long **)(lVar6 + -0x40);
          uVar1 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,plVar5,0x40,0x10);
            plVar5 = plVar7;
          }
          else {
            FUN_00c48fe8(plVar9,plVar5,0x40,0x10);
            plVar5 = plVar7;
          }
        }
      }
      lVar4 = *(long *)(lVar6 + -0x78);
      *(undefined8 *)(lVar6 + -0x78) = 0;
      if (lVar4 != 0) {
        plVar7 = *(long **)(lVar6 + -0x68);
        lVar8 = *(long *)(lVar6 + -0x70) << 3;
        uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,lVar8,0x10);
        }
        else {
          FUN_00c48fe8(plVar7,lVar4,lVar8,0x10);
        }
      }
      if (*(long **)(lVar6 + -0x88) != (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + -0x88) + 0x20))();
      }
      if (*(long **)(lVar6 + -0xa8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + -0xa8) + 0x20))();
      }
      pcVar3 = *(code **)(lVar6 + -0x138);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar6 + -0x128) = 0;
        *(undefined8 *)(lVar6 + -0x130) = 0;
        *(undefined8 *)(lVar6 + -0x138) = 0;
        *(undefined8 *)(lVar6 + -0x140) = 0;
        (*pcVar3)(lVar6 + -0x120);
      }
      pcVar3 = *(code **)(lVar6 + -0x1b8);
      lVar4 = lVar6 + -0x1d0;
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar6 + -0x1a8) = 0;
        *(undefined8 *)(lVar6 + -0x1b0) = 0;
        *(undefined8 *)(lVar6 + -0x1b8) = 0;
        *(undefined8 *)(lVar6 + -0x1c0) = 0;
        (*pcVar3)(lVar6 + -0x1a0);
      }
      lVar6 = lVar4;
    } while (lVar4 != lVar10);
    lVar6 = *param_1;
  }
  lVar4 = param_1[2];
  plVar7 = (long *)param_1[3];
  param_1[1] = lVar10;
  uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar1 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x014c41b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar4 - lVar6,0x10);
    return;
  }
  FUN_00c48fe8(plVar7,lVar6,lVar4 - lVar6,0x10);
  return;
}


