/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0030e03c; name: FUN_0030e03c
 */


void FUN_0030e03c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  void *__ptr_04;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x20);
  uVar5 = (ulong)*(uint *)(lVar3 + 0xdd8);
  uVar4 = (ulong)*(uint *)(lVar3 + 0xda0);
  __ptr = (void *)FUN_0030e190(*(undefined8 *)(param_1 + 0x20),
                               *(undefined8 *)(*(long *)(param_1 + 8) + 8));
  uVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + *(long *)(*(long *)(param_1 + 8) + 0x28);
  uVar2 = 0x7fffffff;
  if ((long)uVar1 < 0x80000000) {
    uVar2 = uVar1 & 0xffffffff;
  }
  __ptr_00 = (void *)FUN_0030e190(*(undefined8 *)(param_1 + 0x28),uVar2);
  __ptr_01 = (void *)FUN_0030e190(*(undefined8 *)(param_1 + 0x30),
                                  *(undefined8 *)(*(long *)(param_1 + 8) + 0x18));
  if (*(long *)(param_1 + 0x10) == 0) {
    __ptr_02 = (void *)FUN_0038d3c0(&DAT_03c886bc,0x20,0x1e);
    __ptr_03 = (void *)FUN_0038d3c0(&DAT_03c886bc,0x20,0x1e);
    __ptr_04 = (void *)FUN_0038d3c0(&DAT_03c886bc,0x20,0x1e);
  }
  else {
    __ptr_02 = (void *)FUN_0030e190(*(long *)(param_1 + 0x38) + uVar4,
                                    *(long *)(*(long *)(param_1 + 0x10) + 8) + uVar4);
    __ptr_03 = (void *)FUN_0030e190(*(long *)(param_1 + 0x40) + uVar5,
                                    *(long *)(*(long *)(param_1 + 0x10) + 0x10) + uVar5);
    __ptr_04 = (void *)FUN_0030e190(*(long *)(param_1 + 0x48) + uVar5,
                                    *(long *)(*(long *)(param_1 + 0x10) + 0x18) + uVar5);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  free(__ptr_04);
  return;
}


