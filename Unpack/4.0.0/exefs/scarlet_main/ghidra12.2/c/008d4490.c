/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d4490; name: FUN_008d4490
 */


void FUN_008d4490(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *__s;
  long *plVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_047d2560;
  plVar3 = *(long **)PTR_DAT_047d2530;
  uVar4 = (-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3) + 0x1f &
          0xffffffffffffffe0;
  *(int *)PTR_DAT_047d2560 = (int)param_1;
  __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,0x80);
  puVar1 = PTR_DAT_047d2538;
  *(void **)PTR_DAT_047d2558 = __s;
  *(ulong *)puVar1 = *(long *)puVar1 + uVar4;
  memset(__s,0,(long)*(int *)puVar2 << 3);
  *(undefined4 *)PTR_DAT_047d2550 = 0;
  return;
}


