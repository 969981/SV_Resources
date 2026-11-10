/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01498e88; name: FUN_01498e88
 */


undefined8 FUN_01498e88(long param_1,undefined4 *param_2,ulong param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 local_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  
  uVar3 = 1;
  switch(*param_2) {
  case 0:
    cVar1 = FUN_015d8e94(param_1,param_1 + 0x131);
    *(char *)(param_1 + 0x12f) = cVar1;
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x138) = 1;
      *(undefined8 *)(param_1 + 0x220) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x228);
    }
    else {
      uVar2 = FUN_015d8d90(param_1,auStack_48);
      if ((uVar2 & 0xff) != 0) {
        if ((uint)*(byte *)(param_1 + 0x12f) <= (uVar2 & 0xff)) {
          uVar2 = (uint)*(byte *)(param_1 + 0x12f);
        }
        FUN_01253868(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),
                     *(undefined1 *)(param_1 + 0x131),auStack_4c,local_50);
        FUN_0147accc(param_1,uVar2,param_1 + 0x348,param_1 + 0x360);
        if ((param_3 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x359) = 1;
        }
        *(undefined1 *)(param_1 + 0x39c) = 0;
        (**(code **)(**(long **)(param_1 + 0x218) + 0x1d0))
                  (*(long **)(param_1 + 0x218),param_1 + 0x348,local_50[0],0,param_1 + 0x360);
        uVar7 = 1;
        goto LAB_014990a4;
      }
      *(undefined4 *)(param_1 + 0x228) = 0;
      *(undefined8 *)(param_1 + 0x220) = 0x1003;
      *(undefined1 *)(param_1 + 0x138) = 1;
      *(undefined8 *)(param_1 + 0x140) = 0x1003;
      *(undefined4 *)(param_1 + 0x148) = 0;
    }
    FUN_0132746c(param_1,param_1 + 0x138,200);
    goto LAB_014990a0;
  case 1:
    uVar5 = (**(code **)(**(long **)(param_1 + 0x218) + 0x830))();
    if ((uVar5 & 1) != 0) {
      FUN_0173ce48(param_1);
      uVar7 = 2;
      goto LAB_014990a4;
    }
    break;
  case 2:
    if (*(short *)(param_1 + 0x200) != 0) {
      if (*(char *)(param_1 + 0x122) == '\0') {
        lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x90);
        lVar6 = *(long *)(lVar8 + 0xa0);
        if (*(char *)(lVar8 + 0x98) != '\0') {
          if (lVar6 == 0) goto LAB_01498fa4;
          lVar6 = FUN_01091070(lVar8 + 0x80,lVar6,0);
        }
        if (lVar6 < 1) {
          *(undefined1 *)(param_1 + 0x122) = 1;
          goto LAB_01499114;
        }
        plVar4 = *(long **)(param_1 + 0x218);
        if (*(char *)(param_1 + 0x122) == '\0') goto LAB_01498fa8;
      }
      else {
LAB_01499114:
        plVar4 = *(long **)(param_1 + 0x218);
      }
      (**(code **)(*plVar4 + 0x1e0))();
      uVar7 = 3;
      goto LAB_014990a4;
    }
LAB_01498fa4:
    plVar4 = *(long **)(param_1 + 0x218);
LAB_01498fa8:
    uVar5 = (**(code **)(*plVar4 + 0x1d8))();
    if ((uVar5 & 1) != 0) {
      FUN_020ff880(param_1,param_1 + 0x360);
      goto LAB_01498fe4;
    }
    break;
  case 3:
    uVar5 = (**(code **)(**(long **)(param_1 + 0x218) + 0x1e8))();
    if ((uVar5 & 1) != 0) {
      FUN_020ff9a0(param_1);
LAB_01498fe4:
      uVar7 = 4;
      goto LAB_014990a4;
    }
    break;
  case 4:
    FUN_01690b94(param_1);
LAB_014990a0:
    uVar7 = 5;
LAB_014990a4:
    *param_2 = uVar7;
    break;
  case 5:
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x8c) == '\0') {
LAB_0149904c:
      uVar7 = 7;
    }
    else {
      *(undefined1 *)(param_1 + 0x11f) = 1;
      (**(code **)(**(long **)(param_1 + 0x218) + 0x370))();
      (**(code **)(**(long **)(param_1 + 0x218) + 0x378))();
      uVar7 = 6;
    }
    goto LAB_014990a4;
  case 6:
    uVar5 = (**(code **)(**(long **)(param_1 + 0x218) + 0x380))();
    if ((uVar5 & 1) != 0) goto LAB_0149904c;
    break;
  case 7:
    goto switchD_01498ecc_caseD_7;
  }
  uVar3 = 0;
switchD_01498ecc_caseD_7:
  return uVar3;
}


