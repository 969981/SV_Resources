/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c01e0; name: FUN_031c01e0
 */


void FUN_031c01e0(void *param_1,void *param_2,int param_3,uint *param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  void *pvVar7;
  long lVar8;
  void *__dest;
  
  uVar2 = *param_4;
  pvVar1 = (void *)((long)param_1 + (long)param_3);
  *param_4 = uVar2 + 0x3fde80f;
  if (0xfc0217f0 < uVar2) {
    iVar3 = *(int *)PTR_DAT_047e4f38;
    lVar5 = tpidr_el0;
    lVar8 = *(long *)(lVar5 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar8;
    }
    if (*(long *)(lVar8 + (long)iVar3 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
  }
  puVar6 = PTR_DAT_047e4f38;
  if ((void *)((long)param_1 + 0x8ad1U) <= pvVar1) {
    lVar5 = tpidr_el0;
    pvVar7 = (void *)((long)param_1 + 0x8ad1U);
    __dest = param_1;
    do {
      param_1 = pvVar7;
      memcpy(__dest,param_2,0x8ad1);
      uVar2 = *param_4;
      param_2 = (void *)((long)param_2 + 0x8ad1);
      *param_4 = uVar2 + 0x3fff96e6;
      if (0xc0006919 < uVar2) {
        iVar3 = *(int *)puVar6;
        lVar8 = *(long *)(lVar5 + 0x1000b8);
        if (lVar8 == 0) {
          lVar8 = FUN_00e5d3b4();
          *(long *)(lVar5 + 0x1000b8) = lVar8;
        }
        if (*(long *)(lVar8 + (long)iVar3 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
      pvVar7 = (void *)((long)param_1 + 0x8ad1U);
      __dest = param_1;
    } while ((void *)((long)param_1 + 0x8ad1U) <= pvVar1);
  }
  memcpy(param_1,param_2,(long)pvVar1 - (long)param_1 & 0xffffffff);
  uVar2 = *param_4;
  uVar4 = (int)((long)pvVar1 - (long)param_1) * 0x7606;
  *param_4 = uVar2 + uVar4;
  if (CARRY4(uVar2,uVar4)) {
    iVar3 = *(int *)PTR_DAT_047e4f38;
    lVar5 = tpidr_el0;
    lVar8 = *(long *)(lVar5 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar8;
    }
    if (*(long *)(lVar8 + (long)iVar3 * 8 + 1000) != 0) {
      FUN_03231bdc();
      return;
    }
  }
  return;
}


