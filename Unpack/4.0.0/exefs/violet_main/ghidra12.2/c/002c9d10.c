/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c9d10; name: FUN_002c9d10
 */


undefined8 FUN_002c9d10(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  size_t sVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 *local_168;
  long lStack_160;
  undefined1 auStack_158 [32];
  char *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  byte local_108 [16];
  ulong local_f8;
  undefined1 auStack_f0 [32];
  ulong local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  local_b0 = 0;
  uStack_a8 = 0;
  local_58 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  local_d0 = 0;
  local_b8[0] = 0;
  local_80 = 0;
  local_138 = (char *)CONCAT26(local_138._6_2_,0x6570797408);
  local_90 = 0;
  lStack_88 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_78 = 0;
  uStack_70 = 0;
                    /* try { // try from 002c9d80 to 002c9d8b has its CatchHandler @ 002ca240 */
  local_98 = &local_90;
  lVar5 = FUN_002ca988(param_2 + 0x20,&local_138);
  if (((ulong)local_138 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_128);
  }
  if (param_2 + 0x28 == lVar5) {
                    /* try { // try from 002c9df4 to 002c9e4f has its CatchHandler @ 002ca238 */
    FUN_003673f0(&local_138,"\"type\" field not present");
    uVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0xe0,&local_138,0,0);
    if (local_58 <= local_60) {
      lVar5 = (long)local_60 - (long)local_68 >> 3;
      uVar11 = lVar5 + 1;
      if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
LAB_002c9eb0:
      uVar10 = (long)local_58 - (long)local_68 >> 2;
      if (uVar11 <= uVar10) {
        uVar11 = uVar10;
      }
      if (0xffffffffffffffe < (ulong)((long)local_58 - (long)local_68 >> 3)) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar11 << 3);
      }
      puVar1 = (undefined8 *)(lVar6 + lVar5 * 8);
      puVar2 = (undefined8 *)(lVar6 + uVar11 * 8);
      *puVar1 = uVar7;
      sVar8 = (long)local_60 - (long)local_68;
      puVar12 = (undefined8 *)((long)puVar1 - sVar8);
      if (0 < (long)sVar8) {
        memcpy(puVar12,local_68,sVar8);
      }
      bVar3 = local_68 != (undefined8 *)0x0;
      local_68 = puVar12;
      local_60 = puVar1 + 1;
      local_58 = puVar2;
      if (bVar3) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
      goto LAB_002c9f34;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x38) == 4) {
      if ((local_d0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_c0);
      }
      uStack_c8 = *(ulong *)(lVar5 + 0x48);
      local_d0 = *(ulong *)(lVar5 + 0x40);
      local_c0 = *(undefined8 *)(lVar5 + 0x50);
      *(undefined2 *)(lVar5 + 0x40) = 0;
      goto LAB_002c9f34;
    }
                    /* try { // try from 002c9e50 to 002c9e7b has its CatchHandler @ 002ca230 */
    FUN_003673f0(&local_138,"\"type\" field is not a string");
    uVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0xe3,&local_138,0,0);
    if (local_58 <= local_60) {
      lVar5 = (long)local_60 - (long)local_68 >> 3;
      uVar11 = lVar5 + 1;
      if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 002ca21c to 002ca223 has its CatchHandler @ 002ca230 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      goto LAB_002c9eb0;
    }
  }
  *local_60 = uVar7;
  local_60 = local_60 + 1;
LAB_002c9f34:
  local_138 = (char *)0x6769666e6f630c;
                    /* try { // try from 002c9f54 to 002c9f5f has its CatchHandler @ 002ca23c */
  lVar5 = FUN_002ca988(param_2 + 0x20,&local_138);
  if (((ulong)local_138 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_128);
  }
  if (param_2 + 0x28 != lVar5) {
    iVar4 = *(int *)(lVar5 + 0x38);
    if (iVar4 == 5) {
      *(undefined4 *)(lVar5 + 0x38) = 0;
      local_b8[0] = iVar4;
      FUN_0025cef0(&local_98,local_90);
      local_98 = *(long **)(lVar5 + 0x58);
      plVar9 = (long *)(lVar5 + 0x60);
      local_90 = *plVar9;
      lStack_88 = *(long *)(lVar5 + 0x68);
      if (lStack_88 == 0) {
        local_98 = &local_90;
      }
      else {
        *(long **)(local_90 + 0x10) = &local_90;
        *(long **)(lVar5 + 0x58) = plVar9;
        *plVar9 = 0;
        *(undefined8 *)(lVar5 + 0x68) = 0;
      }
    }
    else {
                    /* try { // try from 002c9fd4 to 002c9fff has its CatchHandler @ 002ca22c */
      FUN_003673f0(&local_138,"\"config\" field is not an object");
      uVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0xeb,&local_138,0,0);
      if (local_60 < local_58) {
        *local_60 = uVar7;
        local_60 = local_60 + 1;
      }
      else {
        lVar5 = (long)local_60 - (long)local_68 >> 3;
        uVar11 = lVar5 + 1;
        if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 002ca224 to 002ca22b has its CatchHandler @ 002ca22c */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar10 = (long)local_58 - (long)local_68 >> 2;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0xffffffffffffffe < (ulong)((long)local_58 - (long)local_68 >> 3)) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar11 << 3);
        }
        puVar1 = (undefined8 *)(lVar6 + lVar5 * 8);
        puVar2 = (undefined8 *)(lVar6 + uVar11 * 8);
        *puVar1 = uVar7;
        sVar8 = (long)local_60 - (long)local_68;
        puVar12 = (undefined8 *)((long)puVar1 - sVar8);
        if (0 < (long)sVar8) {
          memcpy(puVar12,local_68,sVar8);
        }
        bVar3 = local_68 != (undefined8 *)0x0;
        local_68 = puVar12;
        local_60 = puVar1 + 1;
        local_58 = puVar2;
        if (bVar3) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
    }
  }
  uVar11 = local_d0 >> 1 & 0x7f;
  if ((local_d0 & 1) != 0) {
    uVar11 = uStack_c8;
  }
  if (uVar11 != 0) {
                    /* try { // try from 002ca0dc to 002ca0e3 has its CatchHandler @ 002ca234 */
    FUN_002caeec(param_4 + 0x18,&local_d0);
  }
  if (local_68 == local_60) {
    uVar7 = 0;
  }
  else {
    local_138 = "errors parsing index ";
    uStack_130 = 0x15;
                    /* try { // try from 002ca108 to 002ca12f has its CatchHandler @ 002ca274 */
    lStack_160 = FUN_00394c40(param_3,auStack_158);
    lStack_160 = lStack_160 - (long)auStack_158;
    local_168 = auStack_158;
    FUN_003959c0(local_108,&local_138,&local_168);
    uVar11 = (ulong)local_108 | 1;
    if ((local_108[0] & 1) != 0) {
      uVar11 = local_f8;
    }
                    /* try { // try from 002ca144 to 002ca167 has its CatchHandler @ 002ca254 */
    FUN_00367770(auStack_f0,uVar11);
    uVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0xf7,auStack_f0,0,0);
    if ((local_108[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_f8);
    }
    if (local_60 != local_68) {
      uVar11 = 0;
      do {
                    /* try { // try from 002ca198 to 002ca19f has its CatchHandler @ 002ca278 */
        uVar7 = FUN_00352130(uVar7,local_68[uVar11]);
        uVar11 = uVar11 + 1;
      } while (uVar11 < (ulong)((long)local_60 - (long)local_68 >> 3));
    }
  }
  FUN_00288048(local_b8);
  if ((local_d0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_c0);
  }
  if (local_68 != (undefined8 *)0x0) {
    local_60 = local_68;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return uVar7;
}


