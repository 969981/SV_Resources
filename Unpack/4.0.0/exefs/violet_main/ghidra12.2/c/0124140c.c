/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124140c; name: FUN_0124140c
 */


void FUN_0124140c(long param_1)

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
  ulong uVar10;
  byte bVar11;
  undefined *local_70;
  long lStack_68;
  long local_60;
  undefined2 local_58;
  char local_56;
  
  lStack_68 = *(long *)(param_1 + 8);
  if ((*(byte *)(*(long *)(lStack_68 + 0x38) + 0x499) >> 2 & 1) == 0) {
    local_60 = *(long *)(param_1 + 0x10);
    local_58 = 0;
    local_70 = PTR_DAT_047e2580 + 0x10;
    local_56 = '\x01';
    FUN_01247774(&local_70);
    lVar3 = local_60;
    if (local_56 == '\0') {
      uVar10 = (ulong)(byte)local_58;
      lVar8 = 0;
      if ((byte)local_58 < 5) {
        lVar8 = *(long *)(local_60 + 0x30) + uVar10 * 0x38 + 0x28;
      }
      if (local_58._1_1_ < *(byte *)(lVar8 + 0x30)) {
        plVar9 = *(long **)(lVar8 + (ulong)local_58._1_1_ * 8);
      }
      else {
        plVar9 = (long *)0x0;
      }
      bVar11 = local_58._1_1_ + 1;
      local_58 = CONCAT11(bVar11,(byte)local_58);
      if ((byte)local_58 < 5) {
        do {
          lVar8 = *(long *)(*(long *)(lVar3 + 0x290) + 8);
          bVar4 = FUN_010f9128(*(undefined4 *)(lVar8 + 0x36c),*(undefined1 *)(lVar8 + 0x370),
                               (uint)uVar10 & 0xff);
          if (bVar11 < bVar4) {
            do {
              if (((bVar11 < *(byte *)(*(long *)(lVar3 + 0x30) + (uVar10 & 0xff) * 0x38 + 0x58)) &&
                  (plVar6 = *(long **)(*(long *)(lVar3 + 0x30) + (uVar10 & 0xff) * 0x38 +
                                       (ulong)bVar11 * 8 + 0x28), plVar6 != (long *)0x0)) &&
                 (uVar7 = (**(code **)(*plVar6 + 0x200))(), (uVar7 & 1) == 0)) {
                bVar2 = false;
                local_58 = CONCAT11(bVar11,(char)uVar10);
                goto LAB_0124155c;
              }
              bVar11 = bVar11 + 1;
            } while (bVar11 < bVar4);
          }
          uVar1 = (uint)uVar10 + 1;
          uVar10 = (ulong)uVar1;
          bVar11 = 0;
        } while ((uVar1 & 0xff) < 5);
        bVar11 = 0;
        local_58 = (ushort)(byte)uVar1;
      }
      bVar2 = true;
      local_56 = '\x01';
LAB_0124155c:
      uVar5 = (**(code **)(*plVar9 + 0x98))(plVar9);
      lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 0x68);
      uVar7 = FUN_0124e624(lVar8,uVar5);
      if (((uVar7 & 1) == 0) && (*(int *)(lVar8 + 0x28) < 0x1e)) {
        *(char *)(lVar8 + *(int *)(lVar8 + 0x28) + 8) = (char)uVar5;
        *(int *)(lVar8 + 0x28) = *(int *)(lVar8 + 0x28) + 1;
      }
      if (!bVar2) {
        uVar1 = (uint)uVar10 & 0xff;
        lVar8 = 0;
        if (uVar1 < 5) {
          lVar8 = *(long *)(lVar3 + 0x30) + (uVar10 & 0xff) * 0x38 + 0x28;
        }
        if (bVar11 < *(byte *)(lVar8 + 0x30)) {
          plVar9 = *(long **)(lVar8 + (ulong)bVar11 * 8);
        }
        else {
          plVar9 = (long *)0x0;
        }
        bVar11 = bVar11 + 1;
        local_58 = CONCAT11(bVar11,(byte)local_58);
        if (uVar1 < 5) {
          do {
            lVar8 = *(long *)(*(long *)(lVar3 + 0x290) + 8);
            bVar4 = FUN_010f9128(*(undefined4 *)(lVar8 + 0x36c),*(undefined1 *)(lVar8 + 0x370),
                                 (uint)uVar10 & 0xff);
            if (bVar11 < bVar4) {
              do {
                if (((bVar11 < *(byte *)(*(long *)(lVar3 + 0x30) + (uVar10 & 0xff) * 0x38 + 0x58))
                    && (plVar6 = *(long **)(*(long *)(lVar3 + 0x30) + (uVar10 & 0xff) * 0x38 +
                                            (ulong)bVar11 * 8 + 0x28), plVar6 != (long *)0x0)) &&
                   (uVar7 = (**(code **)(*plVar6 + 0x200))(), (uVar7 & 1) == 0)) {
                  bVar2 = false;
                  local_58 = CONCAT11(bVar11,(char)uVar10);
                  goto LAB_0124155c;
                }
                bVar11 = bVar11 + 1;
              } while (bVar11 < bVar4);
            }
            uVar1 = (uint)uVar10 + 1;
            uVar10 = (ulong)uVar1;
            bVar11 = 0;
          } while ((uVar1 & 0xff) < 5);
          bVar11 = 0;
          local_58 = (ushort)(byte)uVar1;
        }
        bVar2 = true;
        local_56 = '\x01';
        goto LAB_0124155c;
      }
    }
  }
  return;
}


