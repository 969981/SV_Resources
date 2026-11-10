/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050795c; name: FUN_0050795c
 */


uint FUN_0050795c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined *puStack_148;
  undefined8 *local_140;
  undefined1 auStack_138 [164];
  undefined1 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  uint local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_74;
  undefined1 local_70;
  
  (**(code **)(*param_3 + 0x28))(param_3);
  bVar2 = *(byte *)((long)param_1 + 0x1f);
  uVar11 = (**(code **)(*param_3 + 0x98))(param_3);
  uStack_158 = param_1[1];
  local_160 = *param_1;
  cVar3 = *(char *)((long)param_1 + 0x1e);
  local_150 = param_1[2];
  uVar4 = *(undefined1 *)((long)param_1 + 0x19);
  uVar5 = *(undefined1 *)((long)param_1 + 0x1a);
  local_140 = &local_160;
  uVar6 = *(undefined1 *)((long)param_1 + 0x1b);
  uVar7 = *(undefined1 *)((long)param_1 + 0x1c);
  uVar8 = *(undefined1 *)((long)param_1 + 0x1d);
  uVar9 = *(undefined1 *)(param_1 + 3);
  uVar1 = *(undefined4 *)(param_1 + 4);
  puStack_148 = PTR_DAT_047cdb78 + 0x10;
                    /* try { // try from 00507a00 to 00507a0f has its CatchHandler @ 00507ad4 */
  FUN_004fb9f4(auStack_138,param_2);
  local_80 = bVar2 ^ 1;
  local_94 = 1;
  local_90 = 1;
  local_70 = 0;
  if (cVar3 != '\0') {
    local_8c = 0x100;
  }
                    /* try { // try from 00507a5c to 00507a63 has its CatchHandler @ 00507ac4 */
  local_88 = uVar11;
  local_7c = uVar4;
  local_7b = uVar5;
  local_7a = uVar6;
  local_79 = uVar7;
  local_78 = uVar8;
  local_77 = uVar9;
  local_74 = uVar1;
  FUN_004fcda0(auStack_138);
                    /* try { // try from 00507a64 to 00507a77 has its CatchHandler @ 00507ab0 */
  uVar10 = FUN_00507ae8(param_1,extraout_x1,param_3,&local_160);
  FUN_004fbb44(auStack_138);
  FUN_004fb9f0(&puStack_148);
  return uVar10 & 1;
}


