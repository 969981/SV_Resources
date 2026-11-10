/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f68e4; name: FUN_004f68e4
 */


void FUN_004f68e4(long param_1,long param_2,long param_3,byte *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  ulong *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined2 local_72;
  undefined6 uStack_70;
  long local_68;
  undefined *puStack_60;
  undefined ***local_58;
  undefined **local_50;
  long *plStack_48;
  
  puVar6 = PTR_LAB_047cd728;
  puVar7 = *(ulong **)(param_3 + 0x30);
  if (puVar7 != (ulong *)0x0) {
    puStack_60 = PTR_LAB_047cd728;
    local_68 = param_3;
    if (*puVar7 != 0xffffffffffffffff) {
      local_50 = &puStack_60;
      plStack_48 = &local_68;
      local_58 = &local_50;
      std::__call_once(puVar7,&local_58,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    pbVar8 = (byte *)FUN_004f6a80(param_1,param_2,param_3);
    if ((*pbVar8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar8 + 0x10));
    }
    uVar9 = *(undefined8 *)(param_4 + 8);
    uVar10 = *(undefined8 *)param_4;
    *(undefined8 *)(pbVar8 + 0x10) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(pbVar8 + 8) = uVar9;
    *(undefined8 *)pbVar8 = uVar10;
    param_4[0] = 0;
    param_4[1] = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    puVar7 = *(ulong **)(param_3 + 0x30);
    if (puVar7 != (ulong *)0x0) {
      puStack_60 = puVar6;
      local_68 = param_3;
      if (*puVar7 != 0xffffffffffffffff) {
        local_50 = &puStack_60;
        plStack_48 = &local_68;
        local_58 = &local_50;
        std::__call_once(puVar7,&local_58,(_func_void_void_ptr *)&LAB_004f9a40);
      }
    }
    bVar4 = *param_4;
    bVar5 = param_4[1];
    uVar9 = *(undefined8 *)(param_4 + 2);
    uVar10 = *(undefined8 *)(param_4 + 0x10);
    uVar3 = *(undefined4 *)(param_3 + 0x38);
    uStack_70 = (undefined6)((ulong)*(undefined8 *)(param_4 + 8) >> 0x10);
    local_72 = (undefined2)((ulong)uVar9 >> 0x30);
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    param_4[0x14] = 0;
    param_4[0x15] = 0;
    param_4[0x16] = 0;
    param_4[0x17] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
                    /* try { // try from 004f69c0 to 004f69cf has its CatchHandler @ 004f6a60 */
    pbVar8 = (byte *)FUN_00523188(param_2 + (ulong)uVar1,uVar2,uVar3,param_3);
    if ((*pbVar8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar8 + 0x10));
    }
    *pbVar8 = bVar4;
    pbVar8[1] = bVar5;
    *(ulong *)(pbVar8 + 8) = CONCAT62(uStack_70,local_72);
    *(undefined8 *)(pbVar8 + 0x10) = uVar10;
    *(undefined8 *)(pbVar8 + 2) = uVar9;
  }
  return;
}


