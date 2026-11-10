/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0137e548; name: FUN_0137e548
 */


void FUN_0137e548(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  memset((void *)(param_1 + 8),0,0x2e4);
  if (*(long *)(param_1 + 0x348) != 0) {
    plVar1 = *(long **)(param_1 + 800);
    if (plVar1 != (long *)0x0) {
      plVar7 = *(long **)(param_1 + 0x328);
      plVar6 = (long *)*plVar1;
      uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,plVar1,0x18,4);
      }
      else {
        FUN_00c48fe8(plVar7,plVar1,0x18,4);
      }
      while (plVar6 != (long *)0x0) {
        plVar1 = *(long **)(param_1 + 0x328);
        plVar7 = (long *)*plVar6;
        uVar5 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar1 + 0x18))(plVar1,plVar6,0x18,4);
          plVar6 = plVar7;
        }
        else {
          FUN_00c48fe8(plVar1,plVar6,0x18,4);
          plVar6 = plVar7;
        }
      }
    }
    uVar5 = *(ulong *)(param_1 + 0x2f8);
    *(undefined8 *)(param_1 + 800) = 0;
    if (uVar5 != 0) {
      uVar2 = uVar5 & 3;
      if (uVar5 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x2f0) + uVar3 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x2f0) + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x2f0) + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x2f0) + lVar4 + 0x18) = 0;
        } while ((uVar5 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar2 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x2f0) + lVar4) = 0;
          uVar2 = uVar2 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x348) = 0;
  }
  return;
}


