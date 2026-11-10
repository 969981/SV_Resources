/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d0fefc; name: FUN_00d0fefc
 */


undefined8 FUN_00d0fefc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 0x110);
  plVar6 = *(long **)(*(long *)(param_1 + 0x30) + 0x118);
  plVar4 = plVar1;
  if ((plVar1 != plVar6) && (*plVar1 != *param_2)) {
    do {
      plVar4 = plVar4 + 0xc;
      if (plVar6 == plVar4) {
        plVar4 = plVar6;
        goto LAB_00d0ff50;
      }
    } while (*plVar4 != *param_2);
  }
LAB_00d0ff50:
  if (plVar6 != plVar4) {
    lVar9 = *param_3;
    plVar6 = (long *)param_3[3];
    lVar7 = (long)((int)((ulong)((long)plVar4 - (long)plVar1) >> 5) * -0x55555555);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = (long *)plVar1[lVar7 * 0xc + 4];
    plVar2 = (long *)plVar1[lVar7 * 0xc + 5];
    plVar5 = plVar4;
    if ((plVar4 != plVar2) && (*plVar4 != lVar9)) {
      do {
        plVar5 = plVar5 + 5;
        if (plVar2 == plVar5) {
          plVar5 = plVar2;
          goto LAB_00d0ffb0;
        }
      } while (*plVar5 != lVar9);
    }
LAB_00d0ffb0:
    if (plVar2 == plVar5) {
      iVar8 = 0;
    }
    else {
      iVar8 = (int)((ulong)((long)plVar5 - (long)plVar4) >> 3) * -0x33333333;
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    if (plVar2 != plVar5) {
      uVar3 = (ulong)*(byte *)((long)plVar1 + lVar7 * 0x60 + 0x5a) -
              (ulong)*(byte *)((long)plVar1 + lVar7 * 0x60 + 0x59);
      lVar9 = *(long *)(param_1 + 0x80);
      if ((ulong)(*(long *)(param_1 + 0x88) - lVar9 >> 2) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(uint *)(lVar9 + uVar3 * 4) =
           iVar8 << (ulong)(*(byte *)((long)plVar1 + lVar7 * 0x60 + 0x5b) & 0x1f) |
           *(uint *)(lVar9 + uVar3 * 4) &
           (*(uint *)((long)plVar1 + lVar7 * 0x60 + 0x5c) ^ 0xffffffff);
      return 1;
    }
  }
  return 0;
}


