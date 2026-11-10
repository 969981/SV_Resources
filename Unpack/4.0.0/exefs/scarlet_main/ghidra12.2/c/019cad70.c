/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019cad70; name: FUN_019cad70
 */


void FUN_019cad70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  if (((DAT_04839888 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839888), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1c558,&DAT_04839878,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839888);
  }
  DAT_04839870 = DAT_04839878;
  if (DAT_04839878 == 0) {
    return;
  }
  plVar3 = (long *)(DAT_04839878 + 200);
  lVar4 = *plVar3;
  lVar5 = *(long *)(DAT_04839878 + 0xd0);
  local_a8 = param_1;
  if ((lVar4 != lVar5) && (uVar2 = FUN_01eaba14(&local_a8,lVar4), (uVar2 & 1) == 0)) {
    do {
      lVar4 = lVar4 + 0x68;
      if (lVar5 == lVar4) {
        lVar4 = lVar5;
        goto LAB_019cae40;
      }
      uVar2 = FUN_01eaba14(&local_a8,lVar4);
    } while ((uVar2 & 1) == 0);
  }
LAB_019cae40:
  if (lVar5 == lVar4) {
    FUN_01077654(&local_a8);
    local_98 = 0;
    uStack_90 = 0;
    local_a0 = 0;
    local_88 = *param_1;
    uStack_80 = param_1[1];
    local_78 = param_1[2];
    uStack_70 = param_1[3];
    local_68 = 1;
    local_60 = *param_2;
    uStack_58 = param_2[1];
    local_64 = 1;
    local_50 = 0;
    local_48 = 0;
    FUN_0186d9ac(plVar3,&local_a8);
    FUN_00dea7e0(&local_a8);
  }
  return;
}


