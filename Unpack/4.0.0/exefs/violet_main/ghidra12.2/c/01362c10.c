/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01362c10; name: FUN_01362c10
 */


undefined8 FUN_01362c10(undefined8 param_1)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  char *pcVar13;
  bool bVar14;
  long lVar15;
  char local_80 [8];
  long local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  puVar7 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar7 == (undefined8 *)0x0) || (pcVar13 = (char *)*puVar7, (char *)*puVar7 == (char *)0x0))
  {
    if ((*PTR_DAT_047de038 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_047de038);
      pcVar13 = PTR_DAT_047de040;
      if (iVar6 != 0) {
        *PTR_DAT_047de040 = 0;
        *(undefined8 *)(pcVar13 + 8) = 0;
        FUN_00100190(FUN_010e66e4,pcVar13,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047de038);
      }
    }
    else {
      pcVar13 = PTR_DAT_047de040;
    }
  }
  cVar4 = *pcVar13;
  if (cVar4 == '\x02') {
LAB_01362c64:
    if ((*(long *)(pcVar13 + 8) == 0) || (*(short *)(*(long *)(pcVar13 + 8) + 0x1a) == 0))
    goto LAB_01362ee4;
LAB_01362c7c:
    cVar4 = *pcVar13;
    if (cVar4 != '\x02') {
      if (cVar4 == '\x03') {
        FUN_0136382c(auStack_68,pcVar13 + 8);
        local_80[0] = '\x03';
        local_78 = 0;
        uStack_70 = 0;
        FUN_0136345c(&local_78,auStack_68);
        FUN_0133c3cc(auStack_68);
        goto LAB_01362cb8;
      }
      if (cVar4 != '\x01') {
        if (cVar4 == '\0') {
          lVar8 = *(long *)(pcVar13 + 8);
          plVar9 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x28))();
          if (((*PTR_DAT_047d9268 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d9268), puVar5 = PTR_DAT_047d9278, iVar6 != 0))
          {
            if (((*PTR_DAT_047d9270 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar6 != 0)) {
              uVar10 = FUN_01e19d1c();
              *(undefined8 *)puVar5 = uVar10;
              __cxa_guard_release(PTR_DAT_047d9270);
            }
            *(undefined **)PTR_DAT_047d9280 = puVar5;
            __cxa_guard_release(PTR_DAT_047d9268);
          }
          for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            if (plVar9 == (long *)PTR_DAT_047d9280) goto LAB_01362ee8;
          }
        }
        goto LAB_01362ee4;
      }
      lVar8 = *(long *)(pcVar13 + 8);
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)(lVar8 + 0x28))((undefined8 *)(lVar8 + 0x28));
      if (((*PTR_DAT_047d9268 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d9268), iVar6 != 0)) {
        if (((*PTR_DAT_047d9270 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar6 != 0)) {
          uVar10 = FUN_01e19d1c();
          *(undefined8 *)PTR_DAT_047d9278 = uVar10;
          __cxa_guard_release(PTR_DAT_047d9270);
        }
        *(undefined **)PTR_DAT_047d9280 = PTR_DAT_047d9278;
        __cxa_guard_release(PTR_DAT_047d9268);
      }
      if (puVar7 != (undefined8 *)0x0) {
LAB_01362e50:
        if (puVar7 != (undefined8 *)PTR_DAT_047d9280) goto LAB_013630b4;
        lVar12 = *(long *)(lVar8 + 0x30);
        if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar2 = (short *)(lVar12 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar14) {
            *psVar2 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar10;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        goto LAB_01362e8c;
      }
LAB_013630bc:
      lVar8 = 0;
LAB_01362e8c:
      local_80[0] = '\x01';
      local_78 = lVar8;
      goto joined_r0x01362ef0;
    }
    FUN_0136382c(local_58,pcVar13 + 8);
    local_80[0] = '\x02';
    local_78 = 0;
    uStack_70 = 0;
    FUN_0136345c(&local_78,local_58);
    if (local_58[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_58[0] + 3);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar14) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar1 = (int *)((long)local_58[0] + 0x1c);
        do {
          iVar6 = *piVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_48 = *local_58[0];
          FUN_00c44438(lVar8 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
LAB_01362cb8:
    if ((local_80[0] == '\x02') || (local_80[0] == '\x03')) {
      if ((local_78 == 0) || (*(short *)(local_78 + 0x1a) == 0)) goto LAB_01362ccc;
      goto LAB_01362ef4;
    }
    if ((local_80[0] == '\x01') || (local_80[0] == '\0')) goto joined_r0x01362ef0;
  }
  else {
    if ((cVar4 == '\0') || (cVar4 == '\x01')) {
      if (*(long *)(pcVar13 + 8) != 0) goto LAB_01362c7c;
    }
    else if (cVar4 == '\x03') goto LAB_01362c64;
LAB_01362ee4:
    lVar8 = 0;
LAB_01362ee8:
    local_80[0] = '\0';
    local_78 = lVar8;
joined_r0x01362ef0:
    if (local_78 != 0) {
LAB_01362ef4:
      puVar7 = (undefined8 *)FUN_00c5e120(param_1,8,1);
      if (((*PTR_DAT_047d38a0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38a0);
      }
      lVar15 = *(long *)PTR_DAT_047d38a8;
      *(long *)PTR_DAT_047d38b0 = lVar15;
      puVar5 = PTR_DAT_047d38f8;
      lVar12 = *(long *)PTR_DAT_047d38f8;
      lVar8 = nn::os::GetCurrentThread();
      if (lVar8 != lVar12) {
        uVar10 = nn::os::GetCurrentThread();
LAB_01362fe0:
        if (*(long *)puVar5 == 0) goto code_r0x01362fe8;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
        do {
          if (*(long *)puVar5 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
              while (*(long *)puVar5 == 0) {
                cVar4 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                if (bVar14) {
                  *(undefined8 *)puVar5 = uVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_01362ff0;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar14) {
            *(undefined8 *)puVar5 = uVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_01362ff0:
        bVar14 = false;
        goto LAB_01362f4c;
      }
      bVar14 = true;
LAB_01362f4c:
      if (*(long *)(lVar15 + 0x28) == *(long *)(lVar15 + 0x30)) {
        pcVar13 = (char *)FUN_00d97840(0x40,8);
      }
      else {
        puVar11 = (undefined8 *)(*(long *)(lVar15 + 0x30) + -8);
        pcVar13 = (char *)*puVar11;
        *(undefined8 **)(lVar15 + 0x30) = puVar11;
      }
      if (!bVar14) {
        *(undefined8 *)puVar5 = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
      }
      lVar8 = local_78;
      *pcVar13 = '\0';
      plVar9 = (long *)(pcVar13 + 8);
      *plVar9 = 0;
      *pcVar13 = local_80[0];
      if ((local_80[0] == '\x02') || (local_80[0] == '\x03')) {
        FUN_0136345c(plVar9,&local_78);
      }
      else {
        if (local_80[0] == '\x01') {
          *plVar9 = 0;
          local_78 = 0;
        }
        else if (local_80[0] != '\0') goto LAB_01362f8c;
        *plVar9 = lVar8;
      }
LAB_01362f8c:
      *puVar7 = pcVar13;
      FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_045b3c20);
      FUN_00c5e190(param_1,0xfffffffe);
      goto LAB_01362fb4;
    }
  }
LAB_01362ccc:
  FUN_00ca1a30(param_1);
LAB_01362fb4:
  FUN_013632b4(local_80);
  return 1;
LAB_013630b4:
  puVar7 = (undefined8 *)*puVar7;
  if (puVar7 == (undefined8 *)0x0) goto LAB_013630bc;
  goto LAB_01362e50;
code_r0x01362fe8:
  cVar4 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar14) {
    *(undefined8 *)puVar5 = uVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01362ff0;
  goto LAB_01362fe0;
}


