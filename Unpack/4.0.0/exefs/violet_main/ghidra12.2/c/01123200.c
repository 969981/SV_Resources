/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01123200; name: FUN_01123200
 */


void FUN_01123200(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 local_8;
  
  *param_1 = &DAT_04603590;
  param_1[4] = &PTR_LAB_04603640;
  param_1[5] = &PTR_LAB_046036b0;
  if (((*(char *)(param_1 + 9) != '\0') && (param_1[0x1e] != 0)) &&
     ((*(byte *)(param_1[0x1e] + 0x1e8) & 1) != 0)) {
    FUN_01128f64(param_1[0x1e],param_1 + 10);
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xa1));
  lVar7 = param_1[0x9b];
  param_1[0x9b] = 0;
  if (lVar7 != 0) {
    FUN_011295c4(param_1 + 0x9c);
  }
  lVar7 = param_1[0x97];
  param_1[0x97] = 0;
  if (lVar7 != 0) {
    FUN_01129980(param_1 + 0x98);
  }
  FUN_01126140(param_1 + 0x8e);
  FUN_011268cc(param_1 + 0x86);
  pcVar8 = (code *)param_1[0x77];
  if (pcVar8 != (code *)0x0) {
    param_1[0x79] = 0;
    param_1[0x78] = 0;
    param_1[0x77] = 0;
    param_1[0x76] = 0;
    (*pcVar8)(param_1 + 0x7a);
  }
  if ((long *)param_1[0x75] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x75] + 0x20))();
  }
  FUN_01124854(param_1 + 0x6d);
  FUN_01126fdc(param_1 + 0x65);
  FUN_01127768(param_1 + 0x5d);
  FUN_00db239c(param_1 + 0x55);
  FUN_01127ef4(param_1 + 0x4d);
  FUN_01124e78(param_1 + 0x45);
  FUN_01123e74(param_1 + 0x3d);
  FUN_0112866c(param_1 + 0x35);
  FUN_01125570(param_1 + 0x2d);
  FUN_01125960(param_1 + 0x25);
  FUN_01123498(param_1 + 0x1d);
  FUN_01125d50(param_1 + 0x15);
  FUN_01185de0(param_1 + 0xd);
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 0x20))();
  }
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 0x20))();
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  *param_1 = &PTR_LAB_04603a28;
  param_1[4] = &PTR_LAB_04603aa0;
  param_1[5] = &PTR_LAB_04603b10;
  puVar9 = (undefined8 *)param_1[6];
  if (puVar9 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar9 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar9 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_8 = *puVar9;
        FUN_00c44438(lVar7 + 0x8040,&local_8);
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
  return;
}


