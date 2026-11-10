/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001fcdc8; name: FUN_001fcdc8
 */


void FUN_001fcdc8(undefined8 *param_1,long param_2,ulong *param_3)

{
  void *__src;
  ulong *puVar1;
  undefined1 *__dest;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    puVar1 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar1 == (ulong *)0x0) goto LAB_001fce90;
  }
  else {
    if (*(long *)(param_2 + 0x70) != 0) {
      FUN_00520d08(param_2,0,0x18);
    }
    puVar1 = (ulong *)FUN_00520544(param_2,0x18,PTR_LAB_047cba90);
  }
  if ((*param_3 & 1) == 0) {
    uVar2 = param_3[1];
    uVar3 = *param_3;
    puVar1[2] = param_3[2];
    puVar1[1] = uVar2;
    *puVar1 = uVar3;
  }
  else {
    uVar3 = param_3[1];
    __src = (void *)param_3[2];
    if (uVar3 < 0x17) {
      __dest = (undefined1 *)((long)puVar1 + 1);
      *(char *)puVar1 = (char)((int)uVar3 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar2 = uVar3 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
      puVar1[1] = uVar3;
      puVar1[2] = (ulong)__dest;
      *puVar1 = uVar2 | 1;
    }
    memcpy(__dest,__src,uVar3 + 1);
  }
LAB_001fce90:
  *param_1 = puVar1;
  return;
}


