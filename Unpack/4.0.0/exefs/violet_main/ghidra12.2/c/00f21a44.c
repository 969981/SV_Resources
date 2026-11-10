/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f21a44; name: FUN_00f21a44
 */


void FUN_00f21a44(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  long *plVar7;
  bool bVar8;
  int local_b0 [4];
  uint local_a0 [4];
  long local_90 [8];
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    if (*(long *)(param_1 + 0x48) == 0) {
      return;
    }
    if (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) == 0) {
      return;
    }
  }
  plVar7 = *(long **)(param_1 + 0x58);
  if (plVar7 == (long *)0x0) {
    return;
  }
  bVar1 = (**(code **)(*plVar7 + 0x28))(plVar7);
  if (bVar1 == 0xfd) {
    return;
  }
  uVar3 = (**(code **)*plVar7)(plVar7);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)PTR_DAT_047d0a08 == 0) {
    return;
  }
  iVar2 = FUN_00f21480();
  if (iVar2 != 1) {
    return;
  }
  if (7 < bVar1) {
    return;
  }
  if (*(long *)PTR_DAT_047d0860 == 0) {
    return;
  }
  lVar4 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,(&DAT_0485ea48)[bVar1],0x81);
  if (lVar4 == 0) {
    return;
  }
  if (*(byte *)(lVar4 + 0x78) < 0xb && (1 << (ulong)(*(byte *)(lVar4 + 0x78) & 0x1f) & 0x736U) != 0)
  {
    return;
  }
  local_a0[0] = local_a0[0] & 0xffffff00;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  if (DAT_045dfcb0 == 0) {
LAB_00f21c7c:
    if (((((local_90[2] == 0) && (local_90[3] == 0)) && (local_90[4] == 0)) &&
        ((local_90[5] == 0 && (local_90[6] == 0)))) && (local_90[7] == 0)) {
      return;
    }
  }
  else {
    if (((bVar1 != 0) && (lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,local_a0), lVar5 != 0)) &&
       (uVar3 = FUN_00f21f18(lVar4,lVar5,*(undefined1 *)(param_1 + 0x68)), (uVar3 & 1) != 0)) {
      local_90[(byte)local_a0[0]] = lVar5;
    }
    bVar6 = (byte)local_a0[0] + 1;
    local_a0[0] = CONCAT31(local_a0[0]._1_3_,bVar6);
    if (bVar6 < DAT_045dfcb0) {
      if (((bVar1 != bVar6) && (lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,local_a0), lVar5 != 0))
         && (uVar3 = FUN_00f21f18(lVar4,lVar5,*(undefined1 *)(param_1 + 0x68)), (uVar3 & 1) != 0)) {
        local_90[(byte)local_a0[0]] = lVar5;
      }
      bVar6 = (byte)local_a0[0] + 1;
      local_a0[0] = CONCAT31(local_a0[0]._1_3_,bVar6);
      if (bVar6 < DAT_045dfcb0) {
        if (((bVar1 != bVar6) &&
            (lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,local_a0), lVar5 != 0)) &&
           (uVar3 = FUN_00f21f18(lVar4,lVar5,*(undefined1 *)(param_1 + 0x68)), (uVar3 & 1) != 0)) {
          local_90[(byte)local_a0[0]] = lVar5;
        }
        bVar6 = (byte)local_a0[0] + 1;
        local_a0[0] = CONCAT31(local_a0[0]._1_3_,bVar6);
        if (bVar6 < DAT_045dfcb0) {
          if (((bVar1 != bVar6) &&
              (lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,local_a0), lVar5 != 0)) &&
             (uVar3 = FUN_00f21f18(lVar4,lVar5,*(undefined1 *)(param_1 + 0x68)), (uVar3 & 1) != 0))
          {
            local_90[(byte)local_a0[0]] = lVar5;
          }
          bVar6 = (byte)local_a0[0] + 1;
          local_a0[0] = CONCAT31(local_a0[0]._1_3_,bVar6);
          if (bVar6 < DAT_045dfcb0) {
            if (((bVar1 != bVar6) &&
                (lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,local_a0), lVar5 != 0)) &&
               (uVar3 = FUN_00f21f18(lVar4,lVar5,*(undefined1 *)(param_1 + 0x68)), (uVar3 & 1) != 0)
               ) {
              local_90[(byte)local_a0[0]] = lVar5;
            }
            bVar6 = (byte)local_a0[0] + 1;
            local_a0[0] = CONCAT31(local_a0[0]._1_3_,bVar6);
            if (bVar6 < DAT_045dfcb0) {
              do {
                if (((bVar1 != bVar6) &&
                    (lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,local_a0), lVar5 != 0)) &&
                   (uVar3 = FUN_00f21f18(lVar4,lVar5,*(undefined1 *)(param_1 + 0x68)),
                   (uVar3 & 1) != 0)) {
                  local_90[(byte)local_a0[0]] = lVar5;
                }
                bVar6 = (byte)local_a0[0] + 1;
                local_a0[0] = CONCAT31(local_a0[0]._1_3_,bVar6);
              } while (bVar6 < DAT_045dfcb0);
            }
          }
        }
      }
    }
    if (local_90[0] != 0) {
      bVar8 = false;
      lVar5 = local_90[0];
      goto LAB_00f21d98;
    }
    if (local_90[1] == 0) goto LAB_00f21c7c;
  }
  bVar8 = true;
  lVar5 = 0;
LAB_00f21d98:
  FUN_00f220f4(local_a0,lVar4);
  if (((local_a0[0] == 0) && (*(long *)(param_1 + 0x90) != 0)) &&
     (FUN_00f22188(local_b0,lVar4,*(long *)(param_1 + 0x90),0xf388,*(undefined1 *)(param_1 + 0x68)),
     local_b0[0] == 0)) {
    if (!bVar8) {
      *(long *)(param_1 + 0xd0) = lVar5;
      *(undefined1 *)(param_1 + 0xda) = 1;
    }
    if (local_90[1] != 0) {
      *(long *)(param_1 + 0x100) = local_90[1];
      *(undefined1 *)(param_1 + 0x10a) = 1;
    }
    if (local_90[2] != 0) {
      *(long *)(param_1 + 0x130) = local_90[2];
      *(undefined1 *)(param_1 + 0x13a) = 1;
    }
    if (local_90[3] != 0) {
      *(long *)(param_1 + 0x160) = local_90[3];
      *(undefined1 *)(param_1 + 0x16a) = 1;
    }
    if (local_90[4] != 0) {
      *(long *)(param_1 + 400) = local_90[4];
      *(undefined1 *)(param_1 + 0x19a) = 1;
    }
    if (local_90[5] != 0) {
      *(long *)(param_1 + 0x1c0) = local_90[5];
      *(undefined1 *)(param_1 + 0x1ca) = 1;
    }
    if (local_90[6] != 0) {
      *(long *)(param_1 + 0x1f0) = local_90[6];
      *(undefined1 *)(param_1 + 0x1fa) = 1;
    }
    if (local_90[7] != 0) {
      *(long *)(param_1 + 0x220) = local_90[7];
      *(undefined1 *)(param_1 + 0x22a) = 1;
    }
  }
  return;
}


