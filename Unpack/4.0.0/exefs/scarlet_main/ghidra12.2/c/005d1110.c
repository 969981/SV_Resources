/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005d1110; name: FUN_005d1110
 */


void FUN_005d1110(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  char *pcVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  int local_1b0;
  undefined4 uStack_1ac;
  byte bStack_1a8;
  undefined1 uStack_1a7;
  undefined6 uStack_1a6;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined6 uStack_18e;
  undefined8 uStack_188;
  undefined8 local_180;
  int local_178 [2];
  ulong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ulong local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [112];
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 ****local_c0;
  undefined8 ****ppppuStack_b8;
  undefined **local_b0;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined **local_68;
  undefined8 uStack_60;
  
  FUN_0024726c(auStack_140,param_2);
  pppuVar7 = *(undefined8 ****)(param_2 + 0x58);
  puStack_c8 = (undefined *)FUN_01cf7e20();
  local_d0 = PTR_DAT_047ce848 + 0x10;
  local_b0 = &local_d0;
                    /* try { // try from 005d1160 to 005d116b has its CatchHandler @ 005d1420 */
  local_c0 = (undefined8 ****)pppuVar7;
  FUN_00247460(auStack_140,&local_d0);
  if (local_b0 != (undefined **)0x0) {
    if (local_b0 == &local_d0) {
      pcVar5 = *(code **)(*local_b0 + 0x10);
    }
    else {
      pcVar5 = *(code **)(*local_b0 + 0x18);
    }
    (*pcVar5)();
  }
  puVar1 = PTR_DAT_047cbb30 + 0x10;
  local_68 = (undefined **)0x0;
  uStack_60 = 0;
  puVar2 = PTR_DAT_047cbb38 + 0x10;
  local_d0 = puVar1;
  puStack_c8 = puVar2;
  local_c0 = &local_c0;
  ppppuStack_b8 = &local_c0;
  (**(code **)(**(long **)(param_2 + 0x68) + 0x10))(*(long **)(param_2 + 0x68),auStack_a8);
  local_68 = &puStack_c8;
  thunk_FUN_006c4e40(&local_d0);
  local_d0 = puVar1;
  FUN_006c4274(&puStack_c8);
  local_68 = (undefined **)0x0;
  uStack_60 = 0;
  local_d0 = puVar1;
  puStack_c8 = puVar2;
  local_c0 = &local_c0;
  ppppuStack_b8 = &local_c0;
  (**(code **)(**(long **)(param_2 + 0x78) + 0x10))(*(long **)(param_2 + 0x78),auStack_a8);
  local_68 = &puStack_c8;
  thunk_FUN_006c4e40(&local_d0);
  local_d0 = puVar1;
  FUN_006c4274(&puStack_c8);
  FUN_001feef4(*(long *)(param_2 + 0x58) + 0x238);
  FUN_001fed6c(&local_d0,param_2 + 0x48);
  local_178[0] = 0;
  uStack_168 = 0;
  local_170 = 0;
  local_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lVar8 = *(long *)(param_2 + 0x88);
  if (*(char *)(lVar8 + 0x48) != '\x01') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar8 + 0x4e0) = local_90;
  pcVar6 = *(char **)(lVar8 + 0x10);
  if (*pcVar6 == '\0') {
    *pcVar6 = '\x01';
    *(char **)(lVar8 + 0x480) = pcVar6 + 0xb0;
  }
  *(char **)(lVar8 + 0x490) = pcVar6;
  *(char **)(lVar8 + 0x498) = pcVar6 + 0xe8;
  *(int **)(lVar8 + 0x4a0) = local_178;
                    /* try { // try from 005d12b0 to 005d141f has its CatchHandler @ 005d1434 */
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_1b0);
  *(ulong *)(lVar8 + 0x4c0) = CONCAT62(uStack_1a6,CONCAT11(uStack_1a7,bStack_1a8));
  *(ulong *)(lVar8 + 0x4b8) = CONCAT44(uStack_1ac,local_1b0);
  *(undefined8 *)(lVar8 + 0x4d0) = local_198;
  *(undefined8 *)(lVar8 + 0x4c8) = uStack_1a0;
  plVar3 = *(long **)(lVar8 + 0x18);
  (**(code **)(*plVar3 + 0x10))(plVar3,lVar8 + 0x470,(undefined8 *)(lVar8 + 0x18));
  FUN_001feef4(&local_d0);
  if (((*(long *)(param_2 + 0xa8) != 0) && (uVar4 = FUN_002529d8(), (uVar4 & 1) != 0)) &&
     (local_178[0] == 1)) {
    FUN_0025d940(&local_1b0);
    local_178[0] = local_1b0;
    if ((local_170 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_160);
    }
    local_170 = CONCAT62(uStack_1a6,CONCAT11(uStack_1a7,bStack_1a8));
    uStack_168 = uStack_1a0;
    local_160 = local_198;
    bStack_1a8 = 0;
    uStack_1a7 = 0;
    if ((local_158 & 1) == 0) {
      local_158 = CONCAT62(uStack_18e,local_190);
      local_190 = 0;
      uStack_148 = local_180;
      uStack_150 = uStack_188;
    }
    else {
      FUN_0049e790(PTR_LAB_047cba48,uStack_148);
      uStack_148 = local_180;
      local_158 = CONCAT62(uStack_18e,local_190);
      local_190 = 0;
      uStack_150 = uStack_188;
      if ((bStack_1a8 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_198);
      }
    }
  }
  FUN_005cec48(param_1,local_178);
  if ((local_158 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,uStack_148);
  }
  if ((local_170 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_160);
  }
  FUN_001ff1dc(&local_d0);
  FUN_002472b8(auStack_140);
  return;
}


