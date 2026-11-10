/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033f4be4; name: FUN_033f4be4
 */


void FUN_033f4be4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (*(long *)(param_1 + 0xa8) != 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      lVar3 = 0;
      uVar4 = 1;
      while( true ) {
        lVar1 = lVar1 + lVar3;
        if (*(long *)(lVar1 + 0x10) != 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
          *(undefined8 *)(lVar1 + 0x10) = 0;
        }
        *(undefined4 *)(lVar1 + 0xc) = 0;
        if (*(uint *)(param_1 + 0x40) <= uVar4) break;
        lVar1 = *(long *)(param_1 + 0x58);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x20;
      }
      lVar1 = *(long *)(param_1 + 0x58);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_033cbca0(param_1 + 0x18,plVar2);
  plVar2 = *(long **)(param_1 + 0x10);
  if (*(long *)(param_1 + 200) != 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x88) != 0) {
      lVar3 = 0;
      uVar4 = 1;
      while( true ) {
        lVar1 = lVar1 + lVar3;
        if (*(long *)(lVar1 + 0x10) != 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
          *(undefined8 *)(lVar1 + 0x10) = 0;
        }
        *(undefined4 *)(lVar1 + 0xc) = 0;
        if (*(uint *)(param_1 + 0x88) <= uVar4) break;
        lVar1 = *(long *)(param_1 + 0xa0);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x20;
      }
      lVar1 = *(long *)(param_1 + 0xa0);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  FUN_033cbca0(param_1 + 0x60,plVar2);
  return;
}


