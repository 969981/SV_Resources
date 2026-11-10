/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013dfa34; name: FUN_013dfa34
 */


void FUN_013dfa34(undefined8 *param_1,long *param_2,int param_3,undefined8 param_4,byte param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined4 uStack_64;
  undefined8 local_58;
  
  if (*param_2 == 0) {
    lVar9 = 0;
  }
  else {
    lVar12 = *(long *)(*param_2 + 0x10);
    lVar9 = 0;
    if (lVar12 != 0) {
      lVar9 = lVar12 + -0x28;
    }
  }
  uVar4 = (param_3 - 1U) * 8;
  uStack_66 = (undefined1)(0xff0401 >> (ulong)(uVar4 & 0x18));
  uStack_67 = (undefined1)(0x808181 >> (ulong)(uVar4 & 0x18));
  if (2 < param_3 - 1U) {
    uStack_66 = 0;
    uStack_67 = 0x80;
  }
  local_68 = 0x80;
  uStack_65 = 0x80;
  lVar9 = FUN_0110b210(lVar9,*(undefined8 *)(lVar9 + 8),&local_68);
  puVar7 = PTR_DAT_047d5280;
  *(long *)PTR_DAT_047d5280 = lVar9;
  plVar14 = *(long **)(lVar9 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar14;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x90,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar14 + 0xe8))(plVar14);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_01177ab4();
  *plVar10 = (long)&PTR_LAB_045614e8;
  plVar10[4] = (long)&PTR_LAB_04561580;
  plVar10[5] = (long)&DAT_045615d0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  FUN_00d0a71c(plVar10 + 0xb,param_4);
  *(byte *)((long)plVar10 + 0x89) = param_5 & 1;
  plVar10[0xf] = 0;
  plVar10[0x10] = 0;
  *(undefined4 *)(plVar10 + 3) = 0x80090;
  plVar10[0xd] = 0;
  plVar10[0xe] = 0;
  plVar10[1] = (long)plVar14;
  plVar10[2] = (long)plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  lVar9 = plVar10[6];
  if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar3 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar11;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  *(undefined8 *)puVar7 = 0;
  (**(code **)(*plVar10 + 0x18))(&local_68,plVar10);
  puVar13 = (undefined8 *)
            CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT12(uStack_66,CONCAT11(uStack_67,local_68))))
  ;
  *param_1 = 0;
  param_1[1] = 0;
  if ((long *)puVar13[2] == plVar10 + 5) {
    FUN_013dfe64(param_1,&local_68);
    puVar13 = (undefined8 *)
              CONCAT44(uStack_64,
                       CONCAT13(uStack_65,CONCAT12(uStack_66,CONCAT11(uStack_67,local_68))));
  }
  if (puVar13 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar13 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58 = *puVar13;
        FUN_00c44438(lVar9 + 0x8040,&local_58);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar9 = plVar10[6];
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar3 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*plVar10 + 0x50))(plVar10);
  }
  else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


