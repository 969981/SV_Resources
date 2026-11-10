/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175d694; name: FUN_0175d694
 */


long * FUN_0175d694(long param_1,undefined8 param_2,uint param_3,long param_4,long *param_5)

{
  undefined *puVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  if (2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_028afae0();
  }
  param_1 = param_1 + (ulong)param_3 * 0x20;
  *(long *)(param_1 + 0x10) = (long)param_5;
  *(undefined8 *)(param_1 + 0x20) = 0x58;
  plVar3 = (long *)(**(code **)(*param_5 + 0x10))(param_5,0x58,8);
  *(long **)(param_1 + 0x18) = plVar3;
  if (plVar3 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xe8))();
  }
  else {
    plVar3[2] = 0;
    puVar1 = PTR_DAT_047dda10;
    *(undefined2 *)(plVar3 + 3) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = (long)(puVar1 + 0x130);
    plVar7 = param_5 + 1;
    plVar4 = (long *)(**(code **)*plVar7)(plVar7);
    lVar5 = FUN_012e29ac();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        plVar4 = param_5;
        goto LAB_0175d750;
      }
    }
    plVar4 = (long *)0x0;
LAB_0175d750:
    plVar3[4] = (long)plVar4;
    plVar3[5] = param_4;
    *(undefined4 *)(plVar3 + 6) = 0;
    plVar3[9] = 0;
    *(undefined1 *)(plVar3 + 10) = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    uVar6 = (**(code **)(*param_5 + 0xb8))(param_5);
    if ((uVar6 & 1) == 0) {
      (**(code **)*plVar7)(plVar7);
      bVar2 = FUN_012e2a88();
    }
    else {
      bVar2 = 1;
    }
    *(byte *)(plVar3 + 10) = bVar2 & 1;
    *(long **)(param_1 + 8) = plVar3;
    (**(code **)(*plVar3 + 0xe0))(plVar3,param_2);
  }
  return plVar3;
}


