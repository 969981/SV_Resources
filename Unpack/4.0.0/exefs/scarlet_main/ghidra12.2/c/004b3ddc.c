/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004b3ddc; name: FUN_004b3ddc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3ddc(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  void *__src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *__dest;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *local_80;
  undefined8 uStack_78;
  char *local_70;
  
  uVar3 = FUN_004b3c30(param_1,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_2 + 0x18));
  FUN_004ad8f4(param_1,*(undefined8 *)(param_2 + 0x18),uVar3,param_2);
  lVar8 = *(long *)(param_1 + 8);
  puVar6 = *(ulong **)(param_2 + 0x18);
  puVar4 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar4 != (ulong *)0x0) {
    if ((*puVar6 & 1) == 0) {
      uVar7 = puVar6[1];
      uVar9 = *puVar6;
      puVar4[2] = puVar6[2];
      puVar4[1] = uVar7;
      *puVar4 = uVar9;
    }
    else {
      uVar9 = puVar6[1];
      __src = (void *)puVar6[2];
      if (uVar9 < 0x17) {
        __dest = (undefined1 *)((long)puVar4 + 1);
        *(char *)puVar4 = (char)((int)uVar9 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar7 = uVar9 + 0x10 & 0xfffffffffffffff0;
        __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
        puVar4[1] = uVar9;
        puVar4[2] = (ulong)__dest;
        *puVar4 = uVar7 | 1;
      }
      memcpy(__dest,__src,uVar9 + 1);
    }
  }
  local_80 = puVar4;
  FUN_004a3dc0(lVar8 + 0xd0,&local_80);
  *param_4 = puVar4;
  param_4[1] = uVar3;
  param_4[2] = param_3;
  *(undefined4 *)(param_4 + 3) = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    local_70 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    uVar2 = s_google_protobuf_OneofOptions_03c83965._0_8_;
    uVar3 = CONCAT44(s_google_protobuf_OneofOptions_03c83965._12_4_,
                     s_google_protobuf_OneofOptions_03c83965._8_4_);
    uStack_78 = _UNK_03cac1b8;
    local_80 = _DAT_03cac1b0;
    uVar1 = CONCAT44(s_google_protobuf_OneofOptions_03c83965._16_4_,
                     s_google_protobuf_OneofOptions_03c83965._12_4_);
    *(undefined8 *)(local_70 + 0x14) = s_google_protobuf_OneofOptions_03c83965._20_8_;
    *(undefined8 *)(local_70 + 0xc) = uVar1;
    *(undefined8 *)(local_70 + 8) = uVar3;
    *(undefined8 *)local_70 = uVar2;
    local_70[0x1c] = '\0';
                    /* try { // try from 004b3f24 to 004b3f3b has its CatchHandler @ 004b3fa0 */
    FUN_004b65e8(param_1,uVar5,param_4,2,&local_80);
    if (((ulong)local_80 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
    puVar4 = (ulong *)*param_4;
    uVar3 = param_4[1];
  }
  FUN_004acb08(param_1,uVar3,param_3,puVar4,param_2,3,param_4);
  return;
}


