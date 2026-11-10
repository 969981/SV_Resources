/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00311bc0; name: FUN_00311bc0
 */


void FUN_00311bc0(ulong param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  byte bVar15;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  plVar13 = (long *)(param_1 & 0xfffffffffffffffc);
  if (*plVar13 == 0) {
    uVar14 = (uint)*(byte *)(plVar13 + 1);
  }
  else {
    uVar14 = (uint)plVar13[1];
  }
  cVar2 = *(char *)(param_2 + 0x38);
  iVar5 = FUN_003748a0(plVar13);
  plVar11 = plVar13 + 4;
  if (iVar5 == 0) {
    puVar10 = (undefined8 *)*plVar11;
    if ((puVar10 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar10, plVar12 != (long *)0x0)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar10 = (undefined8 *)*plVar11;
    }
    lStack_78 = plVar13[5];
    local_80 = *plVar11;
    lStack_68 = plVar13[7];
    lStack_70 = plVar13[6];
    bVar15 = 0;
    uVar1 = (uint)plVar13[5] & 0xff;
    if (puVar10 != (undefined8 *)0x0) {
      uVar1 = (uint)plVar13[5];
    }
  }
  else {
    if (cVar2 != '\0') {
      puVar10 = (undefined8 *)*plVar11;
      if ((puVar10 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar10, plVar12 != (long *)0x0)) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar10 = (undefined8 *)*plVar11;
      }
      lStack_98 = plVar13[5];
      local_a0 = *plVar11;
      lStack_88 = plVar13[7];
      lStack_90 = plVar13[6];
      uVar1 = (uint)plVar13[5] & 0xff;
      if (puVar10 != (undefined8 *)0x0) {
        uVar1 = (uint)plVar13[5];
      }
      bVar3 = false;
      bVar15 = 0;
      iVar5 = 1;
      uVar1 = uVar1 + 1;
      goto joined_r0x00311cd8;
    }
    FUN_00312450(&local_80);
    bVar15 = 0x80;
    uVar1 = (uint)lStack_78 & 0xff;
    if (local_80 != 0) {
      uVar1 = (uint)lStack_78;
    }
  }
  bVar3 = true;
  iVar5 = 0;
  local_a0 = local_80;
  lStack_98 = lStack_78;
  lStack_90 = lStack_70;
  lStack_88 = lStack_68;
joined_r0x00311cd8:
  if (uVar14 < 0x7f) {
    iVar6 = 1;
  }
  else {
    iVar6 = FUN_00319a80(uVar14 - 0x7f);
  }
  if (uVar1 < 0x7f) {
    uVar7 = 1;
  }
  else {
    uVar7 = FUN_00319a80(uVar1 - 0x7f);
  }
  puVar8 = (undefined1 *)FUN_00311a20(param_2,iVar6 + 1);
  *puVar8 = 0;
  if (iVar6 + -1 == 0) {
    puVar8[1] = (char)uVar14;
    puVar10 = (undefined8 *)*plVar13;
  }
  else {
    puVar8[1] = 0x7f;
    FUN_00319ac0(uVar14 - 0x7f,puVar8 + 2,iVar6 + -1);
    puVar10 = (undefined8 *)*plVar13;
  }
  if ((puVar10 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_b8 = plVar13[1];
  local_c0 = *plVar13;
  lStack_a8 = plVar13[3];
  lStack_b0 = plVar13[2];
  FUN_003122b0(param_2,&local_c0);
  pbVar9 = (byte *)FUN_00311a20(param_2,uVar7 + iVar5);
  if (uVar7 - 1 == 0) {
    *pbVar9 = bVar15 | (byte)uVar1;
    local_e0 = local_a0;
    lStack_d8 = lStack_98;
    lStack_d0 = lStack_90;
    lStack_c8 = lStack_88;
  }
  else {
    *pbVar9 = bVar15 | 0x7f;
    FUN_00319ac0(uVar1 - 0x7f,pbVar9 + 1,uVar7 - 1);
    local_e0 = local_a0;
    lStack_d8 = lStack_98;
    lStack_d0 = lStack_90;
    lStack_c8 = lStack_88;
  }
  if (!bVar3) {
    pbVar9[uVar7] = 0;
  }
  local_a0 = local_e0;
  lStack_98 = lStack_d8;
  lStack_90 = lStack_d0;
  lStack_88 = lStack_c8;
  FUN_003122b0(param_2,&local_e0);
  return;
}


