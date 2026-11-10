/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00273ee8; name: FUN_00273ee8
 */


void FUN_00273ee8(long *param_1,byte *param_2)

{
  ulong uVar1;
  void *__src;
  long *plVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  *plVar2 = 0;
  if ((*param_2 & 1) == 0) {
    lVar5 = *(long *)(param_2 + 8);
    lVar3 = *(long *)param_2;
    plVar2[4] = *(long *)(param_2 + 0x10);
    plVar2[3] = lVar5;
    plVar2[2] = lVar3;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 8);
    __src = *(void **)(param_2 + 0x10);
    if (uVar1 < 0x17) {
      __dest = (void *)((long)plVar2 + 0x11);
      *(char *)(plVar2 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00273fb4 to 00273fb7 has its CatchHandler @ 00273fb8 */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
      plVar2[3] = uVar1;
      plVar2[4] = (long)__dest;
      plVar2[2] = uVar4 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  plVar2[1] = (long)param_1;
  lVar3 = *param_1;
  *plVar2 = lVar3;
  *(long **)(lVar3 + 8) = plVar2;
  *param_1 = (long)plVar2;
  param_1[2] = param_1[2] + 1;
  return;
}


