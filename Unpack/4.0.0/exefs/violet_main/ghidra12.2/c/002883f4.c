/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002883f4; name: FUN_002883f4
 */


void FUN_002883f4(long *param_1,long param_2,byte *param_3)

{
  ulong uVar1;
  void *__src;
  long lVar2;
  void *__dest;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x88);
  *param_1 = lVar2;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  if ((*param_3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_3 + 8);
    uVar4 = *(undefined8 *)param_3;
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(lVar2 + 0x28) = uVar5;
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
  }
  else {
    uVar1 = *(ulong *)(param_3 + 8);
    __src = *(void **)(param_3 + 0x10);
    if (uVar1 < 0x17) {
      __dest = (void *)(lVar2 + 0x21);
      *(char *)(lVar2 + 0x20) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 002884c8 to 002884cf has its CatchHandler @ 002884d0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar3 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
      *(ulong *)(lVar2 + 0x28) = uVar1;
      *(void **)(lVar2 + 0x30) = __dest;
      *(ulong *)(lVar2 + 0x20) = uVar3 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
                    /* try { // try from 002884a8 to 002884ab has its CatchHandler @ 002884d8 */
  FUN_002886bc(lVar2 + 0x38,param_3 + 0x18);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


