/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c6948; name: FUN_002c6948
 */


undefined1  [16]
FUN_002c6948(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  void *__src;
  undefined8 *puVar2;
  void *__dest;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_002c6a90(param_1,&local_38,param_2);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
    pbVar4 = (byte *)*param_4;
    if ((*pbVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)(pbVar4 + 8);
      uVar3 = *(undefined8 *)pbVar4;
      puVar5[6] = *(undefined8 *)(pbVar4 + 0x10);
      puVar5[5] = uVar7;
      puVar5[4] = uVar3;
    }
    else {
      uVar1 = *(ulong *)(pbVar4 + 8);
      __src = *(void **)(pbVar4 + 0x10);
      if (uVar1 < 0x17) {
        __dest = (void *)((long)puVar5 + 0x21);
        *(char *)(puVar5 + 4) = (char)((int)uVar1 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002c6a6c to 002c6a6f has its CatchHandler @ 002c6a70 */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
        puVar5[5] = uVar1;
        puVar5[6] = __dest;
        puVar5[4] = uVar6 | 1;
      }
      memcpy(__dest,__src,uVar1 + 1);
    }
    puVar5[7] = 0;
    puVar5[2] = local_38;
    *puVar5 = 0;
    puVar5[1] = 0;
    *puVar2 = puVar5;
    if (*(long *)*param_1 == 0) {
      puVar2 = puVar5;
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
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}


