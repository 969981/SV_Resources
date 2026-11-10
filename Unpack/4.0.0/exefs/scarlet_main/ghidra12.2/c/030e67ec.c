/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e67ec; name: FUN_030e67ec
 */


void FUN_030e67ec(long *param_1,undefined4 *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  uint *puVar7;
  
  iVar4 = FUN_030e9050();
  if ((int)param_1[1] == iVar4) {
    iVar1 = iVar4 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
      FUN_030e914c(param_1,(long)iVar1);
      iVar4 = (int)param_1[1];
    }
    uVar3 = *param_2;
    puVar5 = (undefined4 *)(*param_1 + (long)iVar4 * 0x18);
    *(undefined8 *)(puVar5 + 2) = 0;
    *(undefined8 *)(puVar5 + 4) = 0x8000000000000000;
    *puVar5 = uVar3;
    FUN_030e9334(param_3,PTR_PTR_047d1a50);
    *(long *)(puVar5 + 2) = *param_3;
    puVar5[4] = (int)param_3[1];
    puVar5[5] = *(undefined4 *)((long)param_3 + 0xc);
    *param_3 = 0;
    param_3[1] = 0;
    *(int *)(param_1 + 1) = iVar1;
  }
  else {
    plVar2 = (long *)(*param_1 + (long)iVar4 * 0x18 + 8);
    if (plVar2 != param_3) {
      lVar6 = *param_1 + (long)iVar4 * 0x18;
      puVar7 = (uint *)(lVar6 + 0x14);
      puVar5 = (undefined4 *)(lVar6 + 0x10);
      *puVar5 = 0;
      if ((-1 < (int)*puVar7) && (*plVar2 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,*plVar2,(ulong)*puVar7 << 3);
      }
      *plVar2 = 0;
      *puVar5 = 0;
      *puVar7 = 0x80000000;
      FUN_030e9334(param_3,PTR_PTR_047d1a50);
      *plVar2 = *param_3;
      *puVar5 = (int)param_3[1];
      *puVar7 = *(uint *)((long)param_3 + 0xc);
      *param_3 = 0;
      param_3[1] = 0;
    }
  }
  return;
}


