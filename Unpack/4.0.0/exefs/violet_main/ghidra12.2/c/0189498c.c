/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0189498c; name: FUN_0189498c
 */


void FUN_0189498c(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [40];
  char local_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ushort local_78;
  undefined4 local_74;
  undefined1 uStack_70;
  undefined2 uStack_6f;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  undefined1 local_68;
  
  *param_2 = 0;
  FUN_01246154(auStack_d0);
  uVar8 = FUN_01246e90(param_1);
  FUN_01894b18(uVar8,*(undefined2 *)(param_3 + 2),*param_3,param_3[1],auStack_d0);
  local_e0 = param_3[3];
  uStack_d8 = param_3[4];
  uVar8 = FUN_01246e90(param_1);
  FUN_01894f10(uVar8,*param_3,param_3[1],*(undefined2 *)(param_3 + 2),&local_e0);
  uVar8 = *param_3;
  uVar1 = param_3[1];
  uVar5 = *(undefined2 *)(param_3 + 2);
  uVar3 = *(undefined1 *)(param_3 + 5);
  uVar2 = *(undefined4 *)((long)param_3 + 0x2c);
  uVar6 = *(undefined2 *)(param_3 + 6);
  uVar4 = *(undefined1 *)((long)param_3 + 0x32);
  local_90 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_0189372c(&local_88);
  uStack_70 = 0;
  local_78 = CONCAT11(local_78._1_1_,uVar3);
  local_88 = local_e0;
  uStack_80 = uStack_d8;
  local_a0 = uVar8;
  uStack_98 = uVar1;
  local_90 = uVar5;
  local_74 = uVar2;
  uStack_6f = uVar6;
  uStack_6d = uVar4;
  FUN_01461214(param_1);
  uVar8 = FUN_01894b08();
  FUN_01895308(uVar8,local_a8,&local_a0);
  if (local_a8[0] == '\0') {
    uVar8 = *param_3;
    uVar1 = param_3[1];
    uVar5 = *(undefined2 *)(param_3 + 2);
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    FUN_0189372c(&local_88);
    local_78 = 1;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_68 = 0;
    local_88 = local_e0;
    uStack_80 = uStack_d8;
    local_a0 = uVar8;
    uStack_98 = uVar1;
    local_90 = uVar5;
    bVar7 = FUN_018ce3ac(auStack_d0);
    local_68 = 0;
    local_78 = CONCAT11(~bVar7,(undefined1)local_78) & 0x1ff;
    uStack_70 = SUB81(auStack_d0,0);
    uStack_6f = (undefined2)((ulong)auStack_d0 >> 8);
    uStack_6d = (undefined1)((ulong)auStack_d0 >> 0x18);
    uStack_6c = (undefined4)((ulong)auStack_d0 >> 0x20);
    FUN_01461214(param_1);
    uVar8 = FUN_01894b10();
    FUN_018959d4(uVar8,local_a8,&local_a0);
    *param_2 = 1;
  }
  return;
}


