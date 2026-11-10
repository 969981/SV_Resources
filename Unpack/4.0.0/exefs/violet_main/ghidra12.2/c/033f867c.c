/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033f867c; name: FUN_033f867c
 */


undefined8 FUN_033f867c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (*(short *)((long)param_1 + 0x2c) != 0) {
      lVar2 = 0;
      uVar3 = 1;
      while( true ) {
        if (*(long *)(lVar1 + lVar2) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(lVar1 + lVar2) = 0;
          *(undefined4 *)((undefined8 *)(lVar1 + lVar2) + 1) = 0;
        }
        lVar1 = lVar1 + lVar2;
        if (*(long *)(lVar1 + 0x10) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(lVar1 + 0x10) = 0;
          *(undefined4 *)(lVar1 + 0x18) = 0;
        }
        if (*(ushort *)((long)param_1 + 0x2c) <= uVar3) break;
        lVar1 = param_1[4];
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x20;
      }
      lVar1 = param_1[4];
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar1);
    param_1[4] = 0;
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    if (*(short *)((long)param_1 + 0x3c) != 0) {
      lVar2 = 0;
      uVar3 = 1;
      while( true ) {
        if (*(long *)(lVar1 + lVar2) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(lVar1 + lVar2) = 0;
          *(undefined4 *)((undefined8 *)(lVar1 + lVar2) + 1) = 0;
        }
        lVar1 = lVar1 + lVar2;
        if (*(long *)(lVar1 + 0x10) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(lVar1 + 0x10) = 0;
          *(undefined4 *)(lVar1 + 0x18) = 0;
        }
        if (*(ushort *)((long)param_1 + 0x3c) <= uVar3) break;
        lVar1 = param_1[6];
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x20;
      }
      lVar1 = param_1[6];
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar1);
    param_1[6] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[3] = 0;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return 1;
}


