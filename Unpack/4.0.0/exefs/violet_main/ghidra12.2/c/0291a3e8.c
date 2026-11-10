/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291a3e8; name: FUN_0291a3e8
 */


undefined4 FUN_0291a3e8(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_2[1];
  if (lVar5 < 0x20f956d89a3b1633) {
    if (-0x39be380406099cd4 < lVar5) {
      if ((lVar5 == -0x39be380406099cd3) || (lVar5 == -0x87978408db5a0e5)) goto LAB_0291a4d0;
      lVar6 = 0x19cc0da57e1f5730;
LAB_0291a4c8:
      if (lVar5 != lVar6) {
        return 0xffffffec;
      }
LAB_0291a4d0:
      plVar3 = (long *)FUN_01021c74();
      uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x4e);
      uVar1 = 2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0xffffffec;
      }
      return uVar1;
    }
    if (lVar5 != -0x5b0d382996235678) {
      lVar6 = -0x4dae174ee2f65a46;
      goto LAB_0291a56c;
    }
  }
  else {
    if (lVar5 < 0x5ed8099c61d86c95) {
      if (lVar5 == 0x20f956d89a3b1633) {
        uVar1 = (**(code **)(*(long *)*param_2 + 0x98))();
        plVar3 = (long *)FUN_01021c74(param_1);
        iVar2 = (**(code **)(*plVar3 + 0xa0))(plVar3,uVar1);
        if (iVar2 < 0x14) {
          plVar3 = (long *)FUN_01021c74(param_1);
          iVar2 = (**(code **)(*plVar3 + 0x498))(plVar3,uVar1);
          if (iVar2 != 0) {
            plVar3 = (long *)FUN_01021c74(param_1);
            uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,2);
            if ((uVar4 & 1) == 0) {
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,3);
              if ((uVar4 & 1) != 0) goto LAB_0291a828;
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,5);
              if ((uVar4 & 1) != 0) goto LAB_0291a828;
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,1);
              if ((uVar4 & 1) != 0) goto LAB_0291a828;
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,4);
              if ((uVar4 & 1) != 0) goto LAB_0291a828;
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,6);
              if ((uVar4 & 1) != 0) goto LAB_0291a828;
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x1d0))(plVar3,uVar1);
              if ((uVar4 & 1) != 0) goto LAB_0291a828;
            }
            else {
LAB_0291a828:
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x5d);
              if ((uVar4 & 1) != 0) goto LAB_0291a9d4;
            }
            plVar3 = (long *)FUN_01021c74(param_1);
            uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x32);
            if ((uVar4 & 1) == 0) {
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x42);
              if ((uVar4 & 1) != 0) {
                return 2;
              }
              goto LAB_0291a884;
            }
          }
LAB_0291a9d4:
          uVar1 = 10;
        }
        else {
LAB_0291a884:
          plVar3 = (long *)FUN_01021c74(param_1);
          iVar2 = (**(code **)(*plVar3 + 0xa0))(plVar3,uVar1);
          if (iVar2 < 0x28) {
            plVar3 = (long *)FUN_01021c74(param_1);
            iVar2 = (**(code **)(*plVar3 + 0x498))(plVar3,uVar1);
            if (iVar2 == 0) {
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x32);
              if ((uVar4 & 1) != 0) goto LAB_0291a9d4;
            }
            plVar3 = (long *)FUN_01021c74(param_1);
            uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,2);
            if ((uVar4 & 1) == 0) {
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,3);
              if ((uVar4 & 1) != 0) goto LAB_0291a99c;
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,5);
              if ((uVar4 & 1) != 0) goto LAB_0291a99c;
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,1);
              if ((uVar4 & 1) != 0) goto LAB_0291a99c;
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,4);
              if ((uVar4 & 1) != 0) goto LAB_0291a99c;
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,6);
              if ((uVar4 & 1) != 0) goto LAB_0291a99c;
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x1d0))(plVar3,uVar1);
              if ((uVar4 & 1) != 0) goto LAB_0291a99c;
            }
            else {
LAB_0291a99c:
              plVar3 = (long *)FUN_01021c74(param_1);
              uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x4e);
              if ((uVar4 & 1) != 0) goto LAB_0291a9d4;
            }
            plVar3 = (long *)FUN_01021c74(param_1);
            uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x27);
            if ((uVar4 & 1) != 0) goto LAB_0291a9d4;
            plVar3 = (long *)FUN_01021c74(param_1);
            uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x27);
            if ((uVar4 & 1) != 0) {
              return 1;
            }
          }
          uVar1 = 0xffffffec;
        }
        return uVar1;
      }
      if (lVar5 != 0x45377237a67158df) {
        lVar6 = 0x5a009ce4ee879b9c;
        goto LAB_0291a4c8;
      }
      uVar1 = (**(code **)(*(long *)*param_2 + 0x98))();
      plVar3 = (long *)FUN_01021c74(param_1);
      uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,2);
      if ((uVar4 & 1) == 0) {
        plVar3 = (long *)FUN_01021c74(param_1);
        uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,3);
        if ((uVar4 & 1) != 0) goto LAB_0291ab30;
        plVar3 = (long *)FUN_01021c74(param_1);
        uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,5);
        if ((uVar4 & 1) != 0) goto LAB_0291ab30;
        plVar3 = (long *)FUN_01021c74(param_1);
        uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,1);
        if ((uVar4 & 1) != 0) goto LAB_0291ab30;
        plVar3 = (long *)FUN_01021c74(param_1);
        uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,4);
        if ((uVar4 & 1) != 0) goto LAB_0291ab30;
        plVar3 = (long *)FUN_01021c74(param_1);
        uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,6);
        if ((uVar4 & 1) != 0) goto LAB_0291ab30;
        plVar3 = (long *)FUN_01021c74(param_1);
        uVar4 = (**(code **)(*plVar3 + 0x1d0))(plVar3,uVar1);
        if ((uVar4 & 1) != 0) goto LAB_0291ab30;
LAB_0291ab9c:
        uVar1 = 0xffffffec;
      }
      else {
LAB_0291ab30:
        plVar3 = (long *)FUN_01021c74(param_1);
        iVar2 = (**(code **)(*plVar3 + 0x498))(plVar3,uVar1);
        if (iVar2 != 0) {
          plVar3 = (long *)FUN_01021c74(param_1);
          uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x3a);
          if ((uVar4 & 1) == 0) {
            plVar3 = (long *)FUN_01021c74(param_1);
            uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x3a);
            if ((uVar4 & 1) != 0) {
              return 2;
            }
            goto LAB_0291ab9c;
          }
        }
        uVar1 = 10;
      }
      return uVar1;
    }
    if (lVar5 != 0x5ed8099c61d86c95) {
      if (lVar5 == 0x6a36b41cc84deb33) goto LAB_0291a4d0;
      lVar6 = 0x77c84b6e84aaea9f;
LAB_0291a56c:
      if (lVar5 != lVar6) {
        return 0xffffffec;
      }
    }
  }
  uVar1 = (**(code **)(*(long *)*param_2 + 0x98))();
  plVar3 = (long *)FUN_01021c74(param_1);
  iVar2 = (**(code **)(*plVar3 + 0xa0))(plVar3,uVar1);
  if (iVar2 < 0x14) {
    plVar3 = (long *)FUN_01021c74(param_1);
    iVar2 = (**(code **)(*plVar3 + 0x498))(plVar3,uVar1);
    if (iVar2 != 0) {
      plVar3 = (long *)FUN_01021c74(param_1);
      uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x32);
      if ((uVar4 & 1) == 0) {
        plVar3 = (long *)FUN_01021c74(param_1);
        uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x42);
        if ((uVar4 & 1) != 0) {
          return 2;
        }
        goto LAB_0291a648;
      }
    }
LAB_0291a614:
    uVar1 = 10;
  }
  else {
LAB_0291a648:
    plVar3 = (long *)FUN_01021c74(param_1);
    iVar2 = (**(code **)(*plVar3 + 0xa0))(plVar3,uVar1);
    if (iVar2 < 0x28) {
      plVar3 = (long *)FUN_01021c74(param_1);
      iVar2 = (**(code **)(*plVar3 + 0x498))(plVar3,uVar1);
      if (iVar2 == 0) {
        plVar3 = (long *)FUN_01021c74(param_1);
        uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x32);
        if ((uVar4 & 1) != 0) goto LAB_0291a614;
      }
      plVar3 = (long *)FUN_01021c74(param_1);
      uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x1b);
      if ((uVar4 & 1) != 0) goto LAB_0291a614;
      plVar3 = (long *)FUN_01021c74(param_1);
      uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x1b);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
    uVar1 = 0xffffffec;
  }
  return uVar1;
}


