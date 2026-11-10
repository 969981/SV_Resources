/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c45c0; name: FUN_015c45c0
 */


void FUN_015c45c0(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  FUN_015c4eb4();
  param_1[6] = &PTR_LAB_04554520;
  *param_1 = &DAT_045544a0;
  param_1[4] = &PTR_LAB_045544e8;
  param_1[5] = &PTR_LAB_04554508;
  FUN_015c486c(param_1 + 7);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_015c4c80(param_1 + 0x11);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_015c4860(param_1 + 0x1b);
  FUN_015c4860((long)param_1 + 0xe3);
  FUN_015c4860((long)param_1 + 0xee);
  FUN_015c4860((long)param_1 + 0xf9);
  *(undefined2 *)((long)param_1 + 0x104) = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined2 *)((long)param_1 + 0x11c) = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  FUN_015c4878((long)param_1 + 0x134);
  FUN_015c4878((long)param_1 + 0x144);
  FUN_015c4878((long)param_1 + 0x154);
  FUN_015c4878((long)param_1 + 0x164);
  FUN_015c52ec(param_1 + 0x2f);
  *(undefined1 *)(param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x156) = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined1 *)((long)param_1 + 0xacc) = 0;
  param_1[0x164] = 0;
  *(undefined1 *)(param_1 + 0x165) = 0;
  *(undefined1 *)(param_1 + 0x163) = 0xff;
  param_1[0x167] = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x166) = 0xff;
  param_1[0x16a] = 0;
  *(undefined1 *)(param_1 + 0x16b) = 0;
  *(undefined1 *)(param_1 + 0x169) = 0xff;
  param_1[0x16d] = 0;
  *(undefined1 *)(param_1 + 0x16c) = 0xff;
  *(undefined1 *)(param_1 + 0x16e) = 0;
  FUN_015c4894(param_1 + 0x16f);
  FUN_015c4fdc(param_1);
  if (((*PTR_DAT_047da9b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047da9b8), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047daa28,PTR_DAT_047da9c0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da9b8);
  }
  lVar8 = *(long *)PTR_DAT_047da9c0;
  *(long *)PTR_DAT_047da9c8 = lVar8;
  if (lVar8 != 0) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    local_30 = 1;
    local_38 = param_1 + 6;
    FUN_015c48c8(lVar8,&local_48);
    puVar6 = local_48;
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
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
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
  }
  return;
}


