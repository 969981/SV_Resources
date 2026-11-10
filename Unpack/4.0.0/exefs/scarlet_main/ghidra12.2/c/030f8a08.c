/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f8a08; name: FUN_030f8a08
 */


void FUN_030f8a08(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  int iVar16;
  int iVar17;
  undefined8 uVar15;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_68;
  
  lVar6 = tpidr_el0;
  lVar3 = *(long *)(lVar6 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar3;
  }
  plVar7 = *(long **)(lVar3 + 0x3e0);
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
      (**(code **)(lVar6 + 0x18))("updateGenerators",0x10,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar1 = (undefined8 *)plVar7[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar7[3]) && (plVar7[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtupdateGenerators";
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar1 = (undefined8 *)plVar7[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar7[3]) && (plVar7[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
  }
  if ((param_2 & 1) == 0) {
    uVar2 = CONCAT44(*(undefined4 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0x184));
  }
  else {
    uVar2 = NEON_fmov(0xbf800000,4);
  }
  local_68 = plVar7;
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    lVar6 = 0;
    lVar3 = 0x30;
    do {
      lVar5 = *(long *)(param_1 + 0xa0);
      if ((param_2 & 1) != 0) {
        *(undefined1 *)(lVar5 + lVar3 + 0x22) = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
      }
      puVar1 = (undefined8 *)(lVar5 + lVar3);
      (**(code **)(*(long *)puVar1[-6] + 0x40))();
      uVar4 = (**(code **)(*(long *)puVar1[-6] + 0x58))();
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)(puVar1 + 4) = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
      }
      lVar5 = puVar1[-6];
      uVar11 = *(undefined8 *)(lVar5 + 0x38);
      uVar9 = *(undefined8 *)(lVar5 + 0x30);
      fVar10 = (float)uVar2;
      iVar13 = -(uint)(ABS((float)*(undefined8 *)(lVar5 + 0x40) - (float)puVar1[2]) <= fVar10);
      fVar12 = (float)((ulong)uVar2 >> 0x20);
      iVar16 = -(uint)(ABS((float)((ulong)*(undefined8 *)(lVar5 + 0x40) >> 0x20) -
                           (float)((ulong)puVar1[2] >> 0x20)) <= fVar12);
      iVar18 = -(uint)(ABS((float)*(undefined8 *)(lVar5 + 0x48) - (float)puVar1[3]) <= fVar10);
      iVar14 = -(uint)(ABS((float)uVar9 - (float)*puVar1) <= fVar10);
      iVar17 = -(uint)(ABS((float)((ulong)uVar9 >> 0x20) - (float)((ulong)*puVar1 >> 0x20)) <=
                      fVar12);
      iVar19 = -(uint)(ABS((float)uVar11 - (float)puVar1[1]) <= fVar10);
      iVar20 = -(uint)(ABS((float)((ulong)uVar11 >> 0x20) - (float)((ulong)puVar1[1] >> 0x20)) <=
                      fVar12);
      iVar14 = CONCAT13((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar14 >> 0x18) &
                        (byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                        CONCAT12((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar14 >> 0x10) &
                                 (byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                                 CONCAT11((byte)((uint)iVar17 >> 8) & (byte)((uint)iVar14 >> 8) &
                                          (byte)((uint)iVar19 >> 8) & (byte)((uint)iVar20 >> 8),
                                          (byte)iVar17 & (byte)iVar14 & (byte)iVar19 & (byte)iVar20)
                                ));
      if ((CONCAT13((byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar13 >> 0x18) &
                    (byte)((uint)iVar18 >> 0x18),
                    CONCAT12((byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar13 >> 0x10) &
                             (byte)((uint)iVar18 >> 0x10),
                             CONCAT11((byte)((uint)iVar16 >> 8) & (byte)((uint)iVar13 >> 8) &
                                      (byte)((uint)iVar18 >> 8),
                                      (byte)iVar16 & (byte)iVar13 & (byte)iVar18))) == 0 ||
           iVar14 == 0) || (*(char *)(puVar1 + 4) != '\0')) {
        if ((iVar14 == 0) || (*(char *)(puVar1 + 4) != '\0')) {
          local_80 = 0;
          uStack_78 = 0;
          local_90 = uVar9;
          uStack_88 = uVar11;
          (**(code **)(*(long *)puVar1[-6] + 0x48))
                    (*(undefined4 *)(param_1 + 0x180),(long *)puVar1[-6],&local_90,param_1 + 0x150,
                     puVar1 + -4);
          uVar11 = *(undefined8 *)(lVar5 + 0x38);
          uVar9 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar1[1] = uVar11;
        *puVar1 = uVar9;
        uVar11 = *(undefined8 *)(lVar5 + 0x48);
        uVar9 = *(undefined8 *)(lVar5 + 0x40);
        uVar15 = puVar1[-4];
        uVar22 = puVar1[-1];
        uVar21 = puVar1[-2];
        puVar1[3] = uVar11;
        puVar1[2] = uVar9;
        fVar10 = (float)((ulong)uVar9 >> 0x20);
        fVar12 = (float)((ulong)uVar11 >> 0x20);
        lVar5 = *(long *)(param_1 + 0x20) + lVar8;
        *(ulong *)(lVar5 + 0x28) =
             CONCAT44(fVar12 + (float)((ulong)puVar1[-3] >> 0x20),(float)uVar11 + (float)puVar1[-3])
        ;
        *(ulong *)(lVar5 + 0x20) =
             CONCAT44(fVar10 + (float)((ulong)uVar15 >> 0x20),(float)uVar9 + (float)uVar15);
        *(ulong *)(lVar5 + 0x38) =
             CONCAT44(fVar12 + (float)((ulong)uVar22 >> 0x20),(float)uVar11 + (float)uVar22);
        *(ulong *)(lVar5 + 0x30) =
             CONCAT44(fVar10 + (float)((ulong)uVar21 >> 0x20),(float)uVar9 + (float)uVar21);
        *(undefined1 *)(lVar5 + 0x40) = 1;
        *(undefined1 *)((long)puVar1 + 0x21) = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
      }
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + 0x60;
      lVar8 = lVar8 + 0x50;
    } while (lVar6 < *(int *)(param_1 + 0xa8));
  }
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar1 = (undefined8 *)plVar7[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar7[3]) && (plVar7[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar7[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar7[3]) && (plVar7[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
      (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
    }
  }
  return;
}


