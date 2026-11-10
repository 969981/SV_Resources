/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d9b8b4; name: FUN_00d9b8b4
 */


void FUN_00d9b8b4(long *param_1,ulong *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  
  lVar8 = *param_1;
  piVar3 = *(int **)(lVar8 + 0xd0);
  if ((((piVar3 != (int *)0x0) && (4 < *(ushort *)((long)piVar3 - (long)*piVar3))) &&
      (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 != 0)) &&
     (*(char *)((long)piVar3 + uVar5) != '\0')) {
    if (*(long *)(lVar8 + 0x130) == 0) {
      return;
    }
    uVar5 = *(ulong *)(lVar8 + 0xe0);
    if (uVar5 == 0) {
      return;
    }
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      uVar7 = uVar4;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar4 / uVar5;
      }
      uVar7 = uVar4 - uVar7 * uVar5;
    }
    plVar9 = *(long **)(*(long *)(lVar8 + 0xd8) + uVar7 * 8);
    if (plVar9 == (long *)0x0) {
      return;
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      return;
    }
    if (1 < uVar6) {
      do {
        uVar6 = plVar9[1];
        if (uVar6 == uVar4) {
          if (plVar9[2] == uVar4) goto LAB_00d9b9f4;
        }
        else {
          if (uVar5 <= uVar6) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar6 / uVar5;
            }
            uVar6 = uVar6 - uVar2 * uVar5;
          }
          if (uVar6 != uVar7) {
            return;
          }
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) {
          return;
        }
      } while( true );
    }
    do {
      if (plVar9[1] == uVar4) {
        if (plVar9[2] == uVar4) goto LAB_00d9b9f4;
      }
      else if ((plVar9[1] & uVar5 - 1) != uVar7) {
        return;
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        return;
      }
    } while( true );
  }
LAB_00d9ba00:
  if (0.0 < *(float *)(*param_3 + 4)) {
    pauVar1 = (undefined1 (*) [16])(*param_3 + 0x10);
    local_20 = *(undefined8 *)*pauVar1;
    auVar10 = NEON_ext(*pauVar1,*pauVar1,8,1);
    uStack_18 = auVar10._0_8_;
    (**(code **)param_1[2])(param_1[1],param_2,&local_20);
  }
  return;
LAB_00d9b9f4:
  if (plVar9[7] != uVar4) {
    return;
  }
  goto LAB_00d9ba00;
}


