/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bec54; name: FUN_019bec54
 */


void FUN_019bec54(long param_1,undefined2 *param_2,int param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  char cVar9;
  bool bVar10;
  undefined2 *puVar11;
  int iVar12;
  long lVar13;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_48;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar3 = *(uint *)(param_2 + 2);
  iVar4 = *(int *)(param_2 + 4);
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  local_48 = param_4;
  FUN_019c0074(&local_68,param_1,uVar5);
  if (local_68 != (long *)0x0) {
    local_78 = 0;
    local_70 = 0;
    local_88 = (undefined2 *)0x0;
    local_80 = 0;
    if ((uVar3 >> 1 & 1) == 0) {
      lVar13 = *local_68;
      puVar11 = param_2 + 8;
      iVar12 = param_3 + -0x10;
    }
    else {
      FUN_019bee88(&local_a8,local_68,iVar4,param_2 + 8,param_3 + -0x10);
      lVar13 = local_a8;
      local_a8 = 0;
      FUN_019bede8(&local_88,lVar13);
      local_80 = local_a0;
      local_78 = uStack_98;
      local_70 = local_90;
      FUN_019bede8(&local_a8,0);
      lVar13 = *local_68;
      puVar11 = local_88;
      iVar12 = iVar4;
    }
    (**(code **)(lVar13 + 0x70))(local_68,puVar11,iVar12);
    *(undefined2 *)(local_68 + 8) = uVar5;
    *(undefined2 *)((long)local_68 + 0x42) = uVar6;
    *(uint *)((long)local_68 + 0x44) = uVar3;
    *(int *)(local_68 + 9) = iVar4;
    *(undefined2 *)((long)local_68 + 0x4c) = uVar7;
    *(undefined2 *)((long)local_68 + 0x4e) = uVar8;
    local_a8 = param_1;
    FUN_019beef4(*(undefined8 *)(param_1 + 0x68),&local_a8,&local_68,&local_48);
    FUN_019bede8(&local_88,0);
    if (local_68 != (long *)0x0) {
      lVar13 = local_68[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar2 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


