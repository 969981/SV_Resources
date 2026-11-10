/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e94e9c; name: FUN_01e94e9c
 */


void FUN_01e94e9c(undefined8 *param_1,long param_2,undefined1 param_3,byte *param_4)

{
  short *psVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined1 *local_68;
  byte *pbStack_60;
  size_t local_58;
  long *local_50;
  long *local_48;
  undefined1 local_24 [4];
  
  local_24[0] = param_3;
  if ((*(long **)(param_2 + 0x28) == (long *)0x0) ||
     (uVar7 = (**(code **)(**(long **)(param_2 + 0x28) + 0x68))(), (uVar7 & 1) != 0)) {
    uVar10 = *(undefined8 *)(param_2 + 8);
    if (param_4 == (byte *)0x0) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_68 = *(undefined1 **)PTR_DAT_047d3e30;
      pbStack_60 = *(byte **)(PTR_DAT_047d3e30 + 8);
      local_58 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
      local_50 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x18))();
      }
    }
    else {
      local_58 = strlen((char *)param_4);
      bVar3 = *param_4;
      local_68 = &DAT_cbf29ce484222645;
      pbVar9 = param_4;
      while (bVar3 != 0) {
        pbVar9 = pbVar9 + 1;
        local_68 = (undefined1 *)(((ulong)local_68 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar9;
      }
      local_50 = (long *)0x0;
      pbStack_60 = param_4;
    }
    FUN_01e95f7c(&local_48,uVar10,local_24,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_48 != (long *)0x0) {
      FUN_01c5dc58(param_2 + 0x28,local_48);
      FUN_01e9553c(param_1,*(undefined8 *)(param_2 + 0x28));
      lVar8 = local_48[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_48 + 0x50))(local_48);
        return;
      }
      if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


