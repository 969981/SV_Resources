/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029fdb3c; name: FUN_029fdb3c
 */


undefined4 FUN_029fdb3c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_48;
  
  lVar7 = tpidr_el0;
  lVar4 = *(long *)(lVar7 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar4;
  }
  plVar6 = *(long **)(lVar4 + 0x3e0);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    if (*(code **)(lVar7 + 0x18) != (code *)0x0) {
      (**(code **)(lVar7 + 0x18))("findDirectPath",0xe,*(undefined8 *)(lVar7 + 0x28));
    }
    puVar1 = (undefined8 *)plVar6[2];
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar6[3]) && (plVar6[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtfindDirectPath";
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
    if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar1 = (undefined8 *)plVar6[2];
      uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar6[3]) && (plVar6[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
  }
  uVar11 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar16 = (*(undefined8 **)PTR_PTR_047d1bb0)[1];
  uVar13 = **(undefined8 **)PTR_PTR_047d1bb0;
  iVar14 = CONCAT13((byte)((ulong)uVar13 >> 0x18) & (byte)((ulong)uVar3 >> 0x18),
                    CONCAT12((byte)((ulong)uVar13 >> 0x10) & (byte)((ulong)uVar3 >> 0x10),
                             CONCAT11((byte)((ulong)uVar13 >> 8) & (byte)((ulong)uVar3 >> 8),
                                      (byte)uVar13 & (byte)uVar3)));
  iVar12 = -(uint)(iVar14 == (int)uVar13);
  iVar14 = -(uint)((int)(CONCAT17((byte)((ulong)uVar13 >> 0x38) & (byte)((ulong)uVar3 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar13 >> 0x30) &
                                           (byte)((ulong)uVar3 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar13 >> 0x28) &
                                                    (byte)((ulong)uVar3 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar13 >> 0x20) &
                                                             (byte)((ulong)uVar3 >> 0x20),iVar14))))
                        >> 0x20) == (int)((ulong)uVar13 >> 0x20));
  iVar15 = -(uint)(CONCAT13((byte)((ulong)uVar16 >> 0x18) & (byte)((ulong)uVar11 >> 0x18),
                            CONCAT12((byte)((ulong)uVar16 >> 0x10) & (byte)((ulong)uVar11 >> 0x10),
                                     CONCAT11((byte)((ulong)uVar16 >> 8) &
                                              (byte)((ulong)uVar11 >> 8),(byte)uVar16 & (byte)uVar11
                                             ))) == (int)uVar16);
  local_48 = plVar6;
  if (CONCAT13(~(byte)((uint)iVar14 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18) &
               ~(byte)((uint)iVar15 >> 0x18),
               CONCAT12(~(byte)((uint)iVar14 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10) &
                        ~(byte)((uint)iVar15 >> 0x10),
                        CONCAT11(~(byte)((uint)iVar14 >> 8) & ~(byte)((uint)iVar12 >> 8) &
                                 ~(byte)((uint)iVar15 >> 8),
                                 ~(byte)iVar14 & ~(byte)iVar12 & ~(byte)iVar15))) != 0) {
    fVar8 = (float)uVar3;
    fVar9 = (float)((ulong)uVar3 >> 0x20);
    fVar10 = (float)uVar11;
    uVar3 = NEON_fmov(0xbf800000,4);
    if (ABS(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9 + (float)uVar3) < 0.0001) {
      local_60 = CONCAT44((float)((ulong)*param_2 >> 0x20) + fVar9,(float)*param_2 + fVar8);
      uStack_58 = CONCAT44((float)((ulong)param_2[1] >> 0x20) + (float)((ulong)uVar11 >> 0x20),
                           (float)param_2[1] + fVar10);
      uVar2 = FUN_030b5e7c(param_2 + 0xe,&local_60,0xffffffff,param_1,param_2,param_3);
      goto LAB_029fdcb8;
    }
  }
  uVar2 = 0;
LAB_029fdcb8:
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar1 = (undefined8 *)plVar6[2];
      uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar6[3]) && (plVar6[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar6[2];
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar6[3]) && (plVar6[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
    if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
      (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x28));
    }
  }
  return uVar2;
}


