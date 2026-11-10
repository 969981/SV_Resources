/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349b838; name: FUN_0349b838
 */


void FUN_0349b838(long param_1,long **param_2,undefined8 param_3,int *param_4,undefined4 *param_5)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long *local_90;
  undefined8 local_88;
  ulong local_80;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined8 local_6c;
  
  puVar7 = PTR_DAT_047e6d08;
  local_90 = (long *)0x0;
  local_88 = 0x2b00000000;
  local_80 = 0;
  uStack_78 = 0;
  local_74 = 0x3f800000ffffffff;
  local_6c = 0x1ffffffff;
  if ((*(char *)(param_1 + 0x124) != '\0') || (*param_4 != 0)) {
    uVar4 = *(ushort *)((long)param_2 + 0x12);
    uVar9 = (uint)uVar4;
    local_88 = CONCAT44(0x2b,*(uint *)(param_2 + 1));
    uVar11 = *(uint *)(param_2 + 1) & 0xff;
    uVar3 = *(uint *)PTR_DAT_047e6d08;
    if (uVar4 <= uVar3 && uVar3 != uVar4) {
      uVar9 = uVar3 & 0xffff;
      uVar4 = (ushort)uVar3;
    }
    local_80 = (ulong)uVar4;
    if ((uVar11 < 9) && (uVar3 == uVar9)) {
      plVar1 = &DAT_048afcf8 + (uVar11 - 1);
      plVar8 = (long *)*plVar1;
      if (plVar8 != (long *)0x0) {
        uVar9 = 0;
        do {
          plVar2 = plVar8 + 1;
          do {
            if ((int)*plVar2 != 0) {
              uVar9 = uVar9 + 1;
              ClearExclusiveLocal();
              if (1000 < uVar9) {
                nn::os::SleepThread(100000);
              }
              goto LAB_0349b974;
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          lVar10 = *plVar8;
          while ((long *)*plVar1 == plVar8) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_0349b9b4;
          }
          ClearExclusiveLocal();
          *(int *)plVar2 = 0;
LAB_0349b974:
          plVar8 = (long *)*plVar1;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar8 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))
                               (5,uVar11 * (ushort)local_80 * 4 + 0x20,0x10);
    if (plVar8 != (long *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
LAB_0349b9b4:
      local_90 = plVar8 + 4;
      local_80._0_4_ = (uint)(ushort)local_80;
      FUN_0349b678(param_1,param_2,param_3,param_4,&local_90);
      param_2 = &local_90;
    }
  }
  for (lVar10 = *(long *)(param_1 + 0xb0); lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
    FUN_0349baa4(*param_5,param_5[1],lVar10,param_2);
  }
  if ((local_90 != (long *)0x0) && ((byte)local_88 != 0)) {
    if (((byte)local_88 < 9) && (*(uint *)puVar7 == (uint)(ushort)local_80)) {
      plVar1 = &DAT_048afcf8 + ((byte)local_88 - 1);
      do {
        lVar10 = *plVar1;
        local_90[-4] = lVar10;
        while (*plVar1 == lVar10) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = (long)(local_90 + -4);
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            *(undefined4 *)(local_90 + -3) = 0;
            return;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,local_90 + -4);
  }
  return;
}


