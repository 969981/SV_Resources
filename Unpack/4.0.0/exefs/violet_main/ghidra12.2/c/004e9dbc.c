/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e9dbc; name: FUN_004e9dbc
 */


undefined8
FUN_004e9dbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong __n;
  void *__dest;
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  pbVar2 = *(byte **)(param_3 + 0x20);
  bVar1 = *pbVar2;
  local_60 = param_4;
  local_58 = param_5;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) {
      return 1;
    }
    if (pbVar2[1] != 0x2e) {
      return 1;
    }
    uVar3 = (ulong)(bVar1 >> 1);
    if (bVar1 >> 1 == 0) {
LAB_004e9f48:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    pbVar2 = pbVar2 + 1;
  }
  else {
    if (*(long *)(pbVar2 + 8) == 0) {
      return 1;
    }
    if (**(char **)(pbVar2 + 0x10) != '.') {
      return 1;
    }
    uVar3 = *(ulong *)(pbVar2 + 8);
    if (uVar3 == 0) goto LAB_004e9f48;
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  __n = uVar3 - 1;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_98 | 1);
    if (__n == 0) goto LAB_004e9ea8;
  }
  else {
    uVar3 = uVar3 + 0xf & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    local_98 = uVar3 | 1;
    uStack_90 = __n;
    local_88 = __dest;
  }
  memcpy(__dest,pbVar2 + 1,__n);
LAB_004e9ea8:
  uStack_78 = uStack_90;
  local_80 = local_98;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_68 = *(undefined4 *)(param_3 + 0x48);
  local_98 = 0;
  local_70 = local_88;
  uStack_90 = 0;
  local_88 = (void *)0x0;
                    /* try { // try from 004e9ed0 to 004e9edb has its CatchHandler @ 004e9f58 */
  uVar3 = FUN_004ea8f0(param_1 + 0x30,&local_80,&local_60);
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  if ((local_98 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_88);
  }
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  return 1;
}


