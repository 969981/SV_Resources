/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e88c4; name: FUN_017e88c4
 */


undefined8 FUN_017e88c4(long param_1)

{
  short *psVar1;
  ulong uVar2;
  ulong uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  float extraout_var;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  short sVar15;
  long *plVar16;
  undefined8 uVar17;
  float fVar18;
  
  lVar11 = *(long *)(param_1 + 0x88);
  if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) {
    return 0;
  }
  psVar1 = (short *)(lVar11 + 0x1a);
  sVar15 = *(short *)(lVar11 + 0x1a);
  do {
    sVar4 = *psVar1;
    if (sVar4 == sVar15) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_017e893c;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_017e893c:
      bVar6 = false;
    }
    if (bVar6) {
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) {
        return 0;
      }
      plVar16 = (long *)(lVar11 + -0x28);
      plVar9 = (long *)FUN_01400aa8();
      if ((((*plVar9 == 0) || (*(short *)(*plVar9 + 0x1a) == 0)) || (lVar12 = *plVar9, lVar12 == 0))
         || (*(short *)(lVar12 + 0x1a) == 0)) goto LAB_017e8984;
      psVar1 = (short *)(lVar12 + 0x1a);
      sVar15 = *(short *)(lVar12 + 0x1a);
      break;
    }
    sVar15 = sVar4;
    if (sVar4 == 0) {
      return 0;
    }
  } while( true );
LAB_017e89fc:
  sVar4 = *psVar1;
  if (sVar4 == sVar15) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar15 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_017e8a20;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_017e8a20:
    bVar6 = false;
  }
  if (!bVar6) goto code_r0x017e8a28;
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 == 0) {
LAB_017e8984:
    uVar17 = 0;
  }
  else {
    plVar9 = (long *)(lVar12 + -0x28);
    iVar10 = *(int *)(param_1 + 0x44);
    if ((*(int *)(param_1 + 0xac) == iVar10) ||
       (*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0x48))) {
      uVar17 = 0;
    }
    else {
      if (*(int *)(param_1 + 0xb4) == 0) {
        *(undefined4 *)(param_1 + 0xb8) = 0;
LAB_017e8ac4:
        uVar17 = 0;
        *(int *)(param_1 + 0xa8) = iVar10;
        *(int *)(param_1 + 0xac) = iVar10;
        goto LAB_017e8ac8;
      }
      uVar7 = FUN_01e1c638(plVar16);
      if (uVar7 < 0x19) {
        uVar8 = *(undefined4 *)(&DAT_03d305c0 + (ulong)uVar7 * 4);
      }
      else {
        uVar8 = 0;
      }
      FUN_01e1db00(plVar9,*(undefined4 *)(param_1 + 0xac),uVar8,*(undefined4 *)(param_1 + 0xb4));
      if (extraout_var < 1.1920929e-07) {
LAB_017e8ab0:
        lVar13 = (long)*(int *)(param_1 + 0xb4);
LAB_017e8ab4:
        *(undefined4 *)(param_1 + lVar13 * 4 + 0xb8) = 0;
        iVar10 = *(int *)(param_1 + 0x44);
        goto LAB_017e8ac4;
      }
      fVar18 = nextafterf(100.0,3.4028235e+38);
      uVar2 = *(ulong *)(param_1 + 0xf0);
      uVar3 = *(ulong *)(param_1 + 0xf8);
      uVar14 = uVar3 ^ uVar2;
      lVar13 = (long)*(int *)(param_1 + 0xb4);
      *(ulong *)(param_1 + 0xf0) = uVar14 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar14 << 0x10;
      *(ulong *)(param_1 + 0xf8) = uVar14 >> 0x1b | uVar14 << 0x25;
      if (extraout_var < fVar18 * (float)(uVar3 + uVar2) * 5.421011e-20 + 0.0) goto LAB_017e8ab4;
      switch(*(int *)(param_1 + 0xb4)) {
      case 1:
        if (*(long *)(param_1 + 0x60) == 0) {
          lVar13 = 1;
          goto LAB_017e8ab4;
        }
        if (*(short *)(*(long *)(param_1 + 0x60) + 0x1a) == 0) goto LAB_017e8ab0;
        uVar8 = FUN_01e1ddf4(param_1);
        goto LAB_017e8c0c;
      case 2:
        uVar17 = 2;
        break;
      case 3:
        uVar17 = 3;
        break;
      case 4:
        uVar17 = 4;
        break;
      case 5:
        uVar17 = 5;
        break;
      case 6:
        uVar17 = 6;
        break;
      case 7:
        uVar17 = 7;
        break;
      case 8:
        uVar17 = 8;
        break;
      case 9:
        uVar17 = 9;
        break;
      default:
        goto switchD_017e8b6c_default;
      }
      uVar8 = FUN_01e1e1b8(param_1,uVar17);
LAB_017e8c0c:
      *(undefined4 *)(param_1 + 0xa8) = uVar8;
switchD_017e8b6c_default:
      uVar17 = 1;
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    }
LAB_017e8ac8:
    lVar12 = *(long *)(lVar12 + 8);
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar15 == 0) goto LAB_017e89ac;
  }
  goto LAB_017e8988;
code_r0x017e8a28:
  uVar17 = 0;
  sVar15 = sVar4;
  if (sVar4 == 0) {
LAB_017e8988:
    lVar11 = *(long *)(lVar11 + 0x70);
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar15 == 0) {
LAB_017e89ac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return uVar17;
  }
  goto LAB_017e89fc;
}


