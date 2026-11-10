/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004b7b40; name: FUN_004b7b40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b7b40(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  void *__src;
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *__dest;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *local_70;
  undefined8 uStack_68;
  char *local_60;
  
  lVar8 = *(long *)(param_1 + 8);
  puVar6 = *(ulong **)(param_2 + 0x18);
  puVar3 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar3 != (ulong *)0x0) {
    if ((*puVar6 & 1) == 0) {
      uVar7 = puVar6[1];
      uVar9 = *puVar6;
      puVar3[2] = puVar6[2];
      puVar3[1] = uVar7;
      *puVar3 = uVar9;
    }
    else {
      uVar9 = puVar6[1];
      __src = (void *)puVar6[2];
      if (uVar9 < 0x17) {
        __dest = (undefined1 *)((long)puVar3 + 1);
        *(char *)puVar3 = (char)((int)uVar9 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar7 = uVar9 + 0x10 & 0xfffffffffffffff0;
        __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
        puVar3[1] = uVar9;
        puVar3[2] = (ulong)__dest;
        *puVar3 = uVar7 | 1;
      }
      memcpy(__dest,__src,uVar9 + 1);
    }
  }
  local_70 = puVar3;
  FUN_004a3dc0(lVar8 + 0xd0,&local_70);
  *param_4 = puVar3;
  param_4[2] = param_3;
  uVar4 = FUN_004b3c30(param_1,*(undefined8 *)(param_3 + 8),puVar3);
  param_4[1] = uVar4;
  FUN_004ad8f4(param_1,*(undefined8 *)(param_2 + 0x18),uVar4,param_2);
  param_4[10] = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  param_4[7] = 0;
  param_4[0xb] = 0;
  param_4[6] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[3] = 0;
  if ((*(byte *)(param_2 + 0x10) >> 3 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    local_60 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    uVar2 = s_google_protobuf_MethodOptions_03bee489._0_8_;
    uVar4 = CONCAT35(s_google_protobuf_MethodOptions_03bee489._13_3_,
                     s_google_protobuf_MethodOptions_03bee489._8_5_);
    uStack_68 = _UNK_03cabb98;
    local_70 = _DAT_03cabb90;
    uVar1 = CONCAT53(s_google_protobuf_MethodOptions_03bee489._16_5_,
                     s_google_protobuf_MethodOptions_03bee489._13_3_);
    *(undefined8 *)(local_60 + 0x15) = s_google_protobuf_MethodOptions_03bee489._21_8_;
    *(undefined8 *)(local_60 + 0xd) = uVar1;
    *(undefined8 *)(local_60 + 8) = uVar4;
    *(undefined8 *)local_60 = uVar2;
    local_60[0x1d] = '\0';
                    /* try { // try from 004b7c98 to 004b7caf has its CatchHandler @ 004b7d18 */
    FUN_004b7ea8(param_1,uVar5,param_4,4,&local_70);
    if (((ulong)local_70 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_60);
    }
  }
  *(undefined1 *)(param_4 + 0xc) = *(undefined1 *)(param_2 + 0x38);
  *(undefined1 *)((long)param_4 + 0x61) = *(undefined1 *)(param_2 + 0x39);
  FUN_004acb08(param_1,param_4[1],param_3,*param_4,param_2,7,param_4);
  return;
}


