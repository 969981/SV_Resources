/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00818b44; name: FUN_00818b44
 */


void FUN_00818b44(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  size_t __n;
  undefined1 *__dest;
  ulong uVar2;
  byte local_460 [16];
  undefined8 local_450;
  char *local_448 [3];
  undefined1 auStack_430 [1024];
  
  FUN_0081953c(local_448,auStack_430,0x400);
  FUN_00818958(local_460,param_2);
                    /* try { // try from 00818b78 to 00818b97 has its CatchHandler @ 00818c38 */
  uVar1 = FUN_00819590(local_448,local_460);
  uVar1 = FUN_00819554(uVar1,&DAT_03c9c9c5);
  FUN_008195dc(uVar1,*(undefined2 *)(param_2 + 0x38));
  if ((local_460[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_450);
  }
  __n = strlen(local_448[0]);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00818c18;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  memcpy(__dest,local_448[0],__n);
LAB_00818c18:
  __dest[__n] = 0;
  return;
}


