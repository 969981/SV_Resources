/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005baa3c; name: FUN_005baa3c
 */


void FUN_005baa3c(long *param_1,long param_2,byte *param_3)

{
  ulong uVar1;
  void *__src;
  long *plVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  plVar2 = *(long **)(param_2 + 0x10);
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x48,8);
  *param_1 = lVar3;
  param_1[1] = (long)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 2) = 0;
  plVar2 = (long *)FUN_01cf7e20();
  *(long **)(lVar3 + 0x38) = plVar2;
  if ((*param_3 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_3 + 8);
    uVar5 = *(undefined8 *)param_3;
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(lVar3 + 0x28) = uVar6;
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
  }
  else {
    uVar1 = *(ulong *)(param_3 + 8);
    __src = *(void **)(param_3 + 0x10);
    if (uVar1 < 0x17) {
      __dest = (void *)(lVar3 + 0x21);
      *(char *)(lVar3 + 0x20) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 005bab20 to 005bab27 has its CatchHandler @ 005bab28 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
      *(ulong *)(lVar3 + 0x28) = uVar1;
      *(void **)(lVar3 + 0x30) = __dest;
      *(ulong *)(lVar3 + 0x20) = uVar4 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


