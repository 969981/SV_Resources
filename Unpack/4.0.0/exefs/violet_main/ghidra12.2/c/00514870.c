/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00514870; name: FUN_00514870
 */


void FUN_00514870(long param_1)

{
  void *__src;
  ulong *puVar1;
  void *__dest;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 4) == 4) {
    puVar1 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar1 != (ulong *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    FUN_005146b4(puVar1,*(undefined8 *)(param_1 + 8));
  }
  else {
    if (*(int *)(param_1 + 4) != 3) {
      return;
    }
    puVar2 = *(ulong **)(param_1 + 8);
    puVar1 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar1 != (ulong *)0x0) {
      if ((*puVar2 & 1) == 0) {
        uVar3 = puVar2[1];
        uVar4 = *puVar2;
        puVar1[2] = puVar2[2];
        puVar1[1] = uVar3;
        *puVar1 = uVar4;
      }
      else {
        uVar4 = puVar2[1];
        __src = (void *)puVar2[2];
        if (uVar4 < 0x17) {
          __dest = (void *)((long)puVar1 + 1);
          *(char *)puVar1 = (char)((int)uVar4 << 1);
        }
        else {
          if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar3 = uVar4 + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
          puVar1[1] = uVar4;
          puVar1[2] = (ulong)__dest;
          *puVar1 = uVar3 | 1;
        }
        memcpy(__dest,__src,uVar4 + 1);
      }
    }
  }
  *(ulong **)(param_1 + 8) = puVar1;
  return;
}


