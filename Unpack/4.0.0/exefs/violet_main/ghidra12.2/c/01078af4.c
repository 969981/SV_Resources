/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01078af4; name: FUN_01078af4
 */


void FUN_01078af4(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 != (long *)0x0) {
      plVar8 = *(long **)(param_1 + 0x40);
      plVar7 = (long *)*plVar6;
      uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,0x20,4);
      }
      else {
        FUN_00c48fe8(plVar8,plVar6,0x20,4);
      }
      while (plVar7 != (long *)0x0) {
        plVar6 = *(long **)(param_1 + 0x40);
        plVar8 = (long *)*plVar7;
        uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,0x20,4);
          plVar7 = plVar8;
        }
        else {
          FUN_00c48fe8(plVar6,plVar7,0x20,4);
          plVar7 = plVar8;
        }
      }
    }
    uVar5 = *(ulong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (uVar5 != 0) {
      uVar2 = uVar5 & 3;
      if (uVar5 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 8) + uVar3 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 8) + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 8) + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*(long *)(param_1 + 8) + lVar4 + 0x18) = 0;
        } while ((uVar5 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar2 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 8) + lVar4) = 0;
          uVar2 = uVar2 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 != (long *)0x0) {
    do {
      puVar1 = (undefined8 *)FUN_010803d0(param_1 + 8,plVar6 + 2);
      *puVar1 = *(undefined8 *)((long)plVar6 + 0x14);
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}


