/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03048720; name: FUN_03048720
 */


void FUN_03048720(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  void *__dest;
  void *__dest_00;
  void *__src;
  long lVar5;
  
  puVar4 = PTR_PTR_047d1a50;
  if ((int)param_1[1] < (int)param_2) {
    uVar2 = (int)param_1[1] * 2;
    if ((int)param_2 <= (int)uVar2) {
      param_2 = uVar2;
    }
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                               (PTR_PTR_047d1a50,
                                -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3
                               );
    if ((__dest != (void *)0x0) && (lVar5 = *param_1, lVar5 != 0)) {
      if (*(int *)((long)param_1 + 0x14) != 0) {
        iVar1 = *(int *)((long)param_1 + 0xc);
        iVar3 = (int)param_1[2];
        if (iVar1 < iVar3) {
          __src = (void *)(lVar5 + (long)iVar1 * 8);
          __dest_00 = __dest;
          iVar3 = *(int *)((long)param_1 + 0x14);
        }
        else {
          uVar2 = (int)param_1[1] - iVar1;
          memcpy(__dest,(void *)(lVar5 + (long)iVar1 * 8),
                 -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
          __src = (void *)*param_1;
          __dest_00 = (void *)((long)__dest + (long)(int)uVar2 * 8);
        }
        memcpy(__dest_00,__src,(long)iVar3 << 3);
      }
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x14);
    }
    if ((int)param_1[1] != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(puVar4[8],*param_1,0);
      *(undefined4 *)(param_1 + 1) = 0;
      *param_1 = 0;
    }
    *param_1 = (long)__dest;
    *(uint *)(param_1 + 1) = param_2;
  }
  return;
}


