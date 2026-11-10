/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020ff2cc; name: FUN_020ff2cc
 */


undefined8 FUN_020ff2cc(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  int local_14;
  
  switch(*param_2) {
  case 0:
    uVar2 = FUN_01921c50(param_1,param_1 + 0x31c);
    if ((uVar2 & 1) == 0) {
      uVar1 = 1;
    }
    else {
      uVar2 = FUN_020ff544(param_1,param_1 + 0x31c);
      if ((uVar2 & 1) == 0) {
LAB_020ff32c:
        uVar1 = 6;
      }
      else {
        uVar1 = 3;
      }
    }
    break;
  case 1:
    uVar1 = (**(code **)(**(long **)(param_1 + 0x58) + 0x98))();
    (**(code **)(**(long **)(param_1 + 0x218) + 0x1f8))
              (*(long **)(param_1 + 0x218),uVar1,param_1 + 0x31c,0,0,1,0);
    uVar1 = 2;
    goto LAB_020ff420;
  case 2:
    uVar2 = (**(code **)(**(long **)(param_1 + 0x218) + 0x228))();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
LAB_020ff3d4:
    pcVar4 = (code *)&LAB_015aed60;
    goto LAB_020ff36c;
  case 3:
    uVar1 = (**(code **)(**(long **)(param_1 + 0x58) + 0x98))();
    (**(code **)(**(long **)(param_1 + 0x218) + 0x1f8))
              (*(long **)(param_1 + 0x218),uVar1,param_1 + 0x31c,0,0,1,0);
    uVar1 = 4;
LAB_020ff420:
    *(undefined1 *)(param_1 + 0x214) = 1;
    break;
  case 4:
    uVar2 = (**(code **)(**(long **)(param_1 + 0x218) + 0x230))();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    (**(code **)(**(long **)(param_1 + 0x218) + 0x440))(*(long **)(param_1 + 0x218),1,0);
    uVar1 = 5;
    break;
  case 5:
    uVar2 = (**(code **)(**(long **)(param_1 + 0x218) + 0x448))
                      (*(long **)(param_1 + 0x218),&local_14);
    if ((uVar2 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x218) + 0x238))();
      if (local_14 == 0) goto LAB_020ff32c;
      goto LAB_020ff3d4;
    }
    if (*(short *)(param_1 + 0x200) == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x122) == '\0') {
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x90);
      lVar3 = *(long *)(lVar5 + 0xa0);
      if (*(char *)(lVar5 + 0x98) != '\0') {
        if (lVar3 == 0) {
          return 0;
        }
        lVar3 = FUN_01091070(lVar5 + 0x80,lVar3,0);
      }
      if (lVar3 < 1) {
        *(undefined1 *)(param_1 + 0x122) = 1;
      }
      else if (*(char *)(param_1 + 0x122) == '\0') {
        return 0;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x218) + 0x238))();
    (**(code **)(**(long **)(param_1 + 0x218) + 0x450))();
    (**(code **)(**(long **)(param_1 + 0x218) + 0x468))();
    pcVar4 = FUN_020fe834;
    goto LAB_020ff36c;
  case 6:
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    uVar1 = (**(code **)(**(long **)(param_1 + 0x58) + 0x98))();
    FUN_020ff5a0(uVar6,uVar1,*(undefined1 *)(param_1 + 0x3ac));
    *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) | 4;
    pcVar4 = FUN_01697fb8;
LAB_020ff36c:
    *(code **)(param_1 + 0x308) = pcVar4;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x318) = 0;
  default:
    goto switchD_020ff304_default;
  }
  *param_2 = uVar1;
switchD_020ff304_default:
  return 0;
}


