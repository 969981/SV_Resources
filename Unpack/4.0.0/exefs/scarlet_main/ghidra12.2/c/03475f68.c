/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03475f68; name: FUN_03475f68
 */


undefined8 *
FUN_03475f68(long param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
            ulong param_6)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  ulong uVar16;
  long lVar17;
  
  ppuVar6 = *(undefined ***)(param_1 + 8);
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar6 = &PTR_PTR_047c5b18;
    *(undefined ***)(param_1 + 8) = &PTR_PTR_047c5b18;
  }
  plVar7 = (long *)(**(code **)*ppuVar6)();
  puVar3 = PTR_DAT_047e2fd0;
  if (plVar7 != (long *)0x0) {
    puVar8 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x68);
    if (puVar8 == (undefined8 *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
      return (undefined8 *)0x0;
    }
    uVar1 = (uint)param_6 & 0xff;
    *(short *)((long)puVar8 + 0x16) = (short)uVar1;
    iVar5 = 2;
    if (param_5 != 1) {
      iVar5 = 4;
    }
    iVar2 = uVar1 * iVar5;
    puVar8[9] = 0;
    puVar8[10] = 0;
    *(int *)(puVar8 + 3) = param_3;
    *(int *)((long)puVar8 + 0x1c) = iVar2 * param_3;
    *(short *)(puVar8 + 4) = (short)iVar2;
    *puVar8 = 0xffffffff46464952;
    puVar8[1] = 0x20746d6645564157;
    *(undefined4 *)(puVar8 + 2) = 0x28;
    *(undefined2 *)((long)puVar8 + 0x14) = 0xfffe;
    *(short *)((long)puVar8 + 0x22) = (short)(iVar5 << 3);
    bVar4 = (param_6 & 0xf00) != 0x200;
    *(undefined4 *)((long)puVar8 + 0x24) = 0x16;
    *(uint *)(puVar8 + 5) = (uint)(param_6 >> 0xc) & 0xfffff;
    uVar12 = 0x721;
    if (bVar4) {
      uVar12 = 0;
    }
    *(undefined4 *)((long)puVar8 + 0x2c) = 1;
    uVar11 = 0x11d3;
    if (bVar4) {
      uVar11 = 0x10;
    }
    *(undefined2 *)(puVar8 + 6) = uVar12;
    uVar14 = 0xc1;
    if (bVar4) {
      uVar14 = 0xaa;
    }
    *(undefined2 *)((long)puVar8 + 0x32) = uVar11;
    *(undefined1 *)((long)puVar8 + 0x37) = uVar14;
    uVar14 = 0x86;
    if (bVar4) {
      uVar14 = 0x80;
    }
    *(undefined1 *)((long)puVar8 + 0x34) = uVar14;
    uVar14 = 0x44;
    if (bVar4) {
      uVar14 = 0;
    }
    uVar13 = 200;
    if (bVar4) {
      uVar13 = 0;
    }
    *(undefined1 *)((long)puVar8 + 0x35) = uVar14;
    uVar14 = 0xca;
    if (bVar4) {
      uVar14 = 0;
    }
    uVar15 = 0;
    if (bVar4) {
      uVar15 = 0x38;
    }
    *(undefined1 *)((long)puVar8 + 0x36) = uVar13;
    uVar13 = 0;
    if (bVar4) {
      uVar13 = 0x9b;
    }
    uVar10 = 0;
    if (bVar4) {
      uVar10 = 0x71;
    }
    *(undefined1 *)(puVar8 + 7) = uVar14;
    *(undefined1 *)((long)puVar8 + 0x39) = uVar15;
    puVar8[0xb] = 0;
    puVar8[0xc] = plVar7;
    *(undefined1 *)((long)puVar8 + 0x3a) = uVar13;
    *(undefined1 *)((long)puVar8 + 0x3b) = uVar10;
    *(undefined8 *)((long)puVar8 + 0x3c) = 0x61746164;
    iVar5 = (**(code **)*plVar7)(plVar7,param_2,puVar8);
    if (iVar5 == 1) {
      return puVar8;
    }
    lVar9 = puVar8[9];
    if (*(int *)(puVar8 + 10) != 0) {
      uVar16 = 0;
      lVar17 = 8;
      do {
        (**(code **)(puVar3 + 0x30))(0,*(undefined8 *)(lVar9 + lVar17));
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 0x10;
        lVar9 = puVar8[9];
      } while (uVar16 < *(uint *)(puVar8 + 10));
    }
    if (lVar9 != 0) {
      *(undefined4 *)(puVar8 + 10) = 0;
      (**(code **)(puVar3 + 0x30))(0);
      puVar8[9] = 0;
      *(undefined4 *)((long)puVar8 + 0x54) = 0;
    }
    (**(code **)(puVar3 + 0x30))(0,puVar8);
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  return (undefined8 *)0x0;
}


