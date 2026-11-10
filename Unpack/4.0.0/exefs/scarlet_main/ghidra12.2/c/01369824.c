/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01369824; name: FUN_01369824
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_01369824(long param_1,int *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long local_50;
  long lStack_48;
  long *local_28;
  
  switch(*param_2) {
  case 0:
    lVar14 = *(long *)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0x8a) = *(undefined2 *)(lVar14 + 0x48a);
    *(undefined2 *)(param_1 + 0x8c) = *(undefined2 *)(lVar14 + 0x48c);
    *(undefined2 *)(param_1 + 0x8e) = *(undefined2 *)(lVar14 + 0x48e);
    local_28 = *(long **)(*(long *)(param_1 + 0x48) + 0x108);
    if (local_28 == (long *)0x0) goto LAB_013698c4;
    lVar14 = local_28[6];
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0136a0e8;
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 != 0) {
      if (sVar2 != -1) goto LAB_013698c4;
LAB_0136a130:
      pcVar8 = "count != 0";
      pcVar9 = "AddReference";
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar11 = "Reference counter overflows.";
      goto LAB_0136a150;
    }
    uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
    *(undefined8 *)(lVar14 + 8) = uVar7;
    *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
LAB_013698c4:
    FUN_02e37b54(param_1 + 0x138,&local_28);
    if (local_28 != (long *)0x0) {
      lVar14 = local_28[6];
      psVar1 = (short *)(lVar14 + 0x1a);
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
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0136a108;
    }
    local_28 = *(long **)(*(long *)(param_1 + 0x48) + 0x140);
    if (local_28 != (long *)0x0) {
      plVar13 = local_28 + 5;
      do {
        lVar14 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)lVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar14 == -1) goto LAB_0136a0c0;
    }
    FUN_02e37bec(param_1 + 400,&local_28);
    if (local_28 != (long *)0x0) {
      plVar13 = local_28 + 5;
      do {
        lVar14 = *plVar13;
        iVar5 = (int)lVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_0136a09c;
    }
    *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) & 0xe4;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x90) = 7;
    *(undefined1 *)(param_1 + 0x94) = 0;
    FUN_01830ac8(param_1);
    FUN_02991748(param_1,*(undefined8 *)(param_1 + 8));
    local_28 = *(long **)(*(long *)(param_1 + 0x38) + 0x718);
    FUN_0291c260(*(undefined8 *)(param_1 + 0x1a0),&local_28);
    lVar14 = *(long *)(param_1 + 0x38);
    if (*(char *)(lVar14 + 0x8c) == '\0') {
      uVar12 = *(undefined1 *)(lVar14 + 0x4a5);
    }
    else {
      uVar12 = 2;
    }
    *(undefined1 *)(param_1 + 0x88) = uVar12;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 4;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar14 + 0x718);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar14 + 0x4ac);
    *(undefined4 *)(param_1 + 0x84) = 0;
    if ((*(char *)(lVar14 + 0x8c) != '\0') &&
       (plVar13 = *(long **)(param_1 + 0x138), plVar13 != (long *)0x0)) {
      lVar14 = plVar13[6];
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0136a0e8;
      psVar1 = (short *)(lVar14 + 0x1a);
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
        uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar7;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_0136a130;
      plVar15 = *(long **)(param_1 + 0x138);
      if (plVar15 != (long *)0x0) {
        lVar14 = plVar15[6];
        if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0136a0e8;
        psVar1 = (short *)(lVar14 + 0x1a);
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
          uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar7;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_0136a130;
      }
      uVar6 = (**(code **)(*plVar15 + 0x88))(plVar15);
      if (plVar15 != (long *)0x0) {
        lVar14 = plVar15[6];
        psVar1 = (short *)(lVar14 + 0x1a);
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
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar15 + 0x50))(plVar15);
        }
        else if (sVar2 == 0) goto LAB_0136a108;
      }
      lVar14 = plVar13[6];
      psVar1 = (short *)(lVar14 + 0x1a);
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
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar2 == 0) goto LAB_0136a108;
      if ((uVar6 & 1) != 0) {
        plVar13 = *(long **)(param_1 + 0x138);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        lVar14 = plVar13[6];
        if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0136a0e8;
        psVar1 = (short *)(lVar14 + 0x1a);
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
          uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar7;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_0136a130;
        (**(code **)(*plVar13 + 0x70))(plVar13);
        lVar14 = plVar13[6];
        psVar1 = (short *)(lVar14 + 0x1a);
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
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
        }
        else if (sVar2 == 0) goto LAB_0136a108;
      }
      plVar13 = *(long **)(param_1 + 0x138);
      if (plVar13 != (long *)0x0) {
        lVar14 = plVar13[6];
        if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0136a0e8;
        psVar1 = (short *)(lVar14 + 0x1a);
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
          uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar7;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_0136a130;
        plVar15 = *(long **)(param_1 + 0x138);
        if (plVar15 != (long *)0x0) {
          lVar14 = plVar15[6];
          if (*(long *)(lVar14 + 0x10) == 0) {
LAB_0136a0e8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar14 + 0x1a);
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
            uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
            *(undefined8 *)(lVar14 + 8) = uVar7;
            *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) goto LAB_0136a130;
        }
        uVar6 = (**(code **)(*plVar15 + 0x68))(plVar15);
        if (plVar15 != (long *)0x0) {
          lVar14 = plVar15[6];
          psVar1 = (short *)(lVar14 + 0x1a);
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
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*plVar15 + 0x50))(plVar15);
          }
          else if (sVar2 == 0) goto LAB_0136a108;
        }
        lVar14 = plVar13[6];
        psVar1 = (short *)(lVar14 + 0x1a);
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
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
        }
        else if (sVar2 == 0) {
LAB_0136a108:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        if ((uVar6 & 1) != 0) {
          *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 3;
        }
      }
    }
    *(undefined4 *)(*(long *)(param_1 + 0x120) + 0x40) =
         *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x2c);
    FUN_0142ecfc();
    FUN_0179ffa0(param_1);
    local_50 = *(long *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x96) = 0;
    *(byte *)(param_1 + 0x96) = (byte)((uint)*(undefined4 *)(local_50 + 0x498) >> 0x1a) & 1;
    lStack_48 = param_1;
    local_28 = (long *)FUN_01902edc(*(undefined8 *)(param_1 + 8),&lStack_48,&local_50);
    if (local_28 != (long *)0x0) {
      plVar13 = local_28 + 5;
      do {
        lVar14 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)lVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar14 == -1) {
LAB_0136a0c0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_02e37c78((undefined8 *)(param_1 + 0x1a8),&local_28);
    if (local_28 != (long *)0x0) {
      plVar13 = local_28 + 5;
      do {
        lVar14 = *plVar13;
        iVar5 = (int)lVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_0136a09c;
    }
    FUN_01a29dc4(*(undefined8 *)(param_1 + 0x1a8));
LAB_01369c94:
    *param_2 = *param_2 + 1;
    return 0;
  case 1:
    uVar6 = FUN_019389d0(*(undefined8 *)(param_1 + 0x1a8));
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    goto LAB_01369c94;
  case 2:
    if ((*(char *)(*(long *)(param_1 + 0x38) + 0x8c) != '\0') &&
       (plVar13 = *(long **)(param_1 + 0x138), plVar13 != (long *)0x0)) {
      lVar14 = plVar13[6];
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0136a0e8;
      psVar1 = (short *)(lVar14 + 0x1a);
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
        uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar7;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_0136a130;
      plVar15 = *(long **)(param_1 + 0x138);
      if (plVar15 != (long *)0x0) {
        lVar14 = plVar15[6];
        if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0136a0e8;
        psVar1 = (short *)(lVar14 + 0x1a);
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
          uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar7;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_0136a130;
      }
      uVar6 = (**(code **)(*plVar15 + 0x68))(plVar15);
      if (plVar15 != (long *)0x0) {
        lVar14 = plVar15[6];
        psVar1 = (short *)(lVar14 + 0x1a);
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
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar15 + 0x50))(plVar15);
        }
        else if (sVar2 == 0) goto LAB_0136a108;
      }
      lVar14 = plVar13[6];
      psVar1 = (short *)(lVar14 + 0x1a);
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
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar2 == 0) goto LAB_0136a108;
      if ((uVar6 & 1) != 0) {
        *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 3;
      }
    }
    FUN_02e37d04(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    goto LAB_01369c94;
  case 3:
    uVar6 = FUN_0136a15c(param_1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x9e) & 1) != 0) {
      *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 2;
      return 1;
    }
    FUN_02e37d94(param_1);
    plVar13 = *(long **)(param_1 + 0x130);
    if (plVar13 == (long *)0x0) {
      halt_baddata();
    }
    plVar15 = plVar13 + 5;
    do {
      lVar14 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = (int)lVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar14 == -1) goto LAB_0136a0c0;
    (**(code **)(*plVar13 + 0x48))(plVar13,0,1);
    do {
      iVar5 = (int)*plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 1) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      return 1;
    }
    if (iVar5 != 0) {
      return 1;
    }
LAB_0136a09c:
    pcVar8 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar9 = "DecrementReferenceInternal";
    pcVar10 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
    ;
    pcVar11 = "Reference counter underflows.";
LAB_0136a150:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar8,pcVar9,pcVar10,0x58,pcVar11);
  default:
    return 0;
  }
}


