/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f9503c; name: FUN_00f9503c
 */


void FUN_00f9503c(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  undefined1 auStack_38 [8];
  
  puVar7 = (undefined8 *)FUN_00f93c28(*(undefined8 *)(param_1 + 0x10));
  plVar11 = (long *)*puVar7;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 5;
    do {
      lVar9 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar9 == -1) goto LAB_00f959cc;
  }
  FUN_00f95cd4(&local_68);
  FUN_00f2babc(param_1 + 0x68,0,&local_68,0,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar8 = FUN_00f959f4(*(undefined8 *)(param_1 + 0x70),0);
  uVar8 = FUN_00ec0c08(*(undefined8 *)(param_1 + 0x70),uVar8);
  local_68 = plVar11;
  lVar9 = FUN_00cf3764(auStack_38,plVar11[1],&local_68);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) goto LAB_00f959cc;
  }
  FUN_00ec0d30(lVar9,uVar8,1);
  plVar12 = (long *)(param_1 + 0xa8);
  plVar10 = (long *)*plVar12;
  *plVar12 = 0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 5;
    do {
      lVar6 = *plVar2;
      iVar3 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_00f959a4;
  }
  *(long *)(param_1 + 0xa8) = lVar9;
  local_68 = (long *)&DAT_5df8a77c4b1003f0;
  puStack_60 = PTR_s_DefaultDiffusePrb_047e1280;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_01344120(*(undefined8 *)(param_1 + 0x18),&local_68,plVar12);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  FUN_00f95ec4(&local_68);
  FUN_00f2babc(param_1 + 0xb0,0,&local_68,0,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar8 = FUN_00f959f4(*(undefined8 *)(param_1 + 0xb8),0);
  uVar8 = FUN_00ec0c08(*(undefined8 *)(param_1 + 0xb8),uVar8);
  local_68 = plVar11;
  lVar9 = FUN_00cf3764(auStack_38,plVar11[1],&local_68);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) goto LAB_00f959cc;
  }
  FUN_00ec0d30(lVar9,uVar8,1);
  plVar12 = (long *)(param_1 + 0xf0);
  plVar10 = (long *)*plVar12;
  *plVar12 = 0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 5;
    do {
      lVar6 = *plVar2;
      iVar3 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_00f959a4;
  }
  *(long *)(param_1 + 0xf0) = lVar9;
  local_68 = (long *)&DAT_805357d99b3be92e;
  puStack_60 = PTR_s_SpecularDiffusePrb_047e1288;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_01344120(*(undefined8 *)(param_1 + 0x18),&local_68,plVar12);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  FUN_00f962a4(&local_68);
  FUN_00f2babc(param_1 + 0xf8,0,&local_68,0,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar8 = FUN_00f959f4(*(undefined8 *)(param_1 + 0x100),0);
  uVar8 = FUN_00ec0c08(*(undefined8 *)(param_1 + 0x100),uVar8);
  local_68 = plVar11;
  lVar9 = FUN_00cf3764(auStack_38,plVar11[1],&local_68);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) goto LAB_00f959cc;
  }
  FUN_00ec0d30(lVar9,uVar8,1);
  plVar10 = *(long **)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10 + 5;
    do {
      lVar6 = *plVar12;
      iVar3 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_00f959a4;
  }
  *(long *)(param_1 + 0x138) = lVar9;
  local_68 = (long *)&DAT_d93b02110fb001a4;
  puStack_60 = PTR_s_LensFlareBokeh_047e1290;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_01344120(*(undefined8 *)(param_1 + 0x18),&local_68,param_1 + 0x138);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  FUN_00f95a20(&local_68,"gfx2/texture/env_titan/default_atm_scattering.bntx");
  FUN_00f2babc(param_1 + 0x140,0,&local_68,0,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar8 = FUN_00f959f4(*(undefined8 *)(param_1 + 0x148),0);
  uVar8 = FUN_00ec0c08(*(undefined8 *)(param_1 + 0x148),uVar8);
  local_68 = plVar11;
  lVar9 = FUN_00cf3764(auStack_38,plVar11[1],&local_68);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) goto LAB_00f959cc;
  }
  FUN_00ec0d30(lVar9,uVar8,1);
  plVar10 = *(long **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10 + 5;
    do {
      lVar6 = *plVar12;
      iVar3 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_00f959a4;
  }
  *(long *)(param_1 + 0x180) = lVar9;
  local_68 = (long *)&DAT_185ccfbaed9ac868;
  puStack_60 = PTR_s_DefaultAtmScattering_047e1298;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_01344120(*(undefined8 *)(param_1 + 0x18),&local_68,param_1 + 0x180);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  FUN_00f95a20(&local_68,"gfx2/texture/env_titan/default_atm_irradiance.bntx");
  FUN_00f2babc(param_1 + 0x188,0,&local_68,0,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar8 = FUN_00f959f4(*(undefined8 *)(param_1 + 400),0);
  uVar8 = FUN_00ec0c08(*(undefined8 *)(param_1 + 400),uVar8);
  local_68 = plVar11;
  lVar9 = FUN_00cf3764(auStack_38,plVar11[1],&local_68);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) goto LAB_00f959cc;
  }
  FUN_00ec0d30(lVar9,uVar8,1);
  plVar10 = *(long **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10 + 5;
    do {
      lVar6 = *plVar12;
      iVar3 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_00f959a4;
  }
  *(long *)(param_1 + 0x1c8) = lVar9;
  local_68 = (long *)&DAT_1da7c1c2bcdf0228;
  puStack_60 = PTR_s_DefaultAtmIrradiance_047e12a0;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_01344120(*(undefined8 *)(param_1 + 0x18),&local_68,param_1 + 0x1c8);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  FUN_00f960b4(&local_68);
  FUN_00f2babc(param_1 + 0x1d0,0,&local_68,0,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar8 = FUN_00f959f4(*(undefined8 *)(param_1 + 0x1d8),0);
  uVar8 = FUN_00ec0c08(*(undefined8 *)(param_1 + 0x1d8),uVar8);
  local_68 = plVar11;
  lVar9 = FUN_00cf3764(auStack_38,plVar11[1],&local_68);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) goto LAB_00f959cc;
  }
  FUN_00ec0d30(lVar9,uVar8,1);
  plVar10 = *(long **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10 + 5;
    do {
      lVar6 = *plVar12;
      iVar3 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_00f959a4;
  }
  *(long *)(param_1 + 0x210) = lVar9;
  local_68 = (long *)&DAT_8f7c9b1091ff301;
  puStack_60 = PTR_s_DefaultAtmTransmittance_047e12a8;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_01344120(*(undefined8 *)(param_1 + 0x18),&local_68,param_1 + 0x210);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  FUN_00f95a20(&local_68,"gfx2/texture/env_titan/default_atm_blue_noise.bntx");
  FUN_00f2babc(param_1 + 0x218,0,&local_68,0,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar8 = FUN_00f959f4(*(undefined8 *)(param_1 + 0x220),0);
  uVar8 = FUN_00ec0c08(*(undefined8 *)(param_1 + 0x220),uVar8);
  local_68 = plVar11;
  lVar9 = FUN_00cf3764(auStack_38,plVar11[1],&local_68);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) {
LAB_00f959cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_00ec0d30(lVar9,uVar8,1);
  plVar10 = *(long **)(param_1 + 600);
  *(undefined8 *)(param_1 + 600) = 0;
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10 + 5;
    do {
      lVar6 = *plVar12;
      iVar3 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_00f959a4;
  }
  *(long *)(param_1 + 600) = lVar9;
  local_68 = (long *)0xbb9670deeeb142fc;
  puStack_60 = PTR_s_DefaultAtmBlueNoise_047e12b0;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_01344120(*(undefined8 *)(param_1 + 0x18),&local_68,param_1 + 600);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar10 = plVar11 + 5;
  do {
    lVar9 = *plVar10;
    iVar3 = (int)lVar9 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *(int *)plVar10 = iVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  else if ((int)lVar9 == 0) {
LAB_00f959a4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


