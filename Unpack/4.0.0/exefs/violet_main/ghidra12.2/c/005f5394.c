/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f5394; name: FUN_005f5394
 */


void FUN_005f5394(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  size_t __n;
  byte *pbVar3;
  ulong uVar4;
  void *__dest;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  FUN_002673a0(&local_80,pbVar3);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[3] = uStack_48;
  param_1[2] = local_50;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  }
  puVar1 = PTR_DAT_047cc258;
  if (*(undefined **)(param_2 + 0x20) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x20);
  }
  FUN_00258750(param_1 + 4,puVar1);
  pbVar3 = *(byte **)(param_2 + 0x18);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  plVar2 = (long *)FUN_01cf7e20();
  param_1[8] = plVar2;
  __n = strlen((char *)pbVar3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 005f54f0 to 005f54f7 has its CatchHandler @ 005f54f8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x29);
    *(char *)(param_1 + 5) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_005f54b8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
    param_1[5] = uVar4 | 1;
    param_1[6] = __n;
    param_1[7] = __dest;
  }
  memcpy(__dest,pbVar3,__n);
LAB_005f54b8:
  *(undefined1 *)((long)__dest + __n) = 0;
  puVar1 = PTR_DAT_047ceba8;
  if (*(undefined **)(param_2 + 0x28) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x28);
  }
  FUN_005e0830(param_1 + 9,puVar1);
  return;
}


