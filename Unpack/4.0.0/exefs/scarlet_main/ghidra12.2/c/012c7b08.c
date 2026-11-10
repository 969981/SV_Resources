/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c7b08; name: FUN_012c7b08
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012c7b08(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [12];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_200 [256];
  undefined1 auStack_100 [192];
  undefined1 auStack_40 [16];
  
  *param_1 = param_2;
  plVar4 = (long *)param_1[0x2e];
  plVar6 = (long *)*param_3;
  if (plVar4 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[0x2e];
      plVar6 = (long *)*param_3;
    }
    param_1[0x2e] = plVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = param_4;
  FUN_012c7fc4(&local_2b0);
  puVar3 = PTR_DAT_047d1a08;
  local_2e0 = 0x510;
  uStack_2a8 = _UNK_03cabe68;
  local_2b0 = _DAT_03cabe60;
  uVar5 = (**(code **)PTR_DAT_047d1a08)(0,&local_2e0,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(uVar5,"hkaiWorld");
  }
  FUN_012d4c14(uVar5,&local_2b0);
  plVar6 = (long *)param_1[1];
  param_1[1] = uVar5;
  if (plVar6 != (long *)0x0) {
    if (plVar6[1] != 0) {
      plVar4 = plVar6 + 2;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    uVar5 = param_1[1];
  }
  auVar8 = FUN_012c831c(0x41200000,uVar5,0);
  *(undefined1 (*) [12])(param_1 + 2) = auVar8;
  uStack_2b8 = *(undefined8 *)(param_1[1] + 0x128);
  local_2c0 = *(undefined8 *)(param_1[1] + 0x120);
  local_2e0 = 0x90;
  uVar5 = (**(code **)puVar3)(0,&local_2e0,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(uVar5,"System");
  }
  FUN_012c7e18(uVar5,&local_2c0);
  plVar6 = (long *)param_1[0x20];
  param_1[0x20] = uVar5;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar4 = plVar6 + 2;
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  lVar7 = *(long *)(param_1[1] + 0x138);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x60) = 0x3e3126e93f34fdf4;
    *(undefined8 *)(lVar7 + 0x50) = 0x3f0000003f4ccccd;
    *(undefined8 *)(lVar7 + 0x58) = 0x3c23d70a3e99999a;
  }
  FUN_012c80e0(&local_2e0,*param_1,param_1);
  uVar5 = local_2e0;
  local_2e0 = 0;
  lVar7 = param_1[4];
  param_1[4] = uVar5;
  if (lVar7 != 0) {
    FUN_029fd3fc(param_1 + 5);
  }
  param_1[6] = uStack_2d0;
  param_1[7] = local_2c8;
  param_1[5] = local_2d8;
  FUN_012c8200(&local_2e0,*param_1,param_1);
  uVar5 = local_2e0;
  local_2e0 = 0;
  lVar7 = param_1[0x21];
  param_1[0x21] = uVar5;
  if (lVar7 != 0) {
    FUN_029fd040(param_1 + 0x22);
  }
  param_1[0x23] = uStack_2d0;
  param_1[0x24] = local_2c8;
  param_1[0x22] = local_2d8;
  FUN_012c7df0(auStack_40);
  FUN_012c7e64(auStack_100);
  FUN_012c7f14(auStack_200);
  return;
}


