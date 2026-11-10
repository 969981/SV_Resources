/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002592bc; name: FUN_002592bc
 */


void FUN_002592bc(long *param_1,char *param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  size_t __n;
  long lVar4;
  void *__dest;
  ulong uVar5;
  ulong local_98;
  size_t local_90;
  void *local_88;
  undefined1 auStack_80 [8];
  ulong local_78;
  undefined8 local_70;
  int local_64;
  long *local_60 [4];
  ulong *local_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar1 != 0) {
                    /* try { // try from 002592f8 to 00259303 has its CatchHandler @ 00259498 */
      FUN_00269fa4(lVar1,0);
    }
    *param_1 = lVar1;
  }
                    /* try { // try from 00259308 to 00259313 has its CatchHandler @ 0025949c */
  FUN_00267c98(auStack_80,0);
  if (local_64 == 10) {
    lVar1 = *param_3;
    local_64 = 10;
    uVar3 = local_70;
  }
  else {
                    /* try { // try from 00259330 to 0025934f has its CatchHandler @ 002594a0 */
    FUN_002679fc(auStack_80);
    local_64 = 10;
    puVar2 = (ulong *)(local_78 & 0xfffffffffffffffe);
    if ((local_78 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    uVar3 = FUN_0026b02c(puVar2);
    lVar1 = *param_3;
  }
  local_70 = uVar3;
  if (lVar1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar1 != 0) {
                    /* try { // try from 00259378 to 00259383 has its CatchHandler @ 00259494 */
      FUN_00269fa4(lVar1,0);
    }
    *param_3 = lVar1;
  }
                    /* try { // try from 00259388 to 00259393 has its CatchHandler @ 002594a0 */
  FUN_0026ac80(uVar3,lVar1);
  lVar1 = *param_1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00259484 to 0025948b has its CatchHandler @ 0025948c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_98 | 1);
    if (__n == 0) goto LAB_00259404;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
    local_98 = uVar5 | 1;
    local_90 = __n;
    local_88 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_00259404:
  *(undefined1 *)((long)__dest + __n) = 0;
  local_40 = &local_98;
  uStack_38 = 0;
                    /* try { // try from 00259414 to 00259447 has its CatchHandler @ 002594a8 */
  FUN_00259dc4(local_60,*(undefined8 *)(lVar1 + 0x20),&local_40);
  lVar4 = local_60[0][1];
  if (lVar4 == 0) {
    lVar4 = FUN_00259ca4(lVar1 + 0x10,&local_98);
    *local_60[0] = lVar4;
    local_60[0][1] = lVar4;
  }
  FUN_002696a0(lVar4 + 0x18,auStack_80);
  if ((local_98 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_88);
  }
  FUN_00267ec4(auStack_80);
  return;
}


