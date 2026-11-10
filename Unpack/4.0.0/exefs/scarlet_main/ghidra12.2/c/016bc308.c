/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016bc308; name: FUN_016bc308
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016bc308(long *param_1,long param_2,undefined8 param_3,long *param_4,ulong param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  long lVar19;
  undefined8 *puVar20;
  int *piVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  long *plVar26;
  long lVar27;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  int local_4c [3];
  
  (*DAT_04859f60)(&local_68,&DAT_04859f80);
  plVar15 = (long *)FUN_00c7f744(local_68[10],param_3);
  lVar19 = *plVar15;
  *param_1 = lVar19;
  if (lVar19 == 0) {
LAB_016bc388:
    if (*param_4 == 0) {
      FUN_012710b8(&local_60,local_68,param_3);
    }
    else {
      FUN_013442d4(&local_60,*param_4,param_3);
    }
    lVar19 = CONCAT71(uStack_5f,local_60);
    *param_1 = lVar19;
LAB_016bc3a4:
    *(undefined1 *)(lVar19 + 0x288) = 1;
    lVar27 = *param_1;
    *(undefined4 *)(lVar27 + 0x1e0) = 1;
    FUN_00d4a7f4(lVar27);
    uVar13 = _UNK_03cabe68;
    uVar12 = _DAT_03cabe60;
    uVar9 = _UNK_03cabe58;
    uVar8 = _DAT_03cabe50;
    uVar11 = DAT_03cab628;
    uVar10 = DAT_03cab620;
    uVar7 = _UNK_03caa5b8;
    uVar6 = _DAT_03caa5b0;
    puVar20 = *(undefined8 **)(lVar27 + 0x1e8);
    puVar20[1] = DAT_03cab628;
    *puVar20 = uVar10;
    puVar20[3] = uVar13;
    puVar20[2] = uVar12;
    puVar20[5] = uVar7;
    puVar20[4] = uVar6;
    puVar20[7] = uVar9;
    puVar20[6] = uVar8;
    uVar9 = _UNK_03caade8;
    uVar8 = _DAT_03caade0;
    lVar19 = *(long *)(lVar27 + 0x1e8);
    *(undefined8 *)(lVar19 + 0x48) = uVar11;
    *(undefined8 *)(lVar19 + 0x40) = uVar10;
    *(undefined8 *)(lVar19 + 0x58) = uVar13;
    *(undefined8 *)(lVar19 + 0x50) = uVar12;
    *(undefined8 *)(lVar19 + 0x68) = uVar7;
    *(undefined8 *)(lVar19 + 0x60) = uVar6;
    *(undefined8 *)(lVar19 + 0x78) = uVar9;
    *(undefined8 *)(lVar19 + 0x70) = uVar8;
    uVar9 = _DAT_03d684d0;
    uVar8 = _DAT_03d684c0;
    uVar7 = _DAT_03d684b0;
    uVar6 = _DAT_03d684a0;
    *(undefined1 *)(*(long *)(lVar27 + 0x1e8) + 0x180) = 1;
    FUN_00d4a568(uVar6,uVar7,uVar8,uVar9,lVar27);
    plVar15 = *(long **)(lVar27 + 0x58);
    if (plVar15 == (long *)0x0) {
      local_60 = 0;
      FUN_00d8219c(0,0,param_2 + 0x60,0xffffffff,&local_60);
    }
    else {
      plVar26 = plVar15 + 5;
      do {
        lVar19 = *plVar26;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *(int *)plVar26 = (int)lVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar19 == -1) goto LAB_016bd16c;
      local_60 = 0;
      FUN_00d8219c(plVar15,0,param_2 + 0x60,0xffffffff,&local_60);
      do {
        lVar19 = *plVar26;
        iVar1 = (int)lVar19 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *(int *)plVar26 = iVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
      else if ((int)lVar19 == 0) goto LAB_016bcc54;
    }
    lVar19 = *(long *)(*(long *)(DAT_0485a0d8 + 0x38) + 0x40);
    uVar22 = *(ulong *)(lVar19 + 0x110);
    if (uVar22 != 0) {
      uVar23 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        uVar24 = uVar22 - 1 & 0x5e1771f463b934e6;
      }
      else if (uVar22 < 0x5e1771f463b934e7) {
        uVar24 = 0;
        if (uVar22 != 0) {
          uVar24 = 0x5e1771f463b934e6 / uVar22;
        }
        uVar24 = 0x5e1771f463b934e6 - uVar24 * uVar22;
      }
      else {
        uVar24 = 0x5e1771f463b934e6;
      }
      plVar15 = *(long **)(*(long *)(lVar19 + 0x108) + uVar24 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if (plVar15[1] == 0x5e1771f463b934e6) {
              if (plVar15[2] == 0x5e1771f463b934e6) goto LAB_016bc59c;
            }
            else if ((plVar15[1] & uVar22 - 1) != uVar24) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar23 = plVar15[1];
            if (uVar23 == 0x5e1771f463b934e6) {
              if (plVar15[2] == 0x5e1771f463b934e6) goto LAB_016bc59c;
            }
            else {
              if (uVar22 <= uVar23) {
                uVar5 = 0;
                if (uVar22 != 0) {
                  uVar5 = uVar23 / uVar22;
                }
                uVar23 = uVar23 - uVar5 * uVar22;
              }
              if (uVar23 != uVar24) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    local_70 = (long *)0x0;
    goto LAB_016bc5c4;
  }
  piVar21 = (int *)(lVar19 + 0x28);
  do {
    iVar1 = *piVar21;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar21,0x10);
    if (bVar3) {
      *piVar21 = iVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 != -1) {
    lVar19 = *param_1;
    if (lVar19 == 0) goto LAB_016bc388;
    goto LAB_016bc3a4;
  }
LAB_016bd16c:
  pcVar18 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
  ;
LAB_016bd18c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",pcVar18,0x53,"Reference counter overflows.");
LAB_016bce88:
  piVar21 = piVar21 + 8;
  if (_DAT_00000118 == piVar21) goto LAB_016bce94;
  goto LAB_016bce70;
LAB_016bc8cc:
  piVar21 = piVar21 + 8;
  if ((int *)plVar26[0x23] == piVar21) goto LAB_016bc8d8;
  goto LAB_016bc8b4;
LAB_016bceec:
  piVar21 = piVar21 + 8;
  if (_DAT_00000118 == piVar21) goto LAB_016bcef8;
  goto LAB_016bced4;
LAB_016bc9b0:
  piVar21 = piVar21 + 8;
  if ((int *)plVar15[0x23] == piVar21) goto LAB_016bc9bc;
  goto LAB_016bc998;
LAB_016bcf54:
  piVar21 = piVar21 + 8;
  if (_DAT_00000118 == piVar21) goto LAB_016bcf60;
  goto LAB_016bcf3c;
LAB_016bca98:
  piVar21 = piVar21 + 8;
  if ((int *)plVar15[0x23] == piVar21) goto LAB_016bcaa4;
  goto LAB_016bca80;
LAB_016bcfbc:
  piVar21 = piVar21 + 8;
  if (_DAT_00000118 == piVar21) goto LAB_016bcfc8;
  goto LAB_016bcfa4;
LAB_016bcb80:
  piVar21 = piVar21 + 8;
  if ((int *)plVar15[0x23] == piVar21) goto LAB_016bcb8c;
  goto LAB_016bcb68;
LAB_016bc59c:
  local_70 = (long *)plVar15[6];
  if (local_70 != (long *)0x0) {
    plVar15 = local_70 + 5;
    do {
      lVar19 = *plVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = (int)lVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar19 == -1) {
      pcVar18 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      goto LAB_016bd18c;
    }
  }
LAB_016bc5c4:
  plVar15 = *(long **)(*param_1 + 0x58);
  if (plVar15 == (long *)0x0) {
    local_60 = 0;
    FUN_00d829fc(0,&local_70,&local_60);
  }
  else {
    plVar26 = plVar15 + 5;
    do {
      lVar19 = *plVar26;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *(int *)plVar26 = (int)lVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar19 == -1) goto LAB_016bd16c;
    local_60 = 0;
    FUN_00d829fc(plVar15,&local_70,&local_60);
    do {
      lVar19 = *plVar26;
      iVar1 = (int)lVar19 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *(int *)plVar26 = iVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    else if ((int)lVar19 == 0) goto LAB_016bcc54;
  }
  plVar15 = *(long **)(*param_1 + 0x58);
  if (plVar15 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar26 = plVar15 + 5;
    do {
      lVar19 = *plVar26;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *(int *)plVar26 = (int)lVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar19 == -1) goto LAB_016bd16c;
    FUN_00d819c8(0,plVar15,0);
    do {
      lVar19 = *plVar26;
      iVar1 = (int)lVar19 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *(int *)plVar26 = iVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    else if ((int)lVar19 == 0) goto LAB_016bcc54;
  }
  plVar15 = *(long **)(*param_1 + 0x58);
  if (plVar15 == (long *)0x0) {
    FUN_015b3280(0,0,1,1,1,1);
  }
  else {
    plVar26 = plVar15 + 5;
    do {
      lVar19 = *plVar26;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *(int *)plVar26 = (int)lVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar19 == -1) goto LAB_016bd16c;
    FUN_015b3280(plVar15,0,1,1,1,1);
    do {
      lVar19 = *plVar26;
      iVar1 = (int)lVar19 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *(int *)plVar26 = iVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    else if ((int)lVar19 == 0) goto LAB_016bcc54;
  }
  uVar22 = *(ulong *)(param_2 + 0x68);
  uVar23 = *(ulong *)(param_2 + 0x70);
  plVar15 = *(long **)(*param_1 + 0x58);
  if (plVar15 == (long *)0x0) {
    FUN_00d80894(0,0,(float)uVar22,(float)uVar23,0,0);
  }
  else {
    plVar26 = plVar15 + 5;
    do {
      lVar19 = *plVar26;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *(int *)plVar26 = (int)lVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar19 == -1) goto LAB_016bd16c;
    FUN_00d80894(0,0,(float)uVar22,(float)uVar23,plVar15,0);
    do {
      lVar19 = *plVar26;
      iVar1 = (int)lVar19 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *(int *)plVar26 = iVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    else if ((int)lVar19 == 0) goto LAB_016bcc54;
  }
  lVar19 = *param_1;
  FUN_00d8037c(lVar19,0,0,0,uVar22 & 0xffffffff,uVar23 & 0xffffffff);
  FUN_0151a8cc(&local_60,lVar19,0x1f);
  plVar15 = (long *)CONCAT71(uStack_5f,local_60);
  if (plVar15 != (long *)0x0) {
    plVar26 = plVar15 + 5;
    do {
      lVar19 = *plVar26;
      iVar1 = (int)lVar19 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *(int *)plVar26 = iVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar19 == 0) goto LAB_016bcc54;
  }
  if ((param_5 & 1) == 0) {
    uVar22 = (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,0);
    uVar14 = (**(code **)(*DAT_0485a020 + 0x78))();
    FUN_01343f00(*param_1,uVar22 >> 0x20,uVar14);
    local_78 = DAT_04859fe8;
    if (DAT_04859fe8 != (long *)0x0) {
      plVar15 = DAT_04859fe8 + 5;
      do {
        lVar19 = *plVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *(int *)plVar15 = (int)lVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar19 != -1) goto LAB_016bc844;
LAB_016bd1b8:
      pcVar18 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      goto LAB_016bd18c;
    }
LAB_016bc844:
    plVar15 = DAT_04859ff0;
    local_80 = DAT_04859ff0;
    if (DAT_04859ff0 != (long *)0x0) {
      plVar26 = DAT_04859ff0 + 5;
      do {
        lVar19 = *plVar26;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *(int *)plVar26 = (int)lVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar19 == -1) goto LAB_016bd1b8;
    }
    iVar25 = (int)(uVar22 >> 0x20);
    iVar1 = iVar25 + 0xc;
    plVar26 = *(long **)(*param_1 + 0x58);
    if (plVar26 == (long *)0x0) {
      local_4c[1] = 2;
      local_60 = 0;
      piVar21 = _DAT_00000110;
      if (_DAT_00000110 != _DAT_00000118) {
LAB_016bce70:
        if ((*piVar21 != 2) || (piVar21[1] != iVar1)) goto LAB_016bce88;
        if (plVar15 != (long *)0x0) {
          plVar26 = plVar15 + 5;
          do {
            lVar19 = *plVar26;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar3) {
              *(int *)plVar26 = (int)lVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_4c[0] = iVar1;
          if ((int)lVar19 == -1) goto LAB_016bd194;
        }
        plVar26 = *(long **)(piVar21 + 2);
        *(long **)(piVar21 + 2) = plVar15;
        local_4c[0] = iVar1;
        if (plVar26 == (long *)0x0) goto LAB_016bc958;
        plVar15 = plVar26 + 5;
        do {
          lVar19 = *plVar15;
          iVar4 = (int)lVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *(int *)plVar15 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          lVar19 = *plVar26;
          goto LAB_016bcd18;
        }
        if ((int)lVar19 != 0) goto LAB_016bc958;
        goto LAB_016bd120;
      }
LAB_016bce94:
      local_4c[0] = iVar1;
      FUN_00d11148(0x110,local_4c + 1,local_4c,&local_80,&local_60);
    }
    else {
      plVar17 = plVar26 + 5;
      do {
        lVar19 = *plVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *(int *)plVar17 = (int)lVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar19 == -1) goto LAB_016bd16c;
      local_4c[1] = 2;
      local_60 = 0;
      piVar21 = (int *)plVar26[0x22];
      if (piVar21 != (int *)plVar26[0x23]) {
LAB_016bc8b4:
        if ((*piVar21 != 2) || (piVar21[1] != iVar1)) goto LAB_016bc8cc;
        if (plVar15 != (long *)0x0) {
          plVar16 = plVar15 + 5;
          do {
            lVar19 = *plVar16;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar3) {
              *(int *)plVar16 = (int)lVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_4c[0] = iVar1;
          if ((int)lVar19 == -1) goto LAB_016bd194;
        }
        plVar16 = *(long **)(piVar21 + 2);
        *(long **)(piVar21 + 2) = plVar15;
        local_4c[0] = iVar1;
        if (plVar16 == (long *)0x0) goto LAB_016bc940;
        plVar15 = plVar16 + 5;
        do {
          lVar19 = *plVar15;
          iVar4 = (int)lVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *(int *)plVar15 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar16 + 0x10))();
          goto LAB_016bc940;
        }
        if ((int)lVar19 != 0) goto LAB_016bc940;
        goto LAB_016bd120;
      }
LAB_016bc8d8:
      local_4c[0] = iVar1;
      FUN_00d11148(plVar26 + 0x22,local_4c + 1,local_4c,&local_80,&local_60);
LAB_016bc940:
      do {
        lVar19 = *plVar17;
        iVar1 = (int)lVar19 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *(int *)plVar17 = iVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 == 0) {
        lVar19 = *plVar26;
LAB_016bcd18:
        (**(code **)(lVar19 + 0x10))(plVar26);
      }
      else if ((int)lVar19 == 0) goto LAB_016bcc54;
    }
LAB_016bc958:
    plVar15 = *(long **)(*param_1 + 0x58);
    if (plVar15 == (long *)0x0) {
      local_4c[1] = 2;
      local_60 = 0;
      piVar21 = _DAT_00000110;
      if (_DAT_00000110 != _DAT_00000118) {
LAB_016bced4:
        if ((*piVar21 != 2) || (piVar21[1] != iVar25)) goto LAB_016bceec;
        if (local_80 != (long *)0x0) {
          plVar15 = local_80 + 5;
          do {
            lVar19 = *plVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *(int *)plVar15 = (int)lVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_4c[0] = iVar25;
          if ((int)lVar19 == -1) goto LAB_016bd194;
        }
        plVar15 = *(long **)(piVar21 + 2);
        *(long **)(piVar21 + 2) = local_80;
        local_4c[0] = iVar25;
        if (plVar15 == (long *)0x0) goto LAB_016bca3c;
        plVar26 = plVar15 + 5;
        do {
          lVar19 = *plVar26;
          iVar1 = (int)lVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar3) {
            *(int *)plVar26 = iVar1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 == 0) {
          lVar19 = *plVar15;
          goto LAB_016bcd2c;
        }
        if ((int)lVar19 != 0) goto LAB_016bca3c;
        goto LAB_016bd120;
      }
LAB_016bcef8:
      local_4c[0] = iVar25;
      FUN_00d11148(0x110,local_4c + 1,local_4c,&local_80,&local_60);
    }
    else {
      plVar26 = plVar15 + 5;
      do {
        lVar19 = *plVar26;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *(int *)plVar26 = (int)lVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar19 == -1) goto LAB_016bd16c;
      local_4c[1] = 2;
      local_60 = 0;
      piVar21 = (int *)plVar15[0x22];
      if (piVar21 != (int *)plVar15[0x23]) {
LAB_016bc998:
        if ((*piVar21 != 2) || (piVar21[1] != iVar25)) goto LAB_016bc9b0;
        if (local_80 != (long *)0x0) {
          plVar17 = local_80 + 5;
          do {
            lVar19 = *plVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar3) {
              *(int *)plVar17 = (int)lVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_4c[0] = iVar25;
          if ((int)lVar19 == -1) goto LAB_016bd194;
        }
        plVar17 = *(long **)(piVar21 + 2);
        *(long **)(piVar21 + 2) = local_80;
        local_4c[0] = iVar25;
        if (plVar17 == (long *)0x0) goto LAB_016bca24;
        plVar16 = plVar17 + 5;
        do {
          lVar19 = *plVar16;
          iVar1 = (int)lVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *(int *)plVar16 = iVar1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))();
          goto LAB_016bca24;
        }
        if ((int)lVar19 != 0) goto LAB_016bca24;
        goto LAB_016bd120;
      }
LAB_016bc9bc:
      local_4c[0] = iVar25;
      FUN_00d11148(plVar15 + 0x22,local_4c + 1,local_4c,&local_80,&local_60);
LAB_016bca24:
      do {
        lVar19 = *plVar26;
        iVar1 = (int)lVar19 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *(int *)plVar26 = iVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 == 0) {
        lVar19 = *plVar15;
LAB_016bcd2c:
        (**(code **)(lVar19 + 0x10))(plVar15);
      }
      else if ((int)lVar19 == 0) goto LAB_016bcc54;
    }
LAB_016bca3c:
    plVar15 = *(long **)(*param_1 + 0x58);
    if (plVar15 == (long *)0x0) {
      local_4c[0] = iVar25 + 0xd;
      local_4c[1] = 2;
      local_60 = 0;
      piVar21 = _DAT_00000110;
      if (_DAT_00000110 != _DAT_00000118) {
LAB_016bcf3c:
        if ((*piVar21 != 2) || (piVar21[1] != local_4c[0])) goto LAB_016bcf54;
        if (local_80 != (long *)0x0) {
          plVar15 = local_80 + 5;
          do {
            lVar19 = *plVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *(int *)plVar15 = (int)lVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar19 == -1) goto LAB_016bd194;
        }
        plVar15 = *(long **)(piVar21 + 2);
        *(long **)(piVar21 + 2) = local_80;
        if (plVar15 == (long *)0x0) goto LAB_016bcb24;
        plVar26 = plVar15 + 5;
        do {
          lVar19 = *plVar26;
          iVar1 = (int)lVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar3) {
            *(int *)plVar26 = iVar1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 == 0) {
          lVar19 = *plVar15;
          goto LAB_016bcd40;
        }
        if ((int)lVar19 != 0) goto LAB_016bcb24;
        goto LAB_016bd120;
      }
LAB_016bcf60:
      FUN_00d11148(0x110,local_4c + 1,local_4c,&local_80,&local_60);
    }
    else {
      plVar26 = plVar15 + 5;
      do {
        lVar19 = *plVar26;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *(int *)plVar26 = (int)lVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar19 == -1) goto LAB_016bd16c;
      local_4c[0] = iVar25 + 0xd;
      local_4c[1] = 2;
      local_60 = 0;
      piVar21 = (int *)plVar15[0x22];
      if (piVar21 != (int *)plVar15[0x23]) {
LAB_016bca80:
        if ((*piVar21 != 2) || (piVar21[1] != local_4c[0])) goto LAB_016bca98;
        if (local_80 != (long *)0x0) {
          plVar17 = local_80 + 5;
          do {
            lVar19 = *plVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar3) {
              *(int *)plVar17 = (int)lVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar19 == -1) goto LAB_016bd194;
        }
        plVar17 = *(long **)(piVar21 + 2);
        *(long **)(piVar21 + 2) = local_80;
        if (plVar17 == (long *)0x0) goto LAB_016bcb0c;
        plVar16 = plVar17 + 5;
        do {
          lVar19 = *plVar16;
          iVar1 = (int)lVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *(int *)plVar16 = iVar1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))();
          goto LAB_016bcb0c;
        }
        if ((int)lVar19 != 0) goto LAB_016bcb0c;
        goto LAB_016bd120;
      }
LAB_016bcaa4:
      FUN_00d11148(plVar15 + 0x22,local_4c + 1,local_4c,&local_80,&local_60);
LAB_016bcb0c:
      do {
        lVar19 = *plVar26;
        iVar1 = (int)lVar19 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *(int *)plVar26 = iVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 == 0) {
        lVar19 = *plVar15;
LAB_016bcd40:
        (**(code **)(lVar19 + 0x10))(plVar15);
      }
      else if ((int)lVar19 == 0) goto LAB_016bcc54;
    }
LAB_016bcb24:
    plVar15 = *(long **)(*param_1 + 0x58);
    if (plVar15 == (long *)0x0) {
      local_4c[0] = iVar25 + 0xb;
      local_4c[1] = 2;
      local_60 = 0;
      piVar21 = _DAT_00000110;
      if (_DAT_00000110 != _DAT_00000118) {
LAB_016bcfa4:
        if ((*piVar21 != 2) || (piVar21[1] != local_4c[0])) goto LAB_016bcfbc;
        if (local_78 != (long *)0x0) {
          plVar15 = local_78 + 5;
          do {
            lVar19 = *plVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *(int *)plVar15 = (int)lVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar19 == -1) goto LAB_016bd194;
        }
        plVar15 = *(long **)(piVar21 + 2);
        *(long **)(piVar21 + 2) = local_78;
        if (plVar15 != (long *)0x0) {
          plVar26 = plVar15 + 5;
          do {
            lVar19 = *plVar26;
            iVar1 = (int)lVar19 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar3) {
              *(int *)plVar26 = iVar1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 != 0) {
            if ((int)lVar19 != 0) goto LAB_016bcc0c;
            goto LAB_016bd120;
          }
          lVar19 = *plVar15;
          goto LAB_016bcd54;
        }
        goto LAB_016bcc0c;
      }
LAB_016bcfc8:
      FUN_00d11148(0x110,local_4c + 1,local_4c,&local_78,&local_60);
    }
    else {
      plVar26 = plVar15 + 5;
      do {
        lVar19 = *plVar26;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *(int *)plVar26 = (int)lVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar19 == -1) goto LAB_016bd16c;
      local_4c[0] = iVar25 + 0xb;
      local_4c[1] = 2;
      local_60 = 0;
      piVar21 = (int *)plVar15[0x22];
      if (piVar21 != (int *)plVar15[0x23]) {
LAB_016bcb68:
        if ((*piVar21 != 2) || (piVar21[1] != local_4c[0])) goto LAB_016bcb80;
        if (local_78 != (long *)0x0) {
          plVar17 = local_78 + 5;
          do {
            lVar19 = *plVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar3) {
              *(int *)plVar17 = (int)lVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar19 == -1) {
LAB_016bd194:
            local_4c[1] = 2;
            local_60 = 0;
            pcVar18 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
            ;
            goto LAB_016bd18c;
          }
        }
        plVar17 = *(long **)(piVar21 + 2);
        *(long **)(piVar21 + 2) = local_78;
        if (plVar17 != (long *)0x0) {
          plVar16 = plVar17 + 5;
          do {
            lVar19 = *plVar16;
            iVar1 = (int)lVar19 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar3) {
              *(int *)plVar16 = iVar1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))();
          }
          else if ((int)lVar19 == 0) {
LAB_016bd120:
            local_4c[1] = 2;
            local_60 = 0;
            pcVar18 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
            ;
            goto LAB_016bcc74;
          }
        }
        goto LAB_016bcbf4;
      }
LAB_016bcb8c:
      FUN_00d11148(plVar15 + 0x22,local_4c + 1,local_4c,&local_78,&local_60);
LAB_016bcbf4:
      do {
        lVar19 = *plVar26;
        iVar1 = (int)lVar19 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *(int *)plVar26 = iVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 == 0) {
        lVar19 = *plVar15;
LAB_016bcd54:
        (**(code **)(lVar19 + 0x10))(plVar15);
      }
      else if ((int)lVar19 == 0) goto LAB_016bcc54;
    }
LAB_016bcc0c:
    if (local_80 != (long *)0x0) {
      plVar15 = local_80 + 5;
      do {
        lVar19 = *plVar15;
        iVar1 = (int)lVar19 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *(int *)plVar15 = iVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
      else if ((int)lVar19 == 0) goto LAB_016bcc54;
    }
    if (local_78 != (long *)0x0) {
      plVar15 = local_78 + 5;
      do {
        lVar19 = *plVar15;
        iVar1 = (int)lVar19 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *(int *)plVar15 = iVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
      else if ((int)lVar19 == 0) goto LAB_016bcc54;
    }
  }
  if (local_70 != (long *)0x0) {
    plVar15 = local_70 + 5;
    do {
      lVar19 = *plVar15;
      iVar1 = (int)lVar19 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = iVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar19 == 0) goto LAB_016bcc54;
  }
  if (local_68 != (long *)0x0) {
    plVar15 = local_68 + 5;
    do {
      lVar19 = *plVar15;
      iVar1 = (int)lVar19 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = iVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar19 == 0) {
LAB_016bcc54:
      pcVar18 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_016bcc74:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar18,0x58,"Reference counter underflows.");
    }
  }
  return;
}


