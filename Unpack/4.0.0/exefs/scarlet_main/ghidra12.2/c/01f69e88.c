/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f69e88; name: FUN_01f69e88
 */


undefined8 FUN_01f69e88(long param_1,long param_2)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  ulong local_40;
  ulong uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar7 = FUN_019c7a40(param_2);
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    local_30 = 0;
    local_40 = 0xf4b17a579f18960;
    uStack_38 = 0x82a2b175229d6a5b;
    FUN_00d1af18(&local_40);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 1;
    bVar6 = FUN_00ea2ae8(param_2);
    *(byte *)(param_1 + 0x1c) = bVar6 & 1;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    iVar10 = (int)uStack_38;
    iVar9 = (int)local_40;
    uVar7 = local_40 ^ uStack_38;
    uStack_38 = uVar7 >> 0x1b | uVar7 << 0x25;
    local_40 = uVar7 ^ (local_40 >> 0x28 | local_40 << 0x18) ^ uVar7 << 0x10;
    uVar2 = iVar9 + iVar10;
    while (300 < (uVar2 & 0x1ff)) {
      uVar7 = local_40 ^ uStack_38;
      iVar9 = (int)uStack_38;
      iVar10 = (int)local_40;
      uStack_38 = uVar7 >> 0x1b | uVar7 << 0x25;
      local_40 = uVar7 ^ (local_40 >> 0x28 | local_40 << 0x18) ^ uVar7 << 0x10;
      uVar2 = iVar10 + iVar9;
    }
    *(uint *)(param_1 + 0x20) = (uVar2 & 0x1ff) + 2;
    uVar8 = FUN_01f6a080(*(undefined8 *)(param_1 + 8));
    FUN_01f6a1a8(&local_48,uVar8);
    local_28 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_01f69e10(&local_28);
    uVar8 = local_48;
    local_48 = 0;
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    FUN_01f69e10(&local_48);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    local_60 = 0;
    uStack_58 = 0;
    FUN_00d8e6c4(&local_60,param_2);
    local_50 = *(long *)(param_2 + 0x10);
    if (local_50 != 0) {
      lVar11 = *(long *)(local_50 + 0x30);
      if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar8;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    uVar8 = 1;
    FUN_01f6a264(uVar12,&local_60,1);
    FUN_00d8e444(&local_60);
  }
  return uVar8;
}


