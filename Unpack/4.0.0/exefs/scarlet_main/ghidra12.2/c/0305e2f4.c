/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0305e2f4; name: caseD_4
 */


ulong switchD_0305df4c::caseD_4(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  uVar3 = FUN_0307878c(param_1 + 0xe);
  if ((uint)uVar3 != 0xffffffff) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + (uVar3 >> 0x16 & 0x3ff) * 0x100) + 0x20)
    ;
    uVar1 = (uint)uVar3 & 0x3fffff;
    uVar7 = uVar1 - *(int *)(lVar4 + 0x30);
    if ((int)uVar1 < *(int *)(lVar4 + 0x30)) {
      if (*(int *)(lVar4 + 0x78) == 0) {
        uVar7 = uVar1;
LAB_0305e37c:
        lVar6 = *(long *)(lVar4 + 0xc0);
        goto LAB_0305e380;
      }
      uVar7 = *(uint *)(*(long *)(lVar4 + 0x70) + (ulong)uVar1 * 4);
      if (uVar7 != 0xffffffff) goto LAB_0305e37c;
      piVar5 = (int *)(*(long *)(lVar4 + 0x28) + (ulong)uVar1 * 0x14);
    }
    else {
      lVar6 = *(long *)(lVar4 + 0xe0);
LAB_0305e380:
      piVar5 = (int *)(lVar6 + (long)(int)uVar7 * 0x14);
    }
    iVar8 = *piVar5;
    iVar11 = *(int *)(lVar4 + 0x40);
    lVar6 = 0x38;
    if (iVar11 <= iVar8) {
      lVar6 = 0xf0;
    }
    iVar10 = 0;
    if (iVar11 <= iVar8) {
      iVar10 = iVar11;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar4 + lVar6) + (long)(iVar8 - iVar10) * 0x10);
    uVar9 = *puVar2;
    iVar8 = -(uint)((float)uVar9 == (float)param_1[2]);
    iVar10 = -(uint)((float)((ulong)uVar9 >> 0x20) == (float)((ulong)param_1[2] >> 0x20));
    iVar12 = -(uint)((float)puVar2[1] == (float)param_1[3]);
    if (CONCAT13((byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar8 >> 0x18) &
                 (byte)((uint)iVar12 >> 0x18),
                 CONCAT12((byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar8 >> 0x10) &
                          (byte)((uint)iVar12 >> 0x10),
                          CONCAT11((byte)((uint)iVar10 >> 8) & (byte)((uint)iVar8 >> 8) &
                                   (byte)((uint)iVar12 >> 8),
                                   (byte)iVar10 & (byte)iVar8 & (byte)iVar12))) != 0) {
      iVar8 = piVar5[1];
      lVar6 = 0x38;
      if (iVar11 <= iVar8) {
        lVar6 = 0xf0;
      }
      iVar10 = 0;
      if (iVar11 <= iVar8) {
        iVar10 = iVar11;
      }
      puVar2 = (undefined8 *)(*(long *)(lVar4 + lVar6) + (long)(iVar8 - iVar10) * 0x10);
      uVar9 = *puVar2;
      iVar8 = -(uint)((float)uVar9 == (float)*param_1);
      iVar11 = -(uint)((float)((ulong)uVar9 >> 0x20) == (float)((ulong)*param_1 >> 0x20));
      iVar10 = -(uint)((float)puVar2[1] == (float)param_1[1]);
      if (CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar8 >> 0x18) &
                   (byte)((uint)iVar10 >> 0x18),
                   CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar8 >> 0x10) &
                            (byte)((uint)iVar10 >> 0x10),
                            CONCAT11((byte)((uint)iVar11 >> 8) & (byte)((uint)iVar8 >> 8) &
                                     (byte)((uint)iVar10 >> 8),
                                     (byte)iVar11 & (byte)iVar8 & (byte)iVar10))) != 0)
      goto LAB_0305e41c;
    }
    *param_3 = 0xffffffff;
  }
  uVar3 = 0xffffffff;
LAB_0305e41c:
  return uVar3 & 0xffffffff;
}


