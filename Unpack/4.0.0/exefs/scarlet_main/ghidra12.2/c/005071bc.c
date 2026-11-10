/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005071bc; name: FUN_005071bc
 */


void FUN_005071bc(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_68 = &local_60;
  local_50 = &local_48;
  local_88 = 0;
  local_80 = 0;
  local_58 = 0;
  local_78 = 0;
  local_70 = (undefined8 *)0x0;
  local_60 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,8);
  plVar2 = local_70;
  if (plVar3 != (long *)0x0) {
    *plVar3 = (long)(PTR_DAT_047cdb68 + 0x10);
  }
  if (local_70 == (undefined8 *)0x0) {
    local_88._0_5_ = CONCAT14(1,(undefined4)local_88);
    local_80 = CONCAT11(1,(undefined1)local_80);
    local_70 = plVar3;
  }
  else {
    puVar4 = (undefined8 *)*local_70;
    local_70 = plVar3;
    (*(code *)*puVar4)(plVar2);
    FUN_0049e790(PTR_LAB_047cba48,plVar2);
    local_88._0_5_ = CONCAT14(1,(undefined4)local_88);
    local_80 = CONCAT11(1,(undefined1)local_80);
    if ((*param_1 & 1) != 0) {
      **(undefined1 **)(param_1 + 0x10) = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      goto LAB_00507284;
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
LAB_00507284:
                    /* try { // try from 00507284 to 0050729f has its CatchHandler @ 00507354 */
  FUN_0052d028(auStack_30,param_1);
  FUN_00508874(&local_88,param_2,auStack_30);
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    if (1 < bVar1) {
      if (param_1[bVar1 >> 1] == 0x20) {
        param_1[bVar1 >> 1] = 0;
        *param_1 = ((bVar1 >> 1) - 1) * '\x02';
      }
    }
  }
  else if (*(long *)(param_1 + 8) != 0) {
    lVar5 = *(long *)(param_1 + 8) + -1;
    if (*(char *)(*(long *)(param_1 + 0x10) + lVar5) == ' ') {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar5) = 0;
      *(long *)(param_1 + 8) = lVar5;
    }
  }
  FUN_004c08fc(&local_50,local_48);
  FUN_004c096c(&local_68,local_60);
  plVar2 = local_70;
  local_70 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)*plVar2)(plVar2);
    FUN_0049e790(PTR_LAB_047cba48,plVar2);
  }
  return;
}


