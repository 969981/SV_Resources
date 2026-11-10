/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ff7250; name: FUN_00ff7250
 */


void FUN_00ff7250(long param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  plVar1 = (long *)(param_1 + 0x110);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x118) == 0) {
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0x118) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00ff7294;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x120));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x118) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x120));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x118) == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar5;
            *(undefined8 *)(param_1 + 0x118) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00ff7294;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0x118) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00ff7294:
  lVar11 = *(long *)(param_1 + 0xd0);
  lVar5 = *(long *)(param_1 + 0xd8);
  uVar13 = (ulong)param_2;
  lVar7 = lVar5 - lVar11 >> 3;
  if ((ulong)(lVar7 * 0x6db6db6db6db6db7) < (ulong)(long)param_2) {
    uVar8 = uVar13 + lVar7 * -0x6db6db6db6db6db7;
    if ((ulong)((*(long *)(param_1 + 0xe0) - lVar5 >> 3) * 0x6db6db6db6db6db7) < uVar8) {
      uVar8 = *(ulong *)(param_1 + 0xf0);
      if (0x7ffffffffffffffe < uVar8) {
        uVar8 = 0x7fffffffffffffff;
      }
      if (uVar8 < uVar13) goto LAB_00ff7a94;
      lVar5 = *(long *)(param_1 + 0xe0) - lVar11 >> 3;
      uVar9 = lVar5 * -0x2492492492492492;
      uVar3 = uVar13;
      if (uVar13 <= uVar9) {
        uVar3 = uVar9;
      }
      puVar2 = (undefined8 *)(param_1 + 0xe8);
      if (uVar8 >> 1 <= (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
        uVar3 = uVar8;
      }
      if (uVar3 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar3 * 0x38,8);
        if (lVar5 == 0) {
          (**(code **)(*(long *)*puVar2 + 0xe8))();
        }
      }
      lVar11 = lVar5 + lVar7 * 8;
      lVar15 = lVar5 + uVar13 * 0x38;
      FUN_00ff7cc8(puVar2,lVar11);
      if (lVar15 != lVar11 + 0x38) {
        FUN_00ff7cc8(puVar2,lVar11 + 0x38);
        if (lVar15 != lVar11 + 0x70) {
          FUN_00ff7cc8(puVar2,lVar11 + 0x70);
          lVar12 = lVar11 + 0xa8;
          if (lVar15 != lVar12) {
            lVar7 = lVar7 * -8 + uVar13 * 0x38 + -0xa8;
            do {
              FUN_00ff7cc8(puVar2,lVar12);
              lVar12 = lVar12 + 0x38;
              lVar7 = lVar7 + -0x38;
            } while (lVar7 != 0);
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0xd0);
      lVar12 = *(long *)(param_1 + 0xd8);
      if (lVar12 == lVar7) {
        lVar12 = lVar7;
      }
      else {
        do {
          lVar11 = lVar11 + -0x38;
          lVar12 = lVar12 + -0x38;
          FUN_00ff7fa8(puVar2,lVar11,lVar12);
        } while (lVar7 != lVar12);
        lVar7 = *(long *)(param_1 + 0xd0);
        lVar12 = *(long *)(param_1 + 0xd8);
      }
      lVar14 = *(long *)(param_1 + 0xe0);
      *(ulong *)(param_1 + 0xe0) = lVar5 + uVar3 * 0x38;
      *(long *)(param_1 + 0xd0) = lVar11;
      *(long *)(param_1 + 0xd8) = lVar15;
      if ((lVar12 != lVar7) && (FUN_01075cb4(lVar12 + -0x38), lVar12 + -0x38 != lVar7)) {
        do {
          FUN_01075cb4(lVar12 + -0x70);
          lVar12 = lVar12 + -0x38;
        } while (lVar7 + 0x38 != lVar12);
      }
      if (lVar7 != 0) {
        plVar10 = (long *)*puVar2;
        lVar14 = lVar14 - lVar7;
        uVar8 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar8 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,lVar14,8);
        }
        else {
          FUN_00c48fe8(plVar10,lVar7,lVar14,8);
        }
      }
    }
    else {
      lVar11 = lVar5;
      if (uVar8 != 0) {
        lVar11 = lVar5 + uVar8 * 0x38;
        lVar7 = uVar13 * 0x38 + lVar7 * -8;
        do {
          FUN_00ff7cc8(param_1 + 0xe8,lVar5);
          lVar5 = lVar5 + 0x38;
          lVar7 = lVar7 + -0x38;
        } while (lVar7 != 0);
      }
      *(long *)(param_1 + 0xd8) = lVar11;
    }
  }
  else if (uVar13 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
    lVar7 = lVar11 + uVar13 * 0x38;
    if ((((lVar7 != lVar5) && (FUN_01075cb4(lVar5 + -0x38), lVar5 + -0x38 != lVar7)) &&
        (FUN_01075cb4(lVar5 + -0x70), lVar5 + -0x70 != lVar7)) &&
       (FUN_01075cb4(lVar5 + -0xa8), lVar5 + -0xa8 != lVar7)) {
      do {
        FUN_01075cb4(lVar5 + -0xe0);
        lVar5 = lVar5 + -0x38;
      } while (lVar11 + uVar13 * 0x38 + 0xa8 != lVar5);
    }
    *(long *)(param_1 + 0xd8) = lVar7;
  }
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x118);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x118) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar11 = *plVar1;
    lVar15 = *(long *)(param_1 + 0x118);
    if (lVar11 != lVar5 || lVar15 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00ff7464;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x114) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_00ff7464:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x118);
      if (lVar5 != lVar11 || lVar7 != lVar15) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ff7a0c;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x114) = lVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x00ff7a0c:
    if (!bVar6) {
      do {
        lVar11 = *plVar1;
        lVar15 = *(long *)(param_1 + 0x118);
        if (lVar11 != lVar5 || lVar15 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar11;
          lVar7 = lVar15;
          goto joined_r0x00ff7a0c;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x114) = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar11;
      lVar7 = lVar15;
      goto joined_r0x00ff7a0c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x120));
  plVar1 = (long *)(param_1 + 0x30);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x38) == 0) {
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0x38) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00ff7490;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x38) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x38) == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar5;
            *(undefined8 *)(param_1 + 0x38) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00ff7490;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0x38) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00ff7490:
  lVar11 = *(long *)(param_1 + 0x50);
  lVar5 = *(long *)(param_1 + 0x58);
  lVar7 = lVar5 - lVar11 >> 3;
  if ((ulong)(lVar7 * 0x6db6db6db6db6db7) < uVar13) {
    uVar8 = uVar13 + lVar7 * -0x6db6db6db6db6db7;
    if ((ulong)((*(long *)(param_1 + 0x60) - lVar5 >> 3) * 0x6db6db6db6db6db7) < uVar8) {
      uVar8 = *(ulong *)(param_1 + 0x70);
      if (0x7ffffffffffffffe < uVar8) {
        uVar8 = 0x7fffffffffffffff;
      }
      if (uVar8 < uVar13) {
LAB_00ff7a94:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar5 = *(long *)(param_1 + 0x60) - lVar11 >> 3;
      uVar9 = lVar5 * -0x2492492492492492;
      uVar3 = uVar13;
      if (uVar13 <= uVar9) {
        uVar3 = uVar9;
      }
      puVar2 = (undefined8 *)(param_1 + 0x68);
      if (uVar8 >> 1 <= (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
        uVar3 = uVar8;
      }
      if (uVar3 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar3 * 0x38,8);
        if (lVar5 == 0) {
          (**(code **)(*(long *)*puVar2 + 0xe8))();
        }
      }
      lVar11 = lVar5 + lVar7 * 8;
      lVar15 = lVar5 + uVar13 * 0x38;
      FUN_00ff7ae0(puVar2,lVar11);
      if (lVar15 != lVar11 + 0x38) {
        FUN_00ff7ae0(puVar2,lVar11 + 0x38);
        if (lVar15 != lVar11 + 0x70) {
          FUN_00ff7ae0(puVar2,lVar11 + 0x70);
          lVar12 = lVar11 + 0xa8;
          if (lVar15 != lVar12) {
            lVar7 = lVar7 * -8 + uVar13 * 0x38 + -0xa8;
            do {
              FUN_00ff7ae0(puVar2,lVar12);
              lVar12 = lVar12 + 0x38;
              lVar7 = lVar7 + -0x38;
            } while (lVar7 != 0);
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x50);
      lVar12 = *(long *)(param_1 + 0x58);
      if (lVar12 == lVar7) {
        lVar12 = lVar7;
      }
      else {
        do {
          lVar11 = lVar11 + -0x38;
          lVar12 = lVar12 + -0x38;
          FUN_00ff7eb0(puVar2,lVar11,lVar12);
        } while (lVar7 != lVar12);
        lVar7 = *(long *)(param_1 + 0x50);
        lVar12 = *(long *)(param_1 + 0x58);
      }
      *(long *)(param_1 + 0x50) = lVar11;
      *(long *)(param_1 + 0x58) = lVar15;
      lVar11 = *(long *)(param_1 + 0x60);
      *(ulong *)(param_1 + 0x60) = lVar5 + uVar3 * 0x38;
      if ((lVar12 != lVar7) && (FUN_01075b98(lVar12 + -0x38), lVar12 + -0x38 != lVar7)) {
        do {
          FUN_01075b98(lVar12 + -0x70);
          lVar12 = lVar12 + -0x38;
        } while (lVar7 + 0x38 != lVar12);
      }
      if (lVar7 != 0) {
        plVar10 = (long *)*puVar2;
        lVar11 = lVar11 - lVar7;
        uVar13 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar13 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,lVar11,8);
        }
        else {
          FUN_00c48fe8(plVar10,lVar7,lVar11,8);
        }
      }
    }
    else {
      lVar11 = lVar5;
      if (uVar8 != 0) {
        lVar11 = lVar5 + uVar8 * 0x38;
        lVar7 = uVar13 * 0x38 + lVar7 * -8;
        do {
          FUN_00ff7ae0(param_1 + 0x68,lVar5);
          lVar5 = lVar5 + 0x38;
          lVar7 = lVar7 + -0x38;
        } while (lVar7 != 0);
      }
      *(long *)(param_1 + 0x58) = lVar11;
    }
  }
  else if (lVar7 * 0x6db6db6db6db6db7 != uVar13) {
    lVar7 = lVar11 + uVar13 * 0x38;
    if ((((lVar7 != lVar5) && (FUN_01075b98(lVar5 + -0x38), lVar5 + -0x38 != lVar7)) &&
        (FUN_01075b98(lVar5 + -0x70), lVar5 + -0x70 != lVar7)) &&
       (FUN_01075b98(lVar5 + -0xa8), lVar5 + -0xa8 != lVar7)) {
      do {
        FUN_01075b98(lVar5 + -0xe0);
        lVar5 = lVar5 + -0x38;
      } while (lVar11 + uVar13 * 0x38 + 0xa8 != lVar5);
    }
    *(long *)(param_1 + 0x58) = lVar7;
  }
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x38);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x38) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar11 = *plVar1;
    lVar15 = *(long *)(param_1 + 0x38);
    if (lVar11 != lVar5 || lVar15 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00ff763c;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x34) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_00ff763c:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x38);
      if (lVar5 != lVar11 || lVar7 != lVar15) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ff7a54;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x34) = lVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x00ff7a54:
    if (!bVar6) {
      do {
        lVar11 = *plVar1;
        lVar15 = *(long *)(param_1 + 0x38);
        if (lVar11 != lVar5 || lVar15 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar11;
          lVar7 = lVar15;
          goto joined_r0x00ff7a54;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x34) = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar11;
      lVar7 = lVar15;
      goto joined_r0x00ff7a54;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x40));
  return;
}


