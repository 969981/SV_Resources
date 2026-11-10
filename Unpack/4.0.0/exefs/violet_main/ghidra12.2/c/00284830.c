/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00284830; name: FUN_00284830
 */


byte FUN_00284830(undefined8 *param_1,code *param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  size_t sVar6;
  ulong uVar7;
  void *pvVar8;
  long *plVar9;
  char *__s;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_2b0;
  undefined1 auStack_2a8 [136];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  void *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [8];
  long local_190;
  ulong local_188;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(char *)param_1[1] == '\0') {
    __s = (char *)param_1[2];
    sVar6 = strlen(__s);
    FUN_003674a0(&local_70,__s,sVar6,&LAB_00284a60);
    FUN_00368450(auStack_198);
    uStack_1b8 = uStack_68;
    local_1c0 = local_70;
    uStack_1a8 = uStack_58;
    uStack_1b0 = uStack_60;
    FUN_0036a170(&local_1c0,&DAT_03c16438,auStack_198);
    if (local_188 == 0) {
      bVar10 = 0;
    }
    else {
      lVar11 = 0;
      bVar10 = 0;
      uVar12 = 1;
      if (param_3 == 0) {
        do {
          uStack_1f8 = param_1[1];
          local_200 = *param_1;
          uStack_1e8 = param_1[3];
          local_1f0 = (void *)param_1[2];
          puVar1 = (undefined8 *)(local_190 + lVar11);
          uStack_1d8 = param_1[5];
          local_1e0 = param_1[4];
          uStack_1c8 = param_1[7];
          uStack_1d0 = param_1[6];
          uStack_218 = puVar1[1];
          local_220 = *puVar1;
          uStack_208 = puVar1[3];
          uStack_210 = puVar1[2];
          pvVar8 = (void *)FUN_00366f90(&local_220);
                    /* try { // try from 002849b4 to 002849bf has its CatchHandler @ 00284a38 */
          local_1f0 = pvVar8;
          bVar5 = (*param_2)(&local_200,auStack_2a8);
          if (pvVar8 != (void *)0x0) {
                    /* try { // try from 002849c8 to 002849cf has its CatchHandler @ 00284a30 */
            free(pvVar8);
          }
          bVar10 = bVar10 | bVar5 ^ 1;
          bVar4 = uVar12 < local_188;
          uVar12 = uVar12 + 1;
          lVar11 = lVar11 + 0x20;
        } while ((bVar5 & bVar4) != 0);
      }
      else {
        do {
          uStack_1f8 = param_1[1];
          local_200 = *param_1;
          uStack_1e8 = param_1[3];
          local_1f0 = (void *)param_1[2];
          puVar1 = (undefined8 *)(local_190 + lVar11);
          uStack_1d8 = param_1[5];
          local_1e0 = param_1[4];
          uStack_1c8 = param_1[7];
          uStack_1d0 = param_1[6];
          uStack_218 = puVar1[1];
          local_220 = *puVar1;
          uStack_208 = puVar1[3];
          uStack_210 = puVar1[2];
          pvVar8 = (void *)FUN_00366f90(&local_220);
                    /* try { // try from 00284918 to 00284923 has its CatchHandler @ 00284a40 */
          local_1f0 = pvVar8;
          uVar7 = (*param_2)(&local_200,auStack_2a8);
          bVar4 = (uVar7 & 1) == 0;
          if (bVar4) {
            bVar10 = 1;
          }
          else {
            local_2b0 = 0;
                    /* try { // try from 0028492c to 0028493b has its CatchHandler @ 00284a34 */
            FUN_00284a64(param_3,auStack_2a8,&local_2b0);
          }
          if (pvVar8 != (void *)0x0) {
                    /* try { // try from 00284954 to 0028495b has its CatchHandler @ 00284a3c */
            free(pvVar8);
          }
          bVar3 = uVar12 < local_188;
          uVar12 = uVar12 + 1;
          lVar11 = lVar11 + 0x20;
        } while (!bVar4 && bVar3);
      }
    }
    FUN_00368470(auStack_198);
    if ((local_70 != (undefined8 *)0x0) && (plVar9 = (long *)*local_70, plVar9 != (long *)0x0)) {
      do {
        lVar11 = *plVar9;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)local_70[3])(local_70[4]);
      }
    }
    bVar10 = bVar10 ^ 1;
  }
  else {
    bVar10 = 0;
  }
  return bVar10 & 1;
}


