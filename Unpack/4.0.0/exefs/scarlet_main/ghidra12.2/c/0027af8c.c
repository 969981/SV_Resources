/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0027af8c; name: FUN_0027af8c
 */


undefined1  [16]
FUN_0027af8c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  void *__src;
  undefined8 *puVar3;
  void *__dest;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 *local_58;
  long *plStack_50;
  undefined1 local_48;
  undefined8 local_38;
  
  puVar3 = (undefined8 *)FUN_0027b0f0(param_1,&local_38,param_2);
  puVar6 = (undefined8 *)*puVar3;
  if (puVar6 == (undefined8 *)0x0) {
    plVar1 = param_1 + 1;
    puVar6 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0xd0);
    local_48 = 0;
    pbVar5 = (byte *)*param_4;
    local_58 = puVar6;
    plStack_50 = plVar1;
    if ((*pbVar5 & 1) == 0) {
      uVar8 = *(undefined8 *)(pbVar5 + 8);
      uVar4 = *(undefined8 *)pbVar5;
      puVar6[6] = *(undefined8 *)(pbVar5 + 0x10);
      puVar6[5] = uVar8;
      puVar6[4] = uVar4;
    }
    else {
      uVar2 = *(ulong *)(pbVar5 + 8);
      __src = *(void **)(pbVar5 + 0x10);
      if (uVar2 < 0x17) {
        __dest = (void *)((long)puVar6 + 0x21);
        *(char *)(puVar6 + 4) = (char)((int)uVar2 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0027b0d8 to 0027b0db has its CatchHandler @ 0027b0dc */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar7 = uVar2 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
        puVar6[5] = uVar2;
        puVar6[6] = __dest;
        puVar6[4] = uVar7 | 1;
      }
      memcpy(__dest,__src,uVar2 + 1);
    }
    puVar6[7] = 0;
    local_48 = 1;
    puVar6[2] = local_38;
    *puVar6 = 0;
    puVar6[1] = 0;
    *puVar3 = puVar6;
    if (*(long *)*param_1 == 0) {
      puVar3 = puVar6;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar3 = (undefined8 *)*puVar3;
    }
    FUN_010108e0(param_1[1],puVar3);
    param_1[2] = param_1[2] + 1;
    local_58 = (undefined8 *)0x0;
    FUN_0027a0e8(&local_58);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = puVar6;
  return auVar9;
}


