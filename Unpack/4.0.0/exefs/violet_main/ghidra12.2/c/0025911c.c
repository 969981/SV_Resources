/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025911c; name: FUN_0025911c
 */


void FUN_0025911c(long *param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  size_t __n;
  long lVar3;
  void *__dest;
  ulong uVar4;
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
                    /* try { // try from 00259158 to 00259163 has its CatchHandler @ 00259280 */
      FUN_00269fa4(lVar1,0);
    }
    *param_1 = lVar1;
  }
                    /* try { // try from 00259168 to 00259173 has its CatchHandler @ 0025928c */
  FUN_00267c98(auStack_80,0);
  uVar2 = FUN_00254f68(param_3);
                    /* try { // try from 00259180 to 00259187 has its CatchHandler @ 00259284 */
  FUN_00267b88(auStack_80,uVar2);
  lVar1 = *param_1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00259270 to 00259277 has its CatchHandler @ 00259278 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_98 | 1);
    if (__n == 0) goto LAB_002591f8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    local_98 = uVar4 | 1;
    local_90 = __n;
    local_88 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_002591f8:
  *(undefined1 *)((long)__dest + __n) = 0;
  local_40 = &local_98;
  uStack_38 = 0;
                    /* try { // try from 00259208 to 0025923b has its CatchHandler @ 00259290 */
  FUN_00259dc4(local_60,*(undefined8 *)(lVar1 + 0x20),&local_40);
  lVar3 = local_60[0][1];
  if (lVar3 == 0) {
    lVar3 = FUN_00259ca4(lVar1 + 0x10,&local_98);
    *local_60[0] = lVar3;
    local_60[0][1] = lVar3;
  }
  FUN_002696a0(lVar3 + 0x18,auStack_80);
  if ((local_98 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_88);
  }
  FUN_00267ec4(auStack_80);
  return;
}


