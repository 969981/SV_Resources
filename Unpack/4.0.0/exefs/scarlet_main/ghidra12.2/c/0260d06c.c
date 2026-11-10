/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0260d06c; name: FUN_0260d06c
 */


void FUN_0260d06c(ulong *param_1,long *param_2,long param_3)

{
  char *__s;
  uint *puVar1;
  size_t __n;
  int *piVar2;
  ulong uVar3;
  ushort *puVar4;
  int *piVar5;
  void *__dest;
  undefined8 local_38;
  
  piVar2 = (int *)param_2[1];
  if (piVar2 == (int *)0x0) {
LAB_0260d1ac:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar3 == 0)) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = (uint *)((long)piVar2 + uVar3);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  }
  local_38 = *(undefined8 *)(param_3 + 8);
  puVar1 = bsearch(&local_38,puVar1 + 1,(ulong)*puVar1,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (puVar1 == (uint *)0x0) goto LAB_0260d1ac;
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar4 = (ushort *)((long)piVar2 - (long)*piVar2);
  if (*puVar4 < 7) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)0x0;
    if ((ulong)puVar4[3] != 0) {
      puVar1 = (uint *)((long)piVar2 + (ulong)puVar4[3]);
      piVar5 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  if (((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
      (uVar3 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar3 == 0)) ||
     (*(char *)((long)piVar5 + uVar3) != '\r')) goto LAB_0260d1ac;
  if ((*puVar4 < 0xb) || ((ulong)puVar4[5] == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar4[5]);
  }
  if (*param_2 == 0) goto LAB_0260d1ac;
  puVar1 = (uint *)(*param_2 + uVar3);
  __s = (char *)((long)puVar1 + (ulong)*puVar1 + 4);
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0260d19c;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_0260d19c:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


