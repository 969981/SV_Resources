/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012416c0; name: FUN_012416c0
 */


void FUN_012416c0(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  undefined *local_80;
  long lStack_78;
  long local_70;
  undefined2 local_68;
  char local_66;
  
  lStack_78 = *(long *)(param_1 + 8);
  if ((*(byte *)(*(long *)(lStack_78 + 0x38) + 0x499) >> 2 & 1) == 0) {
    local_70 = *(long *)(param_1 + 0x10);
    local_68 = 0;
    local_80 = PTR_DAT_047e2580 + 0x10;
    local_66 = '\x01';
    FUN_01247774(&local_80);
    lVar3 = local_70;
    if (local_66 == '\0') {
      uVar11 = (ulong)(byte)local_68;
      lVar8 = 0;
      if ((byte)local_68 < 5) {
        lVar8 = *(long *)(local_70 + 0x30) + uVar11 * 0x38 + 0x28;
      }
      if (local_68._1_1_ < *(byte *)(lVar8 + 0x30)) {
        plVar9 = *(long **)(lVar8 + (ulong)local_68._1_1_ * 8);
      }
      else {
        plVar9 = (long *)0x0;
      }
      bVar12 = local_68._1_1_ + 1;
      local_68 = CONCAT11(bVar12,(byte)local_68);
      if ((byte)local_68 < 5) {
        do {
          lVar8 = *(long *)(*(long *)(lVar3 + 0x290) + 8);
          bVar4 = FUN_010f9128(*(undefined4 *)(lVar8 + 0x36c),*(undefined1 *)(lVar8 + 0x370),
                               (uint)uVar11 & 0xff);
          if (bVar12 < bVar4) {
            do {
              if (((bVar12 < *(byte *)(*(long *)(lVar3 + 0x30) + (uVar11 & 0xff) * 0x38 + 0x58)) &&
                  (plVar6 = *(long **)(*(long *)(lVar3 + 0x30) + (uVar11 & 0xff) * 0x38 +
                                       (ulong)bVar12 * 8 + 0x28), plVar6 != (long *)0x0)) &&
                 (uVar7 = (**(code **)(*plVar6 + 0x200))(), (uVar7 & 1) == 0)) {
                bVar2 = false;
                local_68 = CONCAT11(bVar12,(char)uVar11);
                goto LAB_01241818;
              }
              bVar12 = bVar12 + 1;
            } while (bVar12 < bVar4);
          }
          uVar1 = (uint)uVar11 + 1;
          uVar11 = (ulong)uVar1;
          bVar12 = 0;
        } while ((uVar1 & 0xff) < 5);
        bVar12 = 0;
        local_68 = (ushort)(byte)uVar1;
      }
      bVar2 = true;
      local_66 = '\x01';
LAB_01241818:
      lVar8 = *(long *)(param_1 + 0x20);
      lVar13 = *(long *)(lVar8 + 0x20);
      uVar5 = (**(code **)(*plVar9 + 0x98))(plVar9);
      plVar6 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x30),uVar5);
      (**(code **)(*plVar6 + 0x4b0))(plVar6,1);
      uVar10 = *(undefined8 *)(lVar8 + 0x18);
      uVar5 = (**(code **)(*plVar9 + 0x98))(plVar9);
      FUN_0129aff0(uVar10,0x51,uVar5,1);
      if (!bVar2) {
        uVar1 = (uint)uVar11 & 0xff;
        lVar8 = 0;
        if (uVar1 < 5) {
          lVar8 = *(long *)(lVar3 + 0x30) + (uVar11 & 0xff) * 0x38 + 0x28;
        }
        if (bVar12 < *(byte *)(lVar8 + 0x30)) {
          plVar9 = *(long **)(lVar8 + (ulong)bVar12 * 8);
        }
        else {
          plVar9 = (long *)0x0;
        }
        bVar12 = bVar12 + 1;
        local_68 = CONCAT11(bVar12,(byte)local_68);
        if (uVar1 < 5) {
          do {
            lVar8 = *(long *)(*(long *)(lVar3 + 0x290) + 8);
            bVar4 = FUN_010f9128(*(undefined4 *)(lVar8 + 0x36c),*(undefined1 *)(lVar8 + 0x370),
                                 (uint)uVar11 & 0xff);
            if (bVar12 < bVar4) {
              do {
                if (((bVar12 < *(byte *)(*(long *)(lVar3 + 0x30) + (uVar11 & 0xff) * 0x38 + 0x58))
                    && (plVar6 = *(long **)(*(long *)(lVar3 + 0x30) + (uVar11 & 0xff) * 0x38 +
                                            (ulong)bVar12 * 8 + 0x28), plVar6 != (long *)0x0)) &&
                   (uVar7 = (**(code **)(*plVar6 + 0x200))(), (uVar7 & 1) == 0)) {
                  bVar2 = false;
                  local_68 = CONCAT11(bVar12,(char)uVar11);
                  goto LAB_01241818;
                }
                bVar12 = bVar12 + 1;
              } while (bVar12 < bVar4);
            }
            uVar1 = (uint)uVar11 + 1;
            uVar11 = (ulong)uVar1;
            bVar12 = 0;
          } while ((uVar1 & 0xff) < 5);
          bVar12 = 0;
          local_68 = (ushort)(byte)uVar1;
        }
        bVar2 = true;
        local_66 = '\x01';
        goto LAB_01241818;
      }
    }
  }
  return;
}


