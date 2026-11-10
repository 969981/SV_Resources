/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004aa92c; name: FUN_004aa92c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004aa92c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 byte *param_5)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  ulong *puVar5;
  long *plVar6;
  uint uVar7;
  byte *pbVar8;
  byte local_108 [16];
  ulong local_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    bVar4 = *(byte *)(param_1 + 0xb0);
    uVar7 = (uint)bVar4;
    if ((bVar4 & 1) == 0) {
      if (bVar4 >> 1 == 0) goto LAB_004aad8c;
    }
    else if (*(long *)(param_1 + 0xb8) == 0) {
LAB_004aad8c:
      FUN_004a8ec0(&local_90,&DAT_03c246d6,param_5);
                    /* try { // try from 004aada0 to 004aadb3 has its CatchHandler @ 004aae68 */
      puVar5 = (ulong *)FUN_0021d540(&local_90,"\" is not defined.",0x11);
      uStack_68 = puVar5[1];
      local_70 = *puVar5;
      local_60 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      plVar6 = *(long **)(param_1 + 0x10);
      if (plVar6 != (long *)0x0) {
                    /* try { // try from 004aade0 to 004aadf3 has its CatchHandler @ 004aae48 */
        (**(code **)(*plVar6 + 0x10))(plVar6,param_1 + 0x38,param_2,param_3,param_4,&local_70);
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      if ((local_70 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_60);
      }
      if ((local_90 & 1) == 0) {
        return;
      }
      local_f8 = local_80;
      goto LAB_004aae20;
    }
  }
  else {
    FUN_004a8ec0(local_108,&DAT_03c246d6,param_1 + 0x98);
                    /* try { // try from 004aa978 to 004aa98b has its CatchHandler @ 004aafd8 */
    puVar5 = (ulong *)FUN_0021d540(local_108,"\" seems to be defined in \"",0x1a);
    uStack_e8 = puVar5[1];
    local_f0 = *puVar5;
    local_e0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    pbVar8 = (byte *)**(undefined8 **)(param_1 + 0x90);
    uVar1 = *(ulong *)(pbVar8 + 8);
    pbVar2 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar2 = pbVar8 + 1;
      uVar1 = (ulong)(*pbVar8 >> 1);
    }
                    /* try { // try from 004aa9c4 to 004aa9cb has its CatchHandler @ 004aaf9c */
    puVar5 = (ulong *)FUN_0021d540(&local_f0,pbVar2,uVar1);
    uStack_c8 = puVar5[1];
    local_d0 = *puVar5;
    local_c0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
                    /* try { // try from 004aa9e4 to 004aa9f7 has its CatchHandler @ 004aaf74 */
    puVar5 = (ulong *)FUN_0021d540(&local_d0,"\", which is not imported by \"",0x1d);
    uStack_a8 = puVar5[1];
    local_b0 = *puVar5;
    local_a0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    bVar4 = *(byte *)(param_1 + 0x38);
    uVar1 = *(ulong *)(param_1 + 0x40);
    lVar3 = *(long *)(param_1 + 0x48);
    if ((bVar4 & 1) == 0) {
      lVar3 = param_1 + 0x39;
      uVar1 = (ulong)(bVar4 >> 1);
    }
                    /* try { // try from 004aaa2c to 004aaa33 has its CatchHandler @ 004aaf4c */
    puVar5 = (ulong *)FUN_0021d540(&local_b0,lVar3,uVar1);
    uStack_88 = puVar5[1];
    local_90 = *puVar5;
    local_80 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
                    /* try { // try from 004aaa4c to 004aaa5f has its CatchHandler @ 004aaf24 */
    puVar5 = (ulong *)FUN_0021d540(&local_90,"\".  To use it here, please add the necessary import."
                                   ,0x34);
    uStack_68 = puVar5[1];
    local_70 = *puVar5;
    local_60 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 004aaa88 to 004aaa9f has its CatchHandler @ 004aae80 */
      (**(code **)(*plVar6 + 0x10))
                (plVar6,(byte *)(param_1 + 0x38),param_2,param_3,param_4,&local_70);
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
    if ((local_70 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_60);
    }
    if ((local_90 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_80);
    }
    if ((local_b0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_a0);
    }
    if ((local_d0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_c0);
    }
    if ((local_f0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_e0);
    }
    if ((local_108[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_f8);
    }
    uVar7 = (uint)*(byte *)(param_1 + 0xb0);
  }
  if ((uVar7 & 1) == 0) {
    if (uVar7 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0xb8) == 0) {
    return;
  }
  FUN_004a8ec0(local_108,&DAT_03c246d6,param_5);
                    /* try { // try from 004aab2c to 004aab3f has its CatchHandler @ 004aaf14 */
  puVar5 = (ulong *)FUN_0021d540(local_108,"\" is resolved to \"",0x12);
  uStack_e8 = puVar5[1];
  local_f0 = *puVar5;
  local_e0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  uVar1 = *(ulong *)(param_1 + 0xb8);
  lVar3 = *(long *)(param_1 + 0xc0);
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    lVar3 = param_1 + 0xb1;
    uVar1 = (ulong)(*(byte *)(param_1 + 0xb0) >> 1);
  }
                    /* try { // try from 004aab74 to 004aab7b has its CatchHandler @ 004aaf04 */
  puVar5 = (ulong *)FUN_0021d540(&local_f0,lVar3,uVar1);
  uStack_c8 = puVar5[1];
  local_d0 = *puVar5;
  local_c0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 004aab94 to 004aaba7 has its CatchHandler @ 004aaef4 */
  puVar5 = (ulong *)FUN_0021d540(&local_d0,
                                 "\", which is not defined. The innermost scope is searched first in name resolution. Consider using a leading \'.\'(i.e., \"."
                                 ,0x78);
  uStack_a8 = puVar5[1];
  local_b0 = *puVar5;
  local_a0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  uVar1 = *(ulong *)(param_5 + 8);
  pbVar2 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar2 = param_5 + 1;
    uVar1 = (ulong)(*param_5 >> 1);
  }
                    /* try { // try from 004aabd8 to 004aabdf has its CatchHandler @ 004aaee4 */
  puVar5 = (ulong *)FUN_0021d540(&local_b0,pbVar2,uVar1);
  uStack_88 = puVar5[1];
  local_90 = *puVar5;
  local_80 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 004aabf8 to 004aac0b has its CatchHandler @ 004aaed4 */
  puVar5 = (ulong *)FUN_0021d540(&local_90,"\") to start from the outermost scope.",0x25);
  uStack_68 = puVar5[1];
  local_70 = *puVar5;
  local_60 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
                    /* try { // try from 004aac38 to 004aac4b has its CatchHandler @ 004aae7c */
    (**(code **)(*plVar6 + 0x10))(plVar6,param_1 + 0x38,param_2,param_3,param_4,&local_70);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  if ((local_70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_60);
  }
  if ((local_90 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_80);
  }
  if ((local_b0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_a0);
  }
  if ((local_d0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_c0);
  }
  if ((local_f0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_e0);
  }
  if ((local_108[0] & 1) == 0) {
    return;
  }
LAB_004aae20:
  FUN_0049e790(PTR_LAB_047cba48,local_f8);
  return;
}


