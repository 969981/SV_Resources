/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb1530; name: FUN_00cb1530
 */


uint FUN_00cb1530(long param_1,short param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  short *psVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long local_38;
  
  uVar11 = *(uint *)(param_1 + 0x28);
  plVar2 = (long *)(param_1 + 0x20);
  if (0 < (int)uVar11) {
    uVar6 = 0;
    psVar8 = (short *)((long)plVar2 + *plVar2 + 0x10);
    do {
      if (*psVar8 == param_2) {
        uVar11 = (uint)uVar6;
        goto LAB_00cb16c8;
      }
      uVar6 = uVar6 + 1;
      psVar8 = psVar8 + 0xc;
    } while (uVar11 != uVar6);
  }
  uVar5 = *(uint *)(param_1 + 0x2c);
  if (*(uint *)(param_1 + 0x2c) == 0) {
    *(uint *)(param_1 + 0x2c) = uVar11;
    uVar5 = uVar11;
  }
  puVar3 = PTR_DAT_047d1a08;
  if ((int)uVar11 < (int)(uVar5 & 0x7fffffff)) {
    lVar7 = *plVar2;
  }
  else {
    uVar5 = uVar11 | (int)uVar11 >> 0x10;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = uVar5 | (int)uVar5 >> 1;
    if ((int)uVar5 < (int)uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    uVar5 = uVar5 + 1;
    local_38 = (long)(int)uVar5 * 0x18;
    lVar4 = (**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    uVar6 = (ulong)*(uint *)(param_1 + 0x28);
    lVar7 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar7 = *(long *)(param_1 + 0x20) + (long)plVar2;
    }
    if (0 < (int)*(uint *)(param_1 + 0x28)) {
      puVar10 = (undefined8 *)(lVar7 + 8);
      puVar9 = (undefined2 *)(lVar4 + 0x10);
      do {
        *(undefined8 *)(puVar9 + -8) = puVar10[-1];
        puVar10[-1] = 0;
        *(undefined8 *)(puVar9 + -4) = *puVar10;
        puVar1 = puVar10 + 1;
        *puVar10 = 0;
        uVar6 = uVar6 - 1;
        puVar10 = puVar10 + 3;
        *puVar9 = *(undefined2 *)puVar1;
        puVar9 = puVar9 + 0xc;
      } while (uVar6 != 0);
    }
    if (*(int *)(param_1 + 0x2c) < 0) {
      lVar7 = 0;
      if (*plVar2 != 0) {
        lVar7 = *plVar2 + (long)plVar2;
      }
      (**(code **)(puVar3 + 8))(0,lVar7,0);
    }
    lVar7 = 0;
    if (lVar4 != 0) {
      lVar7 = lVar4 - (long)plVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar5 | 0x80000000;
    *(long *)(param_1 + 0x20) = lVar7;
  }
  *(uint *)(param_1 + 0x28) = uVar11 + 1;
  puVar10 = (undefined8 *)((long)plVar2 + (long)(int)uVar11 * 0x18 + lVar7);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined2 *)(puVar10 + 2) = 0xffff;
  *(short *)((long)plVar2 + (long)(int)uVar11 * 0x18 + *(long *)(param_1 + 0x20) + 0x10) = param_2;
LAB_00cb16c8:
  return uVar11 & 0xffff;
}


