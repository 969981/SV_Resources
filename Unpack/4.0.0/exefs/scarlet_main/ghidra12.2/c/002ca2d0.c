/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ca2d0; name: FUN_002ca2d0
 */


/* WARNING: Removing unreachable block (ram,0x002ca46c) */
/* WARNING: Removing unreachable block (ram,0x002ca410) */
/* WARNING: Removing unreachable block (ram,0x002ca400) */
/* WARNING: Removing unreachable block (ram,0x002ca454) */
/* WARNING: Removing unreachable block (ram,0x002ca82c) */
/* WARNING: Removing unreachable block (ram,0x002ca3d0) */
/* WARNING: Removing unreachable block (ram,0x002ca42c) */

undefined8 FUN_002ca2d0(long param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  byte local_60;
  undefined4 local_5f;
  undefined1 local_5b;
  undefined1 uStack_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined8 local_50;
  
  local_60 = 0xc;
  local_68 = (undefined8 *)0x0;
  local_5f = 0x69676572;
  lVar4 = param_2 + 0x20;
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_5b = 0x6f;
  uStack_5a = 0x6e;
  local_59 = 0;
                    /* try { // try from 002ca318 to 002ca323 has its CatchHandler @ 002ca85c */
  lVar3 = FUN_002ca988(lVar4,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  param_2 = param_2 + 0x28;
  if (param_2 != lVar3) {
    if (*(int *)(lVar3 + 0x38) == 4) {
      lVar6 = *(long *)(param_1 + 0x90);
      if ((*(byte *)(lVar6 + 0x30) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar6 + 0x40));
      }
      uVar11 = *(undefined8 *)(lVar3 + 0x48);
      uVar9 = *(undefined8 *)(lVar3 + 0x40);
      *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(lVar3 + 0x50);
      *(undefined8 *)(lVar6 + 0x38) = uVar11;
      *(undefined8 *)(lVar6 + 0x30) = uVar9;
      *(undefined2 *)(lVar3 + 0x40) = 0;
    }
    else {
                    /* try { // try from 002ca394 to 002ca3bf has its CatchHandler @ 002ca84c */
      FUN_003673f0(&local_60,"\"region\" field is not a string");
      uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x130,&local_60,0,0);
      local_78 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,8);
      local_68 = local_78 + 1;
      local_70 = local_78 + 1;
      *local_78 = uVar9;
    }
  }
  local_60 = 8;
  local_5f = 0x656e6f7a;
  local_5b = 0;
                    /* try { // try from 002ca490 to 002ca49b has its CatchHandler @ 002ca858 */
  lVar3 = FUN_002ca988(lVar4,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  if (param_2 != lVar3) {
    if (*(int *)(lVar3 + 0x38) == 4) {
      lVar6 = *(long *)(param_1 + 0x90);
      if ((*(byte *)(lVar6 + 0x48) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar6 + 0x58));
      }
      uVar11 = *(undefined8 *)(lVar3 + 0x48);
      uVar9 = *(undefined8 *)(lVar3 + 0x40);
      *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(lVar3 + 0x50);
      *(undefined8 *)(lVar6 + 0x50) = uVar11;
      *(undefined8 *)(lVar6 + 0x48) = uVar9;
      *(undefined2 *)(lVar3 + 0x40) = 0;
    }
    else {
                    /* try { // try from 002ca508 to 002ca533 has its CatchHandler @ 002ca848 */
      FUN_003673f0(&local_60,"\"zone\" field is not a string");
      uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x139,&local_60,0,0);
      if (local_70 < local_68) {
        *local_70 = uVar9;
        local_70 = local_70 + 1;
      }
      else {
        lVar3 = (long)local_70 - (long)local_78 >> 3;
        uVar10 = lVar3 + 1;
        if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 002ca834 to 002ca83b has its CatchHandler @ 002ca848 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar7 = (long)local_68 - (long)local_78 >> 2;
        if (uVar10 <= uVar7) {
          uVar10 = uVar7;
        }
        if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar10 << 3);
        }
        puVar1 = (undefined8 *)(lVar6 + lVar3 * 8);
        local_68 = (undefined8 *)(lVar6 + uVar10 * 8);
        *puVar1 = uVar9;
        sVar5 = (long)local_70 - (long)local_78;
        puVar8 = (undefined8 *)((long)puVar1 - sVar5);
        if (0 < (long)sVar5) {
          memcpy(puVar8,local_78,sVar5);
        }
        bVar2 = local_78 != (undefined8 *)0x0;
        local_78 = puVar8;
        local_70 = puVar1 + 1;
        if (bVar2) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
    }
  }
  local_60 = 0xe;
  local_5f = 0x7a627573;
  local_5b = 0x6f;
  uStack_5a = 0x6e;
  local_59 = 0x65;
  local_58 = 0;
                    /* try { // try from 002ca608 to 002ca613 has its CatchHandler @ 002ca854 */
  lVar4 = FUN_002ca988(lVar4,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  if (param_2 != lVar4) {
    if (*(int *)(lVar4 + 0x38) == 4) {
      lVar3 = *(long *)(param_1 + 0x90);
      if ((*(byte *)(lVar3 + 0x60) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar3 + 0x70));
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x48);
      uVar9 = *(undefined8 *)(lVar4 + 0x40);
      *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(lVar4 + 0x50);
      *(undefined8 *)(lVar3 + 0x68) = uVar11;
      *(undefined8 *)(lVar3 + 0x60) = uVar9;
      *(undefined2 *)(lVar4 + 0x40) = 0;
    }
    else {
                    /* try { // try from 002ca680 to 002ca6ab has its CatchHandler @ 002ca844 */
      FUN_003673f0(&local_60,"\"subzone\" field is not a string");
      uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x142,&local_60,0,0);
      if (local_70 < local_68) {
        *local_70 = uVar9;
        local_70 = local_70 + 1;
      }
      else {
        lVar4 = (long)local_70 - (long)local_78 >> 3;
        uVar10 = lVar4 + 1;
        if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 002ca83c to 002ca843 has its CatchHandler @ 002ca844 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar7 = (long)local_68 - (long)local_78 >> 2;
        if (uVar10 <= uVar7) {
          uVar10 = uVar7;
        }
        if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = FUN_0049e770(PTR_FUN_047cba38,uVar10 << 3);
        }
        puVar1 = (undefined8 *)(lVar3 + lVar4 * 8);
        *puVar1 = uVar9;
        sVar5 = (long)local_70 - (long)local_78;
        puVar8 = (undefined8 *)((long)puVar1 - sVar5);
        if (0 < (long)sVar5) {
          memcpy(puVar8,local_78,sVar5);
        }
        bVar2 = local_78 != (undefined8 *)0x0;
        local_78 = puVar8;
        local_70 = puVar1 + 1;
        if (bVar2) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
    }
  }
  if (local_70 == local_78) {
    uVar9 = 0;
  }
  else {
                    /* try { // try from 002ca7a4 to 002ca7d3 has its CatchHandler @ 002ca850 */
    FUN_003673f0(&local_60,"errors parsing \"locality\" object");
    uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0x148,&local_60,local_78,(long)local_70 - (long)local_78 >> 3);
    if (local_70 != local_78) {
      uVar10 = 0;
      do {
        if (4 < (ulong)local_78[uVar10]) {
                    /* try { // try from 002ca824 to 002ca827 has its CatchHandler @ 002ca894 */
          FUN_00350fd0();
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulong)((long)local_70 - (long)local_78 >> 3));
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return uVar9;
}


