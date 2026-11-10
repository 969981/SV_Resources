/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aca6a8; name: FUN_01aca6a8
 */


undefined4 FUN_01aca6a8(long param_1,int param_2,undefined8 *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  short sVar13;
  undefined4 uVar14;
  long *plVar15;
  long *plVar16;
  int local_6c;
  undefined8 *local_68 [3];
  int *local_38;
  
  if (((*PTR_DAT_047daeb0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047daeb0), iVar6 != 0))
  {
    FUN_00100190(&LAB_02a1c3ec,PTR_DAT_047daeb8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daeb0);
  }
  lVar8 = *(long *)PTR_DAT_047daeb8;
  *(long *)PTR_DAT_047daec0 = lVar8;
  lVar8 = *(long *)(lVar8 + 0x38);
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    return 0;
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  sVar13 = *(short *)(lVar8 + 0x1a);
  do {
    sVar2 = *psVar1;
    if (sVar2 == sVar13) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_01aca74c;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01aca74c:
      bVar4 = false;
    }
    if (bVar4) {
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 == 0) {
        return 0;
      }
      plVar11 = (long *)(lVar8 + -0x28);
      if (*(char *)(lVar8 + 0xdc) == '\0') {
        uVar14 = 0;
        goto LAB_01aca804;
      }
      lVar12 = (long)*(int *)(param_1 + 0x170);
      local_38 = &local_6c;
      plVar15 = plVar11 + lVar12 * 7 + 0xc;
      plVar10 = (long *)*plVar15;
      if (plVar10 != (long *)0x0) {
        plVar16 = plVar11 + lVar12 * 7 + 0xc;
        break;
      }
      plVar10 = plVar15;
      goto LAB_01aca7e8;
    }
    sVar13 = sVar2;
    if (sVar2 == 0) {
      return 0;
    }
  } while( true );
LAB_01aca7b0:
  plVar15 = plVar10;
  if (param_2 < *(int *)((long)plVar10 + 0x1c)) {
    if ((long *)*plVar10 == (long *)0x0) {
      goto LAB_01aca7e8;
    }
    plVar5 = (long *)*plVar10;
    plVar16 = plVar10;
  }
  else {
    if (param_2 <= *(int *)((long)plVar10 + 0x1c)) {
LAB_01aca7e4:
      plVar10 = plVar16;
LAB_01aca7e8:
      puVar7 = (undefined8 *)*plVar10;
      local_6c = param_2;
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) {
        plVar16 = plVar11 + lVar12 * 7 + 0xb;
        FUN_01f8558c(local_68,plVar16,&local_38);
        *local_68[0] = 0;
        local_68[0][1] = 0;
        local_68[0][2] = plVar15;
        *plVar10 = (long)local_68[0];
        puVar7 = local_68[0];
        if (*(long *)*plVar16 != 0) {
          *plVar16 = *(long *)*plVar16;
          puVar7 = (undefined8 *)*plVar10;
        }
        FUN_010108e0(plVar11[lVar12 * 7 + 0xc],puVar7);
        plVar11[lVar12 * 7 + 0x11] = plVar11[lVar12 * 7 + 0x11] + 1;
        puVar7 = local_68[0];
      }
      uVar9 = puVar7[4];
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar7 + 5);
      *param_3 = uVar9;
      uVar14 = 1;
LAB_01aca804:
      lVar8 = *(long *)(lVar8 + 8);
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar13 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return uVar14;
    }
    plVar16 = plVar10 + 1;
    plVar5 = (long *)*plVar16;
    if ((long *)*plVar16 == (long *)0x0) goto LAB_01aca7e4;
  }
  plVar10 = plVar5;
  goto LAB_01aca7b0;
}


