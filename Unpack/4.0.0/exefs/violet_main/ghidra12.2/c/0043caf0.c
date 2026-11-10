/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043caf0; name: FUN_0043caf0
 */


ulong FUN_0043caf0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_80 [64];
  undefined4 local_34;
  
  plVar5 = (long *)param_1[4];
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 4) >> 2 & 1) != 0) {
    if (param_2 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x78);
      param_2 = 0;
    }
    else {
      if ((*(byte *)((long)param_1 + 0x11) >> 1 & 1) == 0) {
        plVar5 = (long *)FUN_00440230(plVar5);
        uVar2 = 0;
        if (plVar5 != (long *)0x0) {
          uVar2 = (**(code **)(*plVar5 + 0x78))(plVar5,param_2,param_3,param_1);
          FUN_00440340(plVar5);
        }
        goto LAB_0043cce4;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x78);
    }
                    /* WARNING: Could not recover jumptable at 0x0043cc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar5,param_2,param_3,param_1);
    return uVar3;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x78);
  if (param_2 == 0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      iVar1 = FUN_0043b720(*param_1);
      if (iVar1 < 0) goto LAB_0043cc68;
      iVar1 = FUN_0043f250(plVar5,0,param_3,0,iVar1);
    }
    else {
      iVar1 = (*UNRECOVERED_JUMPTABLE)(plVar5,0,param_3,param_1);
    }
joined_r0x0043cbd8:
    if (0 < iVar1) {
      uVar2 = 1;
      goto LAB_0043cce4;
    }
  }
  else {
    local_34 = 0;
    if ((*(byte *)((long)param_1 + 0x11) >> 1 & 1) != 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        uVar2 = (*UNRECOVERED_JUMPTABLE)(plVar5,param_2,param_3,param_1);
        goto LAB_0043cce4;
      }
      uVar2 = FUN_0042be20(param_1,auStack_80,&local_34);
LAB_0043ccb4:
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) || (uVar2 == 0)) goto LAB_0043cce4;
      iVar1 = FUN_0043f250(param_1[4],param_2,param_3,auStack_80,local_34);
      goto joined_r0x0043cbd8;
    }
    lVar4 = FUN_0042bbc0();
    if (lVar4 != 0) {
      iVar1 = FUN_0042bfb0(lVar4,param_1);
      if (iVar1 == 0) {
        FUN_0042bbe0(lVar4);
        uVar2 = 0;
        goto LAB_0043cce4;
      }
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        uVar2 = FUN_0042be20(lVar4,auStack_80,&local_34);
      }
      else {
        uVar2 = (**(code **)(**(long **)(lVar4 + 0x20) + 0x78))
                          (*(long **)(lVar4 + 0x20),param_2,param_3,lVar4);
      }
      FUN_0042bbe0(lVar4);
      goto LAB_0043ccb4;
    }
  }
LAB_0043cc68:
  uVar2 = 0;
LAB_0043cce4:
  return (ulong)uVar2;
}


