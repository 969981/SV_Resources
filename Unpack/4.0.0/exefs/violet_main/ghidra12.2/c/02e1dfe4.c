/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e1dfe4; name: FUN_02e1dfe4
 */


void FUN_02e1dfe4(long param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_1e0;
  undefined1 auStack_1d8 [344];
  undefined1 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  uint7 local_6c;
  undefined1 uStack_65;
  undefined2 local_64;
  
  if (param_2 == 0) {
    plVar6 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),1,0);
                    /* WARNING: Could not recover jumptable at 0x02e1e540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x4d8))(plVar6,0x1e);
    return;
  }
  if ((param_2 == 2) && (*(long *)(*(long *)(param_1 + 0x10) + 0x20) != 0)) {
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x30);
    uVar5 = (**(code **)(**(long **)(lVar8 + 0x98) + 0x98))();
    FUN_018f6d1c(lVar8,2,uVar5);
    plVar6 = (long *)FUN_00fee5dc(&local_1e0,*(undefined8 *)(param_1 + 0x18),
                                  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20));
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[6];
      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_02e1e75c;
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar7;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_02e1e77c;
    }
    memset(&local_1e0,0,0x180);
    uVar7 = _local_6c;
    local_80 = 5;
    local_7c = 0;
    local_74._0_2_ = (ushort)local_74 & 0xff00;
    local_74._0_4_ = CONCAT22(10,(ushort)local_74);
    _local_6c = CONCAT71(stack0xffffffffffffff95,10);
    local_74 = CONCAT44(0xa0a0a0a,(undefined4)local_74);
    uStack_65 = SUB81(uVar7,7);
    local_6c = (uint7)(uint)local_6c;
    local_64 = 0;
    local_1e0 = (**(code **)(*plVar6 + 0x68))(plVar6);
    local_80 = 2;
    lVar8 = *(long *)(param_1 + 0x10);
    local_64 = *(undefined2 *)(lVar8 + 0x68);
    local_74 = *(undefined8 *)(lVar8 + 0x58);
    _local_6c = *(undefined8 *)(lVar8 + 0x60);
    local_7c = *(undefined8 *)(lVar8 + 0x50);
    (**(code **)(*plVar6 + 0x1d0))(plVar6,auStack_1d8);
    FUN_012544f8(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),&local_1e0);
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))(plVar6);
      }
      else if (sVar2 == 0) goto LAB_02e1e6bc;
    }
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x28) != 0) {
      plVar6 = (long *)FUN_00fee5dc(&local_1e0,*(undefined8 *)(param_1 + 0x18));
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_02e1e75c;
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          *(undefined8 *)(lVar8 + 8) = uVar7;
          *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_02e1e77c;
      }
      memset(&local_1e0,0,0x180);
      uVar7 = _local_6c;
      local_80 = 5;
      local_7c = 0;
      local_74._0_2_ = (ushort)local_74 & 0xff00;
      local_74._0_4_ = CONCAT22(10,(ushort)local_74);
      local_74 = CONCAT44(0xa0a0a0a,(undefined4)local_74);
      _local_6c = CONCAT71(stack0xffffffffffffff95,10);
      uStack_65 = SUB81(uVar7,7);
      local_6c = (uint7)(uint)local_6c;
      local_64 = 0;
      local_1e0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      local_80 = 2;
      lVar8 = *(long *)(param_1 + 0x10);
      local_64 = *(undefined2 *)(lVar8 + 0x84);
      _local_6c = *(undefined8 *)(lVar8 + 0x7c);
      local_74 = *(undefined8 *)(lVar8 + 0x74);
      local_7c = *(undefined8 *)(lVar8 + 0x6c);
      (**(code **)(*plVar6 + 0x1d0))(plVar6,auStack_1d8);
      FUN_012544f8(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),&local_1e0);
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))(plVar6);
        }
        else if (sVar2 == 0) goto LAB_02e1e6bc;
      }
    }
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x30) != 0) {
      plVar6 = (long *)FUN_00fee5dc(&local_1e0,*(undefined8 *)(param_1 + 0x18));
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_02e1e75c;
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          *(undefined8 *)(lVar8 + 8) = uVar7;
          *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_02e1e77c;
      }
      memset(&local_1e0,0,0x180);
      uVar7 = _local_6c;
      local_80 = 5;
      local_7c = 0;
      local_74._0_2_ = (ushort)local_74 & 0xff00;
      local_74._0_4_ = CONCAT22(10,(ushort)local_74);
      local_74 = CONCAT44(0xa0a0a0a,(undefined4)local_74);
      _local_6c = CONCAT71(stack0xffffffffffffff95,10);
      uStack_65 = SUB81(uVar7,7);
      local_6c = (uint7)(uint)local_6c;
      local_64 = 0;
      local_1e0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      local_80 = 2;
      lVar8 = *(long *)(param_1 + 0x10);
      local_64 = *(undefined2 *)(lVar8 + 0xa0);
      local_74 = *(undefined8 *)(lVar8 + 0x90);
      _local_6c = *(undefined8 *)(lVar8 + 0x98);
      local_7c = *(undefined8 *)(lVar8 + 0x88);
      (**(code **)(*plVar6 + 0x1d0))(plVar6,auStack_1d8);
      FUN_012544f8(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),&local_1e0);
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))(plVar6);
        }
        else if (sVar2 == 0) goto LAB_02e1e6bc;
      }
    }
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x38) != 0) {
      plVar6 = (long *)FUN_00fee5dc(&local_1e0,*(undefined8 *)(param_1 + 0x18));
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_02e1e75c;
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          *(undefined8 *)(lVar8 + 8) = uVar7;
          *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_02e1e77c;
      }
      memset(&local_1e0,0,0x180);
      uVar7 = _local_6c;
      local_80 = 5;
      local_7c = 0;
      local_74._0_2_ = (ushort)local_74 & 0xff00;
      local_74._0_4_ = CONCAT22(10,(ushort)local_74);
      local_74 = CONCAT44(0xa0a0a0a,(undefined4)local_74);
      _local_6c = CONCAT71(stack0xffffffffffffff95,10);
      uStack_65 = SUB81(uVar7,7);
      local_6c = (uint7)(uint)local_6c;
      local_64 = 0;
      local_1e0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      local_80 = 2;
      lVar8 = *(long *)(param_1 + 0x10);
      local_64 = *(undefined2 *)(lVar8 + 0xbc);
      _local_6c = *(undefined8 *)(lVar8 + 0xb4);
      local_74 = *(undefined8 *)(lVar8 + 0xac);
      local_7c = *(undefined8 *)(lVar8 + 0xa4);
      (**(code **)(*plVar6 + 0x1d0))(plVar6,auStack_1d8);
      FUN_012544f8(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),&local_1e0);
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))(plVar6);
        }
        else if (sVar2 == 0) goto LAB_02e1e6bc;
      }
    }
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x40) != 0) {
      plVar6 = (long *)FUN_00fee5dc(&local_1e0,*(undefined8 *)(param_1 + 0x18));
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        if (*(long *)(lVar8 + 0x10) == 0) {
LAB_02e1e75c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          *(undefined8 *)(lVar8 + 8) = uVar7;
          *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
LAB_02e1e77c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      memset(&local_1e0,0,0x180);
      uVar7 = _local_6c;
      local_80 = 5;
      local_7c = 0;
      local_74._0_2_ = (ushort)local_74 & 0xff00;
      local_74._0_4_ = CONCAT22(10,(ushort)local_74);
      local_74 = CONCAT44(0xa0a0a0a,(undefined4)local_74);
      _local_6c = CONCAT71(stack0xffffffffffffff95,10);
      uStack_65 = SUB81(uVar7,7);
      local_6c = (uint7)(uint)local_6c;
      local_64 = 0;
      local_1e0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      local_80 = 2;
      lVar8 = *(long *)(param_1 + 0x10);
      local_64 = *(undefined2 *)(lVar8 + 0xd8);
      local_74 = *(undefined8 *)(lVar8 + 200);
      _local_6c = *(undefined8 *)(lVar8 + 0xd0);
      local_7c = *(undefined8 *)(lVar8 + 0xc0);
      (**(code **)(*plVar6 + 0x1d0))(plVar6,auStack_1d8);
      FUN_012544f8(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),&local_1e0);
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))(plVar6);
        }
        else if (sVar2 == 0) {
LAB_02e1e6bc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}


