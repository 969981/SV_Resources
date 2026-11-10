/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01de0ff0; name: FUN_01de0ff0
 */


undefined8 FUN_01de0ff0(long param_1,undefined4 param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  
  if (*(char *)(param_1 + 0x1714) == '\0') {
LAB_01de1470:
    uVar7 = 1;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x68);
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar10 = *(short *)(lVar9 + 0x1a);
LAB_01de103c:
      sVar2 = *psVar1;
      if (sVar2 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01de1060;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01de1060:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x01de1068;
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 != 0) {
        iVar6 = FUN_014e94fc(param_1,0,param_2,0);
        bVar5 = false;
        if (iVar6 != 1) {
          iVar6 = FUN_014e94fc(param_1,0,param_2,1);
          bVar5 = false;
          if (iVar6 != 1) {
            iVar6 = FUN_014e94fc(param_1,0,param_2,2);
            bVar5 = false;
            if (iVar6 != 1) {
              iVar6 = FUN_014e94fc(param_1,0,param_2,3);
              bVar5 = false;
              if (iVar6 != 1) {
                iVar6 = FUN_014e94fc(param_1,0,param_2,4);
                bVar5 = false;
                if (iVar6 != 1) {
                  iVar6 = FUN_014e94fc(param_1,0,param_2,5);
                  bVar5 = false;
                  if (iVar6 != 1) {
                    iVar6 = FUN_014e94fc(param_1,0,param_2,6);
                    bVar5 = false;
                    if (iVar6 != 1) {
                      iVar6 = FUN_014e94fc(param_1,0,param_2,7);
                      bVar5 = false;
                      if (iVar6 != 1) {
                        iVar6 = FUN_014e94fc(param_1,0,param_2,8);
                        bVar5 = false;
                        if (iVar6 != 1) {
                          iVar6 = FUN_014e94fc(param_1,0,param_2,9);
                          bVar5 = false;
                          if (iVar6 != 1) {
                            iVar6 = FUN_014e94fc(param_1,0,param_2,10);
                            bVar5 = false;
                            if (iVar6 != 1) {
                              iVar6 = FUN_014e94fc(param_1,0,param_2,0xb);
                              bVar5 = false;
                              if (iVar6 != 1) {
                                iVar6 = FUN_014e94fc(param_1,0,param_2,0xc);
                                bVar5 = false;
                                if (iVar6 != 1) {
                                  iVar6 = FUN_014e94fc(param_1,0,param_2,0xd);
                                  bVar5 = false;
                                  if (iVar6 != 1) {
                                    iVar6 = FUN_014e94fc(param_1,0,param_2,0xe);
                                    bVar5 = false;
                                    if (iVar6 != 1) {
                                      iVar6 = FUN_014e94fc(param_1,0,param_2,0xf);
                                      bVar5 = false;
                                      if (iVar6 != 1) {
                                        iVar6 = FUN_014e94fc(param_1,0,param_2,0x10);
                                        bVar5 = false;
                                        if (iVar6 != 1) {
                                          iVar6 = FUN_014e94fc(param_1,0,param_2,0x11);
                                          bVar5 = false;
                                          if (iVar6 != 1) {
                                            iVar6 = FUN_014e94fc(param_1,0,param_2,0x12);
                                            bVar5 = false;
                                            if (iVar6 != 1) {
                                              iVar6 = FUN_014e94fc(param_1,0,param_2,0x13);
                                              bVar5 = false;
                                              if (iVar6 != 1) {
                                                iVar6 = FUN_014e94fc(param_1,0,param_2,0x14);
                                                bVar5 = false;
                                                if (iVar6 != 1) {
                                                  iVar6 = FUN_014e94fc(param_1,0,param_2,0x15);
                                                  bVar5 = false;
                                                  if (iVar6 != 1) {
                                                    iVar6 = FUN_014e94fc(param_1,0,param_2,0x16);
                                                    bVar5 = false;
                                                    if (iVar6 != 1) {
                                                      iVar6 = FUN_014e94fc(param_1,0,param_2,0x17);
                                                      bVar5 = false;
                                                      if (iVar6 != 1) {
                                                        iVar6 = FUN_014e94fc(param_1,0,param_2,0x18)
                                                        ;
                                                        bVar5 = false;
                                                        if (iVar6 != 1) {
                                                          iVar6 = FUN_014e94fc(param_1,0,param_2,
                                                                               0x19);
                                                          bVar5 = false;
                                                          if (iVar6 != 1) {
                                                            iVar6 = FUN_014e94fc(param_1,0,param_2,
                                                                                 0x1a);
                                                            bVar5 = false;
                                                            if (iVar6 != 1) {
                                                              iVar6 = FUN_014e94fc(param_1,0,param_2
                                                                                   ,0x1b);
                                                              bVar5 = false;
                                                              if (iVar6 != 1) {
                                                                iVar6 = FUN_014e94fc(param_1,0,
                                                                                     param_2,0x1c);
                                                                bVar5 = false;
                                                                if (iVar6 != 1) {
                                                                  iVar6 = FUN_014e94fc(param_1,0,
                                                                                       param_2,0x1d)
                                                                  ;
                                                                  bVar5 = iVar6 != 1;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        lVar8 = *(long *)(lVar9 + 8);
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 != 1) {
          if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          if (bVar5) goto LAB_01de1014;
          goto LAB_01de1470;
        }
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
        if (!bVar5) goto LAB_01de1470;
      }
    }
LAB_01de1014:
    uVar7 = 0;
  }
  return uVar7;
code_r0x01de1068:
  sVar10 = sVar2;
  if (sVar2 == 0) goto LAB_01de1014;
  goto LAB_01de103c;
}


