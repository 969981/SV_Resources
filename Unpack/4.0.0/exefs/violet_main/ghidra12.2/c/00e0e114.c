/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e0e114; name: FUN_00e0e114
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e0e114(long param_1,int param_2,int param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_150;
  undefined8 local_148;
  int local_140;
  int iStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [192];
  
  if (param_2 != param_3) {
    if ((param_2 < *(int *)(param_1 + 0x98)) && (param_3 < *(int *)(param_1 + 0x98))) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x90) + (long)param_2 * 8);
      lVar1 = *(long *)(*(long *)(param_1 + 0x90) + (long)param_3 * 8);
      fVar3 = (float)*(undefined8 *)(lVar2 + 0x90);
      fVar7 = (float)*(undefined8 *)(lVar2 + 0xa0);
      fVar11 = (fVar7 - fVar3) * 0.5;
      fVar12 = (float)*(undefined8 *)(lVar1 + 0x90);
      fVar14 = (float)*(undefined8 *)(lVar1 + 0xa0);
      fVar13 = (fVar14 - fVar12) * 0.5;
      iVar4 = -(uint)(fVar3 - fVar11 <= fVar14 + fVar13);
      iVar5 = -(uint)((float)((ulong)*(undefined8 *)(lVar2 + 0x90) >> 0x20) - fVar11 <=
                     (float)((ulong)*(undefined8 *)(lVar1 + 0xa0) >> 0x20) + fVar13);
      iVar6 = -(uint)((float)*(undefined8 *)(lVar2 + 0x98) - fVar11 <=
                     (float)*(undefined8 *)(lVar1 + 0xa8) + fVar13);
      iVar8 = -(uint)(fVar12 - fVar13 <= fVar7 + fVar11);
      iVar9 = -(uint)((float)((ulong)*(undefined8 *)(lVar1 + 0x90) >> 0x20) - fVar13 <=
                     (float)((ulong)*(undefined8 *)(lVar2 + 0xa0) >> 0x20) + fVar11);
      iVar10 = -(uint)((float)*(undefined8 *)(lVar1 + 0x98) - fVar13 <=
                      (float)*(undefined8 *)(lVar2 + 0xa8) + fVar11);
      if (CONCAT13((byte)((uint)iVar9 >> 0x18) & (byte)((uint)iVar5 >> 0x18) &
                   (byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar4 >> 0x18) &
                   (byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar6 >> 0x18),
                   CONCAT12((byte)((uint)iVar9 >> 0x10) & (byte)((uint)iVar5 >> 0x10) &
                            (byte)((uint)iVar8 >> 0x10) & (byte)((uint)iVar4 >> 0x10) &
                            (byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar6 >> 0x10),
                            CONCAT11((byte)((uint)iVar9 >> 8) & (byte)((uint)iVar5 >> 8) &
                                     (byte)((uint)iVar8 >> 8) & (byte)((uint)iVar4 >> 8) &
                                     (byte)((uint)iVar10 >> 8) & (byte)((uint)iVar6 >> 8),
                                     (byte)iVar9 & (byte)iVar5 & (byte)iVar8 & (byte)iVar4 &
                                     (byte)iVar10 & (byte)iVar6))) != 0) {
        FUN_029f9b98(&local_150);
        uStack_118 = _UNK_03cabe68;
        local_120 = _DAT_03cabe60;
        local_150 = *(undefined8 *)(*(long *)(param_1 + 0x90) + (long)param_2 * 8);
        local_138 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + (long)param_2 * 8);
        iStack_13c = *(int *)(param_1 + 0x1e0) * 1000000;
        local_140 = iStack_13c + param_2;
        iStack_13c = iStack_13c + param_3;
        local_148 = *(undefined8 *)(*(long *)(param_1 + 0x90) + (long)param_3 * 8);
        local_130 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + (long)param_3 * 8);
        local_128 = 0x40000000;
        memcpy(auStack_110,param_4,0x35);
        FUN_029f9c8c(&local_150);
      }
    }
  }
  return;
}


