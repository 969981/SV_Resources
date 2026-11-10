/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fef928; name: FUN_02fef928
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fef928(float param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_047e49c0;
  lVar2 = tpidr_el0;
  if (*(long *)(param_2 + 0x800) == 0) {
    plVar10 = (long *)0x0;
    iVar16 = -1;
    bVar9 = false;
  }
  else {
    iVar12 = *(int *)PTR_DAT_047e49c0;
    lVar13 = (long)iVar12;
    lVar11 = *(long *)(lVar2 + 0x1000b8);
    if (lVar11 == 0) {
      lVar11 = FUN_00e5d3b4();
      *(long *)(lVar2 + 0x1000b8) = lVar11;
      iVar12 = *(int *)puVar8;
      iVar16 = (int)*(undefined8 *)(lVar11 + lVar13 * 8 + 1000);
      if (lVar11 == 0) {
        lVar11 = FUN_00e5d3b4();
        *(long *)(lVar2 + 0x1000b8) = lVar11;
      }
    }
    else {
      iVar16 = (int)*(undefined8 *)(lVar11 + lVar13 * 8 + 1000);
    }
    *(long *)(lVar11 + (long)iVar12 * 8 + 1000) = (long)(iVar16 + 1);
    plVar10 = *(long **)(param_2 + 0x800);
    bVar9 = iVar16 == 0;
  }
  bVar9 = (bool)(bVar9 & plVar10 != (long *)0x0);
  if ((*(char *)(param_2 + 0x999) != '\0') || (bVar9)) {
    local_80 = 0x1002000010;
    uStack_78 = CONCAT44(param_1,param_3);
    if (bVar9) {
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_80);
    }
  }
  if (param_3 != 0) {
    lVar11 = *(long *)(param_2 + 0x150) + (ulong)param_3 * 0x80;
    *(short *)(lVar11 + 0x56) =
         (short)((uint)(param_1 * (float)((uint)*(ushort *)(lVar11 + 0x56) << 0x10)) >> 0x10);
    uStack_88 = *(undefined8 *)(lVar11 + 0x30);
    local_90 = *(undefined8 *)(lVar11 + 0x28);
    local_80 = *(undefined8 *)(lVar11 + 0x38);
    fVar18 = (float)((ulong)uStack_88 >> 0x20);
    uStack_78 = CONCAT44(fVar18,fVar18);
    fVar19 = (float)local_80 * param_1;
    fVar20 = (float)((ulong)local_80 >> 0x20) * param_1;
    auVar6._4_4_ = fVar20;
    auVar6._0_4_ = fVar19;
    auVar6._8_4_ = fVar18 * param_1;
    auVar6._12_4_ = fVar18 * param_1;
    auVar7._8_8_ = _UNK_03cabeb8;
    auVar7._0_8_ = _DAT_03cabeb0;
    auVar22 = a64_TBL(ZEXT816(0),auVar6,auVar7);
    fVar18 = (float)*(undefined8 *)(param_2 + 0x540);
    fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x540) >> 0x20);
    local_68 = CONCAT44(fVar21 * param_1 - fVar21,fVar18 * param_1 - fVar18);
    *(ulong *)(lVar11 + 0x30) = CONCAT44(auVar22._12_4_,(float)uStack_88 * param_1);
    *(ulong *)(lVar11 + 0x28) =
         CONCAT44((float)((ulong)local_90 >> 0x20) * param_1,(float)local_90 * param_1);
    *(ulong *)(lVar11 + 0x38) = CONCAT44(fVar20,fVar19);
    FUN_02f1fc50(&local_80,&local_90,&local_68,lVar11);
    iVar12 = (int)((float)*(undefined8 *)(param_2 + 0x578) * 0.0);
    iVar17 = (int)((float)((ulong)*(undefined8 *)(param_2 + 0x578) >> 0x20) * 0.0);
    auVar22._12_4_ = iVar17;
    auVar22._8_4_ = iVar12;
    auVar22._4_4_ = iVar17;
    auVar22._0_4_ = iVar12;
    uVar4 = NEON_sqxtun(CONCAT44(iVar17,iVar12),auVar22,4);
    uVar1 = *(uint *)(lVar11 + 0x48);
    uVar14 = uVar1;
    do {
      lVar11 = *(long *)(param_2 + 0x38) + (ulong)(uVar14 & 0xffffff) * 0xc0;
      FUN_02f1ff30(param_2 + 0x530,
                   *(long *)(param_2 + 0x8b8) + (ulong)*(byte *)(lVar11 + 0x89) * 0x50 + 0x20,
                   param_2 + 0x4e0,lVar11,
                   *(long *)(param_2 + 0x150) + (ulong)*(uint *)(lVar11 + 0x80) * 0x80);
      fVar18 = (float)((uint)*(ushort *)(lVar11 + 0x94) << 0x10) * 0.0;
      iVar12 = (int)((float)*(undefined8 *)(param_2 + 0x578) * fVar18);
      iVar17 = (int)((float)((ulong)*(undefined8 *)(param_2 + 0x578) >> 0x20) * fVar18);
      auVar3._12_4_ = iVar17;
      auVar3._8_4_ = iVar12;
      auVar3._4_4_ = iVar17;
      auVar3._0_4_ = iVar12;
      uVar5 = NEON_sqxtun(CONCAT44(iVar17,iVar12),auVar3,4);
      uVar14 = (uint)*(ushort *)(lVar11 + 0x5c) + ((uint)uVar4 & 0xffff) + (uint)(ushort)uVar5;
      uVar15 = (uint)*(ushort *)(lVar11 + 0x5e) + (uint)(ushort)uVar5;
      if (0xfffe < uVar14) {
        uVar14 = 0xffff;
      }
      if (0xfffe < uVar15) {
        uVar15 = 0xffff;
      }
      *(short *)(lVar11 + 0x5c) = (short)uVar14;
      *(short *)(lVar11 + 0x5e) = (short)uVar15;
      uVar14 = *(uint *)(lVar11 + 0x84);
      *(ushort *)(lVar11 + 0x58) = *(ushort *)(lVar11 + 0x58) | 4;
    } while (uVar14 != uVar1);
  }
  if (iVar16 != -1) {
    iVar12 = *(int *)PTR_DAT_047e49c0;
    lVar11 = *(long *)(lVar2 + 0x1000b8);
    if (lVar11 == 0) {
      lVar11 = FUN_00e5d3b4();
      *(long *)(lVar2 + 0x1000b8) = lVar11;
    }
    *(long *)(lVar11 + (long)iVar12 * 8 + 1000) = (long)iVar16;
  }
  return;
}


