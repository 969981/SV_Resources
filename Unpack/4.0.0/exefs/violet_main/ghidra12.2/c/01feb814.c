/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01feb814; name: FUN_01feb814
 */


bool FUN_01feb814(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  
  lVar6 = FUN_01febac4(param_1,*param_2);
  if ((((*(long *)(lVar6 + 0x88) == 0) || (*(short *)(*(long *)(lVar6 + 0x88) + 0x1a) == 0)) &&
      (uVar8 = FUN_013f7d04(lVar6 + 0x70), (uVar8 & 1) == 0)) ||
     ((*(long *)(lVar6 + 0x80) == 0 ||
      (plVar10 = *(long **)(*(long *)(lVar6 + 0x80) + 0x200), plVar10 == (long *)0x0)))) {
    return false;
  }
  lVar6 = plVar10[6];
  if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar6 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    *(undefined8 *)(lVar6 + 8) = uVar7;
    *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  fVar11 = (float)FUN_01ebd484(plVar10);
  lVar6 = *param_2;
  lVar9 = *(long *)(lVar6 + (ulong)*(uint *)(param_1 + 0x60));
  bVar5 = false;
  if (lVar9 < 0x137e8707be8470ef) {
    if (lVar9 == -0x5098eeb379f8a065) {
      bVar5 = fVar11 < *(float *)(lVar6 + (ulong)*(uint *)(param_1 + 100));
    }
    else {
      if (lVar9 == -0x5098ecb379f89cff) {
        fVar12 = *(float *)(lVar6 + (ulong)*(uint *)(param_1 + 100));
      }
      else {
        if (lVar9 != 0x133a8707be4aa423) goto LAB_01feb9cc;
        fVar11 = ABS(fVar11 - *(float *)(lVar6 + (ulong)*(uint *)(param_1 + 100)));
        fVar12 = 1.1920929e-07;
      }
      bVar5 = fVar12 < fVar11;
    }
  }
  else if (lVar9 == 0x13890707be8d9ef4) {
    bVar5 = *(float *)(lVar6 + (ulong)*(uint *)(param_1 + 100)) <= fVar11;
  }
  else {
    if (lVar9 == 0x13820b07be878712) {
      fVar12 = *(float *)(lVar6 + (ulong)*(uint *)(param_1 + 100));
    }
    else {
      if (lVar9 != 0x137e8707be8470ef) goto LAB_01feb9cc;
      fVar11 = ABS(fVar11 - *(float *)(lVar6 + (ulong)*(uint *)(param_1 + 100)));
      fVar12 = 1.1920929e-07;
    }
    bVar5 = fVar11 <= fVar12;
  }
LAB_01feb9cc:
  lVar6 = plVar10[6];
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
    (**(code **)(*plVar10 + 0x50))(plVar10);
  }
  else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return bVar5;
}


