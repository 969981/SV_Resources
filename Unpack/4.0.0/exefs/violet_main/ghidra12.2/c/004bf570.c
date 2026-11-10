/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004bf570; name: FUN_004bf570
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004bf570(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  ulong *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 uVar10;
  undefined ***local_120;
  undefined8 **ppuStack_118;
  ulong local_110;
  undefined **local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  long local_d8;
  undefined *local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  ulong uStack_a8;
  ulong local_a0;
  undefined **local_90;
  undefined8 **ppuStack_88;
  ulong local_80;
  undefined8 *local_70;
  ulong uStack_68;
  ulong local_60;
  undefined8 *local_50;
  undefined *puStack_48;
  
  if ((*(byte *)(param_1[2] + 0x10) >> 2 & 1) == 0) {
    FUN_004a8ec0(&local_c8,"Option \"",param_2[1]);
                    /* try { // try from 004bf5ac to 004bf5bf has its CatchHandler @ 004bfc6c */
    puVar4 = (ulong *)FUN_0021d540(&local_c8,
                                   "\" is a message. To set the entire message, use syntax like \"",
                                   0x3c);
    uStack_a8 = puVar4[1];
    local_b0 = (undefined ***)*puVar4;
    local_a0 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    pbVar8 = (byte *)*param_2;
    uVar7 = *(ulong *)(pbVar8 + 8);
    pbVar2 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar2 = pbVar8 + 1;
      uVar7 = (ulong)(*pbVar8 >> 1);
    }
                    /* try { // try from 004bf5f4 to 004bf5fb has its CatchHandler @ 004bfc44 */
    puVar4 = (ulong *)FUN_0021d540(&local_b0,pbVar2,uVar7);
    ppuStack_88 = (undefined8 **)puVar4[1];
    local_90 = (undefined **)*puVar4;
    local_80 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 004bf614 to 004bf627 has its CatchHandler @ 004bfc1c */
    puVar4 = (ulong *)FUN_0021d540(&local_90,
                                   " = { <proto text format> }\". To set fields within it, use syntax like \""
                                   ,0x47);
    uStack_68 = puVar4[1];
    local_70 = (undefined8 *)*puVar4;
    local_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    pbVar8 = (byte *)*param_2;
    uVar7 = *(ulong *)(pbVar8 + 8);
    pbVar2 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar2 = pbVar8 + 1;
      uVar7 = (ulong)(*pbVar8 >> 1);
    }
                    /* try { // try from 004bf65c to 004bf663 has its CatchHandler @ 004bfbf4 */
    puVar4 = (ulong *)FUN_0021d540(&local_70,pbVar2,uVar7);
    uStack_e8 = puVar4[1];
    local_f0 = (undefined **)*puVar4;
    local_e0 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 004bf67c to 004bf68f has its CatchHandler @ 004bfbcc */
    puVar4 = (ulong *)FUN_0021d540(&local_f0,".foo = value\".",0xe);
    ppuStack_118 = (undefined8 **)puVar4[1];
    local_120 = (undefined ***)*puVar4;
    local_110 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    lVar9 = *param_1;
    plVar5 = *(long **)(lVar9 + 0x10);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 004bf6c8 to 004bf6d3 has its CatchHandler @ 004bfb68 */
      (**(code **)(*plVar5 + 0x10))(plVar5,lVar9 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_120);
    }
    *(undefined1 *)(lVar9 + 0x30) = 1;
    if (((ulong)local_120 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_110);
    }
    if (((ulong)local_f0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_e0);
    }
    if (((ulong)local_70 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_60);
    }
    if (((ulong)local_90 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_80);
    }
    if (((ulong)local_b0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_a0);
    }
    if (((byte)local_c8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_b8);
    }
    uVar10 = 0;
  }
  else {
    puVar4 = (ulong *)param_2[6];
    if ((puVar4 != (ulong *)0x0) && (local_70 = param_2, *puVar4 != 0xffffffffffffffff)) {
      ppuStack_118 = &local_70;
      local_120 = (undefined ***)PTR_LAB_047cd728;
      local_f0 = (undefined **)&local_120;
      std::__call_once(puVar4,&local_f0,(_func_void_void_ptr *)&LAB_004c9500);
    }
    plVar5 = (long *)FUN_004ed0e4(param_1 + 9,param_2[0xd]);
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x18))();
    local_f0 = &PTR_LAB_044c4640;
    uStack_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_c8 = PTR_DAT_047cd7a0 + 0x10;
    lStack_c0 = *param_1;
                    /* try { // try from 004bf7a8 to 004bf7af has its CatchHandler @ 004bfbc4 */
    FUN_00507944(&local_120);
    local_120 = &local_f0;
    ppuStack_118 = (undefined8 **)&local_c8;
                    /* try { // try from 004bf7c4 to 004bf7cf has its CatchHandler @ 004bfbbc */
    uVar7 = FUN_00507dd8(&local_120,*(undefined8 *)(param_1[2] + 0x40),puVar6);
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 004bf854 to 004bf863 has its CatchHandler @ 004bfb64 */
      FUN_004a8ec0(&local_b0,"Error while parsing option value for \"",*param_2);
                    /* try { // try from 004bf864 to 004bf877 has its CatchHandler @ 004bfb50 */
      puVar4 = (ulong *)FUN_0021d540(&local_b0,&DAT_03c3a7c9,3);
      ppuStack_88 = (undefined8 **)puVar4[1];
      local_90 = (undefined **)*puVar4;
      local_80 = puVar4[2];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      if ((uStack_e8 & 1) == 0) {
        uVar7 = uStack_e8 >> 1 & 0x7f;
        lVar9 = (long)&uStack_e8 + 1;
      }
      else {
        uVar7 = local_e0;
        lVar9 = local_d8;
      }
                    /* try { // try from 004bf8ac to 004bf8b3 has its CatchHandler @ 004bfb28 */
      puVar4 = (ulong *)FUN_0021d540(&local_90,lVar9,uVar7);
      uStack_68 = puVar4[1];
      local_70 = (undefined8 *)*puVar4;
      local_60 = puVar4[2];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      lVar9 = *param_1;
      plVar5 = *(long **)(lVar9 + 0x10);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 004bf8ec to 004bf8f7 has its CatchHandler @ 004bfae8 */
        (**(code **)(*plVar5 + 0x10))(plVar5,lVar9 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_70);
      }
      *(undefined1 *)(lVar9 + 0x30) = 1;
      if (((ulong)local_70 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_60);
      }
      if (((ulong)local_90 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_80);
      }
      if (((ulong)local_b0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_a0);
      }
      uVar10 = 0;
    }
    else {
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      local_60 = 0;
                    /* try { // try from 004bf7dc to 004bf84b has its CatchHandler @ 004bfc88 */
      FUN_0052d77c(puVar6,&local_70);
      puVar4 = (ulong *)param_2[6];
      if (puVar4 != (ulong *)0x0) {
        puStack_48 = PTR_LAB_047cd728;
        local_50 = param_2;
        if (*puVar4 != 0xffffffffffffffff) {
          local_90 = &puStack_48;
          ppuStack_88 = &local_50;
          local_b0 = &local_90;
          std::__call_once(puVar4,&local_b0,(_func_void_void_ptr *)&LAB_004c0750);
        }
      }
      if (*(int *)(param_2 + 7) == 0xb) {
        uVar10 = FUN_005150f8(param_3,*(undefined4 *)((long)param_2 + 0x44));
        FUN_001fcec0(uVar10,&local_70);
      }
      else {
        puVar4 = (ulong *)param_2[6];
        if (puVar4 != (ulong *)0x0) {
          puStack_48 = PTR_LAB_047cd728;
          local_50 = param_2;
          if (*puVar4 != 0xffffffffffffffff) {
            local_90 = &puStack_48;
            ppuStack_88 = &local_50;
            local_b0 = &local_90;
                    /* try { // try from 004bf9e0 to 004bf9ef has its CatchHandler @ 004bfc88 */
            std::__call_once(puVar4,&local_b0,(_func_void_void_ptr *)&LAB_004c0750);
          }
        }
                    /* try { // try from 004bf9f4 to 004bfa23 has its CatchHandler @ 004bfb24 */
        uVar10 = FUN_00515210(param_3,*(undefined4 *)((long)param_2 + 0x44));
        bVar3 = ((ulong)local_70 & 1) != 0;
        uVar7 = (ulong)&local_70 | 1;
        if (bVar3) {
          uVar7 = local_60;
        }
        uVar1 = (uint)((byte)local_70 >> 1);
        if (bVar3) {
          uVar1 = (uint)uStack_68;
        }
        FUN_005156cc(uVar10,uVar7,uVar1);
      }
      if (((ulong)local_70 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_60);
      }
      uVar10 = 1;
    }
    FUN_00507958(&local_120);
    FUN_005077d0(&local_c8);
    local_f0 = &PTR_LAB_044c4640;
    if ((uStack_e8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_d8);
    }
    FUN_004fb9f0(&local_f0);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      FUN_0049e790(PTR_LAB_047cba48,puVar6);
    }
  }
  return uVar10;
}


