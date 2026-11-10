/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ecc478; name: FUN_00ecc478
 */


void FUN_00ecc478(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *extraout_x1;
  long *extraout_x1_00;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined **local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar7 = PTR_DAT_047d8c20;
  puVar6 = PTR_DAT_047d8b70;
  lVar14 = *(long *)(param_2 + 0x38);
  plVar11 = param_3;
  for (lVar13 = *(long *)(param_2 + 0x30); lVar13 != lVar14; lVar13 = lVar13 + 0x40) {
    if (*(long *)(lVar13 + 8) == 0) {
      plVar12 = (long *)puVar7;
      if ((*PTR_DAT_047d8c18 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c18,plVar11,param_4,param_5);
        plVar11 = extraout_x1;
        if (iVar8 != 0) {
          if (((*PTR_DAT_047d8c28 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar8 != 0)) {
            local_a0 = (undefined **)FUN_00d44228();
            FUN_00d1e764(PTR_DAT_047d8c30,&local_a0);
            FUN_00100190(PTR_LAB_047d9240,PTR_DAT_047d8c30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8c28);
          }
          FUN_01db7420(puVar7,PTR_DAT_047d8c30,0);
          FUN_00100190(PTR_FUN_047dc9f0,puVar7,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c18);
          plVar11 = extraout_x1_00;
        }
      }
    }
    else {
      plVar12 = (long *)(*(long *)(lVar13 + 8) + 0x40);
    }
    plVar2 = (long *)puVar6;
    if (*plVar12 != 0) {
      plVar2 = (long *)(*plVar12 + 0x30);
    }
    plVar12 = (long *)puVar6;
    if (*param_3 != 0) {
      plVar12 = (long *)(*param_3 + 0x30);
    }
    if (*plVar2 == *plVar12) {
      *param_1 = 0;
      return;
    }
    param_4 = param_4 & 0xffffffff;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = &PTR_FUN_045d22c0;
  uStack_98 = 0;
  if ((param_4 & 1) == 0) {
    FUN_00ece818(&local_a0,0,param_3);
  }
  else {
    uVar9 = FUN_00ece818(&local_a0,1,param_3);
    lVar13 = local_80;
    if ((uVar9 & 1) != 0) {
      if (local_80 != 0) {
        lVar14 = *(long *)(local_80 + 0x30);
        if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar10;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      goto LAB_00ecc4f0;
    }
  }
  lVar13 = 0;
LAB_00ecc4f0:
  uVar9 = *(ulong *)(param_2 + 0x38);
  if (uVar9 < *(ulong *)(param_2 + 0x40)) {
    FUN_00ecc73c(param_2 + 0x48,uVar9,&local_a0);
    *(ulong *)(param_2 + 0x38) = uVar9 + 0x40;
  }
  else {
    FUN_00edda0c((long *)(param_2 + 0x30),&local_a0);
  }
  *param_1 = lVar13;
  FUN_00eccf20(&local_a0);
  return;
}


