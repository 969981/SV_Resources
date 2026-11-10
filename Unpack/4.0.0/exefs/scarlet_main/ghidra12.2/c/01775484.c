/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01775484; name: FUN_01775484
 */


void FUN_01775484(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  code *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  long local_110;
  long lStack_108;
  undefined8 *local_100;
  undefined8 local_b0;
  undefined *puStack_a8;
  size_t local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined4 local_70;
  
  *param_1 = (long)&DAT_045deef0;
  param_1[4] = (long)&PTR_LAB_045df040;
  param_1[5] = (long)&DAT_045df168;
  param_1[6] = (long)&PTR_LAB_045df1c0;
  param_1[7] = (long)&PTR_LAB_045df1e8;
  puVar3 = PTR_s_EnableVATMap_047e2038;
  local_a0 = strlen(PTR_s_EnableVATMap_047e2038);
  local_70 = 0;
  local_b0 = 0xe57cc745d0061299;
  puStack_a8 = puVar3;
  local_90 = 0x3dd19bc2820b81b8;
  pcStack_88 = "False";
  local_98 = (long *)0x0;
  local_80 = 5;
  local_78 = (long *)0x0;
  lVar11 = param_1[0x24];
  if (lVar11 != 0) {
    lVar14 = param_1[0x27];
    lVar13 = *(long *)(lVar14 + 0x210);
    if (*(long *)(lVar14 + 0x218) != lVar13) {
      lVar15 = 0;
      uVar16 = 0;
      lVar1 = DAT_0485a0d8 + 0x38;
      do {
        local_110 = lVar13 + lVar15;
        local_100 = &local_b0;
        local_130 = thunk_FUN_02781480;
        local_128 = FUN_02bda7d8;
        local_120 = &LAB_02bda7dc;
        puStack_118 = &LAB_02bda7f0;
        lStack_108 = lVar1;
        FUN_01775724(lVar11,&local_130);
        pcVar10 = local_128;
        if (local_128 != (code *)0x0) {
          local_120 = (undefined1 *)0x0;
          puStack_118 = (undefined1 *)0x0;
          local_130 = (code *)0x0;
          local_128 = (code *)0x0;
          (*pcVar10)(&local_110);
        }
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 0x88;
        lVar13 = *(long *)(lVar14 + 0x210);
        lVar11 = param_1[0x24];
      } while (uVar16 < (ulong)((*(long *)(lVar14 + 0x218) - lVar13 >> 3) * -0xf0f0f0f0f0f0f0f));
      if (lVar11 == 0) goto LAB_01775618;
    }
    (**(code **)(*param_1 + 0x138))(param_1);
    plVar12 = (long *)param_1[0x24];
    param_1[0x24] = 0;
    if (plVar12 != (long *)0x0) {
      plVar2 = plVar12 + 5;
      do {
        lVar11 = *plVar2;
        iVar9 = (int)lVar11 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *(int *)plVar2 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_017756fc;
    }
  }
LAB_01775618:
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  FUN_0177591c(param_1 + 0x3c);
  FUN_0177591c(param_1 + 0x35);
  FUN_0177591c(param_1 + 0x2e);
  FUN_017759ec(param_1 + 0x26);
  plVar12 = (long *)param_1[0x24];
  puVar3 = PTR_DAT_047e1f98 + 0x160;
  puVar4 = PTR_DAT_047e1f98 + 0x288;
  puVar5 = PTR_DAT_047e1f98 + 0x2e0;
  puVar6 = PTR_DAT_047e1f98 + 0x308;
  *param_1 = (long)(PTR_DAT_047e1f98 + 0x10);
  param_1[4] = (long)puVar3;
  param_1[5] = (long)puVar4;
  param_1[6] = (long)puVar5;
  param_1[7] = (long)puVar6;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 5;
    do {
      lVar11 = *plVar2;
      iVar9 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(int *)plVar2 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_017756fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


