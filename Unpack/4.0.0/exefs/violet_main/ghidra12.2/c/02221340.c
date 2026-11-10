/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02221340; name: FUN_02221340
 */


void FUN_02221340(undefined1 param_1 [16],long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 local_70;
  char local_60 [32];
  
  uVar10 = param_1._8_8_;
  auVar7._0_8_ = param_1._0_8_;
  uVar3 = *(ulong *)(param_2 + 0x160);
  local_70 = 0;
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar3 - 1 & 0x55c0d7a581349f0f;
    }
    else {
      uVar5 = 0x55c0d7a581349f0f;
      if (uVar3 < 0x55c0d7a581349f10) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = 0x55c0d7a581349f0f / uVar3;
        }
        uVar5 = 0x55c0d7a581349f0f - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)(param_2 + 0x158) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == 0x55c0d7a581349f0f) {
            if (plVar6[2] == 0x55c0d7a581349f0f) goto LAB_02221468;
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar5) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar6[1];
          if (uVar4 == 0x55c0d7a581349f0f) {
            if (plVar6[2] == 0x55c0d7a581349f0f) goto LAB_02221468;
          }
          else {
            if (uVar3 <= uVar4) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar4 / uVar3;
              }
              uVar4 = uVar4 - uVar1 * uVar3;
            }
            if (uVar4 != uVar5) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
LAB_02221470:
  FUN_02123748(local_60,param_2,1);
  if (local_60[0] != '\0') {
    local_60[0] = '\0';
  }
  uVar4 = FUN_01259734(param_2,0x300000001);
  puVar2 = PTR_PTR_047d9248;
  uVar3 = 0;
  if ((uVar4 & 0xff) != 0) {
    uVar3 = uVar4 >> 0x20;
  }
  auVar7._8_8_ = uVar10;
  (**(code **)(PTR_PTR_047d9248 + uVar3 * 8))(auVar7);
  auVar8._8_8_ = uVar10;
  auVar8._0_8_ = auVar7._0_8_;
  (**(code **)(puVar2 + uVar3 * 8))(auVar8);
  auVar9._8_8_ = uVar10;
  auVar9._0_8_ = auVar7._0_8_;
  (**(code **)(puVar2 + uVar3 * 8))(auVar9,local_70);
  return;
LAB_02221468:
  local_70 = SUB161(*(undefined1 (*) [16])(plVar6 + 6),0);
  goto LAB_02221470;
}


