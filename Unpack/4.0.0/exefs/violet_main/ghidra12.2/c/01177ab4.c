/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01177ab4; name: FUN_01177ab4
 */


void FUN_01177ab4(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  long *local_b0;
  code *local_a8;
  code *local_a0;
  undefined *local_98;
  long *local_90 [12];
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar9 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar9;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar11 = param_1 + 5;
  *plVar11 = (long)(puVar5 + 0xd8);
  plVar12 = param_1 + 6;
  *plVar12 = 0;
  param_1[7] = 0;
  FUN_00d1a3f4(plVar12,plVar11);
  *param_1 = (long)&PTR_LAB_04560170;
  param_1[4] = (long)&PTR_LAB_04560208;
  *plVar11 = (long)&DAT_04560258;
  *(undefined4 *)(param_1 + 9) = 1;
  puVar5 = PTR_DAT_047d5280;
  param_1[10] = 0;
  lVar7 = *(long *)puVar5;
  param_1[8] = lVar7;
  lVar9 = *plVar12;
  local_b0 = param_1;
  if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar8;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  FUN_01177f78(lVar7 + 0x338,&local_b0);
  if (local_b0 != (long *)0x0) {
    lVar7 = local_b0[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_b0 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar7 = param_1[8];
  local_b0 = (long *)PTR_FUN_047dae28;
  local_a8 = (code *)PTR_FUN_047dae30;
  local_a0 = (code *)PTR_FUN_047dae38;
  local_98 = PTR_LAB_047dae40;
  pcVar10 = *(code **)(lVar7 + 0x138);
  local_90[0] = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_01177c20:
    (*local_a0)(local_90,lVar7 + 0x150);
    *(undefined **)(lVar7 + 0x148) = local_98;
    *(undefined8 *)(lVar7 + 0x130) = local_b0;
    *(code **)(lVar7 + 0x138) = local_a8;
    *(code **)(lVar7 + 0x140) = local_a0;
  }
  else {
    *(undefined8 *)(lVar7 + 0x140) = 0;
    *(undefined8 *)(lVar7 + 0x148) = 0;
    *(undefined8 *)(lVar7 + 0x130) = 0;
    *(undefined8 *)(lVar7 + 0x138) = 0;
    (*pcVar10)(lVar7 + 0x150);
    if (local_a0 != (code *)0x0) goto LAB_01177c20;
  }
  pcVar10 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined *)0x0;
    local_b0 = (long *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar10)(local_90);
  }
  lVar7 = param_1[8];
  local_b0 = (long *)PTR_LAB_047dae48;
  local_a8 = (code *)PTR_FUN_047dae50;
  local_a0 = (code *)PTR_FUN_047dae58;
  local_98 = PTR_LAB_047dae60;
  pcVar10 = *(code **)(lVar7 + 0x1b8);
  local_90[0] = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_01177cbc:
    (*local_a0)(local_90,lVar7 + 0x1d0);
    *(undefined **)(lVar7 + 0x1c8) = local_98;
    *(undefined8 *)(lVar7 + 0x1b0) = local_b0;
    *(code **)(lVar7 + 0x1b8) = local_a8;
    *(code **)(lVar7 + 0x1c0) = local_a0;
  }
  else {
    *(undefined8 *)(lVar7 + 0x1c0) = 0;
    *(undefined8 *)(lVar7 + 0x1c8) = 0;
    *(undefined8 *)(lVar7 + 0x1b0) = 0;
    *(undefined8 *)(lVar7 + 0x1b8) = 0;
    (*pcVar10)(lVar7 + 0x1d0);
    if (local_a0 != (code *)0x0) goto LAB_01177cbc;
  }
  pcVar10 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined *)0x0;
    local_b0 = (long *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar10)(local_90);
  }
  lVar7 = param_1[8];
  local_b0 = (long *)PTR_LAB_047dae68;
  local_a8 = (code *)PTR_FUN_047dae70;
  local_a0 = (code *)PTR_FUN_047dae78;
  local_98 = PTR_LAB_047dae80;
  pcVar10 = *(code **)(lVar7 + 0x238);
  local_90[0] = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_01177d58:
    (*local_a0)(local_90,lVar7 + 0x250);
    *(undefined **)(lVar7 + 0x248) = local_98;
    *(undefined8 *)(lVar7 + 0x230) = local_b0;
    *(code **)(lVar7 + 0x238) = local_a8;
    *(code **)(lVar7 + 0x240) = local_a0;
  }
  else {
    *(undefined8 *)(lVar7 + 0x240) = 0;
    *(undefined8 *)(lVar7 + 0x248) = 0;
    *(undefined8 *)(lVar7 + 0x230) = 0;
    *(undefined8 *)(lVar7 + 0x238) = 0;
    (*pcVar10)(lVar7 + 0x250);
    if (local_a0 != (code *)0x0) goto LAB_01177d58;
  }
  pcVar10 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined *)0x0;
    local_b0 = (long *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar10)(local_90);
  }
  lVar7 = param_1[8];
  local_b0 = (long *)PTR_LAB_047dae88;
  local_a8 = (code *)PTR_FUN_047dae90;
  local_a0 = (code *)PTR_FUN_047dae98;
  local_98 = PTR_LAB_047daea0;
  pcVar10 = *(code **)(lVar7 + 0x2b8);
  local_90[0] = param_1;
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x2c0) = 0;
    *(undefined8 *)(lVar7 + 0x2c8) = 0;
    *(undefined8 *)(lVar7 + 0x2b0) = 0;
    *(undefined8 *)(lVar7 + 0x2b8) = 0;
    (*pcVar10)(lVar7 + 0x2d0);
    if (local_a0 == (code *)0x0) goto LAB_01177e1c;
  }
  (*local_a0)(local_90,lVar7 + 0x2d0);
  *(undefined **)(lVar7 + 0x2c8) = local_98;
  *(undefined8 *)(lVar7 + 0x2b0) = local_b0;
  *(code **)(lVar7 + 0x2b8) = local_a8;
  *(code **)(lVar7 + 0x2c0) = local_a0;
LAB_01177e1c:
  pcVar10 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined *)0x0;
    local_b0 = (long *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar10)(local_90);
  }
  return;
}


