/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00258e34; name: FUN_00258e34
 */


void FUN_00258e34(long *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  size_t __n;
  long lVar2;
  void *__dest;
  ulong uVar3;
  ulong local_98;
  size_t local_90;
  void *local_88;
  undefined1 auStack_80 [32];
  long *local_60 [4];
  ulong *local_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar1 != 0) {
                    /* try { // try from 00258e74 to 00258e7f has its CatchHandler @ 00258f98 */
      FUN_00269fa4(lVar1,0);
    }
    *param_1 = lVar1;
  }
                    /* try { // try from 00258e84 to 00258e8f has its CatchHandler @ 00258fa4 */
  FUN_00267c98(auStack_80,0);
                    /* try { // try from 00258e90 to 00258e9f has its CatchHandler @ 00258f9c */
  FUN_00258fd4(auStack_80,param_3,param_4);
  lVar1 = *param_1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00258f88 to 00258f8f has its CatchHandler @ 00258f90 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_98 | 1);
    if (__n == 0) goto LAB_00258f10;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    local_98 = uVar3 | 1;
    local_90 = __n;
    local_88 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_00258f10:
  *(undefined1 *)((long)__dest + __n) = 0;
  local_40 = &local_98;
  uStack_38 = 0;
                    /* try { // try from 00258f20 to 00258f53 has its CatchHandler @ 00258fa8 */
  FUN_00259dc4(local_60,*(undefined8 *)(lVar1 + 0x20),&local_40);
  lVar2 = local_60[0][1];
  if (lVar2 == 0) {
    lVar2 = FUN_00259ca4(lVar1 + 0x10,&local_98);
    *local_60[0] = lVar2;
    local_60[0][1] = lVar2;
  }
  FUN_002696a0(lVar2 + 0x18,auStack_80);
  if ((local_98 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_88);
  }
  FUN_00267ec4(auStack_80);
  return;
}


