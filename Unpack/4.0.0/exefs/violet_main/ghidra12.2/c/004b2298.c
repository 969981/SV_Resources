/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004b2298; name: FUN_004b2298
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b2298(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  void *__src;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined1 *__dest;
  long lVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong *local_70;
  undefined8 uStack_68;
  char *local_60;
  
  uVar5 = FUN_004b3c30(param_1,*(undefined8 *)(*(long *)(param_1 + 0x50) + 8),
                       *(undefined8 *)(param_2 + 0x30));
  FUN_004ad8f4(param_1,*(undefined8 *)(param_2 + 0x30),uVar5,param_2);
  lVar11 = *(long *)(param_1 + 8);
  puVar9 = *(ulong **)(param_2 + 0x30);
  puVar6 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar6 != (ulong *)0x0) {
    if ((*puVar9 & 1) == 0) {
      uVar10 = puVar9[1];
      uVar12 = *puVar9;
      puVar6[2] = puVar9[2];
      puVar6[1] = uVar10;
      *puVar6 = uVar12;
    }
    else {
      uVar12 = puVar9[1];
      __src = (void *)puVar9[2];
      if (uVar12 < 0x17) {
        __dest = (undefined1 *)((long)puVar6 + 1);
        *(char *)puVar6 = (char)((int)uVar12 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar10 = uVar12 + 0x10 & 0xfffffffffffffff0;
        __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar10);
        puVar6[1] = uVar12;
        puVar6[2] = (ulong)__dest;
        *puVar6 = uVar10 | 1;
      }
      memcpy(__dest,__src,uVar12 + 1);
    }
  }
  local_70 = puVar6;
  FUN_004a3dc0(lVar11 + 0xd0,&local_70);
  *param_4 = puVar6;
  param_4[1] = uVar5;
  param_4[2] = *(undefined8 *)(param_1 + 0x50);
  iVar2 = *(int *)(param_2 + 0x20);
  *(int *)(param_4 + 5) = iVar2;
  uVar5 = FUN_004a41ac(*(undefined8 *)(param_1 + 8),iVar2 * 0x68);
  param_4[4] = uVar5;
  if ((0 < *(int *)(param_2 + 0x20)) &&
     (FUN_004b7b40(param_1,*(undefined8 *)(*(long *)(param_2 + 0x28) + 8),param_4,uVar5),
     1 < *(int *)(param_2 + 0x20))) {
    lVar11 = 0x68;
    lVar7 = 2;
    do {
      FUN_004b7b40(param_1,*(undefined8 *)(*(long *)(param_2 + 0x28) + lVar7 * 8),param_4,
                   param_4[4] + lVar11);
      lVar11 = lVar11 + 0x68;
      bVar1 = lVar7 < *(int *)(param_2 + 0x20);
      lVar7 = lVar7 + 1;
    } while (bVar1);
  }
  param_4[3] = 0;
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    local_60 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    uVar4 = s_google_protobuf_ServiceOptions_03c765a4._0_8_;
    uVar5 = CONCAT26(s_google_protobuf_ServiceOptions_03c765a4._14_2_,
                     s_google_protobuf_ServiceOptions_03c765a4._8_6_);
    uStack_68 = _UNK_03cab618;
    local_70 = _DAT_03cab610;
    uVar3 = CONCAT62(s_google_protobuf_ServiceOptions_03c765a4._16_6_,
                     s_google_protobuf_ServiceOptions_03c765a4._14_2_);
    *(undefined8 *)(local_60 + 0x16) = s_google_protobuf_ServiceOptions_03c765a4._22_8_;
    *(undefined8 *)(local_60 + 0xe) = uVar3;
    *(undefined8 *)(local_60 + 8) = uVar5;
    *(undefined8 *)local_60 = uVar4;
    local_60[0x1e] = '\0';
                    /* try { // try from 004b2460 to 004b2477 has its CatchHandler @ 004b24d0 */
    FUN_004b7d3c(param_1,uVar8,param_4,3,&local_70);
    if (((ulong)local_70 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_60);
    }
  }
  FUN_004acb08(param_1,param_4[1],0,*param_4,param_2,6,param_4);
  return;
}


