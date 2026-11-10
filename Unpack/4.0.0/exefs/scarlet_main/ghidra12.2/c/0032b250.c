/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032b250; name: FUN_0032b250
 */


undefined8 * FUN_0032b250(long *param_1,ulong *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  long *local_98;
  long local_90;
  long local_88;
  void *local_80;
  ulong local_78;
  undefined1 auStack_70 [8];
  void **local_68;
  
  lVar4 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
  lVar13 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lVar13 = param_1[2];
  }
  uVar6 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar6 = param_1[1];
  }
                    /* try { // try from 0032b2a8 to 0032b2db has its CatchHandler @ 0032b638 */
  puVar5 = (undefined8 *)FUN_0038ad50(PTR_PTR_047ccc00,lVar4);
  if ((puVar5 == (undefined8 *)0x0) ||
     (uVar6 = FUN_00385610(lVar13,uVar6,puVar5,PTR_PTR_047ccc00,lVar4), (uVar6 & 1) == 0)) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    do {
      uVar10 = *param_2;
      uVar6 = uVar10 + 0x50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = uVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (param_2[1] < uVar6) {
                    /* try { // try from 0032b300 to 0032b30b has its CatchHandler @ 0032b628 */
      puVar7 = (undefined8 *)FUN_0038e7c0(param_2,0x50);
    }
    else {
      puVar7 = (undefined8 *)((long)param_2 + uVar10 + 0x20);
    }
    puVar18 = puVar7 + 4;
    puVar7[5] = 0;
    *puVar18 = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar11 = puVar7 + 3;
    *puVar11 = puVar18;
    puVar12 = puVar7 + 7;
    *puVar12 = 0;
    puVar15 = puVar7 + 6;
    *puVar15 = puVar12;
    puVar7[8] = 0;
    *puVar7 = *puVar5;
    uVar16 = puVar5[1];
    puVar7[2] = puVar5[2];
    puVar7[1] = uVar16;
    local_90 = 0;
    local_88 = 0;
    lVar13 = puVar5[3];
    local_98 = &local_90;
    if (lVar13 != 0) {
      uVar6 = 0xffffffffffffffff;
      do {
        local_80 = (void *)(lVar13 + 8);
                    /* try { // try from 0032b39c to 0032b3af has its CatchHandler @ 0032b650 */
        local_78 = uVar6;
        FUN_0038b6b0(&local_80);
        uVar6 = local_78;
        uVar8 = FUN_0038b470(&local_80);
        uVar10 = local_78;
        if (((uVar8 & 1) != 0) || (lVar13 = *(long *)((long)local_80 + 0x18), lVar13 == 0)) break;
        puVar17 = *(uint **)(lVar13 + local_78 * 0x18);
        uVar1 = *puVar17;
        uVar8 = (ulong)(uVar1 + 0xf) & 0xfffffff0;
        do {
          uVar14 = *param_2;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar3) {
            *param_2 = uVar14 + uVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (param_2[1] < uVar8 + uVar14) {
                    /* try { // try from 0032b3f8 to 0032b3ff has its CatchHandler @ 0032b634 */
          pvVar9 = (void *)FUN_0038e7c0(param_2);
        }
        else {
          pvVar9 = (void *)((long)param_2 + uVar14 + 0x20);
        }
        memcpy(pvVar9,puVar17 + 1,(ulong)uVar1);
        uVar16 = *(undefined8 *)(lVar13 + uVar10 * 0x18 + 8);
        local_68 = &local_80;
                    /* try { // try from 0032b434 to 0032b44f has its CatchHandler @ 0032b648 */
        local_80 = pvVar9;
        local_78 = (ulong)uVar1;
        lVar13 = FUN_0032b67c(&local_98,&local_80,&DAT_03cd74f7,&local_68,auStack_70);
        *(undefined8 *)(lVar13 + 0x30) = uVar16;
        lVar13 = puVar5[3];
      } while (lVar13 != 0);
    }
    FUN_00327564(puVar11,puVar7[4]);
    puVar7[3] = local_98;
    puVar7[4] = local_90;
    puVar7[5] = local_88;
    if (local_88 == 0) {
      *puVar11 = puVar18;
    }
    else {
      *(undefined8 **)(local_90 + 0x10) = puVar18;
      local_90 = 0;
      local_88 = 0;
      local_98 = &local_90;
    }
    FUN_00327564(&local_98,local_90);
    local_90 = 0;
    local_88 = 0;
    lVar13 = puVar5[4];
    local_98 = &local_90;
    if (lVar13 != 0) {
      uVar6 = 0xffffffffffffffff;
      do {
        local_80 = (void *)(lVar13 + 8);
                    /* try { // try from 0032b4d8 to 0032b4eb has its CatchHandler @ 0032b64c */
        local_78 = uVar6;
        FUN_0038b6b0(&local_80);
        uVar6 = local_78;
        uVar8 = FUN_0038b470(&local_80);
        uVar10 = local_78;
        if (((uVar8 & 1) != 0) || (lVar13 = *(long *)((long)local_80 + 0x18), lVar13 == 0)) break;
        puVar17 = *(uint **)(lVar13 + local_78 * 0x18);
        uVar1 = *puVar17;
        uVar8 = (ulong)(uVar1 + 0xf) & 0xfffffff0;
        do {
          uVar14 = *param_2;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar3) {
            *param_2 = uVar14 + uVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (param_2[1] < uVar8 + uVar14) {
                    /* try { // try from 0032b534 to 0032b53b has its CatchHandler @ 0032b630 */
          pvVar9 = (void *)FUN_0038e7c0(param_2);
        }
        else {
          pvVar9 = (void *)((long)param_2 + uVar14 + 0x20);
        }
        memcpy(pvVar9,puVar17 + 1,(ulong)uVar1);
        uVar16 = *(undefined8 *)(lVar13 + uVar10 * 0x18 + 8);
        local_68 = &local_80;
                    /* try { // try from 0032b570 to 0032b587 has its CatchHandler @ 0032b644 */
        local_80 = pvVar9;
        local_78 = (ulong)uVar1;
        lVar13 = FUN_0032b67c(&local_98,&local_80,&DAT_03cd74f7,&local_68,auStack_70);
        *(undefined8 *)(lVar13 + 0x30) = uVar16;
        lVar13 = puVar5[4];
      } while (lVar13 != 0);
    }
    FUN_00327564(puVar15,puVar7[7]);
    puVar7[6] = local_98;
    puVar7[7] = local_90;
    puVar7[8] = local_88;
    if (local_88 == 0) {
      *puVar15 = puVar12;
      FUN_00327564(&local_98);
    }
    else {
      *(undefined8 **)(local_90 + 0x10) = puVar12;
      local_90 = 0;
      local_88 = 0;
      local_98 = &local_90;
      FUN_00327564(&local_98,0);
    }
  }
  if (lVar4 != 0) {
                    /* try { // try from 0032b5fc to 0032b603 has its CatchHandler @ 0032b62c */
    FUN_0038bd40(lVar4);
  }
  return puVar7;
}


