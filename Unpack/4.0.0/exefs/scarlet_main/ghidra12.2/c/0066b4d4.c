/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0066b4d4; name: FUN_0066b4d4
 */


void FUN_0066b4d4(undefined8 *param_1,long param_2)

{
  void *__src;
  size_t __n;
  long lVar1;
  undefined8 *puVar2;
  void *__dest;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long *local_48;
  
  local_48 = *(long **)(param_2 + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  __src = (void *)(param_2 + 0x11);
  __n = (ulong)(*(byte *)(param_2 + 0x10) >> 1);
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    __src = *(void **)(param_2 + 0x20);
    __n = *(size_t *)(param_2 + 0x18);
  }
  if (0xffffffffffffffef < __n + 1) {
                    /* try { // try from 0066b608 to 0066b60f has its CatchHandler @ 0066b614 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n + 1 < 0x17) {
    local_60 = (ulong)(byte)((int)__n << 1);
    __dest = (void *)((ulong)&local_60 | 1);
    if (__n == 0) goto LAB_0066b580;
  }
  else {
    uVar3 = __n + 0x11 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*local_48 + 0x10))(local_48,uVar3,1);
    local_60 = uVar3 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,__src,__n);
LAB_0066b580:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0066b584 to 0066b597 has its CatchHandler @ 0066b614 */
  FUN_0020f8d0(&local_60,&DAT_03bdfb3b,1);
  uVar3 = (ulong)(*(byte *)(param_2 + 0x30) >> 1);
  lVar1 = param_2 + 0x31;
  if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 0x38);
    lVar1 = *(long *)(param_2 + 0x40);
  }
                    /* try { // try from 0066b5b4 to 0066b5bb has its CatchHandler @ 0066b610 */
  puVar2 = (undefined8 *)FUN_0020f8d0(&local_60,lVar1,uVar3);
  uVar4 = *puVar2;
  uVar6 = puVar2[3];
  uVar5 = puVar2[2];
  param_1[1] = puVar2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  return;
}


