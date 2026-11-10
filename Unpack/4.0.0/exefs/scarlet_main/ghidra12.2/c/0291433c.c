/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291433c; name: FUN_0291433c
 */


int FUN_0291433c(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x30);
  uVar1 = (**(code **)(*(long *)*puVar4 + 0x3f8))((long *)*puVar4,*(undefined4 *)(param_1 + 0x98),6)
  ;
  if ((uVar1 & 1) == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x46);
    iVar2 = 2;
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),7);
  iVar3 = iVar2;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x46);
    iVar3 = iVar2 + 2;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar2;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),8);
  iVar2 = iVar3;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x46);
    iVar2 = iVar3 + 2;
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar3;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xc);
  iVar3 = iVar2;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x46);
    iVar3 = iVar2 + 2;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar2;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xd);
  iVar2 = iVar3;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x4e);
    iVar2 = iVar3 + 2;
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar3;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xe);
  iVar3 = iVar2;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x4e);
    iVar3 = iVar2 + 2;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar2;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0);
  iVar2 = iVar3 + -2;
  if ((uVar1 & 1) == 0) {
    iVar2 = iVar3;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),1);
  iVar3 = iVar2 + -2;
  if ((uVar1 & 1) == 0) {
    iVar3 = iVar2;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),2);
  iVar2 = iVar3 + -2;
  if ((uVar1 & 1) == 0) {
    iVar2 = iVar3;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),3);
  iVar3 = iVar2 + -2;
  if ((uVar1 & 1) == 0) {
    iVar3 = iVar2;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),4);
  iVar2 = iVar3 + -2;
  if ((uVar1 & 1) == 0) {
    iVar2 = iVar3;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),5);
  iVar3 = iVar2 + -2;
  if ((uVar1 & 1) == 0) {
    iVar3 = iVar2;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xb);
  iVar2 = iVar3 + -2;
  if ((uVar1 & 1) == 0) {
    iVar2 = iVar3;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x11);
  iVar3 = iVar2 + -2;
  if ((uVar1 & 1) == 0) {
    iVar3 = iVar2;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),6);
  iVar2 = iVar3;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x46);
    iVar2 = iVar3 + -2;
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar3;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7);
  iVar3 = iVar2;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x46);
    iVar3 = iVar2 + -2;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar2;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),8);
  iVar2 = iVar3;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x46);
    iVar2 = iVar3 + -2;
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar3;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xc);
  iVar3 = iVar2;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x46);
    iVar3 = iVar2 + -2;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar2;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xd);
  iVar2 = iVar3;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x46);
    iVar2 = iVar3 + -2;
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar3;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xe);
  iVar3 = iVar2;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x46);
    iVar3 = iVar2 + -2;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar2;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0);
  iVar2 = iVar3;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x5a);
    iVar2 = iVar3 + 2;
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar3;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),1);
  iVar3 = iVar2;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x5a);
    iVar3 = iVar2 + 2;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar2;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
  iVar2 = iVar3;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x46);
    iVar2 = iVar3 + 2;
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar3;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),3);
  iVar3 = iVar2;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x5a);
    iVar3 = iVar2 + 2;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar2;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),4);
  iVar2 = iVar3;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x5a);
    iVar2 = iVar3 + 2;
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar3;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),5);
  iVar3 = iVar2;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x3a);
    iVar3 = iVar2 + 2;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar2;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb);
  iVar2 = iVar3;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x5a);
    iVar2 = iVar3 + 2;
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar3;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x11);
  iVar3 = iVar2;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*puVar4 + 0x4c0))((long *)*puVar4,0x5a);
    iVar3 = iVar2 + 2;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar2;
    }
  }
  return iVar3;
}


