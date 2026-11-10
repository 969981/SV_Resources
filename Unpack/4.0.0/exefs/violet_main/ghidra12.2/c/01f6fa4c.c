/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6fa4c; name: thunk_FUN_027c1d20
 */


void thunk_FUN_027c1d20(long *param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  size_t __n;
  long lVar2;
  void *__dest;
  ulong uVar3;
  ulong uStack_98;
  size_t sStack_90;
  void *pvStack_88;
  undefined1 auStack_80 [32];
  long *aplStack_60 [4];
  ulong *puStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar1 != 0) {
      FUN_00269fa4(lVar1,0);
    }
    *param_1 = lVar1;
  }
  FUN_00267c98(auStack_80,0);
  FUN_00258ce4(auStack_80,param_3);
  lVar1 = *param_1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    uStack_98 = CONCAT71(uStack_98._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&uStack_98 | 1);
    if (__n == 0) goto LAB_027c1df4;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    uStack_98 = uVar3 | 1;
    sStack_90 = __n;
    pvStack_88 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_027c1df4:
  *(undefined1 *)((long)__dest + __n) = 0;
  puStack_40 = &uStack_98;
  uStack_38 = 0;
  FUN_00259dc4(aplStack_60,*(undefined8 *)(lVar1 + 0x20),&puStack_40);
  lVar2 = aplStack_60[0][1];
  if (lVar2 == 0) {
    lVar2 = FUN_00259ca4(lVar1 + 0x10,&uStack_98);
    *aplStack_60[0] = lVar2;
    aplStack_60[0][1] = lVar2;
  }
  FUN_002696a0(lVar2 + 0x18,auStack_80);
  if ((uStack_98 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,pvStack_88);
  }
  FUN_00267ec4(auStack_80);
  return;
}


