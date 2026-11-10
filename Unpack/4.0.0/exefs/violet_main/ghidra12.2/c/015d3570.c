/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d3570; name: FUN_015d3570
 */


void FUN_015d3570(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  
  FUN_00db2500(param_1 + 1);
  FUN_00fba0b8(param_1 + 2,param_2 + 8);
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 != 0) {
    lVar12 = *(long *)(lVar8 + 0x30);
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar7;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar5 = (long *)param_1[4];
  param_1[4] = lVar8;
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[6];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00cef9d0(param_1 + 5,param_2 + 0x20);
  FUN_00ceffd4(param_1 + 7,param_2 + 0x30);
  if ((param_1[2] == 0) || ((*(byte *)(param_1[2] + 0x1e8) & 1) == 0)) {
    param_1[9] = 0x3c00000000;
    *(undefined4 *)(param_1 + 10) = 0x3f800000;
    *(undefined8 *)((long)param_1 + 0x54) = 0;
    *(undefined8 *)((long)param_1 + 0x5a) = 0;
  }
  else {
    puVar6 = (uint *)(**(code **)(*(long *)param_1[2] + 0x70))();
    uVar10 = *puVar6;
    param_1[9] = 0x3c00000000;
    *(undefined4 *)(param_1 + 10) = 0x3f800000;
    *(undefined8 *)((long)param_1 + 0x54) = 0;
    *(undefined8 *)((long)param_1 + 0x5a) = 0;
    if (puVar6 != (uint *)0x0) {
      piVar9 = (int *)((long)puVar6 + (ulong)uVar10);
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
         (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar11 == 0)) {
        piVar9 = (int *)0x0;
      }
      else {
        puVar6 = (uint *)((long)piVar9 + uVar11);
        piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
      }
      if (*(ushort *)((long)piVar9 - (long)*piVar9) < 5) {
        uVar10 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2];
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = (uint)(*(int *)((long)piVar9 + uVar11) != 0);
        }
      }
      *(uint *)(param_1 + 9) = uVar10;
      if (*(ushort *)((long)piVar9 - (long)*piVar9) < 9) {
        uVar14 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[4];
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = *(undefined4 *)((long)piVar9 + uVar11);
        }
      }
      *(undefined4 *)((long)param_1 + 0x4c) = uVar14;
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
         (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
        fVar13 = 4.2949673e+09;
      }
      else {
        fVar13 = (float)(*(int *)((long)piVar9 + uVar11) - 1);
      }
      *(float *)((long)param_1 + 0x5c) = fVar13;
    }
  }
  plVar5 = (long *)*param_1;
  uVar14 = (**(code **)(*plVar5 + 0x48))(plVar5);
  *(undefined4 *)(param_1 + 0xe) = uVar14;
  uVar14 = (**(code **)(*plVar5 + 0x58))(plVar5);
  *(undefined4 *)((long)param_1 + 0x74) = uVar14;
  uVar14 = (**(code **)(*plVar5 + 0x68))(plVar5);
  *(undefined4 *)(param_1 + 0xf) = uVar14;
  (**(code **)(*plVar5 + 0x30))(plVar5);
  param_1[0x11] = extraout_var_03;
  param_1[0x10] = CONCAT44(extraout_var,extraout_s0);
  (**(code **)(*plVar5 + 0x38))(plVar5);
  param_1[0x13] = extraout_var_04;
  param_1[0x12] = CONCAT44(extraout_var_00,extraout_s0_00);
  (**(code **)(*plVar5 + 0xc0))(plVar5);
  param_1[0x15] = extraout_var_05;
  param_1[0x14] = CONCAT44(extraout_var_01,extraout_s0_01);
  uVar14 = (**(code **)(*plVar5 + 0xd8))(plVar5);
  *(undefined4 *)(param_1 + 0x16) = uVar14;
  (**(code **)(*plVar5 + 0x108))(plVar5);
  param_1[0x19] = extraout_var_06;
  param_1[0x18] = CONCAT44(extraout_var_02,extraout_s0_02);
  return;
}


