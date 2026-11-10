/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029809e0; name: FUN_029809e0
 */


void FUN_029809e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_8e;
  undefined1 auStack_88 [40];
  
  local_e0 = 0;
  uStack_d8 = 0;
  local_f8 = 0;
  local_fc = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  FUN_0298322c(param_1,&local_f8,&local_fc,*param_3);
  uVar7 = (ulong)local_fc;
  if (local_fc != 0) {
    puVar8 = &local_f8;
    do {
      plVar3 = (long *)FUN_014813f4(param_1,*(undefined4 *)puVar8);
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x4d0))(plVar3,3);
        if ((uVar4 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          FUN_029832d0(param_1,plVar3);
          uVar4 = (**(code **)(*plVar3 + 0x310))(plVar3);
          if ((uVar4 & 1) != 0) {
            FUN_02983338(param_1,plVar3);
          }
          uVar6 = 1;
        }
        uVar5 = FUN_01246e90(param_1);
        uVar1 = FUN_016fa084(uVar5,plVar3,1);
        uVar4 = (**(code **)(*plVar3 + 0x220))(plVar3,0x1f);
        if ((uVar4 & 1) == 0) {
          uVar6 = uVar6 | uVar1;
        }
        else {
          local_8e = 0;
          local_c0 = 0x3100000000;
          local_98 = 0;
          local_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          FUN_01246154(auStack_88);
          uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
          local_c0 = CONCAT44(0x1f,uVar2);
          uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
          local_b8 = CONCAT44(local_b8._4_4_,uVar2);
          uVar6 = 1;
          local_90 = 1;
          local_8e = CONCAT13(1,(undefined3)local_8e);
          FUN_01461214(param_1);
          uVar5 = FUN_018cdf0c();
          FUN_018cdf14(uVar5,auStack_d0,&local_c0);
        }
        uVar4 = (**(code **)(*plVar3 + 0x220))(plVar3,0x21);
        if ((uVar4 & 1) == 0) {
          if ((uVar6 & 1) == 0) goto LAB_02980bf0;
        }
        else {
          local_8e = 0;
          local_c0 = 0x3100000000;
          local_98 = 0;
          local_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          FUN_01246154(auStack_88);
          uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
          local_c0 = CONCAT44(0x21,uVar2);
          uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
          local_b8 = CONCAT44(local_b8._4_4_,uVar2);
          local_90 = 1;
          local_8e = CONCAT13(1,(undefined3)local_8e);
          FUN_01461214(param_1);
          uVar5 = FUN_018cdf0c();
          FUN_018cdf14(uVar5,auStack_d0,&local_c0);
        }
        uVar5 = FUN_01243584(param_1);
        FUN_0167eba0(uVar5,*param_3,0x15a,*(undefined4 *)puVar8);
      }
LAB_02980bf0:
      uVar7 = uVar7 - 1;
      puVar8 = (undefined8 *)((long)puVar8 + 4);
    } while (uVar7 != 0);
  }
  return;
}


