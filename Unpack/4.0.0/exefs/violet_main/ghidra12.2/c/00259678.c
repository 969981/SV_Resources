/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00259678; name: FUN_00259678
 */


void FUN_00259678(long *param_1,long *param_2,char *param_3)

{
  size_t __n;
  undefined *puVar1;
  void *__dest;
  ulong uVar2;
  long lVar3;
  ulong local_78;
  size_t local_70;
  void *local_68;
  long local_60 [4];
  ulong *local_38;
  
  lVar3 = *param_2;
  if (lVar3 == 0) goto LAB_00259760;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 002597c0 to 002597c7 has its CatchHandler @ 002597c8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_78 | 1);
    if (__n != 0) goto LAB_002596f8;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
    local_78 = uVar2 | 1;
    local_70 = __n;
    local_68 = __dest;
LAB_002596f8:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  local_38 = &local_78;
                    /* try { // try from 00259718 to 00259727 has its CatchHandler @ 002597d4 */
  FUN_0025998c(local_60,*(undefined8 *)(lVar3 + 0x20),&local_38,0);
  if ((local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  if (local_60[0] != 0) {
    if (*(int *)(*(long *)(local_60[0] + 8) + 0x34) == 10) {
      puVar1 = *(undefined **)(*(long *)(local_60[0] + 8) + 0x28);
    }
    else {
      puVar1 = PTR_DAT_047cc258;
    }
    *param_1 = 0;
    lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar3 != 0) {
                    /* try { // try from 0025978c to 00259797 has its CatchHandler @ 002597cc */
      FUN_00269fa4(lVar3,0);
    }
    *param_1 = lVar3;
                    /* try { // try from 0025979c to 002597a7 has its CatchHandler @ 002597d0 */
    FUN_0026ac80(lVar3,puVar1);
    return;
  }
LAB_00259760:
  *param_1 = 0;
  return;
}


