/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a4b68; name: FUN_034a4b68
 */


void FUN_034a4b68(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  
  puVar1 = (uint *)(param_1 + 699);
  if ((*puVar1 >> 0x1a & 1) != 0) {
    uVar3 = *puVar1 & 0xfbffffff;
    *puVar1 = uVar3;
    if (*(int *)(param_1 + 0x310) != 0) {
      plVar5 = *(long **)(param_1 + 0x308);
      do {
        plVar6 = plVar5 + 1;
        *(short *)(*plVar5 + 0x2a) = *(short *)(*plVar5 + 0x2a) + -1;
        plVar5 = plVar6;
      } while (plVar6 != (long *)(*(long *)(param_1 + 0x308) + (ulong)*(uint *)(param_1 + 0x310) * 8
                                 ));
      uVar3 = *puVar1;
    }
    if ((uVar3 >> 7 & 1) == 0) {
      uVar3 = uVar3 | 0x80;
      *puVar1 = uVar3;
      plVar6 = *(long **)(param_1 + 0x188);
      plVar5 = plVar6;
      if ((*(byte *)((long)plVar6 + 0xdb) >> 4 & 1) == 0) {
        do {
          plVar7 = (long *)plVar5[0x13];
          if (plVar7 == (long *)0x0) break;
          plVar5 = plVar7;
        } while ((*(byte *)((long)plVar7 + 0xdb) >> 4 & 1) == 0);
      }
      uVar8 = *(byte *)(plVar5 + 0x1e) >> 3 & 7;
      uVar4 = *(byte *)((long)plVar5 + 0xf1) & 0xf;
      if (uVar4 == 3) {
        uVar2 = (**(code **)(*plVar6 + 0x230))(plVar6,*(undefined8 *)(param_1 + 0x240));
        uVar3 = *puVar1;
        uVar4 = 1;
        if ((uVar2 & 1) != 0) {
          uVar4 = 2;
        }
      }
      *puVar1 = uVar8 | uVar4 << 3 | uVar3 & 0xffffff80;
    }
    else {
      uVar8 = uVar3 & 7;
      uVar4 = uVar3 >> 3 & 0xf;
    }
    if ((uVar8 != 1) && (uVar4 == 2)) {
      *(int *)PTR_DAT_047e7268 = *(int *)PTR_DAT_047e7268 + -1;
    }
    *(int *)PTR_DAT_047e7270 = *(int *)PTR_DAT_047e7270 + -1;
  }
  return;
}


