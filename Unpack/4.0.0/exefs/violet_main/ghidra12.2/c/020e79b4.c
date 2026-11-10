/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e79b4; name: FUN_020e79b4
 */


undefined8 FUN_020e79b4(long *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  sVar1 = FUN_00cf44f4(*(undefined8 *)(*param_1 + 0x70));
  if (sVar1 == 0x1df) {
    lVar4 = *param_1;
    sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),0);
    if (((sVar1 == 0x13b) || (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),1), sVar1 == 0x13b)
        ) || (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),2), sVar1 == 0x13b)) {
      lVar4 = *param_1;
    }
    else {
      sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),3);
      lVar4 = *param_1;
      if (sVar1 != 0x13b) {
        sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),0);
        if (((sVar1 == 0x38) ||
            (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),1), sVar1 == 0x38)) ||
           (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),2), sVar1 == 0x38)) {
          lVar4 = *param_1;
        }
        else {
          sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),3);
          lVar4 = *param_1;
          if (sVar1 != 0x38) {
            sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),0);
            if (((sVar1 == 0x3b) ||
                (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),1), sVar1 == 0x3b)) ||
               (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),2), sVar1 == 0x3b)) {
              lVar4 = *param_1;
            }
            else {
              sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),3);
              lVar4 = *param_1;
              if (sVar1 != 0x3b) {
                sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),0);
                if (((sVar1 == 0x193) ||
                    (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),1), sVar1 == 0x193)) ||
                   (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),2), sVar1 == 0x193)) {
                  lVar4 = *param_1;
                }
                else {
                  sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),3);
                  lVar4 = *param_1;
                  if (sVar1 != 0x193) {
                    sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),0);
                    if (((sVar1 == 0x1b5) ||
                        (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),1), sVar1 == 0x1b5)) ||
                       ((sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),2), sVar1 == 0x1b5 ||
                        (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),3), sVar1 == 0x1b5)))) {
                      lVar4 = *param_1;
                      uVar3 = 0x1b5;
                      goto LAB_020e7a4c;
                    }
                    goto LAB_020e7c20;
                  }
                }
                uVar3 = 0x193;
                goto LAB_020e7a4c;
              }
            }
            uVar3 = 0x3b;
            goto LAB_020e7a4c;
          }
        }
        uVar3 = 0x38;
        goto LAB_020e7a4c;
      }
    }
    uVar3 = 0x13b;
    goto LAB_020e7a4c;
  }
LAB_020e7c20:
  sVar1 = FUN_00cf44f4(*(undefined8 *)(*param_1 + 0x70));
  if (sVar1 == 0x382) {
    lVar4 = *param_1;
    sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),0);
    if (((sVar1 == 0x338) || (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),1), sVar1 == 0x338)
        ) || (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),2), sVar1 == 0x338)) {
      lVar4 = *param_1;
    }
    else {
      sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),3);
      lVar4 = *param_1;
      if (sVar1 != 0x338) {
        sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),0);
        if ((((sVar1 == 0x339) ||
             (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),1), sVar1 == 0x339)) ||
            (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),2), sVar1 == 0x339)) ||
           (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),3), sVar1 == 0x339)) {
          lVar4 = *param_1;
          uVar3 = 0x339;
          goto LAB_020e7ca8;
        }
        goto LAB_020e7d30;
      }
    }
    uVar3 = 0x338;
LAB_020e7ca8:
    uVar2 = FUN_020e7e5c(lVar4,uVar3);
    FUN_020e7efc(*param_1,uVar2);
    FUN_020e7f54(*param_1);
    return 1;
  }
LAB_020e7d30:
  sVar1 = FUN_00cf44f4(*(undefined8 *)(*param_1 + 0x70));
  if (sVar1 != 0x2d0) {
    return 0;
  }
  lVar4 = *param_1;
  sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),0);
  if (((sVar1 == 0x251) || (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),1), sVar1 == 0x251))
     || (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),2), sVar1 == 0x251)) {
    lVar4 = *param_1;
  }
  else {
    sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),3);
    lVar4 = *param_1;
    if (sVar1 != 0x251) {
      sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),0);
      if (((sVar1 != 0x26d) &&
          (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),1), sVar1 != 0x26d)) &&
         ((sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),2), sVar1 != 0x26d &&
          (sVar1 = FUN_00eedbc8(*(undefined8 *)(lVar4 + 0x70),3), sVar1 != 0x26d)))) {
        return 0;
      }
      lVar4 = *param_1;
      uVar3 = 0x26d;
      goto LAB_020e7a4c;
    }
  }
  uVar3 = 0x251;
LAB_020e7a4c:
  uVar2 = FUN_020e7e5c(lVar4,uVar3);
  FUN_020e7efc(*param_1,uVar2);
  return 1;
}


