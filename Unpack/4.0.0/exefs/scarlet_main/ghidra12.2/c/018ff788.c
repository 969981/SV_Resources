/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ff788; name: FUN_018ff788
 */


ulong FUN_018ff788(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x30))
                    (*(long **)(param_1 + 8),param_3 >> 0x18 & 0xff);
  if ((uVar4 & 1) == 0) {
LAB_018ff848:
    param_3 = (ulong)*(uint *)PTR_DAT_047d0e88;
  }
  else {
    FUN_007ec36c(param_2,param_3 & 0xffffffff);
    lVar1 = param_1 + 0x10;
    iVar5 = *(int *)(param_1 + 0x24);
    lVar6 = (long)iVar5;
    uVar3 = (uint)param_3;
    if (*(long *)(param_1 + 0x18) != lVar1) {
      plVar8 = (long *)(*(long *)(param_1 + 0x18) - lVar6);
      do {
        uVar2 = (**(code **)(*plVar8 + 0x18))(plVar8);
        if (uVar3 == uVar2) goto LAB_018ff848;
        if (uVar3 < uVar2) {
          FUN_0078f9e0(lVar1,(long)plVar8 + (long)*(int *)(param_1 + 0x24),
                       *(int *)(param_1 + 0x24) + param_2);
          puVar7 = PTR_DAT_047d0868;
          uVar2 = *(uint *)(PTR_DAT_047d0868 + 0x378);
          uVar3 = FUN_007ec8a0(uVar3 >> 0x18);
          uVar2 = uVar2 & (uVar3 ^ 0xffffffff);
          goto LAB_018ff888;
        }
        iVar5 = *(int *)(param_1 + 0x24);
        plVar8 = (long *)(*(long *)((long)plVar8 + (long)iVar5 + 8) - (long)iVar5);
      } while (plVar8 != (long *)(lVar1 - lVar6));
    }
    FUN_0078f9e0(lVar1,lVar1,param_2 + iVar5);
    puVar7 = PTR_DAT_047d0868;
    uVar2 = *(uint *)(PTR_DAT_047d0868 + 0x378);
    uVar3 = FUN_007ec8a0(uVar3 >> 0x18);
    uVar2 = uVar2 & (uVar3 ^ 0xffffffff);
LAB_018ff888:
    *(uint *)(puVar7 + 0x378) = uVar2;
  }
  return param_3 & 0xffffffff;
}


