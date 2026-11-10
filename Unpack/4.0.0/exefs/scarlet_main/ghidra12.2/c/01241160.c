/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01241160; name: FUN_01241160
 */


void FUN_01241160(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  byte bVar10;
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
      uVar9 = (ulong)(byte)local_68;
      lVar7 = 0;
      if ((byte)local_68 < 5) {
        lVar7 = *(long *)(local_70 + 0x30) + uVar9 * 0x38 + 0x28;
      }
      if (local_68._1_1_ < *(byte *)(lVar7 + 0x30)) {
        plVar8 = *(long **)(lVar7 + (ulong)local_68._1_1_ * 8);
      }
      else {
        plVar8 = (long *)0x0;
      }
      bVar10 = local_68._1_1_ + 1;
      local_68 = CONCAT11(bVar10,(byte)local_68);
      if ((byte)local_68 < 5) {
        do {
          lVar7 = *(long *)(*(long *)(lVar3 + 0x290) + 8);
          bVar4 = FUN_010f9128(*(undefined4 *)(lVar7 + 0x36c),*(undefined1 *)(lVar7 + 0x370),
                               (uint)uVar9 & 0xff);
          if (bVar10 < bVar4) {
            do {
              if (((bVar10 < *(byte *)(*(long *)(lVar3 + 0x30) + (uVar9 & 0xff) * 0x38 + 0x58)) &&
                  (plVar5 = *(long **)(*(long *)(lVar3 + 0x30) + (uVar9 & 0xff) * 0x38 +
                                       (ulong)bVar10 * 8 + 0x28), plVar5 != (long *)0x0)) &&
                 (uVar6 = (**(code **)(*plVar5 + 0x200))(), (uVar6 & 1) == 0)) {
                bVar2 = false;
                local_68 = CONCAT11(bVar10,(char)uVar9);
                goto LAB_012412b8;
              }
              bVar10 = bVar10 + 1;
            } while (bVar10 < bVar4);
          }
          uVar1 = (uint)uVar9 + 1;
          uVar9 = (ulong)uVar1;
          bVar10 = 0;
        } while ((uVar1 & 0xff) < 5);
        bVar10 = 0;
        local_68 = (ushort)(byte)uVar1;
      }
      bVar2 = true;
      local_66 = '\x01';
LAB_012412b8:
      uVar6 = (**(code **)(*plVar8 + 0x4d0))(plVar8,0xc);
      if ((uVar6 & 1) != 0) {
        FUN_01240198(*(undefined8 *)(param_1 + 0x20),plVar8,0xc);
        FUN_01248470(*(undefined8 *)(param_1 + 0x20),plVar8,0x13);
      }
      if (!bVar2) {
        uVar1 = (uint)uVar9 & 0xff;
        lVar7 = 0;
        if (uVar1 < 5) {
          lVar7 = *(long *)(lVar3 + 0x30) + (uVar9 & 0xff) * 0x38 + 0x28;
        }
        if (bVar10 < *(byte *)(lVar7 + 0x30)) {
          plVar8 = *(long **)(lVar7 + (ulong)bVar10 * 8);
        }
        else {
          plVar8 = (long *)0x0;
        }
        bVar10 = bVar10 + 1;
        local_68 = CONCAT11(bVar10,(byte)local_68);
        if (uVar1 < 5) {
          do {
            lVar7 = *(long *)(*(long *)(lVar3 + 0x290) + 8);
            bVar4 = FUN_010f9128(*(undefined4 *)(lVar7 + 0x36c),*(undefined1 *)(lVar7 + 0x370),
                                 (uint)uVar9 & 0xff);
            if (bVar10 < bVar4) {
              do {
                if (((bVar10 < *(byte *)(*(long *)(lVar3 + 0x30) + (uVar9 & 0xff) * 0x38 + 0x58)) &&
                    (plVar5 = *(long **)(*(long *)(lVar3 + 0x30) + (uVar9 & 0xff) * 0x38 +
                                         (ulong)bVar10 * 8 + 0x28), plVar5 != (long *)0x0)) &&
                   (uVar6 = (**(code **)(*plVar5 + 0x200))(), (uVar6 & 1) == 0)) {
                  bVar2 = false;
                  local_68 = CONCAT11(bVar10,(char)uVar9);
                  goto LAB_012412b8;
                }
                bVar10 = bVar10 + 1;
              } while (bVar10 < bVar4);
            }
            uVar1 = (uint)uVar9 + 1;
            uVar9 = (ulong)uVar1;
            bVar10 = 0;
          } while ((uVar1 & 0xff) < 5);
          bVar10 = 0;
          local_68 = (ushort)(byte)uVar1;
        }
        bVar2 = true;
        local_66 = '\x01';
        goto LAB_012412b8;
      }
    }
  }
  return;
}


