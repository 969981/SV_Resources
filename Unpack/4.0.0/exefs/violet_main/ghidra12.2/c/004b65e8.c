/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004b65e8; name: FUN_004b65e8
 */


void FUN_004b65e8(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  long lVar5;
  size_t __n;
  ulong uVar6;
  void *__dest;
  long lVar7;
  void *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  
  local_48 = (undefined4 *)0x0;
  local_58 = (void *)0x0;
  local_50 = (undefined4 *)0x0;
                    /* try { // try from 004b6618 to 004b6623 has its CatchHandler @ 004b6730 */
  FUN_004a9604(param_3,&local_58);
  if (local_50 == local_48) {
    lVar7 = (long)local_50 - (long)local_58 >> 2;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar6 = (long)local_48 - (long)local_58 >> 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x1ffffffffffffffe < (ulong)((long)local_48 - (long)local_58 >> 2)) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 2);
    }
    puVar2 = (undefined4 *)(lVar5 + lVar7 * 4);
    __n = (long)local_50 - (long)local_58;
    puVar3 = (undefined4 *)(lVar5 + uVar1 * 4);
    *puVar2 = param_4;
    __dest = (void *)((long)puVar2 - __n);
    if (0 < (long)__n) {
      memcpy(__dest,local_58,__n);
    }
    bVar4 = local_58 != (void *)0x0;
    local_58 = __dest;
    local_50 = puVar2 + 1;
    local_48 = puVar3;
    if (bVar4) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  else {
    *local_50 = param_4;
    local_50 = local_50 + 1;
  }
                    /* try { // try from 004b66dc to 004b672f has its CatchHandler @ 004b6730 */
  FUN_004c6194(param_1,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 8),param_2,param_3,
               &local_58,param_5);
  if (local_58 != (void *)0x0) {
    local_50 = local_58;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


