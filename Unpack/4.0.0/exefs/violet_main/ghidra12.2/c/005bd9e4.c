/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005bd9e4; name: FUN_005bd9e4
 */


void FUN_005bd9e4(long param_1,char *param_2)

{
  size_t __n;
  undefined *puVar1;
  ulong *puVar2;
  void *__dest;
  ulong uVar3;
  ulong local_48;
  size_t local_40;
  void *local_38;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_48 = CONCAT71(local_48._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_48 | 1);
    if (__n == 0) goto LAB_005bda68;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    local_48 = uVar3 | 1;
    local_40 = __n;
    local_38 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_005bda68:
  *(undefined1 *)((long)__dest + __n) = 0;
  puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  puVar1 = *(undefined **)(param_1 + 0x10);
  if (puVar1 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_1 + 0x10),puVar2,&local_48);
  }
  else {
                    /* try { // try from 005bda8c to 005bdaa3 has its CatchHandler @ 005bdae0 */
    FUN_001fcec0(puVar1,&local_48);
  }
  if ((local_48 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_38);
  }
  return;
}


