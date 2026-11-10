/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02990afc; name: FUN_02990afc
 */


void FUN_02990afc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_50;
  long lStack_48;
  long local_40;
  undefined8 local_38;
  
  uVar7 = *(undefined8 *)(param_1 + 8);
  lStack_48 = param_1 + 0xa0;
  local_40 = param_1 + 0x98;
  local_50 = (long *)0x0;
  local_38 = FUN_010a01f0(*(undefined8 *)(param_1 + 0x38));
  local_80 = FUN_010b00c8(*(undefined8 *)(param_1 + 0x58));
  local_78 = FUN_010b00d0(*(undefined8 *)(param_1 + 0x58));
  local_70 = FUN_014f5ef8(*(undefined8 *)(param_1 + 0x58));
  local_60 = FUN_010b00b8(*(undefined8 *)(param_1 + 0x58));
  local_68 = FUN_010b00c0(*(undefined8 *)(param_1 + 0x58));
  FUN_010b00e0(&local_a0,uVar7,&local_80);
  lVar6 = local_a0;
  local_a0 = 0;
  lVar5 = *(long *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = lVar6;
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x88) = local_90;
    *(undefined8 *)(param_1 + 0x90) = local_88;
    *(undefined8 *)(param_1 + 0x80) = local_98;
    local_a0 = 0;
  }
  else {
    FUN_010b03b0(param_1 + 0x80);
    lVar6 = local_a0;
    *(undefined8 *)(param_1 + 0x80) = local_98;
    *(undefined8 *)(param_1 + 0x88) = local_90;
    *(undefined8 *)(param_1 + 0x90) = local_88;
    local_a0 = 0;
    if (lVar6 != 0) {
      FUN_010b03b0(&local_98);
    }
  }
  if (local_50 != (long *)0x0) {
    lVar6 = local_50[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


