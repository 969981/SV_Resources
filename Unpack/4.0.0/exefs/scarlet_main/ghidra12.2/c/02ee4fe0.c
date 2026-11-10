/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ee4fe0; name: FUN_02ee4fe0
 */


void FUN_02ee4fe0(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 auStack_30 [12];
  float local_24;
  
  if ((*(int *)(param_1 + 0x54) != 0) && (*(int *)(param_1 + 0x4c) == 4)) {
    piVar1 = (int *)(param_1 + 0x48);
    puVar2 = (undefined8 *)((long)*piVar1 + (long)piVar1);
    uVar10 = puVar2[3];
    uVar7 = puVar2[2];
    puVar3 = *(undefined8 **)PTR_PTR_047d1bb0;
    uVar5 = puVar3[1];
    uVar4 = *puVar3;
    iVar8 = CONCAT13((byte)((ulong)uVar4 >> 0x18) & (byte)((ulong)uVar7 >> 0x18),
                     CONCAT12((byte)((ulong)uVar4 >> 0x10) & (byte)((ulong)uVar7 >> 0x10),
                              CONCAT11((byte)((ulong)uVar4 >> 8) & (byte)((ulong)uVar7 >> 8),
                                       (byte)uVar4 & (byte)uVar7)));
    iVar11 = CONCAT13((byte)((ulong)uVar5 >> 0x18) & (byte)((ulong)uVar10 >> 0x18),
                      CONCAT12((byte)((ulong)uVar5 >> 0x10) & (byte)((ulong)uVar10 >> 0x10),
                               CONCAT11((byte)((ulong)uVar5 >> 8) & (byte)((ulong)uVar10 >> 8),
                                        (byte)uVar5 & (byte)uVar10)));
    iVar6 = -(uint)(iVar8 == (int)uVar4);
    iVar8 = -(uint)((int)(CONCAT17((byte)((ulong)uVar4 >> 0x38) & (byte)((ulong)uVar7 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar4 >> 0x30) &
                                            (byte)((ulong)uVar7 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar4 >> 0x28) &
                                                     (byte)((ulong)uVar7 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar4 >> 0x20) &
                                                              (byte)((ulong)uVar7 >> 0x20),iVar8))))
                         >> 0x20) == (int)((ulong)uVar4 >> 0x20));
    iVar9 = -(uint)(iVar11 == (int)uVar5);
    iVar11 = -(uint)((int)(CONCAT17((byte)((ulong)uVar5 >> 0x38) & (byte)((ulong)uVar10 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar5 >> 0x30) &
                                             (byte)((ulong)uVar10 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar5 >> 0x28) &
                                                      (byte)((ulong)uVar10 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar5 >> 0x20) &
                                                               (byte)((ulong)uVar10 >> 0x20),iVar11)
                                                     ))) >> 0x20) == (int)((ulong)uVar5 >> 0x20));
    if (CONCAT13(~(byte)((uint)iVar8 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18) &
                 ~(byte)((uint)iVar9 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                 CONCAT12(~(byte)((uint)iVar8 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10) &
                          ~(byte)((uint)iVar9 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                          CONCAT11(~(byte)((uint)iVar8 >> 8) & ~(byte)((uint)iVar6 >> 8) &
                                   ~(byte)((uint)iVar9 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                   ~(byte)iVar8 & ~(byte)iVar6 & ~(byte)iVar9 & ~(byte)iVar11))) ==
        0) {
      puVar2[3] = puVar2[1];
      puVar2[2] = *puVar2;
      uVar5 = puVar3[1];
      uVar4 = *puVar3;
      puVar2 = (undefined8 *)((long)*piVar1 + (long)piVar1);
    }
    uVar10 = puVar2[5];
    uVar7 = puVar2[4];
    iVar8 = CONCAT13((byte)((ulong)uVar7 >> 0x18) & (byte)((ulong)uVar4 >> 0x18),
                     CONCAT12((byte)((ulong)uVar7 >> 0x10) & (byte)((ulong)uVar4 >> 0x10),
                              CONCAT11((byte)((ulong)uVar7 >> 8) & (byte)((ulong)uVar4 >> 8),
                                       (byte)uVar7 & (byte)uVar4)));
    iVar11 = CONCAT13((byte)((ulong)uVar10 >> 0x18) & (byte)((ulong)uVar5 >> 0x18),
                      CONCAT12((byte)((ulong)uVar10 >> 0x10) & (byte)((ulong)uVar5 >> 0x10),
                               CONCAT11((byte)((ulong)uVar10 >> 8) & (byte)((ulong)uVar5 >> 8),
                                        (byte)uVar10 & (byte)uVar5)));
    iVar6 = -(uint)(iVar8 == (int)uVar4);
    iVar8 = -(uint)((int)(CONCAT17((byte)((ulong)uVar7 >> 0x38) & (byte)((ulong)uVar4 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar7 >> 0x30) &
                                            (byte)((ulong)uVar4 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar7 >> 0x28) &
                                                     (byte)((ulong)uVar4 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar7 >> 0x20) &
                                                              (byte)((ulong)uVar4 >> 0x20),iVar8))))
                         >> 0x20) == (int)((ulong)uVar4 >> 0x20));
    iVar9 = -(uint)(iVar11 == (int)uVar5);
    iVar11 = -(uint)((int)(CONCAT17((byte)((ulong)uVar10 >> 0x38) & (byte)((ulong)uVar5 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar10 >> 0x30) &
                                             (byte)((ulong)uVar5 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar10 >> 0x28) &
                                                      (byte)((ulong)uVar5 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar10 >> 0x20) &
                                                               (byte)((ulong)uVar5 >> 0x20),iVar11))
                                            )) >> 0x20) == (int)((ulong)uVar5 >> 0x20));
    if (CONCAT13(~(byte)((uint)iVar8 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18) &
                 ~(byte)((uint)iVar9 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                 CONCAT12(~(byte)((uint)iVar8 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10) &
                          ~(byte)((uint)iVar9 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                          CONCAT11(~(byte)((uint)iVar8 >> 8) & ~(byte)((uint)iVar6 >> 8) &
                                   ~(byte)((uint)iVar9 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                   ~(byte)iVar8 & ~(byte)iVar6 & ~(byte)iVar9 & ~(byte)iVar11))) ==
        0) {
      puVar2[5] = puVar2[3];
      puVar2[4] = puVar2[2];
      uVar5 = puVar3[1];
      uVar4 = *puVar3;
      puVar2 = (undefined8 *)((long)*piVar1 + (long)piVar1);
    }
    uVar10 = puVar2[7];
    uVar7 = puVar2[6];
    iVar6 = CONCAT13((byte)((ulong)uVar7 >> 0x18) & (byte)((ulong)uVar4 >> 0x18),
                     CONCAT12((byte)((ulong)uVar7 >> 0x10) & (byte)((ulong)uVar4 >> 0x10),
                              CONCAT11((byte)((ulong)uVar7 >> 8) & (byte)((ulong)uVar4 >> 8),
                                       (byte)uVar7 & (byte)uVar4)));
    iVar9 = CONCAT13((byte)((ulong)uVar10 >> 0x18) & (byte)((ulong)uVar5 >> 0x18),
                     CONCAT12((byte)((ulong)uVar10 >> 0x10) & (byte)((ulong)uVar5 >> 0x10),
                              CONCAT11((byte)((ulong)uVar10 >> 8) & (byte)((ulong)uVar5 >> 8),
                                       (byte)uVar10 & (byte)uVar5)));
    iVar8 = -(uint)(iVar6 == (int)uVar4);
    iVar6 = -(uint)((int)(CONCAT17((byte)((ulong)uVar7 >> 0x38) & (byte)((ulong)uVar4 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar7 >> 0x30) &
                                            (byte)((ulong)uVar4 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar7 >> 0x28) &
                                                     (byte)((ulong)uVar4 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar7 >> 0x20) &
                                                              (byte)((ulong)uVar4 >> 0x20),iVar6))))
                         >> 0x20) == (int)((ulong)uVar4 >> 0x20));
    iVar11 = -(uint)(iVar9 == (int)uVar5);
    iVar9 = -(uint)((int)(CONCAT17((byte)((ulong)uVar10 >> 0x38) & (byte)((ulong)uVar5 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar10 >> 0x30) &
                                            (byte)((ulong)uVar5 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar10 >> 0x28) &
                                                     (byte)((ulong)uVar5 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar10 >> 0x20) &
                                                              (byte)((ulong)uVar5 >> 0x20),iVar9))))
                         >> 0x20) == (int)((ulong)uVar5 >> 0x20));
    if (CONCAT13(~(byte)((uint)iVar6 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18) &
                 ~(byte)((uint)iVar11 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                 CONCAT12(~(byte)((uint)iVar6 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10) &
                          ~(byte)((uint)iVar11 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                          CONCAT11(~(byte)((uint)iVar6 >> 8) & ~(byte)((uint)iVar8 >> 8) &
                                   ~(byte)((uint)iVar11 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                   ~(byte)iVar6 & ~(byte)iVar8 & ~(byte)iVar11 & ~(byte)iVar9))) ==
        0) {
      puVar2[7] = puVar2[5];
      puVar2[6] = puVar2[4];
    }
  }
  if (((float)((uint)*(ushort *)(param_1 + 0x70) << 0x10) < 0.0) &&
     ((ulong)*(byte *)(param_1 + 0x18) != 4)) {
    (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0xa0))
              (param_1,auStack_30);
    *(short *)(param_1 + 0x70) = (short)((uint)(local_24 * DAT_0460e1e0 * 1.0039062) >> 0x10);
  }
  return;
}


