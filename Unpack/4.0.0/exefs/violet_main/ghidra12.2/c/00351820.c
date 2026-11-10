/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00351820; name: FUN_00351820
 */


ulong FUN_00351820(ulong param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (4 < param_1) {
    iVar6 = FUN_0038daf0(param_1);
    if (iVar6 != 0) {
      return param_1;
    }
    bVar2 = *(byte *)(param_1 + 0x30);
    uVar9 = (uint)bVar2 * 3 >> 1;
    if (3 < (int)((uint)bVar2 - (uint)*(byte *)(param_1 + 0x2f))) {
      uVar9 = (uint)bVar2;
    }
    uVar7 = FUN_0038c780((uVar9 & 0xff) * 8 + 0x38);
    memcpy((void *)(uVar7 + 8),(void *)(param_1 + 8),(ulong)*(byte *)(param_1 + 0x2f) * 8 + 0x30);
    *(undefined8 *)(uVar7 + 8) = 0;
    FUN_0038da50(uVar7,1);
    *(char *)(uVar7 + 0x30) = (char)uVar9;
    if ((((ulong)*(byte *)(uVar7 + 0x20) != 0xff) &&
        (puVar10 = *(undefined8 **)(uVar7 + (ulong)*(byte *)(uVar7 + 0x20) * 8 + 0x38),
        puVar10 != (undefined8 *)0x0)) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((((ulong)*(byte *)(uVar7 + 0x21) != 0xff) &&
        (puVar10 = *(undefined8 **)(uVar7 + (ulong)*(byte *)(uVar7 + 0x21) * 8 + 0x38),
        puVar10 != (undefined8 *)0x0)) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((((ulong)*(byte *)(uVar7 + 0x22) != 0xff) &&
        (puVar10 = *(undefined8 **)(uVar7 + (ulong)*(byte *)(uVar7 + 0x22) * 8 + 0x38),
        puVar10 != (undefined8 *)0x0)) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((((ulong)*(byte *)(uVar7 + 0x23) != 0xff) &&
        (puVar10 = *(undefined8 **)(uVar7 + (ulong)*(byte *)(uVar7 + 0x23) * 8 + 0x38),
        puVar10 != (undefined8 *)0x0)) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((((ulong)*(byte *)(uVar7 + 0x24) != 0xff) &&
        (puVar10 = *(undefined8 **)(uVar7 + (ulong)*(byte *)(uVar7 + 0x24) * 8 + 0x38),
        puVar10 != (undefined8 *)0x0)) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((((ulong)*(byte *)(uVar7 + 0x25) != 0xff) &&
        (puVar10 = *(undefined8 **)(uVar7 + (ulong)*(byte *)(uVar7 + 0x25) * 8 + 0x38),
        puVar10 != (undefined8 *)0x0)) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((((ulong)*(byte *)(uVar7 + 0x26) != 0xff) &&
        (puVar10 = *(undefined8 **)(uVar7 + (ulong)*(byte *)(uVar7 + 0x26) * 8 + 0x38),
        puVar10 != (undefined8 *)0x0)) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((((ulong)*(byte *)(uVar7 + 0x27) != 0xff) &&
        (puVar10 = *(undefined8 **)(uVar7 + (ulong)*(byte *)(uVar7 + 0x27) * 8 + 0x38),
        puVar10 != (undefined8 *)0x0)) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((((ulong)*(byte *)(uVar7 + 0x28) != 0xff) &&
        (puVar10 = *(undefined8 **)(uVar7 + (ulong)*(byte *)(uVar7 + 0x28) * 8 + 0x38),
        puVar10 != (undefined8 *)0x0)) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((((ulong)*(byte *)(uVar7 + 0x29) != 0xff) &&
        (puVar10 = *(undefined8 **)(uVar7 + (ulong)*(byte *)(uVar7 + 0x29) * 8 + 0x38),
        puVar10 != (undefined8 *)0x0)) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((((ulong)*(byte *)(uVar7 + 0x2a) != 0xff) &&
        (puVar10 = *(undefined8 **)(uVar7 + (ulong)*(byte *)(uVar7 + 0x2a) * 8 + 0x38),
        puVar10 != (undefined8 *)0x0)) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((((ulong)*(byte *)(uVar7 + 0x2b) != 0xff) &&
        (puVar10 = *(undefined8 **)(uVar7 + (ulong)*(byte *)(uVar7 + 0x2b) * 8 + 0x38),
        puVar10 != (undefined8 *)0x0)) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    bVar2 = *(byte *)(uVar7 + 0x2d);
    while (bVar2 != 0xff) {
      lVar12 = uVar7 + (ulong)bVar2 * 8;
      if (4 < *(ulong *)(lVar12 + 0x38)) {
        FUN_0038da60();
      }
      bVar2 = *(byte *)(lVar12 + 0x40);
    }
    FUN_00350fd0(param_1);
    return uVar7;
  }
  FUN_003673f0(&local_40,"unknown");
  uVar7 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x18c,&local_40,0
                       ,0);
  if (param_1 != 4) {
    if (param_1 == 2) {
      FUN_003673f0(&local_60,&DAT_03c6eb20);
      uVar13 = (ulong)*(byte *)(uVar7 + 0x20);
      if (uVar13 == 0xff) {
        bVar2 = *(byte *)(uVar7 + 0x2f);
        if ((uint)*(byte *)(uVar7 + 0x30) < bVar2 + 4) {
          uVar1 = (uint)*(byte *)(uVar7 + 0x30) * 3;
          uVar9 = 0xfffffffe;
          if (uVar1 < 0x1fe) {
            uVar9 = uVar1 >> 1;
          }
          *(char *)(uVar7 + 0x30) = (char)uVar9;
          if ((uVar9 & 0xff) < bVar2 + 4) goto LAB_00351e0c;
          uVar7 = FUN_0038c7f0(uVar7,(uVar9 & 0xff) * 8 + 0x38);
          bVar2 = *(byte *)(uVar7 + 0x2f);
        }
        uVar13 = (ulong)bVar2;
        *(byte *)(uVar7 + 0x2f) = bVar2 + 4;
        if (bVar2 == 0xff) {
LAB_00351e0c:
          uStack_38 = uStack_58;
          local_40 = local_60;
          uStack_28 = uStack_48;
          uStack_30 = uStack_50;
          pvVar8 = (void *)FUN_00366f90(&local_40);
          free(pvVar8);
          return uVar7;
        }
      }
      else {
        puVar10 = *(undefined8 **)(uVar7 + uVar13 * 8 + 0x38);
        if ((puVar10 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0))
        {
          do {
            lVar12 = *plVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 + -1 == 0) {
            (*(code *)puVar10[3])(puVar10[4]);
          }
        }
      }
      *(char *)(uVar7 + 0x20) = (char)uVar13;
      lVar12 = uVar7 + uVar13 * 8;
      *(undefined8 *)(lVar12 + 0x50) = uStack_48;
      *(undefined8 *)(lVar12 + 0x48) = uStack_50;
      *(undefined8 *)(lVar12 + 0x40) = uStack_58;
      *(undefined8 *)(lVar12 + 0x38) = local_60;
      return uVar7;
    }
    if (param_1 != 0) {
      return uVar7;
    }
    FUN_003673f0(&local_60,"no error");
    uVar13 = (ulong)*(byte *)(uVar7 + 0x20);
    if (uVar13 == 0xff) {
      bVar2 = *(byte *)(uVar7 + 0x2f);
      if ((uint)*(byte *)(uVar7 + 0x30) < bVar2 + 4) {
        uVar1 = (uint)*(byte *)(uVar7 + 0x30) * 3;
        uVar9 = 0xfffffffe;
        if (uVar1 < 0x1fe) {
          uVar9 = uVar1 >> 1;
        }
        *(char *)(uVar7 + 0x30) = (char)uVar9;
        if (bVar2 + 4 <= (uVar9 & 0xff)) {
          uVar7 = FUN_0038c7f0(uVar7,(uVar9 & 0xff) * 8 + 0x38);
          bVar2 = *(byte *)(uVar7 + 0x2f);
          goto LAB_00351dbc;
        }
      }
      else {
LAB_00351dbc:
        uVar13 = (ulong)bVar2;
        *(byte *)(uVar7 + 0x2f) = bVar2 + 4;
        if (bVar2 != 0xff) goto LAB_00351dcc;
      }
      uStack_38 = uStack_58;
      local_40 = local_60;
      uStack_28 = uStack_48;
      uStack_30 = uStack_50;
      pvVar8 = (void *)FUN_00366f90(&local_40);
      free(pvVar8);
      bVar2 = *(byte *)(uVar7 + 0x13);
    }
    else {
      puVar10 = *(undefined8 **)(uVar7 + uVar13 * 8 + 0x38);
      if ((puVar10 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
        do {
          lVar12 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)puVar10[3])(puVar10[4]);
        }
      }
LAB_00351dcc:
      *(char *)(uVar7 + 0x20) = (char)uVar13;
      lVar12 = uVar7 + uVar13 * 8;
      *(undefined8 *)(lVar12 + 0x50) = uStack_48;
      *(undefined8 *)(lVar12 + 0x48) = uStack_50;
      *(undefined8 *)(lVar12 + 0x40) = uStack_58;
      *(undefined8 *)(lVar12 + 0x38) = local_60;
      bVar2 = *(byte *)(uVar7 + 0x13);
    }
    uVar9 = (uint)bVar2;
    if (bVar2 != 0xff) {
LAB_00351f10:
      *(char *)(uVar7 + 0x13) = (char)uVar9;
      *(undefined8 *)(uVar7 + (ulong)uVar9 * 8 + 0x38) = 0;
      return uVar7;
    }
    if (uVar7 != 0) {
      bVar2 = *(byte *)(uVar7 + 0x2f);
      uVar9 = (uint)bVar2;
      bVar3 = *(byte *)(uVar7 + 0x30);
      if ((uint)bVar2 < (uint)bVar3) {
        *(byte *)(uVar7 + 0x2f) = bVar2 + 1;
      }
      else {
        uVar9 = (uint)bVar3 + (uint)bVar3 * 2;
        uVar1 = 0xfffffffe;
        if (uVar9 < 0x1fe) {
          uVar1 = uVar9 >> 1;
        }
        *(char *)(uVar7 + 0x30) = (char)uVar1;
        if ((uVar1 & 0xff) <= (uint)bVar2) {
          return uVar7;
        }
        uVar7 = FUN_0038c7f0(uVar7,(uVar1 & 0xff) * 8 + 0x38);
        uVar9 = (uint)*(byte *)(uVar7 + 0x2f);
        uVar1 = *(byte *)(uVar7 + 0x2f) + 1;
        *(char *)(uVar7 + 0x2f) = (char)uVar1;
        if (uVar1 >> 8 != 0) {
          return uVar7;
        }
      }
      goto LAB_00351f10;
    }
    goto LAB_00351f30;
  }
  FUN_003673f0(&local_60,"cancelled");
  uVar13 = (ulong)*(byte *)(uVar7 + 0x20);
  if (uVar13 == 0xff) {
    bVar2 = *(byte *)(uVar7 + 0x2f);
    if ((uint)*(byte *)(uVar7 + 0x30) < bVar2 + 4) {
      uVar1 = (uint)*(byte *)(uVar7 + 0x30) * 3;
      uVar9 = 0xfffffffe;
      if (uVar1 < 0x1fe) {
        uVar9 = uVar1 >> 1;
      }
      *(char *)(uVar7 + 0x30) = (char)uVar9;
      if (bVar2 + 4 <= (uVar9 & 0xff)) {
        uVar7 = FUN_0038c7f0(uVar7,(uVar9 & 0xff) * 8 + 0x38);
        bVar2 = *(byte *)(uVar7 + 0x2f);
        goto LAB_00351d1c;
      }
    }
    else {
LAB_00351d1c:
      uVar13 = (ulong)bVar2;
      *(byte *)(uVar7 + 0x2f) = bVar2 + 4;
      if (bVar2 != 0xff) goto LAB_00351d2c;
    }
    uStack_38 = uStack_58;
    local_40 = local_60;
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
    pvVar8 = (void *)FUN_00366f90(&local_40);
    free(pvVar8);
    bVar2 = *(byte *)(uVar7 + 0x13);
  }
  else {
    puVar10 = *(undefined8 **)(uVar7 + uVar13 * 8 + 0x38);
    if ((puVar10 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      do {
        lVar12 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)puVar10[3])(puVar10[4]);
      }
    }
LAB_00351d2c:
    *(char *)(uVar7 + 0x20) = (char)uVar13;
    lVar12 = uVar7 + uVar13 * 8;
    *(undefined8 *)(lVar12 + 0x50) = uStack_48;
    *(undefined8 *)(lVar12 + 0x48) = uStack_50;
    *(undefined8 *)(lVar12 + 0x40) = uStack_58;
    *(undefined8 *)(lVar12 + 0x38) = local_60;
    bVar2 = *(byte *)(uVar7 + 0x13);
  }
  uVar9 = (uint)bVar2;
  if (bVar2 == 0xff) {
    if (uVar7 == 0) {
LAB_00351f30:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar2 = *(byte *)(uVar7 + 0x2f);
    uVar9 = (uint)bVar2;
    bVar3 = *(byte *)(uVar7 + 0x30);
    if ((uint)bVar2 < (uint)bVar3) {
      *(byte *)(uVar7 + 0x2f) = bVar2 + 1;
    }
    else {
      uVar9 = (uint)bVar3 + (uint)bVar3 * 2;
      uVar1 = 0xfffffffe;
      if (uVar9 < 0x1fe) {
        uVar1 = uVar9 >> 1;
      }
      *(char *)(uVar7 + 0x30) = (char)uVar1;
      if ((uVar1 & 0xff) <= (uint)bVar2) {
        return uVar7;
      }
      uVar7 = FUN_0038c7f0(uVar7,(uVar1 & 0xff) * 8 + 0x38);
      uVar9 = (uint)*(byte *)(uVar7 + 0x2f);
      uVar1 = *(byte *)(uVar7 + 0x2f) + 1;
      *(char *)(uVar7 + 0x2f) = (char)uVar1;
      if (uVar1 >> 8 != 0) {
        return uVar7;
      }
    }
  }
  *(char *)(uVar7 + 0x13) = (char)uVar9;
  *(undefined8 *)(uVar7 + (ulong)uVar9 * 8 + 0x38) = 1;
  return uVar7;
}


