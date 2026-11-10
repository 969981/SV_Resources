/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f383e0; name: FUN_00f383e0
 */


float FUN_00f383e0(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (((*(long *)(param_1 + 0x2f0) != 0) &&
      ((*(byte *)(*(long *)(param_1 + 0x2f0) + 0x1e8) & 1) != 0)) &&
     (lVar5 = (**(code **)(**(long **)(param_1 + 0x2f0) + 0x70))(), lVar5 != 0)) {
    FUN_00f38594(param_1 + 0x158,param_2);
    if (4 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_022518a0();
    }
    puVar6 = (uint *)(**(code **)(**(long **)(param_1 + 0x2f0) + 0x70))();
    piVar1 = (int *)((long)puVar6 + (ulong)*puVar6);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar7 == 0)) {
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = (uint *)((long)piVar1 + uVar7);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    }
    if (*puVar6 != 0) {
      lVar5 = 0;
      do {
        uVar7 = (ulong)*(uint *)((long)puVar6 + lVar5 + 4);
        lVar4 = lVar5 + (uVar7 - (long)*(int *)((long)puVar6 + lVar5 + uVar7 + 4));
        uVar3 = *(ushort *)((long)puVar6 + lVar4 + 4);
        if (((4 < uVar3) && (uVar8 = (ulong)*(ushort *)((long)puVar6 + lVar4 + 8), uVar8 != 0)) &&
           (lVar2 = uVar7 + uVar8,
           (long)puVar6 + lVar5 + lVar2 + (ulong)*(uint *)((long)puVar6 + lVar5 + lVar2 + 4) + 8 ==
           *(long *)(param_2 + 8))) {
          if ((uVar3 < 9) && (uVar3 < 7)) {
            return 0.0;
          }
          uVar8 = (ulong)*(ushort *)((long)puVar6 + lVar4 + 10);
          if (uVar8 == 0) {
            return 0.0;
          }
          return (float)*(int *)((long)puVar6 + lVar5 + uVar8 + uVar7 + 4);
        }
        lVar5 = lVar5 + 4;
      } while ((ulong)*puVar6 * 4 != lVar5);
    }
  }
  return 0.0;
}


