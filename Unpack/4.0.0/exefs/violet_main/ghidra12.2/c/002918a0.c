/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002918a0; name: FUN_002918a0
 */


void FUN_002918a0(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  void *__src;
  undefined *puVar2;
  ulong *puVar3;
  undefined1 *__dest;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    lVar4 = param_2[1] - *param_2 >> 3;
    if (0xaaaaaaaaaaaaaaa < (ulong)(lVar4 * -0x5555555555555555)) {
                    /* try { // try from 002919d4 to 002919db has its CatchHandler @ 002919dc */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar3 = (ulong *)FUN_0049e770(PTR_FUN_047cba38);
    param_1[2] = puVar3 + lVar4;
    *param_1 = puVar3;
    param_1[1] = puVar3;
    puVar2 = PTR_FUN_047cba38;
    puVar1 = (ulong *)param_2[1];
    for (puVar7 = (ulong *)*param_2; puVar5 = puVar3, puVar7 != puVar1; puVar7 = puVar7 + 3) {
      while ((*puVar7 & 1) == 0) {
        uVar6 = puVar7[1];
        uVar8 = *puVar7;
        puVar5[2] = puVar7[2];
        puVar3 = puVar5 + 3;
        puVar5[1] = uVar6;
        *puVar5 = uVar8;
        puVar7 = puVar7 + 3;
        puVar5 = puVar3;
        if (puVar1 == puVar7) goto LAB_002919b0;
      }
      uVar8 = puVar7[1];
      __src = (void *)puVar7[2];
      if (uVar8 < 0x17) {
        __dest = (undefined1 *)((long)puVar5 + 1);
        *(char *)puVar5 = (char)((int)uVar8 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar8) {
                    /* try { // try from 002919cc to 002919d3 has its CatchHandler @ 002919e4 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar6 = uVar8 + 0x10 & 0xfffffffffffffff0;
        __dest = (undefined1 *)FUN_0049e770(puVar2,uVar6);
        puVar5[1] = uVar8;
        puVar5[2] = (ulong)__dest;
        *puVar5 = uVar6 | 1;
      }
      memcpy(__dest,__src,uVar8 + 1);
      puVar3 = puVar5 + 3;
    }
LAB_002919b0:
    param_1[1] = puVar3;
  }
  return;
}


