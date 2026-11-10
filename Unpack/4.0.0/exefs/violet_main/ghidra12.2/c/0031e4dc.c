/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0031e4dc; name: FUN_0031e4dc
 */


/* WARNING: Removing unreachable block (ram,0x0031e6cc) */
/* WARNING: Removing unreachable block (ram,0x0031e670) */
/* WARNING: Removing unreachable block (ram,0x0031e660) */
/* WARNING: Removing unreachable block (ram,0x0031e6b4) */
/* WARNING: Removing unreachable block (ram,0x0031e630) */
/* WARNING: Removing unreachable block (ram,0x0031e9c8) */
/* WARNING: Removing unreachable block (ram,0x0031e5d8) */
/* WARNING: Removing unreachable block (ram,0x0031e68c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031e4dc(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  size_t __n;
  ulong uVar12;
  ulong uVar13;
  undefined8 *__dest;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  byte local_60;
  undefined7 uStack_5f;
  char cStack_58;
  undefined6 uStack_57;
  char cStack_51;
  char cStack_50;
  undefined6 uStack_4f;
  undefined1 uStack_49;
  
  local_68 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_60 = 0x2c;
  uStack_49 = 0;
  uStack_57 = s_maxRequestMessageBytes_03c4dd3e._8_6_;
  uStack_5f = s_maxRequestMessageBytes_03c4dd3e._0_7_;
  cStack_58 = s_maxRequestMessageBytes_03c4dd3e[7];
  cStack_51 = s_maxRequestMessageBytes_03c4dd3e[0xe];
  cStack_50 = s_maxRequestMessageBytes_03c4dd3e[0xf];
  uStack_4f = s_maxRequestMessageBytes_03c4dd3e._16_6_;
                    /* try { // try from 0031e52c to 0031e537 has its CatchHandler @ 0031e9f0 */
  lVar7 = FUN_0027bd44(param_3 + 0x20,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_49,CONCAT61(uStack_4f,cStack_50)));
  }
  if (param_3 + 0x28 == lVar7) {
LAB_0031e6d8:
    iVar5 = -1;
  }
  else {
    if (1 < *(int *)(lVar7 + 0x38) - 3U) {
                    /* try { // try from 0031e584 to 0031e5df has its CatchHandler @ 0031e9e8 */
      FUN_003673f0(&local_60,"field:maxRequestMessageBytes error:should be of type number");
      uVar8 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/message_size/message_size_filter.cc"
                           ,0x4f,&local_60,0,0);
LAB_0031e654:
      local_78 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,8);
      local_68 = local_78 + 1;
      local_70 = local_78 + 1;
      *local_78 = uVar8;
      goto LAB_0031e6d8;
    }
    if ((*(byte *)(lVar7 + 0x40) & 1) == 0) {
      lVar7 = lVar7 + 0x41;
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x50);
    }
                    /* try { // try from 0031e5e4 to 0031e5e7 has its CatchHandler @ 0031e9e0 */
    iVar5 = FUN_0038d390(lVar7);
    if (iVar5 == -1) {
                    /* try { // try from 0031e5f4 to 0031e61f has its CatchHandler @ 0031e9dc */
      FUN_003673f0(&local_60,"field:maxRequestMessageBytes error:should be non-negative");
      uVar8 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/message_size/message_size_filter.cc"
                           ,0x55,&local_60,0,0);
      goto LAB_0031e654;
    }
  }
  pcVar9 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  uVar3 = s_maxResponseMessageBytes_03c6ea40._0_8_;
  cStack_50 = (char)pcVar9;
  uStack_4f = (undefined6)((ulong)pcVar9 >> 8);
  uStack_49 = (undefined1)((ulong)pcVar9 >> 0x38);
  cStack_58 = (char)_UNK_03cab718;
  uStack_57 = (undefined6)((ulong)_UNK_03cab718 >> 8);
  cStack_51 = (char)((ulong)_UNK_03cab718 >> 0x38);
  local_60 = (byte)_DAT_03cab710;
  uStack_5f = (undefined7)((ulong)_DAT_03cab710 >> 8);
  uVar8 = CONCAT17(s_maxResponseMessageBytes_03c6ea40[0xf],s_maxResponseMessageBytes_03c6ea40._8_7_)
  ;
  *(ulong *)(pcVar9 + 0xf) =
       CONCAT71(s_maxResponseMessageBytes_03c6ea40._16_7_,s_maxResponseMessageBytes_03c6ea40[0xf]);
  pcVar9[0x17] = '\0';
  *(undefined8 *)(pcVar9 + 8) = uVar8;
  *(undefined8 *)pcVar9 = uVar3;
                    /* try { // try from 0031e718 to 0031e723 has its CatchHandler @ 0031e9ec */
  lVar7 = FUN_0027bd44(param_3 + 0x20,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_49,CONCAT61(uStack_4f,cStack_50)));
  }
  if (param_3 + 0x28 == lVar7) {
LAB_0031e980:
    iVar6 = -1;
    if (local_78 == local_70) {
LAB_0031e990:
      plVar11 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x10);
      puVar4 = PTR_DAT_047ccbb0;
      if (plVar11 != (long *)0x0) {
        *(int *)(plVar11 + 1) = iVar5;
        *(int *)((long)plVar11 + 0xc) = iVar6;
        *plVar11 = (long)(puVar4 + 0x10);
      }
      *param_1 = plVar11;
      goto joined_r0x0031e9c0;
    }
  }
  else {
    if (1 < *(int *)(lVar7 + 0x38) - 3U) {
                    /* try { // try from 0031e76c to 0031e7c7 has its CatchHandler @ 0031e9e4 */
      FUN_003673f0(&local_60,"field:maxResponseMessageBytes error:should be of type number");
      uVar8 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/message_size/message_size_filter.cc"
                           ,0x60,&local_60,0,0);
      if (local_70 < local_68) goto LAB_0031e8d8;
      lVar7 = (long)local_70 - (long)local_78 >> 3;
      uVar13 = lVar7 + 1;
      if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
LAB_0031e8fc:
      uVar12 = (long)local_68 - (long)local_78 >> 2;
      if (uVar13 <= uVar12) {
        uVar13 = uVar12;
      }
      if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
        uVar13 = 0x1fffffffffffffff;
      }
      if (uVar13 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = FUN_0049e770(PTR_FUN_047cba38,uVar13 << 3);
      }
      puVar1 = (undefined8 *)(lVar10 + lVar7 * 8);
      *puVar1 = uVar8;
      __n = (long)local_70 - (long)local_78;
      __dest = (undefined8 *)((long)puVar1 - __n);
      if (0 < (long)__n) {
        memcpy(__dest,local_78,__n);
      }
      bVar2 = local_78 != (undefined8 *)0x0;
      local_78 = __dest;
      local_70 = puVar1 + 1;
      if (bVar2) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
      goto LAB_0031e980;
    }
    if ((*(byte *)(lVar7 + 0x40) & 1) == 0) {
      lVar7 = lVar7 + 0x41;
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x50);
    }
                    /* try { // try from 0031e7cc to 0031e817 has its CatchHandler @ 0031ea28 */
    iVar6 = FUN_0038d390(lVar7);
    if (iVar6 == -1) {
                    /* try { // try from 0031e89c to 0031e8c7 has its CatchHandler @ 0031e9d8 */
      FUN_003673f0(&local_60,"field:maxResponseMessageBytes error:should be non-negative");
      uVar8 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/message_size/message_size_filter.cc"
                           ,0x66,&local_60,0,0);
      if (local_68 <= local_70) {
        lVar7 = (long)local_70 - (long)local_78 >> 3;
        uVar13 = lVar7 + 1;
        if (uVar13 >> 0x3d != 0) {
                    /* try { // try from 0031e9d0 to 0031e9d7 has its CatchHandler @ 0031e9d8 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        goto LAB_0031e8fc;
      }
LAB_0031e8d8:
      *local_70 = uVar8;
      local_70 = local_70 + 1;
      goto LAB_0031e980;
    }
    if (local_78 == local_70) goto LAB_0031e990;
  }
  FUN_003673f0(&local_60,"Message size parser");
  uVar8 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/message_size/message_size_filter.cc"
                       ,0x6b,&local_60,local_78,(long)local_70 - (long)local_78 >> 3);
  if (local_70 != local_78) {
    uVar13 = 0;
    do {
      if (4 < (ulong)local_78[uVar13]) {
                    /* try { // try from 0031e88c to 0031e88f has its CatchHandler @ 0031ea2c */
        FUN_00350fd0();
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulong)((long)local_70 - (long)local_78 >> 3));
  }
  *param_4 = uVar8;
  *param_1 = 0;
joined_r0x0031e9c0:
  if (local_78 != (undefined8 *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


