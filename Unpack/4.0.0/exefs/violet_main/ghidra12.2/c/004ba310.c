/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ba310; name: FUN_004ba310
 */


void FUN_004ba310(long param_1,ulong *param_2,long param_3)

{
  void *__src;
  ulong *puVar1;
  undefined1 *__dest;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *local_48;
  
  *(long *)(param_1 + 0x18) = param_3;
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + 0x20);
  puVar1 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar1 != (ulong *)0x0) {
    if ((*param_2 & 1) == 0) {
      uVar3 = param_2[1];
      uVar5 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar3;
      *puVar1 = uVar5;
    }
    else {
      uVar5 = param_2[1];
      __src = (void *)param_2[2];
      if (uVar5 < 0x17) {
        __dest = (undefined1 *)((long)puVar1 + 1);
        *(char *)puVar1 = (char)((int)uVar5 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar3 = uVar5 + 0x10 & 0xfffffffffffffff0;
        __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
        puVar1[1] = uVar5;
        puVar1[2] = (ulong)__dest;
        *puVar1 = uVar3 | 1;
      }
      memcpy(__dest,__src,uVar5 + 1);
    }
  }
  local_48 = puVar1;
  FUN_004a3dc0(lVar4 + 0xd0,&local_48);
  *(ulong **)(param_1 + 8) = puVar1;
  uVar2 = FUN_004a3f0c(*(undefined8 *)(*(long *)(param_3 + 0x10) + 0x20));
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}


