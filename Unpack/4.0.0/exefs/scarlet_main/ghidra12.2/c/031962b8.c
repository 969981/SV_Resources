/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031962b8; name: FUN_031962b8
 */


void FUN_031962b8(undefined8 *param_1,ulong param_2)

{
  char *__s;
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  size_t sVar4;
  void *__dest;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  
  puVar2 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar3 = (ulong *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 << 4);
  puVar1 = PTR_DAT_047d1a08;
  iVar7 = *(int *)(param_1 + 1);
  if (0 < iVar7) {
    puVar5 = (ulong *)*param_1;
    puVar6 = puVar3;
    puVar9 = puVar5;
    iVar8 = iVar7;
    do {
      *puVar6 = 0;
      if (puVar9 != puVar6) {
        __s = (char *)(*puVar9 & 0xfffffffffffffffe);
        if (__s != (char *)0x0) {
          sVar4 = strlen(__s);
          sVar4 = (size_t)((int)sVar4 + 1);
          __dest = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar4);
          memcpy(__dest,__s,sVar4);
          *puVar6 = (ulong)__dest | 1;
        }
        *(char *)(puVar6 + 1) = (char)puVar9[1];
      }
      puVar6 = puVar6 + 2;
      puVar9 = puVar9 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    do {
      if ((*puVar5 & 1) != 0) {
        (**(code **)(puVar1 + 8))(0,*puVar5 - 1,0);
      }
      puVar5 = puVar5 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar1 + 8))(puVar2[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar3;
  return;
}


