/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02907170; name: FUN_02907170
 */


int FUN_02907170(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if ((*(short *)(param_1 + 0x9e) != 99) && (*(short *)(param_1 + 0xb6) != 99)) {
    puVar7 = (undefined8 *)(param_1 + 0x30);
    uVar5 = (**(code **)(*(long *)*puVar7 + 0x1c8))
                      ((long *)*puVar7,*(undefined4 *)(param_1 + 0x98),0x11);
    if ((uVar5 & 1) == 0) {
      cVar1 = (**(code **)(*(long *)*puVar7 + 0x3c8))();
      if (cVar1 == '\x02') {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x57);
        if ((uVar5 & 1) == 0) {
          iVar2 = 0;
        }
        else {
          uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x5a);
          iVar2 = -2;
          if ((uVar5 & 1) == 0) {
            iVar2 = 0;
          }
        }
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x21e);
        iVar4 = iVar2;
        if ((uVar5 & 1) != 0) {
          uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x5a);
          iVar4 = iVar2 + -2;
          if ((uVar5 & 1) == 0) {
            iVar4 = iVar2;
          }
        }
      }
      else if ((cVar1 == '\x03') &&
              (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                                 (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x3b),
              (uVar5 & 1) != 0)) {
        uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x5a);
        iVar4 = -2;
        if ((uVar5 & 1) == 0) {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = 0;
      }
      iVar2 = FUN_02914b2c(param_1);
      if (iVar2 == 2) {
        uVar3 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar6 = iVar4 + (uVar3 & 1);
      }
      else {
        iVar6 = iVar4;
        if (((iVar2 == 1) && (iVar2 = FUN_02914c18(param_1), iVar2 == 0)) &&
           (*(short *)(param_1 + 0x9e) != 0x62)) {
          uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x55);
          iVar6 = iVar4 + -2;
          if ((uVar5 & 1) == 0) {
            iVar6 = iVar4;
          }
        }
      }
      iVar4 = iVar6;
      if ((cVar1 == '\x02') &&
         ((*(short *)(param_1 + 0x9e) == 0x57 || (*(short *)(param_1 + 0x9e) == 0x2c)))) {
        uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar4 = iVar6 + 2;
        if ((uVar5 & 1) == 0) {
          iVar4 = iVar6;
        }
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x15);
      if ((uVar5 & 1) != 0) {
        uVar3 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar4 = iVar4 + (uVar3 & 1);
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x24);
      if ((uVar5 & 1) != 0) {
        uVar3 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar4 = iVar4 + (uVar3 & 1);
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         0x75bf03d34df39f54);
      if ((uVar5 & 1) != 0) {
        uVar3 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar4 = iVar4 + (uVar3 & 1);
      }
      iVar2 = FUN_0157defc(param_1);
      if (iVar2 == 2) {
        uVar3 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar6 = iVar4 - (uVar3 & 1);
      }
      else {
        iVar6 = iVar4;
        if (((iVar2 == 1) && (iVar2 = FUN_02914cc8(param_1), iVar2 == 0)) &&
           (*(short *)(param_1 + 0xb6) != 0x62)) {
          uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x46);
          iVar6 = iVar4 + 2;
          if ((uVar5 & 1) == 0) {
            iVar6 = iVar4;
          }
        }
      }
      iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      if (7 < iVar4) {
        uVar3 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar6 = iVar6 - (uVar3 & 1);
      }
      iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      if (7 < iVar4) {
        uVar3 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar6 = iVar6 - (uVar3 & 1);
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x7f);
      if ((uVar5 & 1) != 0) {
        uVar3 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar6 = iVar6 + (uVar3 & 1);
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x11);
      iVar4 = iVar6;
      if ((uVar5 & 1) != 0) {
        uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar4 = iVar6 + -2;
        if ((uVar5 & 1) == 0) {
          iVar4 = iVar6;
        }
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xeb);
      iVar2 = iVar4;
      if ((uVar5 & 1) != 0) {
        uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar2 = iVar4 + -2;
        if ((uVar5 & 1) == 0) {
          iVar2 = iVar4;
        }
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x110);
      iVar4 = iVar2;
      if ((uVar5 & 1) != 0) {
        uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar4 = iVar2 + -2;
        if ((uVar5 & 1) == 0) {
          iVar4 = iVar2;
        }
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x19);
      iVar2 = iVar4;
      if ((uVar5 & 1) != 0) {
        uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar2 = iVar4 + -2;
        if ((uVar5 & 1) == 0) {
          iVar2 = iVar4;
        }
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x72);
      iVar4 = iVar2;
      if ((uVar5 & 1) != 0) {
        uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar4 = iVar2 + -2;
        if ((uVar5 & 1) == 0) {
          iVar4 = iVar2;
        }
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x4e);
      iVar2 = iVar4;
      if ((uVar5 & 1) != 0) {
        uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
        iVar2 = iVar4 + -2;
        if ((uVar5 & 1) == 0) {
          iVar2 = iVar4;
        }
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x167);
      if ((uVar5 & 1) == 0) {
        return iVar2;
      }
      uVar5 = (**(code **)(*(long *)*puVar7 + 0x4c0))((long *)*puVar7,0x32);
      iVar4 = iVar2 + -2;
      if ((uVar5 & 1) == 0) {
        iVar4 = iVar2;
      }
      return iVar4;
    }
  }
  return -2;
}


