/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b960c; name: FUN_029b960c
 */


void FUN_029b960c(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1[0xb] != 0) {
    puVar5 = (undefined8 *)param_1[6];
    if (puVar5 != (undefined8 *)0x0) {
      plVar6 = (long *)*puVar5;
      FUN_0119bfb4(puVar5 + 2);
      plVar7 = (long *)param_1[7];
      uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,puVar5,0x50,8);
      }
      else {
        FUN_00c48fe8(plVar7,puVar5,0x50,8);
      }
      if (plVar6 != (long *)0x0) {
        plVar7 = (long *)*plVar6;
        FUN_0119bfb4(plVar6 + 2);
        plVar8 = (long *)param_1[7];
        uVar1 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,0x50,8);
        }
        else {
          FUN_00c48fe8(plVar8,plVar6,0x50,8);
        }
        while (plVar7 != (long *)0x0) {
          plVar8 = (long *)*plVar7;
          FUN_0119bfb4(plVar7 + 2);
          plVar6 = (long *)param_1[7];
          uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
          if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,0x50,8);
            plVar7 = plVar8;
          }
          else {
            FUN_00c48fe8(plVar6,plVar7,0x50,8);
            plVar7 = plVar8;
          }
        }
      }
    }
    uVar1 = param_1[1];
    param_1[6] = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar2 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar4) = 0;
          uVar2 = uVar2 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


