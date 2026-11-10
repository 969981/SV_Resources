/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002588cc; name: FUN_002588cc
 */


void FUN_002588cc(long *param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  size_t __n;
  long lVar3;
  void *__dest;
  ulong uVar4;
  ulong local_88;
  size_t local_80;
  void *local_78;
  long *local_70 [4];
  ulong *local_50;
  undefined8 uStack_48;
  
  if (*param_1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar1 != 0) {
                    /* try { // try from 0025890c to 00258917 has its CatchHandler @ 00258a18 */
      FUN_00269fa4(lVar1,0);
    }
    *param_1 = lVar1;
  }
  uVar2 = FUN_00263770(param_3);
  lVar1 = *param_1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00258a0c to 00258a13 has its CatchHandler @ 00258a14 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_88 | 1);
    if (__n == 0) goto LAB_00258998;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    local_88 = uVar4 | 1;
    local_80 = __n;
    local_78 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_00258998:
  *(undefined1 *)((long)__dest + __n) = 0;
  local_50 = &local_88;
  uStack_48 = 0;
                    /* try { // try from 002589a8 to 002589db has its CatchHandler @ 00258a1c */
  FUN_00259dc4(local_70,*(undefined8 *)(lVar1 + 0x20),&local_50);
  lVar3 = local_70[0][1];
  if (lVar3 == 0) {
    lVar3 = FUN_00259ca4(lVar1 + 0x10,&local_88);
    *local_70[0] = lVar3;
    local_70[0][1] = lVar3;
  }
  FUN_002696a0(lVar3 + 0x18,uVar2);
  if ((local_88 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_78);
  }
  return;
}


