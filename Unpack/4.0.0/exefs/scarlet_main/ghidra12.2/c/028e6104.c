/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028e6104; name: FUN_028e6104
 */


void FUN_028e6104(undefined8 *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong local_50;
  ulong local_48;
  ulong uStack_40;
  long *local_38;
  
  local_50 = *param_3;
  uVar3 = *(ulong *)(param_2 + 0x68);
  if (uVar3 != 0) {
    uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar3 - 1 & local_50;
    }
    else {
      uVar6 = local_50;
      if (uVar3 <= local_50) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = local_50 / uVar3;
        }
        uVar6 = local_50 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x60) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == local_50) {
            if (plVar7[2] == local_50) {
LAB_028e61fc:
              lVar9 = plVar7[6];
              lVar8 = *(long *)(param_2 + 200);
              puVar2 = (undefined8 *)(lVar8 + lVar9 * 0x38);
              uVar4 = puVar2[1];
              *param_1 = *puVar2;
              param_1[1] = uVar4;
              plVar7 = (long *)puVar2[3];
              param_1[2] = puVar2[2];
              param_1[3] = plVar7;
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x18))();
              }
              lVar8 = lVar8 + lVar9 * 0x38;
              uVar4 = *(undefined8 *)(lVar8 + 0x20);
              *(undefined1 *)(param_1 + 5) = *(undefined1 *)(lVar8 + 0x28);
              param_1[4] = uVar4;
              plVar7 = *(long **)(lVar8 + 0x30);
              param_1[6] = plVar7;
              if (plVar7 == (long *)0x0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x028e626c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar7 + 0x18))();
              return;
            }
          }
          else if ((plVar7[1] & uVar3 - 1) != uVar6) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == local_50) {
            if (plVar7[2] == local_50) goto LAB_028e61fc;
          }
          else {
            if (uVar3 <= uVar5) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar5 / uVar3;
              }
              uVar5 = uVar5 - uVar1 * uVar3;
            }
            if (uVar5 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  local_48 = param_3[1];
  uStack_40 = param_3[2];
  local_38 = (long *)param_3[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  FUN_028e5d48(param_1,param_2,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


