/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c8b84; name: FUN_006c8b84
 */


void FUN_006c8b84(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  void *__src;
  long *plVar1;
  ulong *puVar2;
  undefined1 *__dest;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (long *)FUN_01cf7e20();
  param_1[3] = plVar1;
  if (param_3 != 0) {
    if (param_3 >> 0x3b != 0) {
                    /* try { // try from 006c8c9c to 006c8ca3 has its CatchHandler @ 006c8ca4 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_3 * 0x20;
    puVar2 = (ulong *)(**(code **)(*plVar1 + 0x10))(plVar1,lVar4,8);
    param_1[2] = puVar2 + param_3 * 4;
    *param_1 = puVar2;
    param_1[1] = puVar2;
    do {
      while( true ) {
        puVar3 = puVar2;
        plVar1 = (long *)FUN_01cf7e20();
        puVar3[3] = (ulong)plVar1;
        if ((*param_2 & 1) == 0) break;
        uVar6 = param_2[1];
        __src = (void *)param_2[2];
        if (uVar6 < 0x17) {
          __dest = (undefined1 *)((long)puVar3 + 1);
          *(char *)puVar3 = (char)((int)uVar6 << 1);
        }
        else {
          if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 006c8c94 to 006c8c9b has its CatchHandler @ 006c8cac */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar5 = uVar6 + 0x10 & 0xfffffffffffffff0;
          __dest = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
          puVar3[1] = uVar6;
          puVar3[2] = (ulong)__dest;
          *puVar3 = uVar5 | 1;
        }
        memcpy(__dest,__src,uVar6 + 1);
        param_2 = param_2 + 4;
        lVar4 = lVar4 + -0x20;
        puVar2 = puVar3 + 4;
        if (lVar4 == 0) goto LAB_006c8c7c;
      }
      uVar5 = param_2[1];
      uVar6 = *param_2;
      puVar3[2] = param_2[2];
      puVar3[1] = uVar5;
      *puVar3 = uVar6;
      param_2 = param_2 + 4;
      lVar4 = lVar4 + -0x20;
      puVar2 = puVar3 + 4;
    } while (lVar4 != 0);
LAB_006c8c7c:
    param_1[1] = puVar3 + 4;
  }
  return;
}


