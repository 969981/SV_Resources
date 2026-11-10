/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00364014; name: FUN_00364014
 */


undefined8 FUN_00364014(ulong *param_1,int param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  size_t sVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  long *plVar12;
  byte local_98 [16];
  ulong local_88;
  undefined1 auStack_80 [32];
  undefined **local_60;
  undefined *local_58;
  long local_50;
  undefined *puStack_48;
  
  puVar10 = param_1 + 0x13;
  if (param_1[0x14] - *puVar10 == 0x7f8) {
    puVar10 = param_1 + 5;
    if (param_1[6] - *puVar10 == 0x80) {
      *(undefined1 *)(param_1 + 8) = 1;
      return 0;
    }
    local_60 = (undefined **)0xff;
    local_58 = PTR_FUN_047cc9c8;
    local_50 = param_1[1] + ~*param_1;
    puStack_48 = PTR_FUN_047cc7f8;
    FUN_00391b20(local_98,"exceeded max stack depth (%d) at index %lu",0x2a,&local_60,2);
    uVar1 = (ulong)local_98 | 1;
    if ((local_98[0] & 1) != 0) {
      uVar1 = local_88;
    }
                    /* try { // try from 00364138 to 0036415b has its CatchHandler @ 00364344 */
    FUN_00367770(auStack_80,uVar1);
    uVar3 = FUN_00351340("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0xcf,
                         auStack_80,0,0);
    puVar8 = (undefined8 *)param_1[6];
    if (puVar8 < (undefined8 *)param_1[7]) {
      *puVar8 = uVar3;
      param_1[6] = (ulong)(puVar8 + 1);
    }
    else {
      lVar11 = (long)((long)puVar8 - *puVar10) >> 3;
      uVar1 = lVar11 + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 0036433c to 00364343 has its CatchHandler @ 00364344 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar6 = (long)param_1[7] - *puVar10;
      uVar9 = lVar6 >> 2;
      if (uVar1 <= uVar9) {
        uVar1 = uVar9;
      }
      if (0xffffffffffffffe < (ulong)(lVar6 >> 3)) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
      }
      puVar8 = (undefined8 *)(lVar6 + lVar11 * 8);
      *puVar8 = uVar3;
      pvVar4 = (void *)param_1[5];
      sVar5 = param_1[6] - (long)pvVar4;
      if (0 < (long)sVar5) {
        memcpy((void *)((long)puVar8 - sVar5),pvVar4,sVar5);
        pvVar4 = (void *)*puVar10;
      }
      param_1[5] = (ulong)((long)puVar8 - sVar5);
      param_1[6] = (ulong)(puVar8 + 1);
      param_1[7] = lVar6 + uVar1 * 8;
      if (pvVar4 != (void *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
    }
    if ((local_98[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_88);
    }
    return 0;
  }
  puVar2 = (undefined4 *)FUN_0036444c(param_1);
  if (param_2 == 5) {
    local_58 = (undefined *)0x0;
    local_50 = 0;
    *puVar2 = 5;
    plVar12 = (long *)(puVar2 + 10);
    local_60 = &local_58;
    FUN_0025cef0(puVar2 + 8,*plVar12);
    *(undefined ***)(puVar2 + 8) = local_60;
    *plVar12 = (long)local_58;
    *(long *)(puVar2 + 0xc) = local_50;
    if (local_50 == 0) {
      *(long **)(puVar2 + 8) = plVar12;
    }
    else {
      *(long **)(local_58 + 0x10) = plVar12;
      local_58 = (undefined *)0x0;
      local_50 = 0;
      local_60 = &local_58;
    }
    FUN_0025cef0(&local_60,local_58);
    puVar8 = (undefined8 *)param_1[0x14];
    puVar7 = (undefined8 *)param_1[0x15];
    if (puVar8 == puVar7) {
LAB_00364210:
      lVar11 = (long)((long)puVar8 - *puVar10) >> 3;
      uVar1 = lVar11 + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar6 = (long)puVar7 - *puVar10;
      uVar9 = lVar6 >> 2;
      if (uVar1 <= uVar9) {
        uVar1 = uVar9;
      }
      if (0xffffffffffffffe < (ulong)(lVar6 >> 3)) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
      }
      puVar8 = (undefined8 *)(lVar6 + lVar11 * 8);
      *puVar8 = puVar2;
      pvVar4 = (void *)param_1[0x13];
      sVar5 = param_1[0x14] - (long)pvVar4;
      if (0 < (long)sVar5) {
        memcpy((void *)((long)puVar8 - sVar5),pvVar4,sVar5);
        pvVar4 = (void *)*puVar10;
      }
      param_1[0x13] = (ulong)((long)puVar8 - sVar5);
      param_1[0x14] = (ulong)(puVar8 + 1);
      param_1[0x15] = lVar6 + uVar1 * 8;
      if (pvVar4 == (void *)0x0) {
        return 1;
      }
      FUN_0049e790(PTR_LAB_047cba48);
      return 1;
    }
  }
  else {
    *puVar2 = 6;
    FUN_00364894(puVar2 + 0xe);
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x12) = 0;
    puVar8 = (undefined8 *)param_1[0x14];
    puVar7 = (undefined8 *)param_1[0x15];
    if (puVar8 == puVar7) goto LAB_00364210;
  }
  *puVar8 = puVar2;
  param_1[0x14] = (ulong)(puVar8 + 1);
  return 1;
}


