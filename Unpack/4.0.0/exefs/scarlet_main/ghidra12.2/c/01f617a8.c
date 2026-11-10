/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f617a8; name: FUN_01f617a8
 */


void FUN_01f617a8(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  int local_a0 [4];
  uint local_90 [4];
  long local_80 [8];
  
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
  uVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
  if ((uVar2 & 0xff) == 0xfd) {
    return;
  }
  uVar5 = (**(code **)*plVar7)(plVar7);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(long *)PTR_DAT_047d0a08 == 0) {
    return;
  }
  iVar3 = FUN_00f21480();
  if (iVar3 != 1) {
    return;
  }
  if (7 < (uVar2 & 0xff)) {
    return;
  }
  if (*(long *)PTR_DAT_047d0860 == 0) {
    return;
  }
  lVar6 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,(&DAT_0485ea48)[(ulong)uVar2 & 0xff],0x81);
  if (lVar6 == 0) {
    return;
  }
  if (*(byte *)(lVar6 + 0x78) < 0xb && (1 << (ulong)(*(byte *)(lVar6 + 0x78) & 0x1f) & 0x736U) != 0)
  {
    return;
  }
  local_80[6] = 0;
  local_80[7] = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  iVar3 = FUN_01f62ac0();
  if (iVar3 == 0) {
LAB_01f61940:
    if ((((local_80[2] == 0) && (local_80[3] == 0)) &&
        ((local_80[4] == 0 && ((local_80[5] == 0 && (local_80[6] == 0)))))) && (local_80[7] == 0)) {
      return;
    }
  }
  else {
    uVar4 = 0;
    while( true ) {
      if ((((uVar2 & 0xff) != uVar4) &&
          (lVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,local_90), lVar8 != 0)) &&
         (uVar5 = FUN_00f21f18(lVar6,lVar8,*(undefined1 *)(param_1 + 0x68)), (uVar5 & 1) != 0)) {
        local_80[(byte)local_90[0]] = lVar8;
      }
      bVar1 = (byte)local_90[0] + 1;
      local_90[0] = CONCAT31(local_90[0]._1_3_,bVar1);
      uVar4 = FUN_01f62ac0();
      if (uVar4 <= bVar1) break;
      uVar4 = local_90[0] & 0xff;
    }
    if (local_80[0] != 0) {
      bVar9 = false;
      lVar8 = local_80[0];
      goto LAB_01f61950;
    }
    if (local_80[1] == 0) goto LAB_01f61940;
  }
  lVar8 = 0;
  bVar9 = true;
LAB_01f61950:
  FUN_00f220f4(local_90,lVar6);
  if (((local_90[0] == 0) && (*(long *)(param_1 + 0x90) != 0)) &&
     (FUN_00f22188(local_a0,lVar6,*(long *)(param_1 + 0x90),0x97e08,*(undefined1 *)(param_1 + 0x68))
     , local_a0[0] == 0)) {
    if (!bVar9) {
      *(long *)(param_1 + 0xd0) = lVar8;
      *(undefined1 *)(param_1 + 0xda) = 1;
    }
    if (local_80[1] != 0) {
      *(long *)(param_1 + 0x100) = local_80[1];
      *(undefined1 *)(param_1 + 0x10a) = 1;
    }
    if (local_80[2] != 0) {
      *(long *)(param_1 + 0x130) = local_80[2];
      *(undefined1 *)(param_1 + 0x13a) = 1;
    }
    if (local_80[3] != 0) {
      *(long *)(param_1 + 0x160) = local_80[3];
      *(undefined1 *)(param_1 + 0x16a) = 1;
    }
    if (local_80[4] != 0) {
      *(long *)(param_1 + 400) = local_80[4];
      *(undefined1 *)(param_1 + 0x19a) = 1;
    }
    if (local_80[5] != 0) {
      *(long *)(param_1 + 0x1c0) = local_80[5];
      *(undefined1 *)(param_1 + 0x1ca) = 1;
    }
    if (local_80[6] != 0) {
      *(long *)(param_1 + 0x1f0) = local_80[6];
      *(undefined1 *)(param_1 + 0x1fa) = 1;
    }
    if (local_80[7] != 0) {
      *(long *)(param_1 + 0x220) = local_80[7];
      *(undefined1 *)(param_1 + 0x22a) = 1;
    }
  }
  return;
}


