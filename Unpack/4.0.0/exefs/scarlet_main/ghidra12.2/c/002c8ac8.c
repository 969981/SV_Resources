/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c8ac8; name: FUN_002c8ac8
 */


/* WARNING: Removing unreachable block (ram,0x002c8cb8) */
/* WARNING: Removing unreachable block (ram,0x002c8c5c) */
/* WARNING: Removing unreachable block (ram,0x002c8c4c) */
/* WARNING: Removing unreachable block (ram,0x002c8ca0) */
/* WARNING: Removing unreachable block (ram,0x002c9320) */
/* WARNING: Removing unreachable block (ram,0x002c8c1c) */
/* WARNING: Removing unreachable block (ram,0x002c8c78) */

undefined8 FUN_002c8ac8(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  byte *pbVar13;
  long *plVar14;
  undefined8 uVar15;
  long *local_78;
  long *local_70;
  long *local_68;
  byte local_60;
  undefined8 local_5f;
  undefined1 local_57;
  undefined8 local_50;
  
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,200);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x13] = puVar3 + 0x14;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
  }
  lVar10 = *(long *)(param_1 + 0x90);
  *(undefined8 **)(param_1 + 0x90) = puVar3;
  if (lVar10 != 0) {
    FUN_002c5ac4(lVar10);
    FUN_0049e790(PTR_LAB_047cba48,lVar10);
  }
  local_60 = 4;
  lVar10 = param_2 + 0x20;
  local_5f = CONCAT53(local_5f._3_5_,0x6469);
                    /* try { // try from 002c8b68 to 002c8b73 has its CatchHandler @ 002c9364 */
  lVar4 = FUN_002ca988(lVar10,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  param_2 = param_2 + 0x28;
  if (param_2 != lVar4) {
    if (*(int *)(lVar4 + 0x38) == 4) {
      pbVar13 = *(byte **)(param_1 + 0x90);
      if ((*pbVar13 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar13 + 0x10));
      }
      uVar15 = *(undefined8 *)(lVar4 + 0x48);
      uVar6 = *(undefined8 *)(lVar4 + 0x40);
      *(undefined8 *)(pbVar13 + 0x10) = *(undefined8 *)(lVar4 + 0x50);
      *(undefined8 *)(pbVar13 + 8) = uVar15;
      *(undefined8 *)pbVar13 = uVar6;
      *(undefined2 *)(lVar4 + 0x40) = 0;
    }
    else {
                    /* try { // try from 002c8be0 to 002c8c0b has its CatchHandler @ 002c9350 */
      FUN_003673f0(&local_60,"\"id\" field is not a string");
      lVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x105,&local_60,0,0);
      local_78 = (long *)FUN_0049e770(PTR_FUN_047cba38,8);
      local_68 = local_78 + 1;
      local_70 = local_78 + 1;
      *local_78 = lVar4;
    }
  }
  local_60 = 0xe;
  local_5f = 0x72657473756c63;
                    /* try { // try from 002c8ce8 to 002c8cf3 has its CatchHandler @ 002c9360 */
  lVar4 = FUN_002ca988(lVar10,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  if (param_2 != lVar4) {
    if (*(int *)(lVar4 + 0x38) == 4) {
      lVar8 = *(long *)(param_1 + 0x90);
      if ((*(byte *)(lVar8 + 0x18) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar8 + 0x28));
      }
      uVar15 = *(undefined8 *)(lVar4 + 0x48);
      uVar6 = *(undefined8 *)(lVar4 + 0x40);
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar4 + 0x50);
      *(undefined8 *)(lVar8 + 0x20) = uVar15;
      *(undefined8 *)(lVar8 + 0x18) = uVar6;
      *(undefined2 *)(lVar4 + 0x40) = 0;
    }
    else {
                    /* try { // try from 002c8d60 to 002c8d8b has its CatchHandler @ 002c934c */
      FUN_003673f0(&local_60,"\"cluster\" field is not a string");
      lVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x10e,&local_60,0,0);
      if (local_70 < local_68) {
        *local_70 = lVar4;
        local_70 = local_70 + 1;
      }
      else {
        lVar8 = (long)local_70 - (long)local_78 >> 3;
        uVar11 = lVar8 + 1;
        if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 002c9328 to 002c932f has its CatchHandler @ 002c934c */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar9 = (long)local_68 - (long)local_78 >> 2;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar11 << 3);
        }
        plVar14 = (long *)(lVar5 + lVar8 * 8);
        local_68 = (long *)(lVar5 + uVar11 * 8);
        *plVar14 = lVar4;
        sVar7 = (long)local_70 - (long)local_78;
        plVar12 = (long *)((long)plVar14 - sVar7);
        if (0 < (long)sVar7) {
          memcpy(plVar12,local_78,sVar7);
        }
        bVar1 = local_78 != (long *)0x0;
        local_78 = plVar12;
        local_70 = plVar14 + 1;
        if (bVar1) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
    }
  }
  local_60 = 0x10;
  local_5f = 0x7974696c61636f6c;
  local_57 = 0;
                    /* try { // try from 002c8e64 to 002c8e6f has its CatchHandler @ 002c935c */
  lVar4 = FUN_002ca988(lVar10,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  if (param_2 != lVar4) {
    if (*(int *)(lVar4 + 0x38) == 5) {
                    /* try { // try from 002c8ea0 to 002c8edf has its CatchHandler @ 002c9340 */
      lVar4 = FUN_002ca2d0(param_1,(int *)(lVar4 + 0x38));
      if (lVar4 != 0) {
        if (local_70 != local_68) goto LAB_002c8f1c;
        lVar8 = (long)local_70 - (long)local_78 >> 3;
        uVar11 = lVar8 + 1;
        if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
LAB_002c8f40:
        uVar9 = (long)local_68 - (long)local_78 >> 2;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar11 << 3);
        }
        plVar14 = (long *)(lVar5 + lVar8 * 8);
        local_68 = (long *)(lVar5 + uVar11 * 8);
        *plVar14 = lVar4;
        sVar7 = (long)local_70 - (long)local_78;
        plVar12 = (long *)((long)plVar14 - sVar7);
        if (0 < (long)sVar7) {
          memcpy(plVar12,local_78,sVar7);
        }
        bVar1 = local_78 != (long *)0x0;
        local_78 = plVar12;
        local_70 = plVar14 + 1;
        if (bVar1) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
    }
    else {
                    /* try { // try from 002c8ee0 to 002c8f0b has its CatchHandler @ 002c9348 */
      FUN_003673f0(&local_60,"\"locality\" field is not an object");
      lVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x117,&local_60,0,0);
      if (local_68 <= local_70) {
        lVar8 = (long)local_70 - (long)local_78 >> 3;
        uVar11 = lVar8 + 1;
        if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 002c9330 to 002c9337 has its CatchHandler @ 002c9348 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        goto LAB_002c8f40;
      }
LAB_002c8f1c:
      *local_70 = lVar4;
      local_70 = local_70 + 1;
    }
  }
  local_60 = 0x10;
  local_5f = 0x617461646174656d;
  local_57 = 0;
                    /* try { // try from 002c8fe4 to 002c8fef has its CatchHandler @ 002c9358 */
  lVar10 = FUN_002ca988(lVar10,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  if (param_2 == lVar10) goto LAB_002c929c;
  if (*(int *)(lVar10 + 0x38) == 5) {
    lVar4 = *(long *)(param_1 + 0x90);
    *(undefined4 *)(lVar4 + 0x78) = 5;
    *(undefined4 *)(lVar10 + 0x38) = 0;
    iVar2 = *(int *)(lVar4 + 0x78);
    if (iVar2 - 3U < 2) {
      if ((*(byte *)(lVar4 + 0x80) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar4 + 0x90));
      }
      uVar15 = *(undefined8 *)(lVar10 + 0x48);
      uVar6 = *(undefined8 *)(lVar10 + 0x40);
      *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar10 + 0x50);
      *(undefined8 *)(lVar4 + 0x88) = uVar15;
      *(undefined8 *)(lVar4 + 0x80) = uVar6;
      *(undefined2 *)(lVar10 + 0x40) = 0;
joined_r0x002c90d0:
      plVar14 = local_78;
      if (local_70 == local_78) goto LAB_002c92a8;
    }
    else {
      if (iVar2 == 5) {
        plVar12 = (long *)(lVar4 + 0xa0);
        FUN_0025cef0((undefined8 *)(lVar4 + 0x98),*plVar12);
        *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar10 + 0x58);
        plVar14 = (long *)(lVar10 + 0x60);
        lVar8 = *plVar14;
        *plVar12 = lVar8;
        lVar5 = *(long *)(lVar10 + 0x68);
        *(long *)(lVar4 + 0xa8) = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar8 + 0x10) = plVar12;
          *(long **)(lVar10 + 0x58) = plVar14;
          *plVar14 = 0;
          *(undefined8 *)(lVar10 + 0x68) = 0;
          goto joined_r0x002c90d0;
        }
        *(undefined8 *)(lVar4 + 0x98) = plVar12;
      }
      else if (iVar2 == 6) {
        plVar14 = (long *)(lVar4 + 0xb0);
        lVar8 = *plVar14;
        if (lVar8 != 0) {
          lVar5 = *(long *)(lVar4 + 0xb8);
          if (lVar5 == lVar8) {
            lVar5 = lVar8;
          }
          else {
            do {
              lVar5 = lVar5 + -0x50;
              FUN_00288048(lVar5);
            } while (lVar8 != lVar5);
            lVar5 = *plVar14;
          }
          *(long *)(lVar4 + 0xb8) = lVar8;
          FUN_0049e790(PTR_LAB_047cba48,lVar5);
          *plVar14 = 0;
          *(undefined8 *)(lVar4 + 0xb8) = 0;
          *(undefined8 *)(lVar4 + 0xc0) = 0;
        }
        uVar6 = *(undefined8 *)(lVar10 + 0x70);
        *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(lVar10 + 0x78);
        *(undefined8 *)(lVar4 + 0xb0) = uVar6;
        *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)(lVar10 + 0x80);
        *(undefined8 *)(lVar10 + 0x80) = 0;
        *(undefined8 *)(lVar10 + 0x70) = 0;
        *(undefined8 *)(lVar10 + 0x78) = 0;
        goto joined_r0x002c90d0;
      }
LAB_002c929c:
      plVar14 = local_78;
      if (local_70 == local_78) goto LAB_002c92a8;
    }
LAB_002c90d4:
                    /* try { // try from 002c90d4 to 002c9103 has its CatchHandler @ 002c9354 */
    FUN_003673f0(&local_60,"errors parsing \"node\" object");
    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0x127,&local_60,local_78,(long)local_70 - (long)local_78 >> 3);
    if (local_70 != local_78) {
      uVar11 = 0;
      do {
        if (4 < (ulong)local_78[uVar11]) {
                    /* try { // try from 002c9154 to 002c9157 has its CatchHandler @ 002c939c */
          FUN_00350fd0();
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (ulong)((long)local_70 - (long)local_78 >> 3));
    }
  }
  else {
                    /* try { // try from 002c9084 to 002c90af has its CatchHandler @ 002c9344 */
    FUN_003673f0(&local_60,"\"metadata\" field is not an object");
    lVar10 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                          ,0x121,&local_60,0,0);
    if (local_70 < local_68) {
      *local_70 = lVar10;
      local_70 = local_70 + 1;
      goto joined_r0x002c90d0;
    }
    lVar4 = (long)local_70 - (long)local_78 >> 3;
    uVar11 = lVar4 + 1;
    if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 002c9338 to 002c933f has its CatchHandler @ 002c9344 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar9 = (long)local_68 - (long)local_78 >> 2;
    if (uVar11 <= uVar9) {
      uVar11 = uVar9;
    }
    if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_0049e770(PTR_FUN_047cba38,uVar11 << 3);
    }
    plVar14 = (long *)(lVar8 + lVar4 * 8);
    plVar12 = plVar14 + 1;
    *plVar14 = lVar10;
    sVar7 = (long)local_70 - (long)local_78;
    plVar14 = (long *)((long)plVar14 - sVar7);
    if (0 < (long)sVar7) {
      memcpy(plVar14,local_78,sVar7);
    }
    bVar1 = local_78 == (long *)0x0;
    local_78 = plVar14;
    local_70 = plVar12;
    if (bVar1) goto LAB_002c929c;
    FUN_0049e790(PTR_LAB_047cba48);
    if (plVar12 != plVar14) goto LAB_002c90d4;
LAB_002c92a8:
    uVar6 = 0;
    local_78 = plVar14;
  }
  if (local_78 != (long *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return uVar6;
}


