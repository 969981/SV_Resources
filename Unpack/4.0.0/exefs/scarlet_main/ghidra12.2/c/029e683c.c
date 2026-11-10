/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e683c; name: FUN_029e683c
 */


void FUN_029e683c(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  undefined4 local_48;
  uint local_44;
  
  iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
  if (iVar3 != 0) {
    uVar12 = 0;
    do {
      local_48 = CONCAT31(local_48._1_3_,1);
      local_44 = uVar12;
      puVar6 = (ulong *)(**(code **)(*param_3 + 0x58))(param_3,&local_48);
      uVar8 = param_4[1];
      if (uVar8 != 0) {
        uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar7 = *puVar6;
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          uVar10 = uVar8 - 1 & uVar7;
        }
        else if (uVar7 < uVar8) {
          uVar10 = uVar7;
        }
        else {
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = uVar7 / uVar8;
          }
          uVar10 = uVar7 - uVar10 * uVar8;
        }
        plVar11 = *(long **)(*param_4 + uVar10 * 8);
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          if (uVar9 < 2) {
            do {
              if (plVar11[1] == uVar7) {
                if (plVar11[2] == uVar7) goto LAB_029e69a8;
              }
              else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          else {
            do {
              uVar9 = plVar11[1];
              if (uVar9 == uVar7) {
                if (plVar11[2] == uVar7) goto LAB_029e69a8;
              }
              else {
                if (uVar8 <= uVar9) {
                  uVar2 = 0;
                  if (uVar8 != 0) {
                    uVar2 = uVar9 / uVar8;
                  }
                  uVar9 = uVar9 - uVar2 * uVar8;
                }
                if (uVar9 != uVar10) break;
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
      local_48 = CONCAT31(local_48._1_3_,1);
      local_44 = uVar12;
      uVar4 = (**(code **)(*param_3 + 0x68))(param_3,&local_48);
      FUN_029e704c(param_4,puVar6);
      local_48 = FUN_029e7250(param_2,*puVar6,uVar4);
      puVar1 = *(undefined4 **)(param_1 + 8);
      if (puVar1 < *(undefined4 **)(param_1 + 0x10)) {
        *puVar1 = local_48;
        *(undefined4 **)(param_1 + 8) = puVar1 + 1;
      }
      else {
        FUN_029e7330(param_1,&local_48);
      }
LAB_029e69a8:
      uVar12 = uVar12 + 1;
      uVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    } while (uVar12 < uVar5);
  }
  return;
}


