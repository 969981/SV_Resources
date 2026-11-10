/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1cab4; name: FUN_00e1cab4
 */


void FUN_00e1cab4(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *plStack_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00e147a4(param_1 + 2);
  lVar5 = *param_2;
  if ((lVar5 != 0) &&
     (uVar8 = (*(long *)(lVar5 + 0x250) - *(long *)(lVar5 + 0x248) >> 4) * 0xaaab,
     (uVar8 & 0xffff) != 0)) {
    lVar5 = param_1[1];
    uVar6 = (ulong)(short)uVar8;
    uVar7 = lVar5 - *param_1 >> 5;
    if (uVar7 < uVar6) {
      FUN_00d24494(param_1,uVar6 - uVar7);
    }
    else if (uVar6 < uVar7) {
      lVar3 = *param_1 + uVar6 * 0x20;
      while (lVar3 != lVar5) {
        plVar1 = (long *)(lVar5 + -8);
        lVar5 = lVar5 + -0x20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      }
      param_1[1] = lVar3;
    }
    if (0 < (short)uVar8) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        FUN_00e1561c(&local_70,*param_2,uVar6 & 0xffffffff);
        plVar1 = plStack_58;
        puVar2 = (undefined8 *)(*param_1 + lVar5);
        *puVar2 = local_70;
        puVar2[1] = local_68;
        puVar2[2] = local_60;
        if (plStack_58 != (long *)0x0) {
          (**(code **)(*plStack_58 + 0x18))(plStack_58);
        }
        plVar4 = (long *)puVar2[3];
        puVar2[3] = plVar1;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))();
        }
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while ((uVar8 & 0xffff) != uVar6);
    }
  }
  return;
}


