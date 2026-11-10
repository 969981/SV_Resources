/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01861330; name: FUN_01861330
 */


void FUN_01861330(long param_1,byte *param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  size_t sVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined1 *local_e8;
  undefined1 *local_e0;
  byte *pbStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined4 local_5c;
  undefined8 local_58;
  
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
    puVar13 = &DAT_cbf29ce484222645;
    local_58 = FUN_00d4e220(plVar7,param_3,0);
    local_e0 = &DAT_cbf29ce484222645;
    local_5c = 0;
    bVar2 = *param_2;
    if (bVar2 != 0) {
      local_e0 = &DAT_cbf29ce484222645;
      pbVar12 = param_2;
      do {
        pbVar12 = pbVar12 + 1;
        local_e0 = (undefined1 *)(((ulong)local_e0 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar12;
      } while (bVar2 != 0);
    }
    local_d0 = 10;
    local_c8 = (long *)0x0;
    pbStack_d8 = param_2;
    FUN_00d4a2a4(plVar7,&local_58,&local_e0,&local_5c);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    memset(&local_e0,0,0x80);
    strcat((char *)&local_e0,(char *)param_2);
    sVar9 = strlen((char *)&local_e0);
    *(undefined2 *)((long)&local_e0 + sVar9) = 0x5f;
    strcat((char *)&local_e0,*(char **)(param_3 + 8));
    uVar8 = local_5c;
    uVar11 = (ulong)local_e0 & 0xff;
    if ((char)local_e0 != '\0') {
      pbVar12 = (byte *)((ulong)&local_e0 | 1);
      do {
        puVar13 = (undefined1 *)(((ulong)puVar13 ^ uVar11) * 0x100000001b3);
        bVar2 = *pbVar12;
        uVar11 = (ulong)bVar2;
        pbVar12 = pbVar12 + 1;
      } while (bVar2 != 0);
    }
    local_e8 = puVar13;
    puVar10 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_e8);
    *(undefined4 *)(puVar10 + 2) = uVar8;
    *puVar10 = PTR_LAB_047dcdf0;
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


