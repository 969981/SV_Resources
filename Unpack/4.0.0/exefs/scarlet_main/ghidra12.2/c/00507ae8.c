/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00507ae8; name: FUN_00507ae8
 */


undefined8 FUN_00507ae8(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  byte *pbVar7;
  byte *pbVar6;
  long lVar8;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  byte *local_78;
  byte *local_70;
  undefined8 local_68;
  byte *local_60;
  ulong local_58;
  
  while ((int)param_4[5] != 1) {
    uVar3 = FUN_0050b588(param_4,param_3);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  if ((char)param_4[0x1e] != '\0') {
    return 0;
  }
  if ((*(char *)(param_1 + 0x18) != '\0') ||
     (uVar3 = (**(code **)(*param_3 + 0x30))(param_3), (uVar3 & 1) != 0)) {
    return 1;
  }
  local_78 = (byte *)0x0;
  local_70 = (byte *)0x0;
  local_68 = 0;
                    /* try { // try from 00507b70 to 00507b7b has its CatchHandler @ 00507d4c */
  FUN_00501f40(param_3,&local_78);
  pbVar2 = local_70;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  if (local_78 != local_70) {
    lVar8 = 0;
    pbVar7 = local_78;
    do {
      if (lVar8 != 0) {
                    /* try { // try from 00507ba0 to 00507be7 has its CatchHandler @ 00507d5c */
        FUN_0021d540(&local_a8,&DAT_03c82382,2);
      }
      local_60 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        local_60 = pbVar7 + 1;
      }
      local_58 = (ulong)(*pbVar7 >> 1);
      if ((*pbVar7 & 1) != 0) {
        local_58 = *(ulong *)(pbVar7 + 8);
      }
      FUN_00534220(&local_a8,&local_60);
      pbVar7 = pbVar7 + 0x18;
      lVar8 = lVar8 + -0x18;
    } while (pbVar7 != pbVar2);
  }
                    /* try { // try from 00507bf8 to 00507c0f has its CatchHandler @ 00507d3c */
  puVar4 = (ulong *)FUN_00273ff4(&local_a8,0,"Message missing required fields: ",0x21);
  uStack_88 = puVar4[1];
  local_90 = *puVar4;
  local_80 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  plVar5 = (long *)*param_4;
  *(undefined1 *)(param_4 + 0x1e) = 1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 00507c40 to 00507c4f has its CatchHandler @ 00507cfc */
    (**(code **)(*plVar5 + 0x10))(plVar5,0xffffffff,0,&local_90);
  }
  if ((local_90 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_80);
  }
  puVar1 = PTR_LAB_047cba48;
  pbVar2 = local_78;
  if ((local_a8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_98);
    puVar1 = PTR_LAB_047cba48;
    pbVar2 = local_78;
  }
  if (pbVar2 == (byte *)0x0) {
    PTR_LAB_047cba48 = puVar1;
    return 0;
  }
  PTR_LAB_047cba48 = puVar1;
  local_78 = pbVar2;
  if (local_70 != pbVar2) {
    pbVar7 = local_70;
    do {
      pbVar6 = pbVar7 + -0x18;
      if ((*pbVar6 & 1) != 0) {
        FUN_0049e790(puVar1,*(undefined8 *)(pbVar7 + -8));
      }
      pbVar7 = pbVar6;
    } while (pbVar2 != pbVar6);
  }
  local_70 = pbVar2;
  FUN_0049e790(PTR_LAB_047cba48,local_78);
  return 0;
}


