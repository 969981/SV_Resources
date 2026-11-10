/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b40b8; name: FUN_033b40b8
 */


int FUN_033b40b8(long param_1,uint param_2)

{
  void *__dest;
  int iVar1;
  void *__src;
  int iVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  size_t __n;
  long *plVar8;
  size_t __n_00;
  long lVar9;
  
  plVar7 = (long *)(param_1 + 0x28);
  lVar9 = *plVar7;
  if ((int)param_2 < 0x101) {
    param_2 = 0x100;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  lVar6 = (long)iVar1 + (long)(int)param_2 + 1;
  iVar2 = (int)lVar6;
  lVar5 = lVar9;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar2) {
    FUN_030b4a20(plVar7,PTR_PTR_047d1a50,lVar6);
    lVar5 = *plVar7;
  }
  plVar8 = *(long **)(param_1 + 0x38);
  *(int *)(param_1 + 0x30) = iVar2;
  __dest = (void *)(lVar5 + iVar1);
  __src = (void *)*plVar8;
  __n_00 = plVar8[1] - (long)__src;
  __n = (size_t)param_2;
  if ((long)__n_00 < (long)(ulong)param_2) {
    plVar3 = (long *)plVar8[7];
    if (plVar3 != (long *)0x0) {
      iVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,plVar8,__dest,__n);
      goto LAB_033b4194;
    }
    memcpy(__dest,__src,__n_00);
    lVar6 = plVar8[1];
    __n = __n_00;
  }
  else {
    memcpy(__dest,__src,__n);
    lVar6 = *plVar8 + __n;
  }
  iVar2 = (int)__n;
  *plVar8 = lVar6;
LAB_033b4194:
  iVar2 = iVar1 + iVar2;
  *(undefined1 *)(*(long *)(param_1 + 0x28) + (long)iVar2) = 0;
  iVar4 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) != iVar2) {
    *(int *)(param_1 + 0x30) = iVar2;
    iVar4 = iVar2;
  }
  if (*plVar7 != lVar9) {
    *(long *)(param_1 + 0x20) = *plVar7 + (*(long *)(param_1 + 0x20) - lVar9);
  }
  return iVar4 - iVar1;
}


