/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f0544; name: FUN_002f0544
 */


void FUN_002f0544(undefined4 *param_1,char *param_2,ulong param_3)

{
  size_t sVar1;
  void *__src;
  size_t __n;
  undefined4 uVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong local_58;
  size_t sStack_50;
  void *local_48;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)__n << 1));
    pvVar4 = (void *)((ulong)&local_58 | 1);
    if (__n == 0) goto LAB_002f05d0;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
    local_58 = uVar5 | 1;
    sStack_50 = __n;
    local_48 = pvVar4;
  }
  memcpy(pvVar4,param_2,__n);
LAB_002f05d0:
  __src = local_48;
  sVar1 = sStack_50;
  uVar5 = local_58;
  uVar2 = 3;
  if ((param_3 & 1) == 0) {
    uVar2 = 4;
  }
  *(undefined1 *)((long)pvVar4 + __n) = 0;
  *param_1 = uVar2;
  if ((local_58 & 1) == 0) {
    *(void **)(param_1 + 6) = local_48;
    *(size_t *)(param_1 + 4) = sStack_50;
    *(ulong *)(param_1 + 2) = local_58;
  }
  else {
    if (sStack_50 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 2) = (char)((int)sStack_50 << 1);
    }
    else {
      if (0xffffffffffffffef < sStack_50) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002f0698 to 002f069b has its CatchHandler @ 002f069c */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar3 = sStack_50 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
      *(size_t *)(param_1 + 4) = sVar1;
      *(void **)(param_1 + 6) = pvVar4;
      *(ulong *)(param_1 + 2) = uVar3 | 1;
    }
    memcpy(pvVar4,__src,sVar1 + 1);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined4 **)(param_1 + 8) = param_1 + 10;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  if ((uVar5 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return;
}


