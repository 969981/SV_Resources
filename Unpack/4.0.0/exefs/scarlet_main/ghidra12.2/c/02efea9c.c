/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02efea9c; name: FUN_02efea9c
 */


void FUN_02efea9c(long *param_1,long *param_2)

{
  void *__src;
  void *__src_00;
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  void *__dest;
  ulong local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *(uint *)(param_2 + 1);
  __src = (void *)0x0;
  if (*param_2 != 0) {
    __src = (void *)(*param_2 + (long)param_2);
  }
  if (0 < (int)uVar2 && __src != (void *)0x0) {
    uVar3 = uVar2 - 1 | (int)(uVar2 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    puVar4 = PTR_DAT_047d1a08;
    uVar3 = uVar3 | (int)uVar3 >> 8;
    uVar3 = uVar3 | (int)uVar3 >> 4;
    uVar3 = uVar3 | (int)uVar3 >> 2;
    uVar3 = (uVar3 | (int)uVar3 >> 1) + 1;
    if ((int)uVar3 < (int)uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    local_38 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
    __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    __src_00 = (void *)0x0;
    if (*param_1 != 0) {
      __src_00 = (void *)(*param_1 + (long)param_1);
    }
    memcpy(__dest,__src_00,(long)(int)param_1[1] << 2);
    if (*(int *)((long)param_1 + 0xc) < 0) {
      lVar1 = 0;
      if (*param_1 != 0) {
        lVar1 = *param_1 + (long)param_1;
      }
      (**(code **)(puVar4 + 8))(0,lVar1,0);
    }
    lVar1 = 0;
    if (__dest != (void *)0x0) {
      lVar1 = (long)__dest - (long)param_1;
    }
    *(uint *)(param_1 + 1) = uVar2;
    *(uint *)((long)param_1 + 0xc) = uVar3 | 0x80000000;
    *param_1 = lVar1;
    memcpy((void *)(lVar1 + (long)param_1),__src,(ulong)uVar2 << 2);
  }
  param_1[2] = param_2[2];
  return;
}


