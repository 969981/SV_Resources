/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349baa4; name: FUN_0349baa4
 */


void FUN_0349baa4(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  float *pfVar14;
  ulong uVar15;
  uint uVar16;
  void *__s;
  uint uVar17;
  ulong uVar18;
  long *local_a0;
  uint local_98;
  undefined4 local_94;
  ushort local_90;
  undefined2 local_8e;
  undefined8 local_8c;
  undefined8 local_48;
  
  uVar16 = *(uint *)(param_3 + 5);
  if ((((uint)*(ushort *)(param_3 + 6) != (uint)*(ushort *)(param_4 + 0x10)) ||
      (*(uint *)(param_4 + 8) != uVar16)) || (((*(uint *)(param_4 + 8) ^ uVar16) & 0xff) != 0)) {
    lVar11 = param_3[4];
    if ((lVar11 != 0) && (uVar16 = uVar16 & 0xff, uVar16 != 0)) {
      if ((uVar16 < 9) && (*(uint *)PTR_DAT_047e6d08 == (uint)*(ushort *)(param_3 + 6))) {
        plVar1 = &DAT_048afcf8 + (uVar16 - 1);
        do {
          lVar12 = *plVar1;
          *(long *)(lVar11 + -0x20) = lVar12;
          while (*plVar1 == lVar12) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar11 + -0x20;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              *(undefined4 *)(lVar11 + -0x18) = 0;
              goto LAB_0349bb94;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,lVar11 + -0x20);
    }
LAB_0349bb94:
    param_3[4] = 0;
    *(undefined2 *)(param_3 + 6) = 0;
    *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_4 + 8);
    *(undefined4 *)((long)param_3 + 0x2c) = *(undefined4 *)(param_4 + 0xc);
    *(undefined2 *)(param_3 + 6) = *(undefined2 *)(param_4 + 0x10);
    *(undefined2 *)((long)param_3 + 0x32) = *(undefined2 *)(param_4 + 0x12);
    iVar7 = FUN_034768d8(param_3 + 4);
    if (iVar7 != 1) goto LAB_0349be50;
    uVar16 = *(uint *)(param_3 + 5);
  }
  puVar6 = PTR_DAT_047e6d08;
  if ((uVar16 & 0xf00) != 0x200) {
    (**(code **)(*param_3 + 0x10))(param_1,param_2,param_3,param_4);
    *(undefined2 *)((long)param_3 + 0x32) = *(undefined2 *)(param_4 + 0x12);
    return;
  }
  local_a0 = (long *)0x0;
  local_8c = 0;
  local_98 = *(uint *)(param_4 + 8);
  local_94 = *(undefined4 *)(param_4 + 0xc);
  uVar17 = local_98 & 0xff;
  local_90 = *(ushort *)(param_4 + 0x10);
  uVar10 = (uint)local_90;
  uVar3 = *(uint *)PTR_DAT_047e6d08;
  local_8e = *(undefined2 *)(param_4 + 0x12);
  if (local_90 <= uVar3 && uVar3 != local_90) {
    uVar10 = uVar3 & 0xffff;
    local_90 = (ushort)uVar3;
  }
  if ((uVar17 < 9) && (uVar3 == uVar10)) {
    plVar1 = &DAT_048afcf8 + (uVar17 - 1);
    plVar8 = (long *)*plVar1;
    if (plVar8 != (long *)0x0) {
      uVar10 = 0;
      do {
        plVar2 = plVar8 + 1;
        do {
          if ((int)*plVar2 != 0) {
            uVar10 = uVar10 + 1;
            ClearExclusiveLocal();
            if (1000 < uVar10) {
              nn::os::SleepThread(100000);
            }
            goto LAB_0349bcac;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar11 = *plVar8;
        while ((long *)*plVar1 == plVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0349bcec;
        }
        ClearExclusiveLocal();
        *(int *)plVar2 = 0;
LAB_0349bcac:
        plVar8 = (long *)*plVar1;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(5,uVar17 * local_90 * 4 + 0x20,0x10);
  if (plVar8 != (long *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
LAB_0349bcec:
    uVar15 = (ulong)local_90;
    local_a0 = plVar8 + 4;
    local_8e = 0;
    memset(local_a0,0,uVar15 * (byte)local_98 * 4);
    uVar16 = uVar16 & 0xff;
    uVar18 = (ulong)uVar16;
    __s = (void *)((long)&local_a0 - (ulong)(uVar16 * (uVar16 + 3 >> 2) * 0x10));
    iVar7 = (uVar16 + 3 & 0x1fc) * uVar16;
    if (iVar7 != 0) {
      memset(__s,0,(ulong)(uint)(iVar7 * 4));
    }
    if (uVar16 != 0) {
      pbVar9 = (byte *)0x3cabee0;
      pvVar13 = __s;
      pfVar14 = (float *)&DAT_03d9801c;
      do {
        uVar18 = uVar18 - 1;
        *(float *)((long)pvVar13 + (ulong)*pbVar9 * 4) = 0.70710677 / *pfVar14;
        pvVar13 = (void *)((long)pvVar13 + ((ulong)(uVar16 * 4 + 0xc) & 0x7f0));
        pbVar9 = pbVar9 + 1;
        pfVar14 = pfVar14 + 1;
      } while (uVar18 != 0);
    }
    local_48 = 0x3f8000003f800000;
    FUN_034f5860(1.0 / (float)uVar15,param_4,&local_a0,&local_48,__s,__s,uVar15);
    (**(code **)(*param_3 + 0x10))(param_1,param_2,param_3,&local_a0);
    *(undefined2 *)((long)param_3 + 0x32) = *(undefined2 *)(param_4 + 0x12);
    if (local_a0 == (long *)0x0) {
      return;
    }
    if ((local_98 & 0xff) == 0) {
      return;
    }
    if ((8 < (local_98 & 0xff)) || (*(uint *)puVar6 != (uint)local_90)) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,local_a0 + -4);
      return;
    }
    plVar1 = &DAT_048afcf8 + ((local_98 & 0xff) - 1);
    do {
      lVar11 = *plVar1;
      local_a0[-4] = lVar11;
      while (*plVar1 == lVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = (long)(local_a0 + -4);
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          *(undefined4 *)(local_a0 + -3) = 0;
          return;
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB_0349be50:
  *(undefined2 *)((long)param_3 + 0x32) = 0;
  return;
}


