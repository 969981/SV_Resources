/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002eb0bc; name: FUN_002eb0bc
 */


undefined8 FUN_002eb0bc(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long *plVar12;
  undefined8 *local_b8;
  undefined8 *local_b0;
  long local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar4 = (long *)FUN_002ed9b0();
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  lVar5 = FUN_002f4a60(param_1);
  if (lVar5 != 0) {
    return 0;
  }
  FUN_00343a90(param_1,"grpc.server_uri");
  lVar5 = FUN_00344040();
  if ((lVar5 == 0) || (lVar6 = FUN_0037b960(lVar5,1), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = FUN_002f9ab0(param_1);
  if (lVar7 != 0) {
                    /* try { // try from 002eb130 to 002eb137 has its CatchHandler @ 002eb3fc */
    uVar8 = FUN_0033c308(param_1);
                    /* try { // try from 002eb138 to 002eb143 has its CatchHandler @ 002eb430 */
    lVar9 = FUN_0037b960(uVar8,0);
    if (lVar9 == 0) {
                    /* try { // try from 002eb3d4 to 002eb3db has its CatchHandler @ 002eb430 */
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pcVar11 = *(char **)(lVar9 + 0x10);
    if (*pcVar11 == '\0') {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      if (*pcVar11 == '/') {
        pcVar11 = pcVar11 + 1;
      }
                    /* try { // try from 002eb160 to 002eb167 has its CatchHandler @ 002eb3e4 */
      FUN_003673f0(&local_80,pcVar11);
                    /* try { // try from 002eb168 to 002eb1cf has its CatchHandler @ 002eb404 */
      puVar10 = (undefined8 *)FUN_002eb498(lVar7,&local_80);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)FUN_0038ccb0(*puVar10);
      }
      if ((local_80 != (undefined8 *)0x0) && (plVar12 = (long *)*local_80, plVar12 != (long *)0x0))
      {
        do {
          lVar7 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 + -1 == 0) {
          (*(code *)local_80[3])(local_80[4]);
        }
      }
    }
                    /* try { // try from 002eb1d0 to 002eb1d7 has its CatchHandler @ 002eb430 */
    FUN_0037bfa0(lVar9);
    if (puVar10 != (undefined8 *)0x0) goto LAB_002eb1ec;
  }
                    /* try { // try from 002eb1dc to 002eb1e7 has its CatchHandler @ 002eb3f0 */
  FUN_00330de0(&local_80,lVar5);
  puVar10 = local_80;
LAB_002eb1ec:
                    /* try { // try from 002eb1ec to 002eb1fb has its CatchHandler @ 002eb42c */
  lVar5 = FUN_00343a90(param_1,"grpc.default_authority");
  if (lVar5 == 0) {
                    /* try { // try from 002eb208 to 002eb21b has its CatchHandler @ 002eb3e0 */
    FUN_00344220(&local_a0,"grpc.default_authority",puVar10);
    uStack_78 = uStack_98;
    local_80 = local_a0;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
  }
                    /* try { // try from 002eb228 to 002eb23f has its CatchHandler @ 002eb47c */
  lVar5 = FUN_00343590(param_1,&local_80,lVar5 == 0);
  FUN_0037bfa0(lVar6);
  local_a8 = 0;
  local_b8 = (undefined8 *)0x0;
                    /* try { // try from 002eb250 to 002eb26b has its CatchHandler @ 002eb408 */
  (**(code **)(*plVar4 + 0x10))(&local_b0,plVar4,&local_b8,puVar10,lVar5,&local_a8);
  puVar3 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    plVar4 = local_b8 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)*local_b8)(local_b8);
      FUN_0049e790(PTR_LAB_047cba48,puVar3);
    }
  }
  if (local_b0 == (undefined8 *)0x0) {
                    /* try { // try from 002eb324 to 002eb32b has its CatchHandler @ 002eb3dc */
    FUN_00343d90(lVar5);
    uVar8 = 0;
    puVar3 = local_b0;
  }
  else {
                    /* try { // try from 002eb294 to 002eb29b has its CatchHandler @ 002eb3f8 */
    FUN_002f4a40(&local_a0);
    lVar6 = lVar5;
    if (local_a8 != 0) {
      lVar6 = local_a8;
    }
                    /* try { // try from 002eb2a8 to 002eb2ef has its CatchHandler @ 002eb434 */
    uVar8 = FUN_00343590(lVar6,&local_a0,1);
    if (local_b0 != (undefined8 *)0x0) {
      plVar4 = local_b0 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)*local_b0)(local_b0);
        FUN_0049e790(PTR_LAB_047cba48,local_b0);
      }
    }
    local_b0 = (undefined8 *)0x0;
    if (local_a8 != 0) {
      local_b0 = (undefined8 *)0x0;
      FUN_00343d90();
    }
    FUN_00343d90(lVar5);
    puVar3 = local_b0;
  }
  local_b0 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    plVar4 = puVar3 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar3)(puVar3);
      FUN_0049e790(PTR_LAB_047cba48,puVar3);
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
                    /* try { // try from 002eb354 to 002eb35b has its CatchHandler @ 002eb3f4 */
    free(puVar10);
  }
  return uVar8;
}


