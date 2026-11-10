/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ea4d0; name: FUN_004ea4d0
 */


undefined8 * FUN_004ea4d0(long *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  ulong uVar1;
  void *__src;
  undefined8 *puVar2;
  void *__dest;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  puVar2 = (undefined8 *)FUN_004ea618(param_1,param_2,&local_48,auStack_50,param_3);
  puVar3 = (undefined8 *)*puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x48);
    if ((*param_4 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_4 + 8);
      uVar5 = *(undefined8 *)param_4;
      puVar3[6] = *(undefined8 *)(param_4 + 0x10);
      puVar3[5] = uVar6;
      puVar3[4] = uVar5;
    }
    else {
      uVar1 = *(ulong *)(param_4 + 8);
      __src = *(void **)(param_4 + 0x10);
      if (uVar1 < 0x17) {
        __dest = (void *)((long)puVar3 + 0x21);
        *(char *)(puVar3 + 4) = (char)((int)uVar1 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004ea5f4 to 004ea5f7 has its CatchHandler @ 004ea5f8 */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
        puVar3[5] = uVar1;
        puVar3[6] = __dest;
        puVar3[4] = uVar4 | 1;
      }
      memcpy(__dest,__src,uVar1 + 1);
    }
    uVar5 = *(undefined8 *)(param_4 + 0x18);
    puVar3[8] = *(undefined8 *)(param_4 + 0x20);
    puVar3[7] = uVar5;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = local_48;
    *puVar2 = puVar3;
    if (*(long *)*param_1 == 0) {
      puVar2 = puVar3;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar2 = (undefined8 *)*puVar2;
    }
    FUN_010108e0(param_1[1],puVar2);
    param_1[2] = param_1[2] + 1;
  }
  return puVar3;
}


