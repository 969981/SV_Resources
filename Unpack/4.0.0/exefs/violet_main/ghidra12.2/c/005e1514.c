/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005e1514; name: FUN_005e1514
 */


ulong * FUN_005e1514(long *param_1,ulong *param_2)

{
  void *__src;
  ulong *puVar1;
  undefined1 *__dest;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    puVar1 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x38);
    if (puVar1 != (ulong *)0x0) {
      FUN_005e1ac0(puVar1,param_2);
    }
  }
  else {
    if (*(long *)(lVar2 + 0x70) != 0) {
      FUN_00520d08(lVar2,0,0x38);
    }
    puVar1 = (ulong *)FUN_00520c00(lVar2,0x38);
    lVar2 = *param_1;
    if ((*param_2 & 1) == 0) {
      uVar3 = param_2[1];
      uVar4 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar3;
      *puVar1 = uVar4;
    }
    else {
      uVar4 = param_2[1];
      __src = (void *)param_2[2];
      if (uVar4 < 0x17) {
        __dest = (undefined1 *)((long)puVar1 + 1);
        *(char *)puVar1 = (char)((int)uVar4 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar3 = uVar4 + 0x10 & 0xfffffffffffffff0;
        __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
        puVar1[1] = uVar4;
        puVar1[2] = (ulong)__dest;
        *puVar1 = uVar3 | 1;
      }
      memcpy(__dest,__src,uVar4 + 1);
    }
    FUN_0025a77c(lVar2,puVar1);
    FUN_004eb008(puVar1 + 3,*param_1);
    FUN_004eb6d4(puVar1 + 3,param_2 + 3);
  }
  return puVar1;
}


