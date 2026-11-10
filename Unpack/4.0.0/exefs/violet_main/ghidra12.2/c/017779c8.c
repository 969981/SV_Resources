/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017779c8; name: FUN_017779c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017779c8(long *param_1,long *param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long local_38;
  
  param_1[2] = 0;
  puVar10 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar10 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  puVar10 = PTR_DAT_047e3080;
  if (lVar12 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar14 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047e3080 + 0x10);
  param_1[1] = lVar14;
  param_1[4] = (long)(puVar10 + 0x88);
  plVar13 = param_1 + 5;
  *plVar13 = (long)(puVar10 + 0x138);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar13);
  puVar10 = PTR_DAT_047e3088;
  *param_1 = (long)(PTR_DAT_047e3088 + 0x10);
  param_1[4] = (long)(puVar10 + 0xc0);
  *plVar13 = (long)(puVar10 + 0x170);
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 1;
  nn::os::InitializeLightEvent(param_1 + 9,0,1);
  *param_1 = (long)&DAT_04603e68;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  param_1[4] = (long)&PTR_LAB_04603f38;
  *plVar13 = (long)&PTR_LAB_04603fe8;
  lVar12 = *param_2;
  param_1[0xd] = lVar12;
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x28);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_1[0x12] = 0x1fffffffffffffff;
  param_1[0x13] = 0;
  lVar9 = _UNK_03cabe68;
  lVar8 = _DAT_03cabe60;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar7 = DAT_03cab628;
  lVar6 = DAT_03cab620;
  lVar14 = _UNK_03caa5b8;
  lVar12 = _DAT_03caa5b0;
  param_1[0x1d] = lVar9;
  param_1[0x1c] = lVar8;
  param_1[0x1f] = lVar7;
  param_1[0x1e] = lVar6;
  param_1[0x18] = 0x3f800000ffffffff;
  lVar15 = param_1[1];
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((long)param_1 + 0x184) = 0;
  param_1[0x22] = 0x3f8000003f800000;
  param_1[0x23] = 0x3f8000003f800000;
  param_1[0x24] = 0x3f8000003f800000;
  param_1[0x25] = 0x3f8000003f800000;
  param_1[0x10] = 0;
  param_1[0x11] = lVar15;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x21] = lVar14;
  param_1[0x20] = lVar12;
  param_1[0x27] = lVar7;
  param_1[0x26] = lVar6;
  param_1[0x29] = lVar9;
  param_1[0x28] = lVar8;
  lVar7 = _UNK_03cabe58;
  lVar6 = _DAT_03cabe50;
  *(undefined4 *)((long)param_1 + 0x174) = 0x40800000;
  param_1[0x2b] = lVar14;
  param_1[0x2a] = lVar12;
  param_1[0x2d] = lVar7;
  param_1[0x2c] = lVar6;
  FUN_01777ce4(&local_38,lVar15);
  plVar13 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[6];
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_01777c08;
  }
  param_1[0x16] = local_38;
  FUN_01777da8(&local_38,lVar15);
  plVar13 = (long *)param_1[0x17];
  param_1[0x17] = 0;
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[6];
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_01777c08:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0x17] = local_38;
  return;
}


