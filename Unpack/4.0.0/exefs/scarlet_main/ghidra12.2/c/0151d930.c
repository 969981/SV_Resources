/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151d930; name: FUN_0151d930
 */


void FUN_0151d930(long param_1,uint param_2)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  plVar2 = (long *)(param_1 + 0x180);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0151d96c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
        while (*plVar2 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0151d96c;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0151d96c:
  lVar9 = *(long *)(param_1 + 0x3f0);
  *(byte *)(param_1 + 0x3f8) = (byte)param_2 & 1;
  plVar2 = *(long **)(*(long *)(lVar9 + 0x30) + 0x110);
  plVar4 = *(long **)(*(long *)(lVar9 + 0x30) + 0x118);
  plVar10 = plVar2;
  if ((plVar2 != plVar4) && (*plVar2 != -0x593eeb8c0a87edbc)) {
    do {
      plVar10 = plVar10 + 0xc;
      if (plVar4 == plVar10) {
        plVar10 = plVar4;
        goto LAB_0151d9bc;
      }
    } while (*plVar10 != -0x593eeb8c0a87edbc);
  }
LAB_0151d9bc:
  if (plVar4 != plVar10) {
    iVar6 = (int)((ulong)((long)plVar10 - (long)plVar2) >> 5) * -0x55555555;
    lVar3 = plVar2[(long)iVar6 * 0xc + 4];
    lVar5 = plVar2[(long)iVar6 * 0xc + 5];
    lVar13 = lVar3;
    if (lVar3 != lVar5) {
      lVar11 = lVar3;
      if (*(uint *)(lVar3 + 0x20) != (param_2 & 1)) {
        do {
          lVar13 = lVar11 + 0x28;
          if (lVar5 == lVar13) {
            lVar13 = lVar5;
            goto LAB_0151da00;
          }
          puVar1 = (uint *)(lVar11 + 0x48);
          lVar11 = lVar13;
        } while (*puVar1 != (param_2 & 1));
      }
    }
LAB_0151da00:
    if (lVar5 != lVar13) {
      lVar11 = (long)iVar6;
      uVar12 = (ulong)*(byte *)((long)plVar2 + lVar11 * 0x60 + 0x5a) -
               (ulong)*(byte *)((long)plVar2 + lVar11 * 0x60 + 0x59);
      lVar5 = *(long *)(lVar9 + 0x80);
      if ((ulong)(*(long *)(lVar9 + 0x88) - lVar5 >> 2) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(uint *)(lVar5 + uVar12 * 4) =
           (int)((ulong)(lVar13 - lVar3) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar2 + lVar11 * 0x60 + 0x5b) & 0x1f) |
           *(uint *)(lVar5 + uVar12 * 4) &
           (*(uint *)((long)plVar2 + lVar11 * 0x60 + 0x5c) ^ 0xffffffff);
      lVar9 = *(long *)(param_1 + 0x3f0);
    }
  }
  FUN_00d100a8(lVar9);
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x128) + 200),0x1f,
               *(long *)(param_1 + 0x3f0) + 0xf0);
  *(undefined8 *)(param_1 + 0x180) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x188));
  return;
}


