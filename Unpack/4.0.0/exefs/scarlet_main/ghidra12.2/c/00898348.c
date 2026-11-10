/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00898348; name: FUN_00898348
 */


void FUN_00898348(undefined8 *param_1)

{
  void *pvVar1;
  int iVar2;
  void *__s;
  size_t __n;
  
  iVar2 = *(int *)PTR_DAT_047d2288;
  __s = (void *)param_1[5];
  *param_1 = __s;
  __n = (long)iVar2 * 8;
  *(int *)((long)param_1 + 0xc) = iVar2;
  pvVar1 = (void *)((long)__s + __n);
  memset(__s,0,__n);
  *(void **)pvVar1 = pvVar1;
  *(void **)((long)pvVar1 + 8) = pvVar1;
  param_1[2] = pvVar1;
  FUN_00899d28((long)pvVar1 + 0x10,(long)pvVar1 + 0x40);
  param_1[4] = (long)pvVar1 + 0x10;
  return;
}


