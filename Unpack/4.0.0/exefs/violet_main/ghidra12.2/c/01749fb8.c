/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01749fb8; name: FUN_01749fb8
 */


void FUN_01749fb8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *(long *)(param_1 + 0xf8);
  puVar1 = (undefined8 *)(param_1 + 0x108);
  if (lVar13 == *(long *)(param_1 + 0x100)) {
    uVar10 = *(ulong *)(param_1 + 0x110);
    lVar13 = lVar13 - *(long *)(param_1 + 0xf0) >> 3;
    uVar6 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = *(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf0);
    uVar9 = lVar8 >> 2;
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar10 >> 1 <= (ulong)(lVar8 >> 3)) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar6 << 3,8);
      if (lVar8 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    lVar14 = lVar8 + lVar13 * 8;
    FUN_0174a240(puVar1,lVar14,param_2);
    plVar12 = *(long **)(param_1 + 0xf0);
    plVar11 = *(long **)(param_1 + 0xf8);
    lVar13 = lVar14 + 8;
    if (plVar11 == plVar12) {
      plVar11 = plVar12;
    }
    else {
      lVar14 = lVar14 + -8;
      FUN_0174aea4(puVar1,lVar14,plVar11 + -1);
      if (plVar11 + -1 != plVar12) {
        do {
          lVar14 = lVar14 + -8;
          FUN_0174aea4(puVar1,lVar14,plVar11 + -2);
          plVar11 = plVar11 + -1;
        } while (plVar12 + 1 != plVar11);
      }
      plVar12 = *(long **)(param_1 + 0xf0);
      plVar11 = *(long **)(param_1 + 0xf8);
    }
    *(long *)(param_1 + 0xf0) = lVar14;
    *(long *)(param_1 + 0xf8) = lVar13;
    lVar13 = *(long *)(param_1 + 0x100);
    *(ulong *)(param_1 + 0x100) = lVar8 + uVar6 * 8;
    while (plVar11 != plVar12) {
      plVar11 = plVar11 + -1;
      plVar7 = (long *)*plVar11;
      if (plVar7 != (long *)0x0) {
        lVar8 = plVar7[6];
        psVar2 = (short *)(lVar8 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    if (plVar12 != (long *)0x0) {
      plVar11 = (long *)*puVar1;
      lVar13 = lVar13 - (long)plVar12;
      uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar12,lVar13,8);
      }
      else {
        FUN_00c48fe8(plVar11,plVar12,lVar13,8);
      }
    }
  }
  else {
    FUN_0174a240(puVar1,lVar13,param_2);
    *(long *)(param_1 + 0xf8) = lVar13 + 8;
  }
  if (*(int *)(param_1 + 0x48) - 1U < 3) {
    FUN_0174a3b8(param_1);
    return;
  }
  return;
}


