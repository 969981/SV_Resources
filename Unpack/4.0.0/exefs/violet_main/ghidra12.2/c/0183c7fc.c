/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0183c7fc; name: FUN_0183c7fc
 */


void FUN_0183c7fc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  byte bVar15;
  undefined *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined2 local_68;
  char local_66;
  
  if (*(char *)((long)param_3 + 0xa6) != '\0') {
    plVar12 = (long *)*param_3;
    iVar5 = (**(code **)(*plVar12 + 0x98))(plVar12);
    uStack_78 = *(undefined8 *)(param_1 + 8);
    local_70 = *(long *)(param_1 + 0x10);
    local_68 = 0;
    local_80 = PTR_DAT_047e2580 + 0x10;
    local_66 = '\x01';
    FUN_01247774(&local_80);
    lVar3 = local_70;
    if (local_66 == '\0') {
      uVar14 = (ulong)(byte)local_68;
      lVar9 = 0;
      if ((byte)local_68 < 5) {
        lVar9 = *(long *)(local_70 + 0x30) + uVar14 * 0x38 + 0x28;
      }
      if (local_68._1_1_ < *(byte *)(lVar9 + 0x30)) {
        plVar13 = *(long **)(lVar9 + (ulong)local_68._1_1_ * 8);
      }
      else {
        plVar13 = (long *)0x0;
      }
      bVar15 = local_68._1_1_ + 1;
      local_68 = CONCAT11(bVar15,(byte)local_68);
      if ((byte)local_68 < 5) {
        do {
          lVar9 = *(long *)(*(long *)(lVar3 + 0x290) + 8);
          bVar4 = FUN_010f9128(*(undefined4 *)(lVar9 + 0x36c),*(undefined1 *)(lVar9 + 0x370),
                               (uint)uVar14 & 0xff);
          if (bVar15 < bVar4) {
            do {
              if (((bVar15 < *(byte *)(*(long *)(lVar3 + 0x30) + (uVar14 & 0xff) * 0x38 + 0x58)) &&
                  (plVar8 = *(long **)(*(long *)(lVar3 + 0x30) + (uVar14 & 0xff) * 0x38 +
                                       (ulong)bVar15 * 8 + 0x28), plVar8 != (long *)0x0)) &&
                 (uVar7 = (**(code **)(*plVar8 + 0x200))(), (uVar7 & 1) == 0)) {
                bVar2 = false;
                local_68 = CONCAT11(bVar15,(char)uVar14);
                goto LAB_0183c958;
              }
              bVar15 = bVar15 + 1;
            } while (bVar15 < bVar4);
          }
          uVar1 = (uint)uVar14 + 1;
          uVar14 = (ulong)uVar1;
          bVar15 = 0;
        } while ((uVar1 & 0xff) < 5);
        bVar15 = 0;
        local_68 = (ushort)(byte)uVar1;
      }
      bVar2 = true;
      local_66 = '\x01';
LAB_0183c958:
      iVar6 = (**(code **)(*plVar13 + 0x98))(plVar13);
      if (((iVar6 != iVar5) &&
          (uVar7 = FUN_0183cb54(*(undefined8 *)(param_1 + 0x38),param_2,plVar12,plVar13),
          plVar13 != (long *)0x0)) && ((uVar7 & 1) != 0)) {
        uVar7 = (ulong)*(byte *)((long)param_3 + 0xa6);
        if (uVar7 < 0xb) {
          puVar10 = param_3;
          uVar11 = uVar7;
          if (*(byte *)((long)param_3 + 0xa6) != 0) {
            do {
              if ((long *)*puVar10 == plVar13) goto LAB_0183c98c;
              uVar11 = uVar11 - 1;
              puVar10 = puVar10 + 1;
            } while (uVar11 != 0);
          }
          param_3[uVar7] = plVar13;
          *(undefined1 *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0xa6) + 0x84) = 0;
          *(undefined2 *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0xa6) * 2 + 0x58) = 0;
          *(undefined2 *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0xa6) * 2 + 0x6e) = 0;
          bVar4 = *(char *)((long)param_3 + 0xa6) + 1;
          *(byte *)((long)param_3 + 0xa6) = bVar4;
          if (*(byte *)((long)param_3 + 0xa7) < bVar4) {
            *(byte *)((long)param_3 + 0xa7) = bVar4;
          }
        }
      }
LAB_0183c98c:
      if (!bVar2) {
        uVar1 = (uint)uVar14 & 0xff;
        lVar9 = 0;
        if (uVar1 < 5) {
          lVar9 = *(long *)(lVar3 + 0x30) + (uVar14 & 0xff) * 0x38 + 0x28;
        }
        if (bVar15 < *(byte *)(lVar9 + 0x30)) {
          plVar13 = *(long **)(lVar9 + (ulong)bVar15 * 8);
        }
        else {
          plVar13 = (long *)0x0;
        }
        bVar15 = bVar15 + 1;
        local_68 = CONCAT11(bVar15,(byte)local_68);
        if (uVar1 < 5) {
          do {
            lVar9 = *(long *)(*(long *)(lVar3 + 0x290) + 8);
            bVar4 = FUN_010f9128(*(undefined4 *)(lVar9 + 0x36c),*(undefined1 *)(lVar9 + 0x370),
                                 (uint)uVar14 & 0xff);
            if (bVar15 < bVar4) {
              do {
                if (((bVar15 < *(byte *)(*(long *)(lVar3 + 0x30) + (uVar14 & 0xff) * 0x38 + 0x58))
                    && (plVar8 = *(long **)(*(long *)(lVar3 + 0x30) + (uVar14 & 0xff) * 0x38 +
                                            (ulong)bVar15 * 8 + 0x28), plVar8 != (long *)0x0)) &&
                   (uVar7 = (**(code **)(*plVar8 + 0x200))(), (uVar7 & 1) == 0)) {
                  bVar2 = false;
                  local_68 = CONCAT11(bVar15,(char)uVar14);
                  goto LAB_0183c958;
                }
                bVar15 = bVar15 + 1;
              } while (bVar15 < bVar4);
            }
            uVar1 = (uint)uVar14 + 1;
            uVar14 = (ulong)uVar1;
            bVar15 = 0;
          } while ((uVar1 & 0xff) < 5);
          bVar15 = 0;
          local_68 = (ushort)(byte)uVar1;
        }
        bVar2 = true;
        local_66 = '\x01';
        goto LAB_0183c958;
      }
    }
  }
  return;
}


