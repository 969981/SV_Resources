/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e6330; name: FUN_026e6330
 */


void FUN_026e6330(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 *puStack_a0;
  long *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  long local_80 [3];
  long *local_68;
  undefined8 local_48;
  
  puVar7 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  *(undefined4 *)(param_1 + 3) = 0;
  local_48 = param_3;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  puVar7 = PTR_DAT_047d8c78;
  if (lVar9 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar13 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar13;
  param_1[4] = (long)(puVar7 + 0x88);
  plVar10 = param_1 + 5;
  *plVar10 = (long)(puVar7 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar10);
  *param_1 = (long)&PTR_LAB_045cd718;
  param_1[4] = (long)&PTR_LAB_045cd790;
  *plVar10 = (long)&DAT_045cd7e0;
  param_1[8] = *param_2;
  param_1[9] = param_2[1];
  param_1[10] = param_2[2];
  plVar10 = (long *)param_2[3];
  param_1[0xb] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))();
  }
  plVar10 = param_1 + 0xc;
  FUN_026e6e40(plVar10);
  plVar15 = param_1 + 0x19;
  *plVar15 = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_026e6f14(param_1 + 0x1c);
  plVar1 = param_1 + 0x20;
  FUN_026e6e40(plVar1);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  FUN_026e6fcc(param_1 + 0x30);
  plVar2 = param_1 + 0x34;
  FUN_026e6e40(plVar2);
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x41] = 0;
  FUN_026e7084(param_1 + 0x44);
  param_1[0x48] = 0;
  plVar14 = *(long **)(*param_4 + 0x40);
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_026e6dbc;
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_026e6ddc;
  }
  plVar16 = *(long **)(*param_4 + 0x40);
  if (plVar16 == (long *)0x0) {
    uVar11 = FUN_026e713c(0);
    FUN_00f83b9c(local_80,plVar14,uVar11);
  }
  else {
    lVar9 = plVar16[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_026e6dbc;
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_026e6ddc;
    uVar11 = FUN_026e713c(plVar16);
    FUN_00f83b9c(local_80,plVar14,uVar11);
    lVar9 = plVar16[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar4 == 0) goto LAB_026e6e04;
  }
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar4 == 0) goto LAB_026e6e04;
  }
  param_1[0x48] = local_80[0];
  local_88 = 0;
  plVar14 = *(long **)(*param_4 + 0x40);
  if (plVar14 == (long *)0x0) {
    uVar11 = FUN_026e71f0(0);
    FUN_026e72a8(plVar15,uVar11);
  }
  else {
    lVar9 = plVar14[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_026e6dbc;
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_026e6ddc;
    uVar11 = FUN_026e71f0(plVar14);
    FUN_026e72a8(plVar15,uVar11);
    lVar9 = plVar14[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar4 == 0) goto LAB_026e6e04;
  }
  plVar15 = *(long **)(*param_4 + 0x40);
  if (plVar15 == (long *)0x0) {
    uVar12 = FUN_026e71f0(0);
    FUN_00c8fda0(plVar10,(long)((float)uVar12 / *(float *)(param_1 + 0x18)));
  }
  else {
    lVar9 = plVar15[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_026e6dbc;
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_026e6ddc;
    uVar12 = FUN_026e71f0(plVar15);
    FUN_00c8fda0(plVar10,(long)((float)uVar12 / *(float *)(param_1 + 0x18)));
    lVar9 = plVar15[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar4 == 0) goto LAB_026e6e04;
  }
  plVar10 = *(long **)(*param_4 + 0x40);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_026e6dbc;
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_026e6ddc;
  }
  puStack_a0 = &local_48;
  puStack_90 = &local_88;
  local_a8 = param_1;
  local_98 = param_4;
  FUN_026e735c(plVar10,&local_a8);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar4 == 0) goto LAB_026e6e04;
  }
  local_b0 = 0;
  plVar10 = *(long **)(*param_4 + 0x40);
  if (plVar10 == (long *)0x0) {
    uVar11 = FUN_026e7458(0);
    FUN_026e7524(param_1 + 0x2d,uVar11);
  }
  else {
    lVar9 = plVar10[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_026e6dbc;
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_026e6ddc;
    uVar11 = FUN_026e7458(plVar10);
    FUN_026e7524(param_1 + 0x2d,uVar11);
    lVar9 = plVar10[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar4 == 0) goto LAB_026e6e04;
  }
  plVar10 = *(long **)(*param_4 + 0x40);
  if (plVar10 == (long *)0x0) {
    uVar12 = FUN_026e7458(0);
    FUN_00c8fda0(plVar1,(long)((float)uVar12 / *(float *)(param_1 + 0x2c)));
  }
  else {
    lVar9 = plVar10[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_026e6dbc;
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_026e6ddc;
    uVar12 = FUN_026e7458(plVar10);
    FUN_00c8fda0(plVar1,(long)((float)uVar12 / *(float *)(param_1 + 0x2c)));
    lVar9 = plVar10[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar4 == 0) goto LAB_026e6e04;
  }
  plVar10 = *(long **)(*param_4 + 0x40);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_026e6dbc;
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_026e6ddc;
  }
  puStack_a0 = &local_48;
  puStack_90 = &local_b0;
  local_a8 = param_1;
  local_98 = param_4;
  FUN_026e75d8(plVar10,&local_a8);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar4 == 0) goto LAB_026e6e04;
  }
  local_b8 = 0;
  plVar10 = *(long **)(*param_4 + 0x40);
  if (plVar10 == (long *)0x0) {
    uVar11 = FUN_026e76ac(0);
    FUN_026e776c(param_1 + 0x41,uVar11);
  }
  else {
    lVar9 = plVar10[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_026e6dbc;
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_026e6ddc;
    uVar11 = FUN_026e76ac(plVar10);
    FUN_026e776c(param_1 + 0x41,uVar11);
    lVar9 = plVar10[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar4 == 0) goto LAB_026e6e04;
  }
  plVar10 = *(long **)(*param_4 + 0x40);
  if (plVar10 == (long *)0x0) {
    uVar12 = FUN_026e76ac(0);
    FUN_00c8fda0(plVar2,(long)((float)uVar12 / *(float *)(param_1 + 0x40)));
  }
  else {
    lVar9 = plVar10[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_026e6dbc;
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_026e6ddc;
    uVar12 = FUN_026e76ac(plVar10);
    FUN_00c8fda0(plVar2,(long)((float)uVar12 / *(float *)(param_1 + 0x40)));
    lVar9 = plVar10[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar4 == 0) goto LAB_026e6e04;
  }
  plVar10 = *(long **)(*param_4 + 0x40);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_026e6dbc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
LAB_026e6ddc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  puStack_a0 = &local_48;
  puStack_90 = &local_b8;
  local_a8 = param_1;
  local_98 = param_4;
  FUN_026e7820(plVar10,&local_a8);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar4 == 0) {
LAB_026e6e04:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


