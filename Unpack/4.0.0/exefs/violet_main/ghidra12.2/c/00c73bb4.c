/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c73bb4; name: FUN_00c73bb4
 */


undefined1 FUN_00c73bb4(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  undefined1 *local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0 [13];
  undefined1 local_34 [4];
  
  local_34[0] = 0;
  plVar6 = (long *)FUN_00c73d48();
  lVar7 = *plVar6;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00c73c28;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00c73c28:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return local_34[0];
        }
        local_a0[0] = local_34;
        plVar6 = (long *)(lVar7 + -0x28);
        local_c0 = &LAB_00a95e08;
        local_b8 = FUN_00a95e18;
        local_b0 = &LAB_00a95e1c;
        puStack_a8 = &LAB_00a95e28;
        local_e0 = &DAT_afc4d6c05abef19e;
        pcStack_d8 = "default";
        local_d0 = 7;
        local_c8 = (long *)0x0;
        FUN_01e17b9c(plVar6,param_2,&local_c0,&local_e0);
        if (local_c8 != (long *)0x0) {
          (**(code **)(*local_c8 + 0x20))();
        }
        pcVar5 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = (undefined1 *)0x0;
          puStack_a8 = (undefined1 *)0x0;
          local_c0 = (undefined1 *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar5)(local_a0);
        }
        lVar7 = *(long *)(lVar7 + 0x70);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))(plVar6);
          return local_34[0];
        }
        if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return local_34[0];
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return local_34[0];
}


