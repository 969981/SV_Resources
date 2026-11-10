/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01773ea0; name: FUN_01773ea0
 */


undefined8 FUN_01773ea0(long param_1,long *param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x30) + 0xd8);
  plVar4 = *(long **)(*(long *)(param_1 + 0x30) + 0xe0);
  plVar6 = plVar2;
  if ((plVar2 != plVar4) && (*plVar2 != *param_2)) {
    do {
      plVar6 = plVar6 + 0xc;
      if (plVar4 == plVar6) {
        plVar6 = plVar4;
        goto LAB_01773ee4;
      }
    } while (*plVar6 != *param_2);
  }
LAB_01773ee4:
  if (plVar4 != plVar6) {
    iVar5 = (int)((ulong)((long)plVar6 - (long)plVar2) >> 5) * -0x55555555;
    lVar3 = plVar2[(long)iVar5 * 0xc + 4];
    lVar7 = plVar2[(long)iVar5 * 0xc + 5];
    lVar9 = lVar3;
    if ((lVar3 != lVar7) && (lVar10 = lVar3, *(int *)(lVar3 + 0x20) != param_3)) {
      do {
        lVar9 = lVar10 + 0x28;
        if (lVar7 == lVar9) {
          lVar9 = lVar7;
          goto LAB_01773f24;
        }
        piVar1 = (int *)(lVar10 + 0x48);
        lVar10 = lVar9;
      } while (*piVar1 != param_3);
    }
LAB_01773f24:
    if (lVar7 != lVar9) {
      lVar10 = (long)iVar5;
      lVar7 = *(long *)(param_1 + 0x38);
      uVar8 = (ulong)*(byte *)((long)plVar2 + lVar10 * 0x60 + 0x5a);
      if ((ulong)(*(long *)(param_1 + 0x40) - lVar7 >> 2) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(uint *)(lVar7 + uVar8 * 4) =
           (int)((ulong)(lVar9 - lVar3) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar2 + lVar10 * 0x60 + 0x5b) & 0x1f) |
           *(uint *)(lVar7 + uVar8 * 4) &
           (*(uint *)((long)plVar2 + lVar10 * 0x60 + 0x5c) ^ 0xffffffff);
      return 1;
    }
  }
  return 0;
}


