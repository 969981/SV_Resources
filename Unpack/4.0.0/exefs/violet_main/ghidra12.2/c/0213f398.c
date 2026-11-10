/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0213f398; name: FUN_0213f398
 */


void FUN_0213f398(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  *param_1 = &PTR_FUN_04595df8;
  lVar12 = 0;
  param_1[4] = &PTR_LAB_04595e30;
  do {
    FUN_0110a1e4((long)(param_1 + 0x1be) + lVar12,&DAT_00003010 + *(long *)(param_1[6] + 0x30));
    lVar12 = lVar12 + 0x1c;
  } while (lVar12 != 0xe00);
  if (param_1[0x38d] != 0) {
    FUN_0110a1ec(param_1 + 0x388,&DAT_00003010 + *(long *)(param_1[6] + 0x30));
    FUN_0145e148(param_1 + 0x38d,0);
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  FUN_0213ff7c(*(undefined8 *)(param_1[0x1b2] + 200),&local_c0);
  pcVar9 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar9)(auStack_a0);
  }
  if (param_1[0xb] != 0) {
    FUN_02140068(param_1[0xb],&LAB_01055788,param_1);
    FUN_02140074(param_1[0xb],&LAB_02140280,param_1);
  }
  FUN_01d89bd0(param_1 + 0x392);
  FUN_01d89bd0(param_1 + 0x391);
  FUN_0145e148(param_1 + 0x38d,0);
  FUN_0110a1d8(param_1 + 0x388);
  FUN_0110a1dc((long)param_1 + 0x1bd4);
  FUN_0110a1dc(param_1 + 0x377);
  FUN_0110a1dc((long)param_1 + 0x1b9c);
  FUN_0110a1dc(param_1 + 0x370);
  FUN_0110a1dc((long)param_1 + 0x1b64);
  FUN_0110a1dc(param_1 + 0x369);
  FUN_0110a1dc((long)param_1 + 0x1b2c);
  FUN_0110a1dc(param_1 + 0x362);
  FUN_0110a1dc((long)param_1 + 0x1af4);
  FUN_0110a1dc(param_1 + 0x35b);
  FUN_0110a1dc((long)param_1 + 0x1abc);
  FUN_0110a1dc(param_1 + 0x354);
  FUN_0110a1dc((long)param_1 + 0x1a84);
  FUN_0110a1dc(param_1 + 0x34d);
  FUN_0110a1dc((long)param_1 + 0x1a4c);
  FUN_0110a1dc(param_1 + 0x346);
  FUN_0110a1dc((long)param_1 + 0x1a14);
  FUN_0110a1dc(param_1 + 0x33f);
  FUN_0110a1dc((long)param_1 + 0x19dc);
  FUN_0110a1dc(param_1 + 0x338);
  FUN_0110a1dc((long)param_1 + 0x19a4);
  FUN_0110a1dc(param_1 + 0x331);
  FUN_0110a1dc((long)param_1 + 0x196c);
  FUN_0110a1dc(param_1 + 0x32a);
  FUN_0110a1dc((long)param_1 + 0x1934);
  FUN_0110a1dc(param_1 + 0x323);
  FUN_0110a1dc((long)param_1 + 0x18fc);
  FUN_0110a1dc(param_1 + 0x31c);
  FUN_0110a1dc((long)param_1 + 0x18c4);
  FUN_0110a1dc(param_1 + 0x315);
  FUN_0110a1dc((long)param_1 + 0x188c);
  FUN_0110a1dc(param_1 + 0x30e);
  FUN_0110a1dc((long)param_1 + 0x1854);
  FUN_0110a1dc(param_1 + 0x307);
  FUN_0110a1dc((long)param_1 + 0x181c);
  FUN_0110a1dc(param_1 + 0x300);
  FUN_0110a1dc((long)param_1 + 0x17e4);
  FUN_0110a1dc(param_1 + 0x2f9);
  FUN_0110a1dc((long)param_1 + 0x17ac);
  FUN_0110a1dc(param_1 + 0x2f2);
  FUN_0110a1dc((long)param_1 + 0x1774);
  FUN_0110a1dc(param_1 + 0x2eb);
  FUN_0110a1dc((long)param_1 + 0x173c);
  FUN_0110a1dc(param_1 + 0x2e4);
  FUN_0110a1dc((long)param_1 + 0x1704);
  FUN_0110a1dc(param_1 + 0x2dd);
  FUN_0110a1dc((long)param_1 + 0x16cc);
  FUN_0110a1dc(param_1 + 0x2d6);
  FUN_0110a1dc((long)param_1 + 0x1694);
  FUN_0110a1dc(param_1 + 0x2cf);
  FUN_0110a1dc((long)param_1 + 0x165c);
  FUN_0110a1dc(param_1 + 0x2c8);
  FUN_0110a1dc((long)param_1 + 0x1624);
  FUN_0110a1dc(param_1 + 0x2c1);
  FUN_0110a1dc((long)param_1 + 0x15ec);
  FUN_0110a1dc(param_1 + 0x2ba);
  FUN_0110a1dc((long)param_1 + 0x15b4);
  FUN_0110a1dc(param_1 + 0x2b3);
  FUN_0110a1dc((long)param_1 + 0x157c);
  FUN_0110a1dc(param_1 + 0x2ac);
  FUN_0110a1dc((long)param_1 + 0x1544);
  FUN_0110a1dc(param_1 + 0x2a5);
  FUN_0110a1dc((long)param_1 + 0x150c);
  FUN_0110a1dc(param_1 + 0x29e);
  FUN_0110a1dc((long)param_1 + 0x14d4);
  FUN_0110a1dc(param_1 + 0x297);
  FUN_0110a1dc((long)param_1 + 0x149c);
  FUN_0110a1dc(param_1 + 0x290);
  FUN_0110a1dc((long)param_1 + 0x1464);
  FUN_0110a1dc(param_1 + 0x289);
  FUN_0110a1dc((long)param_1 + 0x142c);
  FUN_0110a1dc(param_1 + 0x282);
  FUN_0110a1dc((long)param_1 + 0x13f4);
  FUN_0110a1dc(param_1 + 0x27b);
  FUN_0110a1dc((long)param_1 + 0x13bc);
  FUN_0110a1dc(param_1 + 0x274);
  FUN_0110a1dc((long)param_1 + 0x1384);
  FUN_0110a1dc(param_1 + 0x26d);
  FUN_0110a1dc((long)param_1 + 0x134c);
  FUN_0110a1dc(param_1 + 0x266);
  FUN_0110a1dc((long)param_1 + 0x1314);
  FUN_0110a1dc(param_1 + 0x25f);
  FUN_0110a1dc((long)param_1 + 0x12dc);
  FUN_0110a1dc(param_1 + 600);
  FUN_0110a1dc((long)param_1 + 0x12a4);
  FUN_0110a1dc(param_1 + 0x251);
  FUN_0110a1dc((long)param_1 + 0x126c);
  FUN_0110a1dc(param_1 + 0x24a);
  FUN_0110a1dc((long)param_1 + 0x1234);
  FUN_0110a1dc(param_1 + 0x243);
  FUN_0110a1dc((long)param_1 + 0x11fc);
  FUN_0110a1dc(param_1 + 0x23c);
  FUN_0110a1dc((long)param_1 + 0x11c4);
  FUN_0110a1dc(param_1 + 0x235);
  FUN_0110a1dc((long)param_1 + 0x118c);
  FUN_0110a1dc(param_1 + 0x22e);
  FUN_0110a1dc((long)param_1 + 0x1154);
  FUN_0110a1dc(param_1 + 0x227);
  FUN_0110a1dc((long)param_1 + 0x111c);
  FUN_0110a1dc(param_1 + 0x220);
  FUN_0110a1dc((long)param_1 + 0x10e4);
  FUN_0110a1dc(param_1 + 0x219);
  FUN_0110a1dc((long)param_1 + 0x10ac);
  FUN_0110a1dc(param_1 + 0x212);
  FUN_0110a1dc((long)param_1 + 0x1074);
  FUN_0110a1dc(param_1 + 0x20b);
  FUN_0110a1dc((long)param_1 + 0x103c);
  FUN_0110a1dc(param_1 + 0x204);
  FUN_0110a1dc((long)param_1 + 0x1004);
  FUN_0110a1dc(param_1 + 0x1fd);
  FUN_0110a1dc((long)param_1 + 0xfcc);
  FUN_0110a1dc(param_1 + 0x1f6);
  FUN_0110a1dc((long)param_1 + 0xf94);
  FUN_0110a1dc(param_1 + 0x1ef);
  FUN_0110a1dc((long)param_1 + 0xf5c);
  FUN_0110a1dc(param_1 + 0x1e8);
  FUN_0110a1dc((long)param_1 + 0xf24);
  FUN_0110a1dc(param_1 + 0x1e1);
  FUN_0110a1dc((long)param_1 + 0xeec);
  FUN_0110a1dc(param_1 + 0x1da);
  FUN_0110a1dc((long)param_1 + 0xeb4);
  FUN_0110a1dc(param_1 + 0x1d3);
  FUN_0110a1dc((long)param_1 + 0xe7c);
  FUN_0110a1dc(param_1 + 0x1cc);
  FUN_0110a1dc((long)param_1 + 0xe44);
  FUN_0110a1dc(param_1 + 0x1c5);
  FUN_0110a1dc((long)param_1 + 0xe0c);
  FUN_0110a1dc(param_1 + 0x1be);
  FUN_02140080(param_1 + 0x1b4);
  plVar6 = (long *)param_1[0x1b2];
  if (plVar6 != (long *)0x0) {
    plVar11 = plVar6 + 5;
    do {
      lVar12 = *plVar11;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_0213ff54;
  }
  if ((long *)param_1[0x1b1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1b1] + 0x20))();
  }
  plVar6 = (long *)param_1[0x1ad];
  if (plVar6 != (long *)0x0) {
    lVar12 = plVar6[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0213ff2c;
  }
  if ((long *)param_1[0x1ac] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1ac] + 0x20))();
  }
  plVar6 = (long *)param_1[0x1a8];
  if (plVar6 != (long *)0x0) {
    lVar12 = plVar6[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0213ff2c;
  }
  nn::os::FinalizeSemaphore((SemaphoreType *)(param_1 + 0x199));
  FUN_00dee86c(param_1 + 0x192,param_1[0x193]);
  nn::os::FinalizeSemaphore((SemaphoreType *)(param_1 + 0x18d));
  FUN_02140150(param_1 + 0x180);
  plVar6 = (long *)param_1[0x17f];
  if (plVar6 != (long *)0x0) {
    lVar12 = plVar6[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0213ff2c;
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x17d));
  puVar13 = (undefined8 *)param_1[0x175];
  if (puVar13 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)param_1[0x176];
    if (puVar10 == puVar13) {
      puVar10 = puVar13;
    }
    else {
      pcVar9 = (code *)puVar10[-0xf];
      if (pcVar9 != (code *)0x0) {
        puVar10[-0xe] = 0;
        puVar10[-0xd] = 0;
        puVar10[-0x10] = 0;
        puVar10[-0xf] = 0;
        (*pcVar9)(puVar10 + -0xc);
      }
      if (puVar10 + -0x10 != puVar13) {
        pcVar9 = (code *)puVar10[-0x1f];
        if (pcVar9 != (code *)0x0) {
          puVar10[-0x1e] = 0;
          puVar10[-0x1d] = 0;
          puVar10[-0x20] = 0;
          puVar10[-0x1f] = 0;
          (*pcVar9)(puVar10 + -0x1c);
        }
        if (puVar10 + -0x20 != puVar13) {
          pcVar9 = (code *)puVar10[-0x2f];
          if (pcVar9 != (code *)0x0) {
            puVar10[-0x2e] = 0;
            puVar10[-0x2d] = 0;
            puVar10[-0x30] = 0;
            puVar10[-0x2f] = 0;
            (*pcVar9)(puVar10 + -0x2c);
          }
          if (puVar10 + -0x30 != puVar13) {
            pcVar9 = (code *)puVar10[-0x3f];
            if (pcVar9 != (code *)0x0) {
              puVar10[-0x3e] = 0;
              puVar10[-0x3d] = 0;
              puVar10[-0x40] = 0;
              puVar10[-0x3f] = 0;
              (*pcVar9)(puVar10 + -0x3c);
            }
            if (puVar10 + -0x40 != puVar13) {
              pcVar9 = (code *)puVar10[-0x4f];
              if (pcVar9 != (code *)0x0) {
                puVar10[-0x4e] = 0;
                puVar10[-0x4d] = 0;
                puVar10[-0x50] = 0;
                puVar10[-0x4f] = 0;
                (*pcVar9)(puVar10 + -0x4c);
              }
              if (puVar10 + -0x50 != puVar13) {
                do {
                  pcVar9 = (code *)puVar10[-0x5f];
                  if (pcVar9 != (code *)0x0) {
                    puVar10[-0x5e] = 0;
                    puVar10[-0x5d] = 0;
                    puVar10[-0x60] = 0;
                    puVar10[-0x5f] = 0;
                    (*pcVar9)(puVar10 + -0x5c);
                  }
                  puVar10 = puVar10 + -0x10;
                } while (puVar13 + 0x50 != puVar10);
              }
            }
          }
        }
      }
      puVar10 = (undefined8 *)param_1[0x175];
    }
    lVar12 = param_1[0x177];
    param_1[0x176] = puVar13;
    plVar6 = (long *)param_1[0x178];
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar10,lVar12 - (long)puVar10,0x10);
    }
    else {
      FUN_00c48fe8(plVar6,puVar10,lVar12 - (long)puVar10,0x10);
    }
  }
  plVar6 = (long *)param_1[0x174];
  if (plVar6 != (long *)0x0) {
    lVar12 = plVar6[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_0213ff2c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x172));
  FUN_02140190(param_1 + 0x164);
  plVar6 = (long *)param_1[0x15d];
  if (plVar6 != (long *)0x0) {
    plVar14 = (long *)param_1[0x15e];
    plVar11 = (long *)*plVar6;
    uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar6,0x28,8);
    }
    else {
      FUN_00c48fe8(plVar14,plVar6,0x28,8);
    }
    while (plVar11 != (long *)0x0) {
      plVar6 = (long *)param_1[0x15e];
      plVar14 = (long *)*plVar11;
      uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar11,0x28,8);
        plVar11 = plVar14;
      }
      else {
        FUN_00c48fe8(plVar6,plVar11,0x28,8);
        plVar11 = plVar14;
      }
    }
  }
  FUN_021401b8(param_1 + 0x157);
  FUN_02140258(param_1 + 0x14a);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x148));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x120));
  plVar6 = (long *)param_1[0x11];
  if (plVar6 != (long *)0x0) {
    plVar11 = plVar6 + 5;
    do {
      lVar12 = *plVar11;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_0213ff54;
  }
  lVar12 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar12 != 0) {
    FUN_0213eeec(param_1 + 0xc);
  }
  plVar6 = (long *)param_1[6];
  if (plVar6 != (long *)0x0) {
    plVar11 = plVar6 + 5;
    do {
      lVar12 = *plVar11;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
LAB_0213ff54:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


