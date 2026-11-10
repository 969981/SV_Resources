/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005e9358; name: FUN_005e9358
 */


void FUN_005e9358(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  size_t __n;
  byte *pbVar3;
  void *__dest;
  ulong uVar4;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  long *plStack_88;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_047ceae8;
  if (*(undefined **)(param_2 + 0x20) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x20);
  }
  FUN_005f5394(param_1,puVar1);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  FUN_005f6de0(&local_a0,pbVar3);
  *(undefined8 *)(param_1 + 0x70) = uStack_58;
  *(undefined8 *)(param_1 + 0x68) = local_60;
  *(undefined8 *)(param_1 + 0x80) = uStack_48;
  *(undefined8 *)(param_1 + 0x78) = local_50;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if ((local_80 & 1) == 0) {
    if ((local_a0 & 1) != 0) goto LAB_005e9408;
LAB_005e93d0:
    pbVar3 = *(byte **)(param_2 + 0x18);
    if ((*pbVar3 & 1) != 0) goto LAB_005e9430;
LAB_005e93dc:
    pbVar3 = pbVar3 + 1;
  }
  else {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
    if ((local_a0 & 1) == 0) goto LAB_005e93d0;
LAB_005e9408:
    (**(code **)(*plStack_88 + 0x18))
              (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
    pbVar3 = *(byte **)(param_2 + 0x18);
    if ((*pbVar3 & 1) == 0) goto LAB_005e93dc;
LAB_005e9430:
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  plVar2 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0xa0) = plVar2;
  __n = strlen((char *)pbVar3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 005e94cc to 005e94d3 has its CatchHandler @ 005e94d4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)(param_1 + 0x89);
    *(char *)(param_1 + 0x88) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_005e94b0;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
    *(ulong *)(param_1 + 0x88) = uVar4 | 1;
    *(size_t *)(param_1 + 0x90) = __n;
    *(void **)(param_1 + 0x98) = __dest;
  }
  memcpy(__dest,pbVar3,__n);
LAB_005e94b0:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


