/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053884c; name: FUN_0053884c
 */


void FUN_0053884c(undefined8 param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *__dest;
  ulong uVar4;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined1 auStack_78 [56];
  
                    /* try { // try from 00538868 to 00538873 has its CatchHandler @ 005389c4 */
  FUN_00263cd4(auStack_78,0);
  uVar3 = FUN_0025d140(param_2,auStack_78);
  if ((uVar3 & 1) == 0) {
    uVar2 = *param_2;
    if ((*(ulong *)(param_2 + 2) & 1) == 0) {
      uStack_88 = *(ulong *)(param_2 + 4);
      local_90 = *(ulong *)(param_2 + 2);
      local_80 = *(void **)(param_2 + 6);
    }
    else {
      uVar3 = *(ulong *)(param_2 + 4);
      pvVar1 = *(void **)(param_2 + 6);
      if (uVar3 < 0x17) {
        __dest = (void *)((ulong)&local_90 | 1);
        local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar3 << 1));
      }
      else {
        if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 005389a8 to 005389af has its CatchHandler @ 005389b0 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
        local_90 = uVar4 | 1;
        uStack_88 = uVar3;
        local_80 = __dest;
      }
      memcpy(__dest,pvVar1,uVar3 + 1);
    }
    pvVar1 = (void *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      pvVar1 = local_80;
    }
    FUN_0025d400(auStack_b0,param_2);
    FUN_002000f8(param_1,uVar2,pvVar1,auStack_b0);
    FUN_01cfa44c(auStack_b0,local_a8);
    if ((local_90 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_80);
    }
  }
  else {
    FUN_0025d400(auStack_b0,param_2);
    FUN_0025ade0(param_1,auStack_78,auStack_b0);
    FUN_01cfa44c(auStack_b0,local_a8);
  }
  FUN_00264004(auStack_78);
  return;
}


