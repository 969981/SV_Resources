/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ee3fc0; name: FUN_00ee3fc0
 */


undefined8 FUN_00ee3fc0(long param_1,long *param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x30) + 0x110);
  plVar4 = *(long **)(*(long *)(param_1 + 0x30) + 0x118);
  plVar7 = plVar2;
  if ((plVar2 != plVar4) && (*plVar2 != *param_2)) {
    do {
      plVar7 = plVar7 + 0xc;
      if (plVar4 == plVar7) {
        plVar7 = plVar4;
        goto LAB_00ee4004;
      }
    } while (*plVar7 != *param_2);
  }
LAB_00ee4004:
  if (plVar4 != plVar7) {
    iVar6 = (int)((ulong)((long)plVar7 - (long)plVar2) >> 5) * -0x55555555;
    lVar3 = plVar2[(long)iVar6 * 0xc + 4];
    lVar5 = plVar2[(long)iVar6 * 0xc + 5];
    lVar10 = lVar3;
    if ((lVar3 != lVar5) && (lVar8 = lVar3, *(int *)(lVar3 + 0x20) != param_3)) {
      do {
        lVar10 = lVar8 + 0x28;
        if (lVar5 == lVar10) {
          lVar10 = lVar5;
          goto LAB_00ee4044;
        }
        piVar1 = (int *)(lVar8 + 0x48);
        lVar8 = lVar10;
      } while (*piVar1 != param_3);
    }
LAB_00ee4044:
    if (lVar5 != lVar10) {
      lVar8 = (long)iVar6;
      uVar9 = (ulong)*(byte *)((long)plVar2 + lVar8 * 0x60 + 0x5a) -
              (ulong)*(byte *)((long)plVar2 + lVar8 * 0x60 + 0x59);
      lVar5 = *(long *)(param_1 + 0x80);
      if ((ulong)(*(long *)(param_1 + 0x88) - lVar5 >> 2) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(uint *)(lVar5 + uVar9 * 4) =
           (int)((ulong)(lVar10 - lVar3) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar2 + lVar8 * 0x60 + 0x5b) & 0x1f) |
           *(uint *)(lVar5 + uVar9 * 4) &
           (*(uint *)((long)plVar2 + lVar8 * 0x60 + 0x5c) ^ 0xffffffff);
      return 1;
    }
  }
  return 0;
}


