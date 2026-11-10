/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344d5b8; name: FUN_0344d5b8
 */


void FUN_0344d5b8(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 local_308;
  undefined1 local_300;
  undefined4 local_2f8 [2];
  long local_2f0;
  undefined8 local_2e8;
  undefined8 *puStack_2e0;
  int *local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 uStack_2c0;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined8 local_270;
  ulong local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250 [14];
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined4 local_1bc;
  long local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined1 auStack_190 [256];
  undefined1 *local_90;
  ulong local_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined5 uStack_70;
  byte local_68;
  byte local_44 [4];
  
  iVar3 = (**(code **)(param_2[1] + 0x20))();
  if (iVar3 == 0xb) {
    return;
  }
  local_2d8 = (int *)0x0;
  local_27c = 0;
  local_268 = 0;
  local_260 = CONCAT62(local_260._2_6_,0xff00);
  local_90 = (undefined1 *)0x0;
  local_88 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  memset(local_250,0,0x70);
  local_1d4 = 0;
  local_1cc = 0;
  local_1c4 = 0;
  local_1dc = 0;
  local_2f0 = 0;
  if (param_3 != 0) {
    local_2f0 = param_3 + 8;
  }
  local_1bc = 0;
  local_1e0 = 0x3f800000;
  local_1b0 = local_1b0 & 0xffffffff00000000;
  local_198 = 0;
  local_80 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  local_73 = 0;
  local_2f8[0] = 0;
  local_268 = local_268 & 0xffffffff00000000;
  local_2c4 = *(undefined4 *)((long)param_5 + 0x14);
  uStack_2c0 = 0;
  local_2d0 = param_5[1];
  local_2c8 = *(undefined4 *)(param_5 + 2);
  local_2d8 = (int *)*param_5;
  if (local_2d8 != (int *)0x0) {
    *local_2d8 = *local_2d8 + 1;
  }
  uStack_274 = *(undefined4 *)(param_1 + 0x34);
  local_300 = 0;
  local_278 = 0;
  local_68 = 3;
  local_308 = 0x400000000;
  puStack_2e0 = &local_308;
  local_270 = 0;
  if (*(char *)(param_1 + 0x28) != -2) {
    local_260 = *param_6;
    local_258 = *(undefined4 *)(param_6 + 1);
  }
  local_250[0] = *(undefined8 *)(param_1 + 0x10);
  local_2e8 = param_4;
  if (((char)local_260 == -0x70) && (local_260._5_1_ != '\0')) {
    local_44[0] = 1;
    if (local_2f0 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(local_2f0 + 0x10);
    }
    iVar3 = FUN_034a7e5c(param_2,&local_260,uVar4,local_44,param_4,local_2c4);
    if (iVar3 != 1) goto LAB_0344d7b4;
    local_68 = local_68 & 0xfe | local_44[0];
  }
  iVar3 = FUN_034a9828(param_2,local_2f8);
  if (iVar3 == 1) {
    (**(code **)(*param_2 + 0x240))(param_2,local_2f8);
  }
LAB_0344d7b4:
  *(int *)PTR_DAT_047e6fe0 = *(int *)PTR_DAT_047e6fe0 + 1;
  puVar1 = PTR_DAT_047e2fd0;
  if (local_1b8 != 0) {
    local_1b0 = local_1b0 & 0xffffffff00000000;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    local_1b8 = 0;
    local_1b0 = local_1b0 & 0xffffffff;
  }
  if (local_90 != (undefined1 *)0x0) {
    local_88 = local_88 & 0xffffffff00000000;
    if (auStack_190 != local_90) {
      (**(code **)(puVar1 + 0x30))(0);
    }
    local_90 = (undefined1 *)0x0;
    local_88 = local_88 & 0xffffffff;
  }
  piVar2 = local_2d8;
  if ((local_2d8 != (int *)0x0) && (iVar3 = *local_2d8, *local_2d8 = iVar3 + -1, iVar3 + -1 == 0)) {
    uVar5 = local_2d8[1];
    if (uVar5 != 0) {
      uVar6 = 0;
      plVar7 = (long *)(local_2d8 + 4);
      do {
        if (*plVar7 != 0) {
          (**(code **)(puVar1 + 0x30))(0);
          uVar5 = piVar2[1];
        }
        uVar6 = uVar6 + 1;
        plVar7 = plVar7 + 4;
      } while (uVar6 < uVar5);
    }
    (**(code **)(puVar1 + 0x30))(0,piVar2);
  }
  return;
}


