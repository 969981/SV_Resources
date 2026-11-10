/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0212cae4; name: FUN_0212cae4
 */


float FUN_0212cae4(undefined8 param_1,long param_2,ulong *param_3,undefined8 param_4)

{
  ulong uVar1;
  float fVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  local_70 = 0x12d7b82ec399ec60;
  pcStack_68 = "EasingType";
  local_60 = 10;
  local_58 = (long *)0x0;
  uVar3 = FUN_01470908(param_2,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  uVar6 = *(ulong *)(param_2 + 0x160);
  fVar11 = 0.0;
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar5 = *param_3;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar5;
    }
    else {
      uVar8 = uVar5;
      if (uVar6 <= uVar5) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar5 / uVar6;
        }
        uVar8 = uVar5 - uVar8 * uVar6;
      }
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0x158) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_0212cc4c;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_0212cc4c;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar1 * uVar6;
            }
            if (uVar7 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_0212cc50:
  lVar4 = FUN_0212bec8(param_2,param_4);
  uVar6 = FUN_021237ec(param_2,lVar4 + 0x100000000U & 0xffffffff00000000 | 1);
  fVar2 = fVar11;
  if ((uVar6 & 0xff) != 0) {
    fVar2 = (float)(uVar6 >> 0x20);
  }
  uVar6 = 0;
  if ((uVar3 & 0xff) != 0) {
    uVar6 = uVar3 >> 0x20;
  }
  fVar10 = (float)(**(code **)(PTR_PTR_047d9248 + uVar6 * 8))(param_1);
  return fVar11 + fVar10 * (fVar2 - fVar11);
LAB_0212cc4c:
  fVar11 = *(float *)(plVar9 + 6);
  goto LAB_0212cc50;
}


