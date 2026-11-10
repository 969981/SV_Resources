/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013fbf8c; name: FUN_013fbf8c
 */


void FUN_013fbf8c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long *plVar4;
  uint uVar5;
  short sVar6;
  ulong uVar7;
  byte bVar8;
  long *plVar9;
  undefined8 local_200;
  undefined1 auStack_1f8 [200];
  undefined1 auStack_130 [142];
  undefined1 local_a2;
  undefined1 local_a1;
  undefined8 local_a0;
  undefined1 local_98;
  undefined6 local_90 [3];
  undefined6 uStack_78;
  undefined2 local_72;
  undefined1 auStack_70 [2];
  undefined2 uStack_6e;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  
  plVar9 = *(long **)(param_1 + 0x40);
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar9 != plVar4) {
    do {
      sVar6 = FUN_01419488(*plVar9);
      if (sVar6 != 0) {
        memset(auStack_130,0,0x98);
        local_98 = 0xfd;
        local_90[0]._0_8_ = 0;
        local_90[1]._0_8_ = 0;
        local_90[2]._0_8_ = 0;
        uStack_78 = 0;
        local_72 = 0;
        auStack_70[0] = 0;
        auStack_70[1] = 0;
        uStack_6e = 0;
        uStack_6c = 0;
        uStack_6b = 0;
        memcpy(auStack_130,(void *)(*plVar9 + 0xd0),0x8e);
        local_a2 = *(undefined1 *)(*plVar9 + 0x15e);
        local_a1 = *(undefined1 *)(*plVar9 + 0x15f);
        local_a0 = FUN_01a45624(*plVar9);
        local_98 = FUN_013fc138(*plVar9);
        puVar3 = *(undefined1 **)(*plVar9 + 0x170);
        uVar7 = *(long *)(*plVar9 + 0x178) - (long)puVar3;
        uVar5 = (uint)uVar7 >> 4 & 0xff;
        if (uVar5 != 0) {
          auStack_70[0] = *puVar3;
          local_90[0]._0_8_ = *(undefined8 *)(puVar3 + 8);
          if (1 < uVar5) {
            auStack_70[1] = puVar3[0x10];
            local_90[1]._0_8_ = *(undefined8 *)(puVar3 + 0x18);
            if (2 < uVar5) {
              bVar8 = 2;
              do {
                uVar1 = (ulong)bVar8;
                auStack_70[bVar8] = puVar3[uVar1 * 0x10];
                uVar2 = (ulong)bVar8;
                bVar8 = bVar8 + 1;
                *(undefined8 *)(local_90 + uVar2) = *(undefined8 *)(puVar3 + uVar1 * 0x10 + 8);
              } while (bVar8 < uVar5);
            }
          }
        }
        uStack_6c = (undefined1)(uVar7 >> 4);
        uStack_6b = *(undefined1 *)(*plVar9 + 0x160);
        local_200 = *param_2;
        memcpy(auStack_1f8,auStack_130,200);
        FUN_013fc180(param_1 + 0x1c8,&local_200);
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar4);
  }
  return;
}


