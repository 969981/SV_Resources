/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002bbe7c; name: FUN_002bbe7c
 */


void FUN_002bbe7c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 local_150;
  undefined8 uStack_148;
  long *local_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *local_60 [4];
  
  plVar8 = param_1 + 1;
  *plVar8 = 1;
  puVar3 = PTR_DAT_047cc7d0;
  param_1[2] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = *param_2;
  *param_2 = 0;
  param_1[0x1f] = (long)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  lVar5 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002bc0f0 to 002bc0fb has its CatchHandler @ 002bc10c */
    abort();
  }
  if ((*(byte *)(lVar5 + 0x80) & 1) == 0) {
    uVar7 = (ulong)(*(byte *)(lVar5 + 0x80) >> 1);
  }
  else {
    uVar7 = *(ulong *)(lVar5 + 0x88);
  }
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 002bbf2c to 002bbf43 has its CatchHandler @ 002bc10c */
  lVar5 = FUN_0036f8e0(*(undefined8 *)(*(long *)(param_1[2] + 0x18) + 0x18),0,0xffff,
                       *(undefined8 *)(lVar5 + 0x28),*(long *)PTR_DAT_047cc628 + 0x460,0,
                       0x7fffffffffffffff,0);
  param_1[4] = lVar5;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x10);
                    /* try { // try from 002bbf60 to 002bbfbb has its CatchHandler @ 002bc114 */
  FUN_002aac70(local_60,lVar5 + 0x38,lVar5 + 0x80);
  lVar5 = FUN_0036a600(local_60,1);
  param_1[8] = lVar5;
  if ((local_60[0] != (undefined8 *)0x0) && (plVar6 = (long *)*local_60[0], plVar6 != (long *)0x0))
  {
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)local_60[0][3])(local_60[0][4]);
    }
  }
  FUN_00373770(param_1 + 5);
  FUN_00373770(param_1 + 0x12);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_150 = 0xa000000000;
  uStack_148 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  plStack_138 = (long *)0x0;
  local_140 = (long *)0x0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  if (param_1[8] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002bc0fc to 002bc10b has its CatchHandler @ 002bc110 */
    abort();
  }
  local_100 = DAT_03cb55b0;
  uStack_f8 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    puVar3 = PTR_LAB_047cc7d8;
  } while (cVar1 != '\0');
  param_1[0xc] = 0;
  param_1[10] = (long)puVar3;
  param_1[0xb] = (long)param_1;
  plStack_f0 = (long *)param_1[8];
                    /* try { // try from 002bc02c to 002bc0d3 has its CatchHandler @ 002bc110 */
  iVar4 = FUN_0036cee0(param_1[4],&local_150,2,param_1 + 9);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uStack_148 = 0;
  uStack_f8 = 0;
  local_150 = DAT_03cb5380;
  local_100 = DAT_03cb5678;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    puVar3 = PTR_LAB_047cc7e0;
  } while (cVar1 != '\0');
  param_1[0x11] = 0;
  param_1[0xf] = (long)puVar3;
  param_1[0x10] = (long)param_1;
  local_140 = param_1 + 5;
  plStack_f0 = param_1 + 0xd;
  iVar4 = FUN_0036cee0(param_1[4],&local_150,2,param_1 + 0xe);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plStack_138 = param_1 + 0x15;
  plStack_130 = param_1 + 0x16;
  local_150 = DAT_03cb53c0;
  uStack_148 = 0;
  param_1[0x1b] = (long)PTR_LAB_047cc7e8;
  param_1[0x1c] = (long)param_1;
  param_1[0x1d] = 0;
  local_140 = param_1 + 0x12;
  iVar4 = FUN_0036cee0(param_1[4],&local_150,1,param_1 + 0x1a);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


