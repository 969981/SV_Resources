/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0027d9f0; name: FUN_0027d9f0
 */


void FUN_0027d9f0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *local_70 [4];
  
  if (param_1[0x42] != 0) {
    lVar9 = param_1[2];
    puVar6 = *(undefined8 **)(lVar9 + 0x30);
    if (puVar6 != param_1) {
      if ((*(undefined8 **)(lVar9 + 0x38) != param_1) || (*(char *)(param_1 + 0x41) != '\0')) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 **)(lVar9 + 0x30) = *(undefined8 **)(lVar9 + 0x38);
      *(undefined8 *)(lVar9 + 0x38) = 0;
      if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 0027da48 to 0027da4b has its CatchHandler @ 0027ddd0 */
        (**(code **)*puVar6)();
      }
    }
  }
  plVar12 = (long *)param_1[2];
  if ((undefined8 *)plVar12[6] != param_1) {
    return;
  }
  if (param_1[0x42] == 0) {
    if (param_1[0x43] != 0) {
      plVar13 = (long *)plVar12[5];
      plVar7 = plVar12 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_70[0] = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
      puVar4 = PTR_DAT_047cc568;
      if (local_70[0] != (long *)0x0) {
        *(undefined1 *)(local_70[0] + 2) = 0;
        *local_70[0] = (long)(puVar4 + 0x10);
        local_70[0][1] = (long)plVar12;
        plVar12 = (long *)0x0;
      }
                    /* try { // try from 0027db60 to 0027db6f has its CatchHandler @ 0027dd40 */
      (**(code **)(*plVar13 + 0x18))(plVar13,1,local_70);
      plVar7 = local_70[0];
      local_70[0] = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)*plVar7)(plVar7);
        FUN_0049e790(PTR_LAB_047cba48,plVar7);
      }
      if (plVar12 == (long *)0x0) {
        return;
      }
      plVar7 = plVar12 + 1;
      do {
        lVar9 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 != 0) {
        return;
      }
      (**(code **)(*plVar12 + 8))(plVar12);
      goto LAB_0027db00;
    }
    if (param_1[0x44] != (ulong)param_1[4] >> 1) {
      return;
    }
    FUN_003673f0(local_70,"connections to all backends failing");
    uVar8 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                         ,0x14f,local_70,0,0);
    lVar9 = FUN_00351770(uVar8,3,0xe);
    plVar12 = (long *)plVar12[5];
    local_70[0] = (long *)FUN_0049e770(PTR_FUN_047cba38,0x10);
    if (local_70[0] != (long *)0x0) {
      *local_70[0] = (long)(PTR_DAT_047cc560 + 0x10);
      local_70[0][1] = lVar9;
    }
                    /* try { // try from 0027dd08 to 0027dd17 has its CatchHandler @ 0027dd3c */
    (**(code **)(*plVar12 + 0x18))(plVar12,3,local_70);
  }
  else {
    plVar13 = (long *)plVar12[5];
    plVar7 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x70);
    if (plVar7 != (long *)0x0) {
      *plVar7 = (long)&PTR_FUN_0448cdb0;
      plVar7[1] = (long)plVar12;
      plVar7[3] = 0;
      puVar4 = PTR_LAB_047cba48;
      uVar10 = param_1[4];
      if (1 < uVar10) {
        uVar11 = 0;
        do {
          puVar6 = param_1 + 5;
          if ((uVar10 & 1) != 0) {
            puVar6 = (undefined8 *)param_1[5];
          }
          if (*(int *)((long)puVar6 + uVar11 * 0x30 + 0x24) == 2) {
            local_70[0] = (long *)puVar6[uVar11 * 6 + 2];
            plVar12 = local_70[0] + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *plVar12 = *plVar12 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
                    /* try { // try from 0027dc3c to 0027dc47 has its CatchHandler @ 0027ddd4 */
            FUN_0027e164(plVar7 + 3,local_70);
            plVar12 = local_70[0];
            if (local_70[0] != (long *)0x0) {
              plVar1 = local_70[0] + 1;
              do {
                lVar9 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar9 + -1 == 0) {
                (**(code **)*local_70[0])(local_70[0]);
                FUN_0049e790(puVar4,plVar12);
              }
            }
            uVar10 = param_1[4];
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar10 >> 1);
      }
                    /* try { // try from 0027daa0 to 0027daa3 has its CatchHandler @ 0027dd98 */
      iVar5 = rand();
      uVar11 = (ulong)plVar7[3] >> 1;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = (ulong)(long)iVar5 / uVar11;
      }
      plVar7[2] = (long)iVar5 - uVar10 * uVar11;
    }
    local_70[0] = plVar7;
                    /* try { // try from 0027dac8 to 0027dad7 has its CatchHandler @ 0027dda0 */
    (**(code **)(*plVar13 + 0x18))(plVar13,2,local_70);
  }
  plVar12 = local_70[0];
  local_70[0] = (long *)0x0;
  if (plVar12 == (long *)0x0) {
    return;
  }
  (**(code **)*plVar12)(plVar12);
LAB_0027db00:
  FUN_0049e790(PTR_LAB_047cba48,plVar12);
  return;
}


