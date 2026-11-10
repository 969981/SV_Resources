/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028be500; name: FUN_028be500
 */


void FUN_028be500(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  long *plStack_48;
  
  lVar4 = FUN_028be710(param_1,(param_1[1] - *param_1 >> 5) * -0x5555555555555555 + 1);
  lVar7 = *param_1;
  lVar9 = param_1[1];
  local_50 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  plStack_48 = param_1 + 2;
  if (lVar4 != 0) {
    local_68 = (undefined8 *)FUN_028be76c(lVar4);
  }
  local_60 = local_68 + (lVar9 - lVar7 >> 5) * 4;
  local_50 = local_68 + lVar4 * 0xc;
  uVar6 = *param_2;
  uVar8 = param_2[1];
  uVar1 = param_2[3];
  local_60[2] = param_2[2];
  local_60[3] = uVar1;
  *local_60 = uVar6;
  local_60[1] = uVar8;
  local_60[4] = param_2[4];
  local_60[5] = param_2[5];
  local_60[6] = 0;
  uVar8 = param_2[6];
  uVar6 = param_2[7];
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[4] = 0;
  local_60[6] = uVar8;
  local_60[7] = uVar6;
  local_60[8] = param_2[8];
  local_60[9] = 0;
  uVar8 = param_2[9];
  uVar6 = param_2[10];
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  *(undefined8 *)((long)local_60 + 0x55) = *(undefined8 *)((long)param_2 + 0x55);
  local_60[9] = uVar8;
  local_60[10] = uVar6;
  local_58 = local_60 + 0xc;
  FUN_028be848(*param_1,param_1[1],&local_60);
  local_68 = (undefined8 *)*param_1;
  lVar9 = param_1[1];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  lVar7 = param_1[2];
  param_1[2] = (long)local_50;
  local_60 = local_68;
  local_58 = (undefined8 *)lVar9;
  local_50 = (undefined8 *)lVar7;
  FUN_028be8e0(&local_68);
  puVar2 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    lVar7 = tpidr_el0;
    plVar10 = *(long **)(lVar7 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar5 & 1) != 0) && (lVar7 = FUN_00c4e600(), 0 < *(int *)(lVar7 + 0x12c8))) {
      FUN_00c48fe8(plVar10,puVar2,0,8);
      return;
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,puVar2,0,8);
  }
  return;
}


