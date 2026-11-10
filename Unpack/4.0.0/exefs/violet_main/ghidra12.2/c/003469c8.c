/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003469c8; name: FUN_003469c8
 */


void FUN_003469c8(long *param_1,ulong *param_2,undefined8 param_3,long param_4)

{
  void *__src;
  undefined *puVar1;
  void *__dest;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  
  if ((*param_2 & 1) == 0) {
    uStack_68 = param_2[1];
    local_70 = *param_2;
    local_60 = (void *)param_2[2];
  }
  else {
    uVar4 = param_2[1];
    __src = (void *)param_2[2];
    if (uVar4 < 0x17) {
      local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar4 << 1));
      __dest = (void *)((ulong)&local_70 | 1);
    }
    else {
      if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar3 = uVar4 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
      local_70 = uVar3 | 1;
      uStack_68 = uVar4;
      local_60 = __dest;
    }
    memcpy(__dest,__src,uVar4 + 1);
  }
  *(uint *)(param_1 + 2) = (uint)(param_4 != 0);
  puVar1 = PTR_DAT_047ccd78;
  param_1[3] = -1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 1;
  param_1[6] = (long)local_60;
  param_1[5] = uStack_68;
  param_1[4] = local_70;
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
                    /* try { // try from 00346ab0 to 00346abb has its CatchHandler @ 00346bec */
  uVar2 = FUN_0034ad58();
  FUN_0034ad64(uVar2,param_1);
  if ((local_70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_60);
  }
  *param_1 = (long)(PTR_DAT_047ccd80 + 0x10);
  uVar3 = param_2[1];
  uVar4 = *param_2;
  param_1[9] = param_2[2];
  param_1[8] = uVar3;
  param_1[7] = uVar4;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 00346b00 to 00346b07 has its CatchHandler @ 00346b90 */
  FUN_00346070(param_1 + 10);
                    /* try { // try from 00346b0c to 00346b17 has its CatchHandler @ 00346b70 */
  FUN_00344e00(param_1 + 0x14,param_3);
  param_1[0x1f] = param_4;
  *(undefined4 *)(param_1 + 0x20) = 0;
                    /* try { // try from 00346b24 to 00346b27 has its CatchHandler @ 00346b60 */
  FUN_0038db00(param_1 + 0x21);
  param_1[0x25] = (long)(param_1 + 0x26);
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = (long)(param_1 + 0x29);
  return;
}


