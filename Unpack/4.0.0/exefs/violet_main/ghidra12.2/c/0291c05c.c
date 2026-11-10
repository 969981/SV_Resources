/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291c05c; name: FUN_0291c05c
 */


uint FUN_0291c05c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 local_38;
  short local_34 [2];
  
  uVar2 = (**(code **)(*(long *)*param_2 + 0x98))();
  uVar3 = (**(code **)(*(long *)param_2[1] + 0x98))();
  plVar7 = (long *)FUN_01021c74(param_1);
  uVar4 = (**(code **)(*plVar7 + 0x250))(plVar7,uVar2,0);
  plVar7 = (long *)FUN_01021c74(param_1);
  uVar8 = (**(code **)(*plVar7 + 0x470))(plVar7,uVar2,uVar4);
  if ((uVar8 & 1) == 0) {
LAB_0291c0fc:
    plVar7 = (long *)FUN_01021c74(param_1);
    iVar5 = (**(code **)(*plVar7 + 0x140))(plVar7,uVar2);
    if (iVar5 < 4) {
      plVar7 = (long *)FUN_01021c74(param_1);
      uVar8 = (**(code **)(*plVar7 + 0x470))(plVar7,uVar3,uVar4);
      if ((uVar8 & 1) != 0) {
        plVar7 = (long *)FUN_01021c74(param_1);
        (**(code **)(*plVar7 + 0x2b8))(plVar7,&local_38,local_34,uVar2);
        if (local_34[0] != 0) {
          plVar7 = (long *)FUN_01021c74(param_1);
          cVar1 = (**(code **)(*plVar7 + 0x458))(plVar7,local_38,uVar3,local_34[0]);
          if (cVar1 == '\x03') {
            plVar7 = (long *)FUN_01021c74(param_1);
            lVar10 = *plVar7;
            uVar9 = 0x21;
          }
          else {
            if (cVar1 != '\0') goto LAB_0291c1a8;
            plVar7 = (long *)FUN_01021c74(param_1);
            lVar10 = *plVar7;
            uVar9 = 0x32;
          }
          uVar6 = (**(code **)(lVar10 + 0x4c0))(plVar7,uVar9);
          goto LAB_0291c1ac;
        }
      }
    }
  }
  else {
    plVar7 = (long *)FUN_01021c74(param_1);
    uVar8 = (**(code **)(*plVar7 + 0x4c0))(plVar7,0x5a);
    if ((uVar8 & 1) == 0) goto LAB_0291c0fc;
  }
LAB_0291c1a8:
  uVar6 = 0;
LAB_0291c1ac:
  return uVar6 & 1;
}


