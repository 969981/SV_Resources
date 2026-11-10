/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0199beb4; name: FUN_0199beb4
 */


void FUN_0199beb4(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4,
                 undefined4 param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [16];
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *(long *)(param_4 + 0x48) = param_1._8_8_;
  *(long *)(param_4 + 0x40) = param_1._0_8_;
  *(long *)(param_4 + 0x58) = param_1._8_8_;
  *(long *)(param_4 + 0x50) = param_1._0_8_;
  pcVar8 = *(code **)(param_4 + 0x88);
  *(long *)(param_4 + 0x68) = param_2._8_8_;
  *(long *)(param_4 + 0x60) = param_2._0_8_;
  *(ulong *)(param_4 + 0x78) =
       CONCAT44(param_1._12_4_ - param_1._12_4_,param_1._8_4_ - param_1._8_4_);
  *(ulong *)(param_4 + 0x70) = CONCAT44(param_1._4_4_ - param_1._4_4_,param_1._0_4_ - param_1._0_4_)
  ;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_4 + 0x90) = 0;
    *(undefined8 *)(param_4 + 0x98) = 0;
    *(undefined8 *)(param_4 + 0x80) = 0;
    *(undefined8 *)(param_4 + 0x88) = 0;
    (*pcVar8)(param_4 + 0xa0);
  }
  *(undefined1 **)(param_4 + 0x90) = &LAB_02b8468c;
  pcVar8 = *(code **)(param_4 + 0x108);
  *(undefined1 **)(param_4 + 0x80) = &LAB_02b8466c;
  *(undefined1 **)(param_4 + 0x88) = &LAB_02b84688;
  *(undefined1 **)(param_4 + 0x98) = &LAB_02b84698;
  *(undefined1 **)(param_4 + 0xa0) = &LAB_02b84334;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_4 + 0x110) = 0;
    *(undefined8 *)(param_4 + 0x118) = 0;
    *(undefined8 *)(param_4 + 0x100) = 0;
    *(undefined8 *)(param_4 + 0x108) = 0;
    (*pcVar8)(param_4 + 0x120);
  }
  *(undefined8 *)(param_4 + 0x180) = param_3;
  *(undefined8 *)(param_4 + 0x188) = 0;
  *(undefined4 *)(param_4 + 400) = param_5;
  *(undefined1 **)(param_4 + 0x100) = &LAB_02b846a4;
  *(undefined1 **)(param_4 + 0x108) = &LAB_02b846c0;
  *(undefined1 **)(param_4 + 0x110) = &LAB_02b846c4;
  *(undefined1 **)(param_4 + 0x118) = &LAB_02b846d0;
  *(undefined1 **)(param_4 + 0x120) = &LAB_02b8433c;
  if ((*(byte *)(param_4 + 0x1a0) & 1) != 0) {
    if (((*PTR_DAT_047de6e0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047de6e0), iVar7 != 0)) {
      FUN_00100190(&LAB_02b846dc,PTR_DAT_047de6e8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047de6e0);
    }
    uVar10 = *(undefined8 *)PTR_DAT_047de6e8;
    *(undefined8 *)PTR_DAT_047de6f0 = uVar10;
    FUN_0199b534(auStack_58,param_4);
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_0199b9bc(&local_48,auStack_58);
    uVar10 = FUN_017c6490(uVar10,&local_48,&LAB_02336b40);
    puVar6 = local_48;
    *(undefined8 *)(param_4 + 0x198) = uVar10;
    if (local_48 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48 + 3);
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
        piVar2 = (int *)((long)local_48 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_38);
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
    FUN_0199b424(auStack_58);
  }
  *(byte *)(param_4 + 0x1a0) = 0;
  return;
}


