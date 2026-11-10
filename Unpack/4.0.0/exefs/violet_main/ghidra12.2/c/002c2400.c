/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c2400; name: FUN_002c2400
 */


void FUN_002c2400(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  void *__src;
  long lVar2;
  void *__dest;
  byte *pbVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x90);
  *param_1 = lVar2;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  pbVar3 = (byte *)*param_4;
  if ((*pbVar3 & 1) == 0) {
    uVar6 = *(undefined8 *)(pbVar3 + 8);
    uVar5 = *(undefined8 *)pbVar3;
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(pbVar3 + 0x10);
    *(undefined8 *)(lVar2 + 0x28) = uVar6;
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
  }
  else {
    uVar1 = *(ulong *)(pbVar3 + 8);
    __src = *(void **)(pbVar3 + 0x10);
    if (uVar1 < 0x17) {
      __dest = (void *)(lVar2 + 0x21);
      *(char *)(lVar2 + 0x20) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002c24e8 to 002c24eb has its CatchHandler @ 002c24ec */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
      *(ulong *)(lVar2 + 0x28) = uVar1;
      *(void **)(lVar2 + 0x30) = __dest;
      *(ulong *)(lVar2 + 0x20) = uVar4 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 **)(lVar2 + 0x38) = (undefined8 *)(lVar2 + 0x40);
  *(undefined1 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


