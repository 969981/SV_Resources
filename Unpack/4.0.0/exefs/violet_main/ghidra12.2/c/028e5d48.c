/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028e5d48; name: FUN_028e5d48
 */


void FUN_028e5d48(undefined8 *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  undefined1 local_b4 [4];
  undefined8 local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long *local_90;
  long *local_88 [3];
  long *local_70;
  long *local_58;
  ulong local_50;
  ulong local_48;
  ulong uStack_40;
  long *local_38;
  
  uVar6 = *(ulong *)(param_2 + 0x68);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    local_50 = *param_3;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar9 = uVar6 - 1 & local_50;
    }
    else {
      uVar9 = local_50;
      if (uVar6 <= local_50) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = local_50 / uVar6;
        }
        uVar9 = local_50 - uVar9 * uVar6;
      }
    }
    plVar10 = *(long **)(*(long *)(param_2 + 0x60) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar10[1] == local_50) {
            if (plVar10[2] == local_50) {
LAB_028e5e48:
              local_48 = param_3[1];
              uStack_40 = param_3[2];
              plVar10 = (long *)param_3[3];
              local_38 = plVar10;
              if (plVar10 == (long *)0x0) {
                FUN_028e6104(param_1,param_2,&local_50);
                return;
              }
              (**(code **)(*plVar10 + 0x18))(plVar10);
              FUN_028e6104(param_1,param_2,&local_50);
                    /* WARNING: Could not recover jumptable at 0x028e6040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar10 + 0x20))(plVar10);
              return;
            }
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar10[1];
          if (uVar7 == local_50) {
            if (plVar10[2] == local_50) goto LAB_028e5e48;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar1 * uVar6;
            }
            if (uVar7 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar11 = (long *)(param_2 + 200);
  lVar4 = *(long *)(param_2 + 0xd0) - *plVar11 >> 3;
  plVar10 = (long *)FUN_00c8f0cc((long *)(param_2 + 0x60),param_3);
  *plVar10 = lVar4 * 0x6db6db6db6db6db7;
  pcVar13 = (char *)param_3[1];
  if (*pcVar13 == '\0') {
    plVar10 = (long *)FUN_00d44228();
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar3 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar3;
    FUN_00cf9884(local_88,uVar3,pcVar13);
    plVar10 = local_88[0];
  }
  plVar8 = (long *)PTR_DAT_047d8b70;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 6;
  }
  local_a8 = *plVar8;
  plVar8 = (long *)PTR_PTR_047d4508;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 7;
  }
  lStack_a0 = *plVar8;
  if (plVar10 == (long *)0x0) {
    local_98 = 0;
  }
  else {
    local_98 = plVar10[8];
  }
  local_90 = (long *)0x0;
  plVar8 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    plVar8 = plVar10;
  }
  local_b0 = 0;
  local_b4[0] = 0;
  local_90 = plVar8;
  FUN_01f5deb0(local_88,&local_a8,&local_b0,local_b4);
  FUN_028e62ec(plVar11,local_88);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  lVar12 = *plVar11;
  puVar5 = (undefined8 *)(lVar12 + lVar4 * 8);
  uVar3 = puVar5[1];
  *param_1 = *puVar5;
  param_1[1] = uVar3;
  plVar10 = (long *)puVar5[3];
  param_1[2] = puVar5[2];
  param_1[3] = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))();
  }
  lVar12 = lVar12 + lVar4 * 8;
  uVar3 = *(undefined8 *)(lVar12 + 0x20);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(lVar12 + 0x28);
  param_1[4] = uVar3;
  plVar10 = *(long **)(lVar12 + 0x30);
  param_1[6] = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))();
  }
  return;
}


