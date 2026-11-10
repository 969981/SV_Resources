/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b8c40; name: FUN_002b8c40
 */


undefined8 * FUN_002b8c40(long *param_1,byte *param_2)

{
  ulong uVar1;
  void *__src;
  undefined8 *puVar2;
  void *__dest;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_002c2610(param_1,&local_38,param_2);
  puVar3 = (undefined8 *)*puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x98);
    if ((*param_2 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_2 + 8);
      uVar5 = *(undefined8 *)param_2;
      puVar3[6] = *(undefined8 *)(param_2 + 0x10);
      puVar3[5] = uVar6;
      puVar3[4] = uVar5;
    }
    else {
      uVar1 = *(ulong *)(param_2 + 8);
      __src = *(void **)(param_2 + 0x10);
      if (uVar1 < 0x17) {
        __dest = (void *)((long)puVar3 + 0x21);
        *(char *)(puVar3 + 4) = (char)((int)uVar1 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002b8d78 to 002b8d7b has its CatchHandler @ 002b8d7c */
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
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[8] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    puVar3[7] = puVar3 + 8;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[0xe] = 0;
    puVar3[0xd] = 0;
    puVar3[0x10] = 0;
    puVar3[0xf] = 0;
    puVar3[0x12] = 0;
    puVar3[0x11] = 0;
    puVar3[2] = local_38;
    *puVar3 = 0;
    puVar3[1] = 0;
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
  return puVar3 + 7;
}


