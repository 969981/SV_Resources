/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a781f8; name: FUN_01a781f8
 */


void FUN_01a781f8(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte local_74 [4];
  undefined1 auStack_70 [24];
  ulong local_58;
  ulong uStack_50;
  undefined8 local_48;
  long *local_28;
  
  lVar7 = FUN_01a78400(param_1,*param_2);
  if ((((*(long *)(lVar7 + 0x88) != 0) && (*(short *)(*(long *)(lVar7 + 0x88) + 0x1a) != 0)) ||
      (uVar9 = FUN_013f7d04(lVar7 + 0x70), (uVar9 & 1) != 0)) &&
     (lVar7 = *(long *)(lVar7 + 0x80), lVar7 != 0)) {
    local_48 = 0;
    local_58 = 0xf4b17a579f18960;
    uStack_50 = 0x82a2b175229d6a5b;
    FUN_00d1af18(&local_58);
    FUN_014410c0(&local_28,*(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x4c)));
    uVar10 = FUN_01025bc4(local_28,*param_2 + (ulong)*(uint *)(param_1 + 100));
    uVar8 = FUN_00e03574(local_28,*param_2 + (ulong)*(uint *)(param_1 + 0x6c));
    uVar5 = FUN_00e03574(local_28,*param_2 + (ulong)*(uint *)(param_1 + 0x70));
    uVar6 = FUN_00e03574(local_28,*param_2 + (ulong)*(uint *)(param_1 + 0x74));
    uVar9 = uStack_50 + local_58;
    uStack_50 = uStack_50 ^ local_58;
    local_58 = uStack_50 ^ (local_58 >> 0x28 | local_58 << 0x18) ^ uStack_50 << 0x10;
    uStack_50 = uStack_50 >> 0x1b | uStack_50 << 0x25;
    local_74[0] = FUN_014ea828(uVar10,(float)uVar9 * 5.421011e-20 + 0.0,lVar7,auStack_70,
                               1L << (uVar8 & 0x3f),uVar5,uVar6);
    local_74[0] = local_74[0] & 1;
    FUN_00d8d2c8(local_28,*param_2 + (ulong)*(uint *)(param_1 + 0x68),local_74);
    FUN_00dc4890(local_28,*param_2 + (ulong)*(uint *)(param_1 + 0x60),auStack_70);
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[6];
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
        (**(code **)(*local_28 + 0x50))();
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


