/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a46a80; name: FUN_01a46a80
 */


undefined8 FUN_01a46a80(long param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  
  switch(*param_2) {
  case 0:
    uVar9 = 1;
    break;
  case 1:
    cVar4 = *(char *)(param_1 + 0x210);
    cVar1 = *(char *)(param_1 + 0x213);
    uVar5 = FUN_01a46db4(param_1);
    (**(code **)(**(long **)(param_1 + 0x218) + 0x3f0))
              (*(long **)(param_1 + 0x218),*(undefined1 *)(param_1 + 0x120),0,0,cVar4 == cVar1,
               uVar5 & 1,1);
    uVar9 = 2;
    break;
  case 2:
    if (*(short *)(param_1 + 0x200) == 0) {
LAB_01a46b34:
      uVar10 = (**(code **)(**(long **)(param_1 + 0x218) + 0x3f8))();
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x218) + 0x410))();
      bVar2 = (**(code **)(**(long **)(param_1 + 0x218) + 0x420))();
      uVar10 = FUN_019c4328(*(undefined8 *)(param_1 + 0x48),uVar5);
      if ((uVar10 & 1) != 0) {
        FUN_019c4328(*(undefined8 *)(param_1 + 0x48),uVar5);
      }
      uVar10 = FUN_019c42cc(param_1,param_1 + 0x31c,uVar5,*(undefined1 *)(param_1 + 0x210));
      if ((uVar10 & 1) != 0) {
        if (((uVar5 & 0xffff) == 0) || (bVar2 == 6)) goto LAB_01a46d14;
        uVar9 = (**(code **)(**(long **)(param_1 + 0x218) + 0x430))();
        iVar6 = FUN_020ff1f4(*(undefined8 *)(param_1 + 0x48),uVar5);
        lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 0x30);
        if (iVar6 == 5) {
          lVar13 = lVar11 + 0x60;
        }
        else {
          lVar13 = 0;
          if (*(byte *)(param_1 + 0x11c) < 5) {
            lVar13 = lVar11 + (ulong)*(byte *)(param_1 + 0x11c) * 0x38 + 0x28;
          }
        }
        bVar3 = FUN_00f7e274(lVar13);
        if (bVar3 <= bVar2) {
          cVar4 = FUN_00f7e274(lVar13);
          bVar2 = cVar4 - 1;
        }
        uVar7 = (**(code **)(**(long **)(lVar13 + (ulong)bVar2 * 8) + 0x98))();
        uVar8 = (**(code **)(**(long **)(param_1 + 0x58) + 0x98))();
        FUN_020ff170(*(undefined8 *)(param_1 + 0x68),uVar8,uVar5,uVar7,uVar9);
        (**(code **)(**(long **)(param_1 + 0x218) + 0x438))();
        iVar6 = FUN_020ff1f4(*(undefined8 *)(param_1 + 0x48),uVar5);
        if (iVar6 == 5) {
          *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) | 4;
        }
        FUN_020ff190(param_1,*(undefined1 *)(param_1 + 0x210),uVar5,0);
        pcVar12 = FUN_01697fb8;
        goto LAB_01a46d1c;
      }
      uVar9 = 4;
    }
    else {
      if (*(char *)(param_1 + 0x122) == '\0') {
        lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 0x90);
        lVar11 = *(long *)(lVar13 + 0xa0);
        if (*(char *)(lVar13 + 0x98) != '\0') {
          if (lVar11 == 0) goto LAB_01a46b34;
          lVar11 = FUN_01091070(lVar13 + 0x80,lVar11,0);
        }
        if (lVar11 < 1) {
          *(undefined1 *)(param_1 + 0x122) = 1;
        }
        else if (*(char *)(param_1 + 0x122) == '\0') goto LAB_01a46b34;
      }
      (**(code **)(**(long **)(param_1 + 0x218) + 0x400))();
      uVar9 = 3;
    }
    break;
  case 3:
    uVar10 = (**(code **)(**(long **)(param_1 + 0x218) + 0x3f8))();
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    pcVar12 = FUN_020fe834;
    goto LAB_01a46d1c;
  case 4:
    plVar14 = *(long **)(param_1 + 0x218);
    uVar9 = (**(code **)(**(long **)(param_1 + 0x58) + 0x98))();
    (**(code **)(*plVar14 + 0x1f8))(plVar14,uVar9,param_1 + 0x31c,0,0,1,0);
    uVar9 = 5;
    break;
  case 5:
    uVar10 = (**(code **)(**(long **)(param_1 + 0x218) + 0x228))();
    if ((uVar10 & 1) == 0) {
      return 0;
    }
LAB_01a46d14:
    pcVar12 = (code *)&LAB_015aed60;
LAB_01a46d1c:
    *(code **)(param_1 + 0x308) = pcVar12;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x318) = 0;
  default:
    goto switchD_01a46abc_default;
  }
  *param_2 = uVar9;
switchD_01a46abc_default:
  return 0;
}


