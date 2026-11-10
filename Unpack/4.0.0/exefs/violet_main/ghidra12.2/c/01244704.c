/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01244704; name: FUN_01244704
 */


void FUN_01244704(long param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  long lVar11;
  undefined *local_70;
  undefined8 local_68;
  long local_60;
  undefined2 local_58;
  char local_56;
  
  memset(param_2,0,0x8f);
  local_70 = PTR_DAT_047e2580;
  param_2[0x14] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  local_70 = local_70 + 0x10;
  *(undefined2 *)(param_2 + 0x15) = 0;
  local_68 = *(undefined8 *)(param_1 + 8);
  local_60 = *(long *)(param_1 + 0x10);
  local_58 = 0;
  local_56 = '\x01';
  FUN_01247774(&local_70);
  lVar3 = local_60;
  if (local_56 == '\0') {
    uVar9 = (ulong)(byte)local_58;
    lVar11 = 0;
    if ((byte)local_58 < 5) {
      lVar11 = *(long *)(local_60 + 0x30) + uVar9 * 0x38 + 0x28;
    }
    if (local_58._1_1_ < *(byte *)(lVar11 + 0x30)) {
      lVar11 = *(long *)(lVar11 + (ulong)local_58._1_1_ * 8);
    }
    else {
      lVar11 = 0;
    }
    bVar10 = local_58._1_1_ + 1;
    local_58 = CONCAT11(bVar10,(byte)local_58);
    if ((byte)local_58 < 5) {
      do {
        lVar6 = *(long *)(*(long *)(lVar3 + 0x290) + 8);
        bVar4 = FUN_010f9128(*(undefined4 *)(lVar6 + 0x36c),*(undefined1 *)(lVar6 + 0x370),
                             (uint)uVar9 & 0xff);
        if (bVar10 < bVar4) {
          do {
            if (((bVar10 < *(byte *)(*(long *)(lVar3 + 0x30) + (uVar9 & 0xff) * 0x38 + 0x58)) &&
                (plVar5 = *(long **)(*(long *)(lVar3 + 0x30) + (uVar9 & 0xff) * 0x38 +
                                     (ulong)bVar10 * 8 + 0x28), plVar5 != (long *)0x0)) &&
               (uVar7 = (**(code **)(*plVar5 + 0x200))(), (uVar7 & 1) == 0)) {
              bVar2 = false;
              local_58 = CONCAT11(bVar10,(char)uVar9);
              goto LAB_01244858;
            }
            bVar10 = bVar10 + 1;
          } while (bVar10 < bVar4);
        }
        uVar1 = (uint)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        bVar10 = 0;
      } while ((uVar1 & 0xff) < 5);
      bVar10 = 0;
      local_58 = (ushort)(byte)uVar1;
    }
    bVar2 = true;
    local_56 = '\x01';
LAB_01244858:
    if (lVar11 != 0) {
      uVar7 = (ulong)*(byte *)((long)param_2 + 0xa6);
      if (uVar7 < 0xb) {
        plVar5 = param_2;
        uVar8 = uVar7;
        if (*(byte *)((long)param_2 + 0xa6) != 0) {
          do {
            if (*plVar5 == lVar11) goto LAB_012448b8;
            uVar8 = uVar8 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar8 != 0);
        }
        param_2[uVar7] = lVar11;
        *(undefined1 *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0xa6) + 0x84) = 0;
        *(undefined2 *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0xa6) * 2 + 0x58) = 0;
        *(undefined2 *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0xa6) * 2 + 0x6e) = 0;
        bVar4 = *(char *)((long)param_2 + 0xa6) + 1;
        *(byte *)((long)param_2 + 0xa6) = bVar4;
        if (*(byte *)((long)param_2 + 0xa7) < bVar4) {
          *(byte *)((long)param_2 + 0xa7) = bVar4;
        }
      }
    }
LAB_012448b8:
    if (!bVar2) {
      uVar1 = (uint)uVar9 & 0xff;
      lVar11 = 0;
      if (uVar1 < 5) {
        lVar11 = *(long *)(lVar3 + 0x30) + (uVar9 & 0xff) * 0x38 + 0x28;
      }
      if (bVar10 < *(byte *)(lVar11 + 0x30)) {
        lVar11 = *(long *)(lVar11 + (ulong)bVar10 * 8);
      }
      else {
        lVar11 = 0;
      }
      bVar10 = bVar10 + 1;
      bVar2 = true;
      if (uVar1 < 5) {
        uVar9 = uVar9 & 0xff;
        do {
          lVar6 = *(long *)(*(long *)(lVar3 + 0x290) + 8);
          bVar4 = FUN_010f9128(*(undefined4 *)(lVar6 + 0x36c),*(undefined1 *)(lVar6 + 0x370),
                               uVar9 & 0xffffffff);
          for (; bVar10 < bVar4; bVar10 = bVar10 + 1) {
            if (((bVar10 < *(byte *)(*(long *)(lVar3 + 0x30) + uVar9 * 0x38 + 0x58)) &&
                (plVar5 = *(long **)(*(long *)(lVar3 + 0x30) + uVar9 * 0x38 + (ulong)bVar10 * 8 +
                                    0x28), plVar5 != (long *)0x0)) &&
               (uVar7 = (**(code **)(*plVar5 + 0x200))(), (uVar7 & 1) == 0)) {
              bVar2 = false;
              goto LAB_01244858;
            }
          }
          uVar9 = uVar9 + 1;
          bVar10 = 0;
        } while (uVar9 != 5);
        bVar2 = true;
        uVar9 = 5;
      }
      goto LAB_01244858;
    }
  }
  return;
}


