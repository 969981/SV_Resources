/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01366b80; name: FUN_01366b80
 */


void FUN_01366b80(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_1[0xb] != 0) {
    plVar1 = (long *)param_1[6];
    while (plVar1 != (long *)0x0) {
      plVar7 = (long *)*plVar1;
      if ((long *)plVar1[2] != (long *)0x0) {
        (**(code **)(*(long *)plVar1[2] + 0x20))();
      }
      plVar6 = (long *)param_1[7];
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x20,8);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x20,8);
        plVar1 = plVar7;
      }
    }
    uVar2 = param_1[1];
    param_1[6] = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*param_1 + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


