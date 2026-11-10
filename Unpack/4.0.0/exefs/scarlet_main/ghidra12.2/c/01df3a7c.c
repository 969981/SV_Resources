/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df3a7c; name: FUN_01df3a7c
 */


undefined8 FUN_01df3a7c(long param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  ushort uVar15;
  uint uVar16;
  undefined4 local_1d4;
  undefined8 *local_1d0 [4];
  undefined1 auStack_1b0 [344];
  undefined1 auStack_58 [8];
  
  if ((*(long *)(param_1 + 0x98) == 0) ||
     (lVar13 = *(long *)(*(long *)(param_1 + 0x98) + 0x10), lVar13 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc0) != 2) {
    return 0;
  }
  plVar14 = (long *)(lVar13 + -0x28);
  memset(auStack_1b0,0,0x158);
  FUN_00f329b4(param_2,auStack_1b0);
  FUN_016947d8(local_1d0);
  local_1d4 = 2;
  if (local_1d0[0] == (undefined8 *)0x0) {
    uVar11 = FUN_0111b1ec(plVar14,*(undefined8 *)(param_1 + 0x90));
    uVar12 = 0;
    if ((uVar11 & 1) == 0) goto LAB_01df3c54;
    uVar12 = 0;
    uVar4 = 0;
LAB_01df3ba8:
    uVar11 = (**(code **)(*plVar14 + 0x68))(plVar14,uVar12,uVar4,param_1 + 0x90);
    if ((uVar11 & 1) != 0) {
      lVar13 = FUN_00fee8fc(auStack_58,*(undefined8 *)(param_1 + 8));
      if (lVar13 != 0) {
        piVar2 = (int *)(lVar13 + 0x28);
        do {
          iVar9 = *piVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = iVar9 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar14 = *(long **)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xb0) = 0;
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 5;
        do {
          lVar10 = *plVar1;
          iVar9 = (int)lVar10 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
        else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      *(long *)(param_1 + 0xb0) = lVar13;
      FUN_00feea48(lVar13,param_2);
      uVar12 = 1;
      uVar6 = *(undefined2 *)(param_3 + 1);
      *(undefined4 *)(param_1 + 0xa8) = *param_3;
      *(undefined2 *)(param_1 + 0xac) = uVar6;
      *(undefined4 *)(param_1 + 0xc0) = 3;
      goto LAB_01df3c54;
    }
  }
  else {
    FUN_01f678f4(auStack_58,&local_1d4,local_1d0[0] + 1);
    uVar15 = *(ushort *)(param_1 + 0xe0);
    uVar16 = 0xffffff80;
    if (0xff < uVar15) {
      uVar16 = 0xffffff81;
    }
    uVar3 = (uint)uVar15;
    if (0x7f < uVar15) {
      uVar3 = uVar16;
    }
    lVar13 = FUN_0111b030(uVar3);
    if ((ulong)(local_1d0[0][3] + lVar13) <= (ulong)local_1d0[0][2]) {
      uVar5 = *(ushort *)(param_1 + 0xe0);
      uVar15 = 0xff80;
      if (0xff < uVar5) {
        uVar15 = 0xff81;
      }
      if (0x7f < uVar5) {
        uVar5 = uVar15;
      }
      *(char *)(local_1d0[0][1] + local_1d0[0][3]) = (char)uVar5;
      lVar13 = local_1d0[0][3] + 1;
      local_1d0[0][3] = lVar13;
      if ((uVar5 & 0xff) == 0x81) {
        *(undefined2 *)(local_1d0[0][1] + lVar13) = *(undefined2 *)(param_1 + 0xe0);
        lVar13 = local_1d0[0][3] + 2;
      }
      else {
        if ((uVar5 & 0xff) != 0x80) goto LAB_01df3b80;
        *(char *)(local_1d0[0][1] + lVar13) = (char)*(undefined2 *)(param_1 + 0xe0);
        lVar13 = local_1d0[0][3] + 1;
      }
      local_1d0[0][3] = lVar13;
    }
LAB_01df3b80:
    FUN_01f67a24(auStack_58,auStack_1b0,local_1d0[0] + 1);
    uVar11 = FUN_0111b1ec(plVar14,*(undefined8 *)(param_1 + 0x90));
    if ((uVar11 & 1) != 0) {
      uVar12 = *local_1d0[0];
      uVar4 = *(undefined4 *)(local_1d0[0] + 3);
      goto LAB_01df3ba8;
    }
  }
  uVar12 = 0;
LAB_01df3c54:
  FUN_01694aa8(local_1d0);
  return uVar12;
}


