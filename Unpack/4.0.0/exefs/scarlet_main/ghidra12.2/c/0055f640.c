/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0055f640; name: FUN_0055f640
 */


void FUN_0055f640(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  void *__src;
  long *plVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  plVar2 = *(long **)(param_2 + 0x10);
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0xb8,8);
  *param_1 = lVar3;
  param_1[1] = (long)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 2) = 0;
  pbVar5 = (byte *)*param_4;
  plVar2 = (long *)FUN_01cf7e20();
  *(long **)(lVar3 + 0x38) = plVar2;
  if ((*pbVar5 & 1) == 0) {
    uVar7 = *(undefined8 *)(pbVar5 + 8);
    uVar6 = *(undefined8 *)pbVar5;
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(pbVar5 + 0x10);
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    *(undefined8 *)(lVar3 + 0x20) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(pbVar5 + 8);
    __src = *(void **)(pbVar5 + 0x10);
    if (uVar1 < 0x17) {
      __dest = (void *)(lVar3 + 0x21);
      *(char *)(lVar3 + 0x20) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 0055f720 to 0055f727 has its CatchHandler @ 0055f728 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
      *(ulong *)(lVar3 + 0x28) = uVar1;
      *(void **)(lVar3 + 0x30) = __dest;
      *(ulong *)(lVar3 + 0x20) = uVar4 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  FUN_0056075c(lVar3 + 0x40);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


