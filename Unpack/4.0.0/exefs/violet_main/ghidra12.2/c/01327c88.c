/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01327c88; name: FUN_01327c88
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01327c88(long *param_1,int param_2,int param_3)

{
  short *psVar1;
  int *piVar2;
  long *******ppppppplVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  long *****ppppplVar12;
  long *plVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  long ***ppplVar17;
  long lVar18;
  long ****pppplVar19;
  undefined8 *puVar20;
  long *plVar21;
  char *pcVar22;
  long *******ppppppplVar23;
  long ******pppppplVar24;
  long *****ppppplVar25;
  long *plVar26;
  long lVar27;
  float fVar28;
  undefined4 uVar30;
  undefined8 uVar29;
  float fVar31;
  long *******local_100;
  long ****pppplStack_f8;
  long ****local_f0;
  long ****local_e8;
  long *local_e0 [13];
  long *******local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  long *****local_58;
  
  lVar18 = param_1[0x126];
  piVar2 = (int *)(lVar18 + 0x20);
  if (*(int *)(lVar18 + 0x28) != 0) {
    piVar2 = (int *)(lVar18 + 0x24);
  }
  iVar9 = param_2 + *piVar2 * param_3;
  iVar15 = (**(code **)(*(long *)param_1[0x29] + 0x80))();
  if (iVar9 < iVar15) {
    *(int *)(param_1 + 0x132) = param_2;
    *(int *)(param_1[0x126] + 0x14) = param_2;
    *(int *)((long)param_1 + 0x994) = param_3;
    *(int *)(param_1[0x126] + 0x10) = param_3;
    lVar18 = param_1[0x122];
    if (*(char *)(lVar18 + 8) != '\0') {
      FUN_00f6bf24(lVar18);
      uVar29 = (**(code **)(**(long **)(lVar18 + 0x10) + 0x30))
                         (*(long **)(lVar18 + 0x10),lVar18 + 0x58);
      uVar30 = (undefined4)((ulong)uVar29 >> 0x20);
      pppplStack_f8 = *(long *****)(lVar18 + 0xf8);
      fVar31 = (float)uVar29 + *(float *)(lVar18 + 0xe0) * 0.5;
      fVar28 = (float)(int)(float)param_3;
      if (*(char *)(lVar18 + 0x104) != '\0') {
        fVar28 = (float)param_3;
      }
      *(long *****)(lVar18 + 0xf8) = pppplStack_f8;
      *(ulong *)(lVar18 + 0xf0) = CONCAT44(uVar30,fVar31);
      local_100 = (long *******)CONCAT44(uVar30,fVar31 + *(float *)(lVar18 + 0x100) * fVar28);
      (**(code **)(**(long **)(lVar18 + 0x10) + 0x28))
                (*(long **)(lVar18 + 0x10),lVar18 + 0x38,&local_100);
    }
    if (param_1[0x4a] != 0) {
      puVar20 = *(undefined8 **)param_1[0x118];
      puVar6 = (undefined8 *)((long *)param_1[0x118])[1];
      if ((puVar20 != puVar6) &&
         ((*(char *)(puVar20 + 4) != '\0' || (*(int *)((long)puVar20 + 0x24) != iVar9)))) {
        puVar14 = puVar20 + 6;
        do {
          puVar20 = puVar14;
          if (puVar6 == puVar20) {
            puVar20 = puVar6;
            goto LAB_01327de8;
          }
          puVar14 = puVar20 + 6;
        } while ((*(char *)(puVar20 + 4) != '\0') || (*(int *)((long)puVar20 + 0x24) != iVar9));
      }
LAB_01327de8:
      if ((puVar20 != (undefined8 *)0x0) && (puVar6 != puVar20)) {
        *(undefined1 *)((long)param_1 + 0xb3a) = 1;
        local_78 = (long *******)*puVar20;
        uStack_70 = puVar20[1];
        local_68 = puVar20[2];
        local_60 = (long *)puVar20[3];
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x18))();
        }
        uVar29 = *puVar20;
        uVar7 = puVar20[1];
        uVar5 = puVar20[2];
        plVar26 = (long *)puVar20[3];
        if (plVar26 != (long *)0x0) {
          (**(code **)(*plVar26 + 0x18))(plVar26);
          (**(code **)(*plVar26 + 0x18))(plVar26);
        }
        local_100 = (long *******)&local_58;
        local_58 = (long *****)0x0;
        pppplStack_f8 = (long ****)uVar29;
        local_f0 = (long ****)uVar7;
        local_e8 = (long ****)uVar5;
        local_e0[0] = plVar26;
        if (plVar26 != (long *)0x0) {
          (**(code **)(*plVar26 + 0x18))(plVar26);
        }
        FUN_00f30ef8(param_1,&local_100,0);
        if (local_e0[0] != (long *)0x0) {
          (**(code **)(*local_e0[0] + 0x20))();
        }
        ppppplVar12 = local_58;
        if (plVar26 != (long *)0x0) {
          (**(code **)(*plVar26 + 0x20))(plVar26);
        }
        local_100 = (long *******)ppppplVar12[0x11];
        pppplStack_f8 = ppppplVar12[0x12];
        local_f0 = ppppplVar12[0x13];
        local_e8 = ppppplVar12[0x14];
        if (local_e8 != (long ****)0x0) {
          (*(code *)(*local_e8)[3])();
        }
        local_58 = (long *****)CONCAT44(local_58._4_4_,iVar9);
        (*(code *)param_1[0x4a])(param_1 + 0x4e,&local_58,&local_78,&local_100);
        if (local_e8 != (long ****)0x0) {
          (*(code *)(*local_e8)[4])();
        }
        if (plVar26 != (long *)0x0) {
          (**(code **)(*plVar26 + 0x20))(plVar26);
        }
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x20))();
        }
      }
    }
    plVar26 = *(long **)param_1[0x118];
    plVar21 = (long *)((long *)param_1[0x118])[1];
    if ((plVar26 != plVar21) &&
       ((char)plVar26[4] != '\0' || *(int *)((long)plVar26 + 0x24) != iVar9)) {
      plVar13 = plVar26 + 6;
      do {
        plVar26 = plVar13;
        if (plVar21 == plVar26) {
          plVar26 = plVar21;
          goto LAB_01327f38;
        }
        plVar13 = plVar26 + 6;
      } while (((char)plVar26[4] != '\0') || (*(int *)((long)plVar26 + 0x24) != iVar9));
    }
LAB_01327f38:
    if (plVar26 == (long *)0x0) {
      return;
    }
    if (plVar21 == plVar26) {
      return;
    }
    pcVar22 = (char *)param_1[0x12f];
    if (*pcVar22 == '\0') {
      ppppppplVar23 = (long *******)0x0;
    }
    else {
      lVar27 = param_1[0x12e];
      lVar18 = param_1[0x130];
      plVar21 = (long *)param_1[0x131];
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
      local_100 = (long *******)&local_78;
      local_78 = (long *******)0x0;
      pppplStack_f8 = (long ****)lVar27;
      local_f0 = (long ****)pcVar22;
      local_e8 = (long ****)lVar18;
      local_e0[0] = plVar21;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
      FUN_0116c820(param_1,&local_100,0);
      if (local_e0[0] != (long *)0x0) {
        (**(code **)(*local_e0[0] + 0x20))();
      }
      ppppppplVar23 = local_78;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
      (*(code *)(*ppppppplVar23)[0x26])(ppppppplVar23);
      uVar16 = FUN_0100d208(ppppppplVar23 + 5);
      ppppppplVar3 = ppppppplVar23;
      if ((uVar16 & 1) == 0) {
        ppppppplVar3 = (long *******)0x0;
      }
      local_f0 = (long ****)0x0;
      local_e8 = (long ****)0x0;
      local_100 = (long *******)0x0;
      pppplStack_f8 = (long ****)0x0;
      (*(code *)(*ppppppplVar3)[0x28])(ppppppplVar3,&local_100);
      pppplVar19 = pppplStack_f8;
      if (pppplStack_f8 != (long ****)0x0) {
        local_f0 = (long ****)0x0;
        local_e8 = (long ****)0x0;
        local_100 = (long *******)0x0;
        pppplStack_f8 = (long ****)0x0;
        (*(code *)pppplVar19)(local_e0);
      }
    }
    lVar18 = *plVar26;
    lVar8 = plVar26[1];
    lVar27 = plVar26[2];
    plVar21 = (long *)plVar26[3];
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
    local_100 = (long *******)&local_78;
    local_78 = (long *******)0x0;
    pppplStack_f8 = (long ****)lVar18;
    local_f0 = (long ****)lVar8;
    local_e8 = (long ****)lVar27;
    local_e0[0] = plVar21;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
    FUN_0116c820(param_1,&local_100,0);
    if (local_e0[0] != (long *)0x0) {
      (**(code **)(*local_e0[0] + 0x20))();
    }
    ppppppplVar3 = local_78;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x20))(plVar21);
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
    if (param_1[0x21] == 0) {
      local_58 = (long *****)0x0;
    }
    else {
      FUN_02152218(&local_58);
      ppppplVar12 = local_58;
      if (local_58 != (long *****)0x0) {
        pppplVar19 = local_58[6];
        if (pppplVar19[2] == (long ***)0x0) {
LAB_0132849c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)((long)pppplVar19 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar4 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar4 == 0) {
          ppplVar17 = (long ***)(*(code *)**pppplVar19[2])();
          pppplVar19[1] = ppplVar17;
          *(undefined4 *)((long)pppplVar19 + 0x1c) = 0xfffffffe;
        }
        else if (sVar4 == -1) goto LAB_013284bc;
        local_100 = ppppppplVar23;
        if (ppppppplVar23 != (long *******)0x0) {
          pppppplVar24 = ppppppplVar23[6];
          if (pppppplVar24[2] == (long *****)0x0) goto LAB_0132849c;
          psVar1 = (short *)((long)pppppplVar24 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar4 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar4 == 0) {
            ppppplVar25 = (long *****)(*(code *)**pppppplVar24[2])();
            pppppplVar24[1] = ppppplVar25;
            *(undefined4 *)((long)pppppplVar24 + 0x1c) = 0xfffffffe;
          }
          else if (sVar4 == -1) goto LAB_013284bc;
        }
        local_78 = ppppppplVar3;
        if (ppppppplVar3 != (long *******)0x0) {
          ppppplVar25 = (long *****)ppppppplVar3[6];
          if (ppppplVar25[2] == (long ****)0x0) goto LAB_0132849c;
          psVar1 = (short *)((long)ppppplVar25 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar4 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar4 == 0) {
            pppplVar19 = (long ****)(*(code *)**ppppplVar25[2])();
            ppppplVar25[1] = pppplVar19;
            *(undefined4 *)((long)ppppplVar25 + 0x1c) = 0xfffffffe;
          }
          else if (sVar4 == -1) {
LAB_013284bc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
        (*(code *)(*ppppplVar12)[0x2a])(ppppplVar12,&local_100,&local_78);
        if (local_78 != (long *******)0x0) {
          ppppplVar25 = (long *****)local_78[6];
          psVar1 = (short *)((long)ppppplVar25 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar4 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar4 == 1) {
            ppppplVar25[2] = (long ****)0x0;
            (*(code *)(*local_78)[10])();
          }
          else if (sVar4 == 0) goto LAB_013283a0;
        }
        if (local_100 != (long *******)0x0) {
          pppppplVar24 = local_100[6];
          psVar1 = (short *)((long)pppppplVar24 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar4 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar4 == 1) {
            pppppplVar24[2] = (long *****)0x0;
            (*(code *)(*local_100)[10])();
          }
          else if (sVar4 == 0) goto LAB_013283a0;
        }
        pppplVar19 = ppppplVar12[6];
        psVar1 = (short *)((long)pppplVar19 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar4 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar4 == 1) {
          pppplVar19[2] = (long ***)0x0;
          (*(code *)(*ppppplVar12)[10])(ppppplVar12);
        }
        else if (sVar4 == 0) goto LAB_013283a0;
        if (local_58 != (long *****)0x0) {
          pppplVar19 = local_58[6];
          psVar1 = (short *)((long)pppplVar19 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar4 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar4 == 1) {
            pppplVar19[2] = (long ***)0x0;
            (*(code *)(*local_58)[10])();
          }
          else if (sVar4 == 0) {
LAB_013283a0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
    }
    if (ppppppplVar3 != (long *******)0x0) {
      lVar18 = *plVar26;
      lVar8 = plVar26[1];
      lVar27 = plVar26[2];
      plVar26 = (long *)plVar26[3];
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x18))(plVar26);
      }
      plVar21 = (long *)param_1[0x131];
      param_1[0x12e] = lVar18;
      param_1[0x12f] = lVar8;
      param_1[0x130] = lVar27;
      param_1[0x131] = 0;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x20))();
      }
      param_1[0x131] = (long)plVar26;
      (*(code *)(*ppppppplVar3)[0x25])(ppppppplVar3);
      uVar16 = FUN_0100d208(ppppppplVar3 + 5);
      local_100 = (long *******)&LAB_02160ee8;
      pppplStack_f8 = (long ****)FUN_02b35710;
      local_f0 = (long ****)&LAB_02b35714;
      if ((uVar16 & 1) == 0) {
        ppppppplVar3 = (long *******)0x0;
      }
      local_e8 = (long ****)&LAB_02b35720;
      local_e0[0] = param_1;
      (*(code *)(*ppppppplVar3)[0x28])(ppppppplVar3,&local_100);
      pppplVar19 = pppplStack_f8;
      if (pppplStack_f8 != (long ****)0x0) {
        local_f0 = (long ****)0x0;
        local_e8 = (long ****)0x0;
        local_100 = (long *******)0x0;
        pppplStack_f8 = (long ****)0x0;
        (*(code *)pppplVar19)(local_e0);
      }
    }
  }
  return;
}


