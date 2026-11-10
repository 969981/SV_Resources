/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03200344; name: FUN_03200344
 */


undefined8 * FUN_03200344(ulong *param_1,byte *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_047d1a08;
  pbVar7 = param_2;
  if ((*param_2 & 1) == 0) {
    do {
      pbVar7 = *(byte **)(pbVar7 + 8);
    } while ((*pbVar7 & 1) == 0);
  }
  switch(*(uint *)(pbVar7 + 0x10) & 0x1f) {
  case 2:
    local_38 = 0x20;
    puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(puVar5,"ChildImpl");
    }
    uVar8 = *param_1;
    if ((param_2 < (byte *)0x2) || (uVar9 = (uint)*(undefined8 *)param_2, (uVar9 >> 0x11 & 1) == 0))
    {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar11 = CONCAT44(uVar9,uVar9) & 0x1ffff0001ffff;
      pbVar7 = (byte *)0x0;
      if ((*(ulong *)(param_2 +
                     (ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                  POPCOUNT((char)(uVar11 >> 0x10))) * 8 + 0x10) & 0x300000) != 0) {
        pbVar7 = param_2;
      }
    }
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_LAB_046a8670;
    puVar5[2] = uVar8 | 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5[3] = pbVar7;
    *(undefined4 *)(puVar5 + 1) = 0;
    do {
      iVar10 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 3:
    local_38 = 0x20;
    puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(puVar5,"ChildImpl");
    }
    uVar8 = *param_1;
    if ((param_2 < (byte *)0x2) || (uVar9 = (uint)*(undefined8 *)param_2, (uVar9 >> 0x11 & 1) == 0))
    {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar11 = CONCAT44(uVar9,uVar9) & 0x1ffff0001ffff;
      pbVar7 = (byte *)0x0;
      if ((*(ulong *)(param_2 +
                     (ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                  POPCOUNT((char)(uVar11 >> 0x10))) * 8 + 0x10) & 0x300000) != 0) {
        pbVar7 = param_2;
      }
    }
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_LAB_046a86d8;
    puVar5[2] = uVar8 | 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5[3] = pbVar7;
    *(undefined4 *)(puVar5 + 1) = 0;
    do {
      iVar10 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 4:
    local_38 = 0x20;
    puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(puVar5,"ChildImpl");
    }
    uVar8 = *param_1;
    if ((param_2 < (byte *)0x2) || (uVar9 = (uint)*(undefined8 *)param_2, (uVar9 >> 0x11 & 1) == 0))
    {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar11 = CONCAT44(uVar9,uVar9) & 0x1ffff0001ffff;
      pbVar7 = (byte *)0x0;
      if ((*(ulong *)(param_2 +
                     (ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                  POPCOUNT((char)(uVar11 >> 0x10))) * 8 + 0x10) & 0x300000) != 0) {
        pbVar7 = param_2;
      }
    }
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_LAB_046a8748;
    puVar5[2] = uVar8 | 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5[3] = pbVar7;
    *(undefined4 *)(puVar5 + 1) = 0;
    do {
      iVar10 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 5:
    local_38 = 0x20;
    puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(puVar5,"ChildImpl");
    }
    uVar8 = *param_1;
    if ((param_2 < (byte *)0x2) || (uVar9 = (uint)*(undefined8 *)param_2, (uVar9 >> 0x11 & 1) == 0))
    {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar11 = CONCAT44(uVar9,uVar9) & 0x1ffff0001ffff;
      pbVar7 = (byte *)0x0;
      if ((*(ulong *)(param_2 +
                     (ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                  POPCOUNT((char)(uVar11 >> 0x10))) * 8 + 0x10) & 0x300000) != 0) {
        pbVar7 = param_2;
      }
    }
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_LAB_046a87b0;
    puVar5[2] = uVar8 | 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5[3] = pbVar7;
    *(undefined4 *)(puVar5 + 1) = 0;
    do {
      iVar10 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 6:
    local_38 = 0x20;
    puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(puVar5,"ChildImpl");
    }
    uVar8 = *param_1;
    if ((param_2 < (byte *)0x2) || (uVar9 = (uint)*(undefined8 *)param_2, (uVar9 >> 0x11 & 1) == 0))
    {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar11 = CONCAT44(uVar9,uVar9) & 0x1ffff0001ffff;
      pbVar7 = (byte *)0x0;
      if ((*(ulong *)(param_2 +
                     (ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                  POPCOUNT((char)(uVar11 >> 0x10))) * 8 + 0x10) & 0x300000) != 0) {
        pbVar7 = param_2;
      }
    }
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_LAB_046a8818;
    puVar5[2] = uVar8 | 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5[3] = pbVar7;
    *(undefined4 *)(puVar5 + 1) = 0;
    do {
      iVar10 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 7:
    local_38 = 0x20;
    puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(puVar5,"ChildImpl");
    }
    uVar8 = *param_1;
    if ((param_2 < (byte *)0x2) || (uVar9 = (uint)*(undefined8 *)param_2, (uVar9 >> 0x11 & 1) == 0))
    {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar11 = CONCAT44(uVar9,uVar9) & 0x1ffff0001ffff;
      pbVar7 = (byte *)0x0;
      if ((*(ulong *)(param_2 +
                     (ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                  POPCOUNT((char)(uVar11 >> 0x10))) * 8 + 0x10) & 0x300000) != 0) {
        pbVar7 = param_2;
      }
    }
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_LAB_046a8948;
    puVar5[2] = uVar8 | 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5[3] = pbVar7;
    *(undefined4 *)(puVar5 + 1) = 0;
    *puVar5 = &PTR_LAB_046a88b0;
    do {
      iVar10 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 8:
    local_38 = 0x20;
    puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(puVar5,"ChildImpl");
    }
    uVar8 = *param_1;
    if ((param_2 < (byte *)0x2) || (uVar9 = (uint)*(undefined8 *)param_2, (uVar9 >> 0x11 & 1) == 0))
    {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar11 = CONCAT44(uVar9,uVar9) & 0x1ffff0001ffff;
      pbVar7 = (byte *)0x0;
      if ((*(ulong *)(param_2 +
                     (ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                  POPCOUNT((char)(uVar11 >> 0x10))) * 8 + 0x10) & 0x300000) != 0) {
        pbVar7 = param_2;
      }
    }
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_LAB_046a8a68;
    puVar5[2] = uVar8 | 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5[3] = pbVar7;
    *(undefined4 *)(puVar5 + 1) = 0;
    *puVar5 = &PTR_LAB_046a89b0;
    do {
      iVar10 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch");
  }
  if ((plVar6 != (long *)0x0) && (iVar10 == 1)) {
    (**(code **)(*plVar6 + 8))();
  }
  return puVar5;
}


