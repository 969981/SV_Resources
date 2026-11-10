/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016611b4; name: FUN_016611b4
 */


void FUN_016611b4(long param_1,byte *param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  size_t sVar10;
  undefined8 *puVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined1 *local_f8;
  undefined1 *local_f0;
  byte *pbStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_48;
  
  plVar7 = DAT_0485a0e8;
  if (DAT_0485a0e8 != (long *)0x0) {
    plVar1 = DAT_0485a0e8 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    puVar14 = &DAT_cbf29ce484222645;
    local_48 = FUN_00d4e220(plVar7,param_3,0);
    local_f0 = &DAT_cbf29ce484222645;
    local_70 = 0;
    uStack_68 = 0;
    bVar2 = *param_2;
    if (bVar2 != 0) {
      local_f0 = &DAT_cbf29ce484222645;
      pbVar13 = param_2;
      do {
        pbVar13 = pbVar13 + 1;
        local_f0 = (undefined1 *)(((ulong)local_f0 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar13;
      } while (bVar2 != 0);
    }
    local_e0 = 0x12;
    local_d8 = (long *)0x0;
    pbStack_e8 = param_2;
    FUN_00c73100(plVar7,&local_48,&local_f0,&local_70);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    memset(&local_f0,0,0x80);
    strcat((char *)&local_f0,(char *)param_2);
    sVar10 = strlen((char *)&local_f0);
    *(undefined2 *)((long)&local_f0 + sVar10) = 0x5f;
    strcat((char *)&local_f0,*(char **)(param_3 + 8));
    uVar9 = uStack_68;
    uVar8 = local_70;
    uVar12 = (ulong)local_f0 & 0xff;
    if ((char)local_f0 != '\0') {
      pbVar13 = (byte *)((ulong)&local_f0 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar12) * 0x100000001b3);
        bVar2 = *pbVar13;
        uVar12 = (ulong)bVar2;
        pbVar13 = pbVar13 + 1;
      } while (bVar2 != 0);
    }
    local_f8 = puVar14;
    puVar11 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_f8);
    *puVar11 = PTR_LAB_047dce78;
    puVar11[3] = uVar9;
    puVar11[2] = uVar8;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


