/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a4bec; name: FUN_002a4bec
 */


undefined1  [16] FUN_002a4bec(long *param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  void *__src;
  undefined8 *puVar2;
  void *__dest;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_002a4d2c(param_1,&local_38,param_2);
  puVar4 = (undefined8 *)*puVar2;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
    if ((*param_3 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_3 + 8);
      uVar3 = *(undefined8 *)param_3;
      puVar4[6] = *(undefined8 *)(param_3 + 0x10);
      puVar4[5] = uVar6;
      puVar4[4] = uVar3;
    }
    else {
      uVar1 = *(ulong *)(param_3 + 8);
      __src = *(void **)(param_3 + 0x10);
      if (uVar1 < 0x17) {
        __dest = (void *)((long)puVar4 + 0x21);
        *(char *)(puVar4 + 4) = (char)((int)uVar1 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002a4d08 to 002a4d0b has its CatchHandler @ 002a4d0c */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
        puVar4[5] = uVar1;
        puVar4[6] = __dest;
        puVar4[4] = uVar5 | 1;
      }
      memcpy(__dest,__src,uVar1 + 1);
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = local_38;
    *puVar2 = puVar4;
    if (*(long *)*param_1 == 0) {
      puVar2 = puVar4;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar2 = (undefined8 *)*puVar2;
    }
    FUN_010108e0(param_1[1],puVar2);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = puVar4;
  return auVar7;
}


