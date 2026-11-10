/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002adbb0; name: FUN_002adbb0
 */


void FUN_002adbb0(long *param_1,ulong param_2,byte *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  void *__src;
  undefined *puVar4;
  long lVar5;
  undefined1 *__dest;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar4 = PTR_FUN_047cba38;
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* try { // try from 002adcd8 to 002adcdf has its CatchHandler @ 002adce0 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_2 * 0x18;
    lVar5 = FUN_0049e770(PTR_FUN_047cba38,lVar6);
    lVar8 = 0;
    *param_1 = lVar5;
    param_1[1] = lVar5;
    param_1[2] = lVar5 + lVar6;
    do {
      if ((*param_3 & 1) == 0) {
        uVar10 = *(undefined8 *)(param_3 + 8);
        uVar9 = *(undefined8 *)param_3;
        puVar1 = (undefined8 *)(lVar5 + lVar8);
        puVar1[2] = *(undefined8 *)(param_3 + 0x10);
        puVar1[1] = uVar10;
        *puVar1 = uVar9;
      }
      else {
        uVar3 = *(ulong *)(param_3 + 8);
        __src = *(void **)(param_3 + 0x10);
        if (uVar3 < 0x17) {
          __dest = (undefined1 *)(lVar5 + lVar8) + 1;
          *(undefined1 *)(lVar5 + lVar8) = (char)((int)uVar3 << 1);
        }
        else {
          if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002adcd4 to 002adcd7 has its CatchHandler @ 002adce8 */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar7 = uVar3 + 0x10 & 0xfffffffffffffff0;
          __dest = (undefined1 *)FUN_0049e770(puVar4,uVar7);
          puVar2 = (ulong *)(lVar5 + lVar8);
          *puVar2 = uVar7 | 1;
          puVar2[1] = uVar3;
          puVar2[2] = (ulong)__dest;
        }
        memcpy(__dest,__src,uVar3 + 1);
      }
      lVar8 = lVar8 + 0x18;
    } while (lVar6 != lVar8);
    param_1[1] = lVar5 + lVar6;
  }
  return;
}


