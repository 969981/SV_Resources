/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f8ac0; name: FUN_004f8ac0
 */


void FUN_004f8ac0(long param_1,long *param_2,undefined8 ***param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  long extraout_x1;
  undefined8 ****local_78;
  undefined8 ***pppuStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 ***local_58;
  undefined8 ****local_50;
  long *plStack_48;
  undefined8 ****local_38;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  pbVar1 = (byte *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x38) = 0;
                    /* try { // try from 004f8af8 to 004f8b7b has its CatchHandler @ 004f8d20 */
  (**(code **)(*param_2 + 0x98))(param_2);
  puVar3 = PTR_LAB_047cd728;
  ppuVar5 = param_3[6];
  if (ppuVar5 != (undefined8 **)0x0) {
    local_38 = (undefined8 ****)PTR_LAB_047cd728;
    local_58 = param_3;
    if (*ppuVar5 != (undefined8 *)0xffffffffffffffff) {
      local_78 = &local_38;
      pppuStack_70 = &local_58;
      local_50 = &local_78;
      std::__call_once((ulong *)ppuVar5,&local_50,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(int *)(param_3 + 7) == 0xb) {
    FUN_004a64c0(param_3);
  }
  uVar6 = FUN_004fa4b0(extraout_x1 + 8,param_3);
  *(ulong *)(param_1 + 8) = (long)param_2 + (uVar6 & 0xffffffff);
  uVar7 = FUN_004a5124(param_3);
  local_78 = (undefined8 ****)CONCAT35(local_78._5_3_,0x79656b06);
                    /* try { // try from 004f8b90 to 004f8bd7 has its CatchHandler @ 004f8d00 */
  lVar8 = FUN_004a5348(uVar7,&local_78);
  puVar9 = *(ulong **)(lVar8 + 0x30);
  if (puVar9 != (ulong *)0x0) {
    local_58 = (undefined8 ***)puVar3;
    local_60 = lVar8;
    if (*puVar9 != 0xffffffffffffffff) {
      local_50 = &local_58;
      plStack_48 = &local_60;
      local_38 = &local_50;
      std::__call_once(puVar9,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  puVar4 = PTR_DAT_047cd750;
  iVar2 = *(int *)(PTR_DAT_047cd750 + (ulong)*(uint *)(lVar8 + 0x38) * 4);
  if (*(int *)(param_1 + 0x28) != iVar2) {
    if ((*(int *)(param_1 + 0x28) == 9) && ((*pbVar1 & 1) != 0)) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x20));
    }
    *(int *)(param_1 + 0x28) = iVar2;
    if (iVar2 == 9) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  if (((ulong)local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
                    /* try { // try from 004f8c40 to 004f8c47 has its CatchHandler @ 004f8d20 */
  uVar7 = FUN_004a5124(param_3);
  local_78 = (undefined8 ****)CONCAT17(local_78._7_1_,0x65756c61760a);
                    /* try { // try from 004f8c64 to 004f8cab has its CatchHandler @ 004f8cfc */
  lVar8 = FUN_004a5348(uVar7,&local_78);
  puVar9 = *(ulong **)(lVar8 + 0x30);
  if (puVar9 != (ulong *)0x0) {
    local_58 = (undefined8 ***)puVar3;
    local_60 = lVar8;
    if (*puVar9 != 0xffffffffffffffff) {
      local_50 = &local_58;
      plStack_48 = &local_60;
      local_38 = &local_50;
      std::__call_once(puVar9,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(puVar4 + (ulong)*(uint *)(lVar8 + 0x38) * 4);
  if (((ulong)local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
                    /* try { // try from 004f8cdc to 004f8ce3 has its CatchHandler @ 004f8d20 */
  (**(code **)(**(long **)(param_1 + 8) + 0x78))(*(long **)(param_1 + 8),param_1);
  return;
}


