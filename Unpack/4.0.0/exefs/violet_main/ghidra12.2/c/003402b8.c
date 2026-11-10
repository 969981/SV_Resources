/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003402b8; name: FUN_003402b8
 */


void FUN_003402b8(long *param_1,ulong *param_2,undefined8 param_3)

{
  void *__src;
  undefined *puVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  
  if ((*param_2 & 1) == 0) {
    uStack_58 = param_2[1];
    local_60 = *param_2;
    local_50 = (void *)param_2[2];
  }
  else {
    uVar3 = param_2[1];
    __src = (void *)param_2[2];
    if (uVar3 < 0x17) {
      __dest = (void *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar3 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar2 = uVar3 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
      local_60 = uVar2 | 1;
      uStack_58 = uVar3;
      local_50 = __dest;
    }
    memcpy(__dest,__src,uVar3 + 1);
  }
                    /* try { // try from 0034034c to 0034035b has its CatchHandler @ 003404b0 */
  FUN_00345f78(param_1,2,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  puVar1 = PTR_DAT_047ccd50;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = (long)(puVar1 + 0x10);
                    /* try { // try from 0034038c to 00340393 has its CatchHandler @ 0034049c */
  FUN_0038db00(param_1 + 8);
  param_1[0xc] = 0;
  uVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[0xf] = param_2[2];
  param_1[0xe] = uVar2;
  param_1[0xd] = uVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 003403b4 to 003403bb has its CatchHandler @ 0034042c */
  FUN_00346070(param_1 + 0x10);
                    /* try { // try from 003403c0 to 003403c7 has its CatchHandler @ 003403e8 */
  FUN_00344e00(param_1 + 0x1a,param_3);
  return;
}


