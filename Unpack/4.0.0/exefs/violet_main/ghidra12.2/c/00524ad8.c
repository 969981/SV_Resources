/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00524ad8; name: FUN_00524ad8
 */


undefined1  [16] FUN_00524ad8(long param_1,int param_2)

{
  int *piVar1;
  size_t __n;
  undefined8 uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint local_4c;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar8 = *(int **)(param_1 + 0x10);
    uVar4 = *(ushort *)(param_1 + 10);
    uVar5 = (ulong)uVar4;
    piVar1 = piVar8 + uVar5 * 8;
    if (uVar5 != 0) {
      uVar6 = uVar5;
      piVar9 = piVar8;
      do {
        uVar7 = uVar6 >> 1;
        piVar8 = piVar9 + uVar7 * 8 + 8;
        uVar6 = uVar6 + ~uVar7;
        if (param_2 <= piVar9[uVar7 * 8]) {
          piVar8 = piVar9;
          uVar6 = uVar7;
        }
        piVar9 = piVar8;
      } while (uVar6 != 0);
    }
    if ((piVar8 == piVar1) || (*piVar8 != param_2)) {
      if (uVar4 < *(ushort *)(param_1 + 8)) {
        __n = (long)piVar1 - (long)piVar8;
        if (__n != 0) {
          memmove((void *)((long)piVar1 + (0x20 - __n)),piVar8,__n);
          uVar4 = *(ushort *)(param_1 + 10);
        }
        uVar5 = 0;
        *(ushort *)(param_1 + 10) = uVar4 + 1;
        *piVar8 = param_2;
        piVar8[4] = 0;
        piVar8[5] = 0;
        piVar8[6] = 0;
        piVar8[7] = 0;
        piVar8 = piVar8 + 2;
        auVar14._8_8_ = 1;
        auVar14._0_8_ = piVar8;
        piVar8[0] = 0;
        piVar8[1] = 0;
      }
      else {
        FUN_00523c6c(param_1,uVar5 + 1);
        auVar14 = FUN_00524ad8(param_1,param_2);
        uVar5 = auVar14._8_8_ & 0xffffffffffffff00;
      }
    }
    else {
      uVar5 = 0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = piVar8 + 2;
    }
  }
  else {
    plVar11 = *(long **)(param_1 + 0x10);
    plVar12 = plVar11 + 1;
    plVar13 = (long *)*plVar12;
    if (plVar13 == (long *)0x0) {
      plVar13 = plVar12;
    }
    else {
      plVar12 = plVar11 + 1;
      while( true ) {
        while ((int)plVar13[4] <= param_2) {
          if (param_2 <= (int)plVar13[4]) goto LAB_00524c3c;
          plVar12 = plVar13 + 1;
          if ((long *)*plVar12 == (long *)0x0) goto LAB_00524c3c;
          plVar13 = (long *)*plVar12;
        }
        plVar12 = plVar13;
        if ((long *)*plVar13 == (long *)0x0) break;
        plVar13 = (long *)*plVar13;
      }
    }
LAB_00524c3c:
    puVar10 = (undefined8 *)*plVar12;
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
      *(int *)(puVar10 + 4) = param_2;
      *(undefined8 *)((long)puVar10 + 0x2c) = 0;
      *(ulong *)((long)puVar10 + 0x24) = (ulong)local_4c;
      puVar10[2] = plVar13;
      puVar10[7] = 0;
      puVar10[6] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      *plVar12 = (long)puVar10;
      if (*(long *)*plVar11 == 0) {
        puVar3 = puVar10;
      }
      else {
        *plVar11 = *(long *)*plVar11;
        puVar3 = (undefined8 *)*plVar12;
      }
      FUN_010108e0(plVar11[1],puVar3);
      uVar2 = 1;
      plVar11[2] = plVar11[2] + 1;
    }
    else {
      uVar2 = 0;
    }
    uVar5 = 0;
    auVar14._8_8_ = uVar2;
    auVar14._0_8_ = puVar10 + 5;
  }
  auVar15._8_8_ = uVar5 | auVar14._8_8_ & 0xff;
  auVar15._0_8_ = auVar14._0_8_;
  return auVar15;
}


