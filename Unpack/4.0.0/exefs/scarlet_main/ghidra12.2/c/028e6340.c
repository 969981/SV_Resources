/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028e6340; name: FUN_028e6340
 */


void FUN_028e6340(undefined8 *param_1,long param_2,ulong *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  long *local_70;
  undefined1 auStack_68 [24];
  long *local_50;
  long *local_38;
  
  uVar5 = *param_3;
  uVar8 = *(ulong *)(param_2 + 0x68);
  if (uVar8 != 0) {
    uVar2 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      uVar9 = uVar8 - 1 & uVar5;
    }
    else {
      uVar9 = uVar5;
      if (uVar8 <= uVar5) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar5 / uVar8;
        }
        uVar9 = uVar5 - uVar9 * uVar8;
      }
    }
    plVar3 = *(long **)(*(long *)(param_2 + 0x60) + uVar9 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if (plVar3[1] == uVar5) {
            if (plVar3[2] == uVar5) goto LAB_028e651c;
          }
          else if ((plVar3[1] & uVar8 - 1) != uVar9) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar2 = plVar3[1];
          if (uVar2 == uVar5) {
            if (plVar3[2] == uVar5) goto LAB_028e651c;
          }
          else {
            if (uVar8 <= uVar2) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar2 / uVar8;
              }
              uVar2 = uVar2 - uVar1 * uVar8;
            }
            if (uVar2 != uVar9) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  uStack_80 = param_3[1];
  local_78 = param_3[2];
  local_70 = (long *)param_3[3];
  local_88 = uVar5;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  FUN_028e5d48(auStack_68,param_2,&local_88);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  uVar5 = *(ulong *)(param_2 + 0x68);
  uVar8 = *param_3;
  if ((uVar5 & uVar5 - 1) == 0) {
    plVar3 = *(long **)(*(long *)(param_2 + 0x60) + (uVar5 - 1 & uVar8) * 8);
    do {
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3[1] != uVar8);
    } while (plVar3[2] != uVar8);
  }
  else {
    uVar2 = uVar8;
    if (uVar5 <= uVar8) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar8 / uVar5;
      }
      uVar2 = uVar8 - uVar2 * uVar5;
    }
    plVar3 = *(long **)(*(long *)(param_2 + 0x60) + uVar2 * 8);
    do {
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3[1] != uVar8);
    } while (plVar3[2] != uVar8);
  }
LAB_028e651c:
  *(undefined1 *)(*(long *)(param_2 + 200) + plVar3[6] * 0x38 + 0x28) =
       *(undefined1 *)(param_4 + 0x28);
  if (*(char *)(param_4 + 0x28) != '\0') {
    lVar6 = *(long *)(param_2 + 200) + plVar3[6] * 0x38;
    *(long *)(lVar6 + 0x20) = *(long *)(lVar6 + 0x20) + 1;
  }
  lVar10 = plVar3[6];
  lVar6 = *(long *)(param_2 + 200);
  puVar4 = (undefined8 *)(lVar6 + lVar10 * 0x38);
  uVar7 = puVar4[1];
  *param_1 = *puVar4;
  param_1[1] = uVar7;
  plVar3 = (long *)puVar4[3];
  param_1[2] = puVar4[2];
  param_1[3] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  lVar6 = lVar6 + lVar10 * 0x38;
  uVar7 = *(undefined8 *)(lVar6 + 0x20);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(lVar6 + 0x28);
  param_1[4] = uVar7;
  plVar3 = *(long **)(lVar6 + 0x30);
  param_1[6] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  return;
}


