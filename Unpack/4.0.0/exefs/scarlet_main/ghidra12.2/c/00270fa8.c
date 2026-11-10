/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00270fa8; name: FUN_00270fa8
 */


void FUN_00270fa8(long *param_1,byte *param_2,long param_3,long *param_4)

{
  ulong uVar1;
  void *__src;
  undefined *puVar2;
  undefined *puVar3;
  void *__dest;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_047cc368;
  puVar2 = PTR_DAT_047cc360;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)(puVar3 + 0x10);
  puVar2 = PTR_DAT_047cbe78;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[4] = (long)(puVar2 + 0x10);
  if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0027110c to 0027110f has its CatchHandler @ 0027116c */
    abort();
  }
                    /* try { // try from 00271018 to 0027101b has its CatchHandler @ 0027116c */
  (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x10))();
  puVar2 = PTR_DAT_047cc370;
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)(puVar2 + 0x70);
  param_1[4] = (long)(puVar2 + 0x98);
  if ((*param_2 & 1) == 0) {
    lVar6 = *(long *)(param_2 + 8);
    lVar5 = *(long *)param_2;
    param_1[8] = *(long *)(param_2 + 0x10);
    param_1[7] = lVar6;
    param_1[6] = lVar5;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 8);
    __src = *(void **)(param_2 + 0x10);
    if (uVar1 < 0x17) {
      __dest = (void *)((long)param_1 + 0x31);
      *(char *)(param_1 + 6) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 00271110 to 00271117 has its CatchHandler @ 00271118 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
      param_1[7] = uVar1;
      param_1[8] = (long)__dest;
      param_1[6] = uVar4 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  param_1[9] = param_3;
                    /* try { // try from 002710d0 to 002710d3 has its CatchHandler @ 00271120 */
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x70))(*(long **)PTR_DAT_047cbb08,param_1 + 10);
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  lVar5 = *param_4;
  param_1[0x10] = param_4[1];
  param_1[0xf] = lVar5;
  param_1[0x11] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return;
}


