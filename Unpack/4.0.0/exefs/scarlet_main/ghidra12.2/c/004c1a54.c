/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c1a54; name: FUN_004c1a54
 */


void FUN_004c1a54(undefined8 *param_1,long param_2,undefined8 param_3,byte *param_4)

{
  ulong uVar1;
  void *__src;
  undefined8 *puVar2;
  void *__dest;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  *param_1 = puVar2;
  param_1[1] = param_2 + 0x10;
  *(undefined1 *)(param_1 + 2) = 0;
  if ((*param_4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_4 + 8);
    uVar4 = *(undefined8 *)param_4;
    puVar2[4] = *(undefined8 *)(param_4 + 0x10);
    puVar2[3] = uVar5;
    puVar2[2] = uVar4;
  }
  else {
    uVar1 = *(ulong *)(param_4 + 8);
    __src = *(void **)(param_4 + 0x10);
    if (uVar1 < 0x17) {
      __dest = (void *)((long)puVar2 + 0x11);
      *(char *)(puVar2 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004c1b2c to 004c1b2f has its CatchHandler @ 004c1b30 */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar3 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
      puVar2[3] = uVar1;
      puVar2[4] = __dest;
      puVar2[2] = uVar3 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_4 + 0x18);
  *(undefined1 *)(param_1 + 2) = 1;
  *puVar2 = 0;
  puVar2[1] = param_3;
  return;
}


