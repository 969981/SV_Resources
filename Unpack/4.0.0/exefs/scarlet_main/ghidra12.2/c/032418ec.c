/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032418ec; name: FUN_032418ec
 */


bool FUN_032418ec(undefined8 *param_1)

{
  byte bVar5;
  int iVar1;
  byte bVar3;
  byte bVar4;
  byte bVar6;
  byte bVar8;
  byte bVar9;
  undefined8 uVar2;
  byte bVar10;
  int iVar7;
  byte bVar15;
  int iVar11;
  byte bVar13;
  byte bVar14;
  undefined8 uVar12;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  
  uVar20 = param_1[1];
  uVar17 = *param_1;
  uVar22 = param_1[3];
  uVar21 = param_1[2];
  uVar12 = (*(undefined8 **)PTR_PTR_047d1bb0)[1];
  uVar2 = **(undefined8 **)PTR_PTR_047d1bb0;
  bVar3 = (byte)((ulong)uVar2 >> 8);
  bVar4 = (byte)((ulong)uVar2 >> 0x10);
  bVar5 = (byte)((ulong)uVar2 >> 0x18);
  bVar6 = (byte)((ulong)uVar2 >> 0x20);
  bVar8 = (byte)((ulong)uVar2 >> 0x28);
  bVar9 = (byte)((ulong)uVar2 >> 0x30);
  bVar10 = (byte)((ulong)uVar2 >> 0x38);
  bVar13 = (byte)((ulong)uVar12 >> 8);
  bVar14 = (byte)((ulong)uVar12 >> 0x10);
  bVar15 = (byte)((ulong)uVar12 >> 0x18);
  iVar23 = -(uint)(CONCAT13(bVar5 & (byte)((ulong)uVar17 >> 0x18),
                            CONCAT12(bVar4 & (byte)((ulong)uVar17 >> 0x10),
                                     CONCAT11(bVar3 & (byte)((ulong)uVar17 >> 8),
                                              (byte)uVar2 & (byte)uVar17))) == (int)uVar2);
  iVar7 = (int)((ulong)uVar2 >> 0x20);
  iVar24 = -(uint)(CONCAT13(bVar10 & (byte)((ulong)uVar17 >> 0x38),
                            CONCAT12(bVar9 & (byte)((ulong)uVar17 >> 0x30),
                                     CONCAT11(bVar8 & (byte)((ulong)uVar17 >> 0x28),
                                              bVar6 & (byte)((ulong)uVar17 >> 0x20)))) == iVar7);
  iVar25 = -(uint)(CONCAT13(bVar15 & (byte)((ulong)uVar20 >> 0x18),
                            CONCAT12(bVar14 & (byte)((ulong)uVar20 >> 0x10),
                                     CONCAT11(bVar13 & (byte)((ulong)uVar20 >> 8),
                                              (byte)uVar12 & (byte)uVar20))) == (int)uVar12);
  iVar16 = -(uint)((float)uVar17 <= (float)uVar21);
  iVar18 = -(uint)((float)((ulong)uVar17 >> 0x20) <= (float)((ulong)uVar21 >> 0x20));
  iVar19 = -(uint)((float)uVar20 <= (float)uVar22);
  iVar1 = -(uint)(CONCAT13((byte)((ulong)uVar21 >> 0x18) & bVar5,
                           CONCAT12((byte)((ulong)uVar21 >> 0x10) & bVar4,
                                    CONCAT11((byte)((ulong)uVar21 >> 8) & bVar3,
                                             (byte)uVar21 & (byte)uVar2))) == (int)uVar2);
  iVar7 = -(uint)(CONCAT13((byte)((ulong)uVar21 >> 0x38) & bVar10,
                           CONCAT12((byte)((ulong)uVar21 >> 0x30) & bVar9,
                                    CONCAT11((byte)((ulong)uVar21 >> 0x28) & bVar8,
                                             (byte)((ulong)uVar21 >> 0x20) & bVar6))) == iVar7);
  iVar11 = -(uint)(CONCAT13((byte)((ulong)uVar22 >> 0x18) & bVar15,
                            CONCAT12((byte)((ulong)uVar22 >> 0x10) & bVar14,
                                     CONCAT11((byte)((ulong)uVar22 >> 8) & bVar13,
                                              (byte)uVar22 & (byte)uVar12))) == (int)uVar12);
  return CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                  (byte)((uint)iVar19 >> 0x18),
                  CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                           (byte)((uint)iVar19 >> 0x10),
                           CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar16 >> 8) &
                                    (byte)((uint)iVar19 >> 8),
                                    (byte)iVar18 & (byte)iVar16 & (byte)iVar19))) != 0 &&
         (CONCAT13(~(byte)((uint)iVar24 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18) &
                   ~(byte)((uint)iVar25 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar24 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10) &
                            ~(byte)((uint)iVar25 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar24 >> 8) & ~(byte)((uint)iVar23 >> 8) &
                                     ~(byte)((uint)iVar25 >> 8),
                                     ~(byte)iVar24 & ~(byte)iVar23 & ~(byte)iVar25))) != 0 &&
         CONCAT13(~(byte)((uint)iVar7 >> 0x18) & ~(byte)((uint)iVar1 >> 0x18) &
                  ~(byte)((uint)iVar11 >> 0x18),
                  CONCAT12(~(byte)((uint)iVar7 >> 0x10) & ~(byte)((uint)iVar1 >> 0x10) &
                           ~(byte)((uint)iVar11 >> 0x10),
                           CONCAT11(~(byte)((uint)iVar7 >> 8) & ~(byte)((uint)iVar1 >> 8) &
                                    ~(byte)((uint)iVar11 >> 8),
                                    ~(byte)iVar7 & ~(byte)iVar1 & ~(byte)iVar11))) != 0);
}


