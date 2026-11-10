/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ad9f4; name: FUN_010ad9f4
 */


void FUN_010ad9f4(long *param_1,long param_2,long param_3,long param_4,undefined1 param_5)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 local_6c [4];
  undefined1 auStack_68 [8];
  
  puVar4 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  *(undefined4 *)(param_1 + 3) = 0;
  local_6c[0] = param_5;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar11 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045ffe38;
  param_1[1] = lVar11;
  param_1[4] = (long)&PTR_LAB_045ffe70;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_4;
  param_1[0xf] = 0xfffffffffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = param_4;
  param_1[0x14] = 0xfffffffffffffff;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x1b] = param_4;
  param_1[0x1c] = 0xfffffffffffffff;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = param_4;
  param_1[0x21] = 0xfffffffffffffff;
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  param_1[0x27] = 0;
  param_1[0x28] = param_4;
  param_1[0x29] = 0xfffffffffffffff;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = param_4;
  param_1[0x2e] = 0xfffffffffffffff;
  param_1[0x2f] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x20c) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = param_1[1];
  param_1[0x3a] = 0;
  param_1[0x3b] = param_1[1];
  *(undefined4 *)(param_1 + 0x41) = 5;
  param_1[0x37] = 0x666666666666666;
  param_1[0x38] = 0;
  param_1[0x3c] = 0x666666666666666;
  param_1[0x3d] = 0;
  FUN_010aeb40(param_1 + 0x42);
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  memset(param_1 + 0x89,0,0x49);
  lVar7 = FUN_010ae198(&local_90,param_1[1],local_6c);
  if (lVar7 != 0) {
    lVar11 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_010ae164;
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar10;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_010addc0;
  }
  plVar8 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_010ae13c;
  }
  param_1[10] = lVar7;
  lVar7 = FUN_010a7f10(&local_90,param_1[1]);
  if (lVar7 != 0) {
    lVar11 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_010ae164;
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar10;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_010addc0;
  }
  plVar8 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_010ae13c;
  }
  iVar6 = 0;
  param_1[0xb] = lVar7;
  do {
    local_90 = CONCAT44(local_90._4_4_,iVar6);
    lVar7 = FUN_010ae198(auStack_68,param_1[1],local_6c);
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar7 + 0x30);
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_010ae164;
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar10;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_010addc0;
    }
    plVar8 = (long *)FUN_010ae414(param_1 + 0x19,&local_90);
    plVar9 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar9 != (long *)0x0) {
      lVar11 = plVar9[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_010ae13c;
    }
    *plVar8 = lVar7;
    lVar7 = FUN_010ae198(auStack_68,param_1[1],local_6c);
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar7 + 0x30);
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_010ae164;
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar10;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_010addc0;
    }
    plVar8 = (long *)FUN_010ae414(param_1 + 0x26,&local_90);
    plVar9 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar9 != (long *)0x0) {
      lVar11 = plVar9[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_010ae13c;
    }
    *plVar8 = lVar7;
    lVar7 = FUN_010ae198(auStack_68,param_1[1],local_6c);
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar7 + 0x30);
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_010ae164;
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar10;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_010addc0;
    }
    plVar8 = (long *)FUN_010ae414(param_1 + 0xc,&local_90);
    plVar9 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar9 != (long *)0x0) {
      lVar11 = plVar9[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_010ae13c;
    }
    iVar6 = iVar6 + 1;
    *plVar8 = lVar7;
  } while (iVar6 != 5);
  cVar5 = FUN_017f814c(param_1[6]);
  if (cVar5 != '\0') {
    lVar7 = FUN_010ae198(&local_90,param_1[1],local_6c);
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar7 + 0x30);
      if (*(long *)(lVar11 + 0x10) == 0) {
LAB_010ae164:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar10;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_010addc0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_90 = CONCAT44(local_90._4_4_,0xff);
    plVar8 = (long *)FUN_010b0854(param_1 + 0xc,&local_90);
    plVar9 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar9 != (long *)0x0) {
      lVar11 = plVar9[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_010ae13c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *plVar8 = lVar7;
    FUN_017afad0(&local_90,param_1[1]);
    lVar7 = local_90;
    local_90 = 0;
    lVar11 = param_1[0x93];
    param_1[0x93] = lVar7;
    if (lVar11 == 0) {
      param_1[0x96] = local_78;
      param_1[0x95] = local_80;
      param_1[0x94] = local_88;
      local_90 = 0;
    }
    else {
      FUN_017b2850(param_1 + 0x94);
      lVar7 = local_90;
      param_1[0x96] = local_78;
      param_1[0x95] = local_80;
      param_1[0x94] = local_88;
      local_90 = 0;
      if (lVar7 != 0) {
        FUN_017b2850(&local_88);
      }
    }
  }
  FUN_010aeca8(param_1);
  FUN_010aee40(param_1,param_4);
  FUN_010afe64(param_1,param_4);
  return;
}


