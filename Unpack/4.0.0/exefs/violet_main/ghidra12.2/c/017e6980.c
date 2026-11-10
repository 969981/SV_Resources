/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e6980; name: FUN_017e6980
 */


void FUN_017e6980(ulong param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  bool bVar13;
  ulong uVar14;
  ulong unaff_x26;
  
  puVar12 = (undefined8 *)PTR_DAT_047d38f8;
  lVar11 = *(long *)PTR_DAT_047d38f8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar11) {
    uVar5 = nn::os::GetCurrentThread();
LAB_017e6c14:
    if (*puVar12 == 0) goto code_r0x017e6c1c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)((long)puVar12 + 8));
    do {
      if (*puVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)((long)puVar12 + 8));
          while (*puVar12 == 0) {
            cVar1 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar12,0x10);
            if (bVar13) {
              *puVar12 = uVar5;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_017e6c24;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar13) {
        *puVar12 = uVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_017e6c24:
    bVar13 = false;
    goto LAB_017e69c0;
  }
  bVar13 = true;
LAB_017e69c0:
  plVar2 = DAT_04859eb0;
  if (DAT_04859eb0 == (long *)0x0) goto LAB_017e6bb4;
  uVar14 = DAT_04859eb0[1];
  if (uVar14 != 0) {
    uVar7 = uVar14 - 1;
    if ((uVar14 & uVar7) == 0) {
      unaff_x26 = uVar7 & param_1;
      plVar8 = *(long **)(*DAT_04859eb0 + unaff_x26 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) || (plVar8[1] != param_1 && (plVar8[1] & uVar7) != unaff_x26))
          goto LAB_017e6a38;
        } while (plVar8[2] != param_1);
        goto LAB_017e6bb4;
      }
    }
    else {
      if (param_1 < uVar14) {
        unaff_x26 = param_1;
      }
      else {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = param_1 / uVar14;
        }
        unaff_x26 = param_1 - uVar7 * uVar14;
      }
      plVar8 = *(long **)(*DAT_04859eb0 + unaff_x26 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_017e6a38;
          uVar7 = plVar8[1];
          if (uVar7 != param_1) {
            if (uVar14 <= uVar7) {
              uVar6 = 0;
              if (uVar14 != 0) {
                uVar6 = uVar7 / uVar14;
              }
              uVar7 = uVar7 - uVar6 * uVar14;
            }
            if (uVar7 != unaff_x26) goto LAB_017e6a38;
          }
        } while (plVar8[2] != param_1);
        goto LAB_017e6bb4;
      }
    }
  }
LAB_017e6a38:
  plVar8 = (long *)(**(code **)(*(long *)DAT_04859eb0[7] + 0x10))((long *)DAT_04859eb0[7],0x20,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)plVar2[7] + 0xe8))();
  }
  lVar4 = plVar2[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    puVar12 = (undefined8 *)PTR_DAT_047d38f8;
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar11 == 0) {
    plVar8[2] = param_1;
    plVar8[3] = param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar4;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    plVar8[2] = param_1;
    plVar8[3] = param_2;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = param_1;
  if ((uVar14 == 0) || (*(float *)(plVar2 + 0xc) * (float)uVar14 < (float)(plVar2[0xb] + 1))) {
    uVar14 = (ulong)(uVar14 < 3 || (uVar14 & uVar14 - 1) != 0) | uVar14 << 1;
    uVar7 = (ulong)((float)(plVar2[0xb] + 1) / *(float *)(plVar2 + 0xc));
    if (uVar7 <= uVar14) {
      uVar7 = uVar14;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__next_prime(uVar7);
    }
    uVar14 = plVar2[1];
    if (uVar14 < uVar7) {
      uVar6 = uVar7;
LAB_017e6b2c:
      FUN_017e6dd8(plVar2,uVar6);
    }
    else if (uVar7 < uVar14) {
      uVar6 = (ulong)((float)(ulong)plVar2[0xb] / *(float *)(plVar2 + 0xc));
      if ((uVar14 < 3) ||
         (uVar10 = uVar14 - (uVar14 >> 1 & 0x5555555555555555),
         uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333),
         1 < (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar6 = std::__next_prime(uVar6);
      }
      else if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar14) goto LAB_017e6b2c;
    }
    uVar14 = plVar2[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x26 = uVar14 - 1 & param_1;
    }
    else if (param_1 < uVar14) {
      unaff_x26 = param_1;
    }
    else {
      uVar7 = 0;
      if (uVar14 != 0) {
        uVar7 = param_1 / uVar14;
      }
      unaff_x26 = param_1 - uVar7 * uVar14;
    }
  }
  plVar9 = *(long **)(*plVar2 + unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = plVar2 + 6;
    *plVar8 = *plVar9;
    *plVar9 = (long)plVar8;
    *(long **)(*plVar2 + unaff_x26 * 8) = plVar9;
    if (*plVar8 != 0) {
      uVar7 = *(ulong *)(*plVar8 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar7 = uVar7 & uVar14 - 1;
      }
      else if (uVar14 <= uVar7) {
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = uVar7 / uVar14;
        }
        uVar7 = uVar7 - uVar6 * uVar14;
      }
      plVar9 = (long *)(*plVar2 + uVar7 * 8);
      goto LAB_017e6ba4;
    }
  }
  else {
    *plVar8 = *plVar9;
LAB_017e6ba4:
    *plVar9 = (long)plVar8;
  }
  plVar2[0xb] = plVar2[0xb] + 1;
LAB_017e6bb4:
  if (!bVar13) {
    *puVar12 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar12 + 1));
    return;
  }
  return;
code_r0x017e6c1c:
  cVar1 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(puVar12,0x10);
  if (bVar13) {
    *puVar12 = uVar5;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_017e6c24;
  goto LAB_017e6c14;
}


