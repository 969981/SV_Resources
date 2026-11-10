/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033cbca0; name: FUN_033cbca0
 */


void FUN_033cbca0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1[3] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[4] = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[1] = 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((int)param_1[5] != 0) {
      lVar2 = 0x38;
      uVar3 = 1;
      while( true ) {
        if (*(long *)(lVar1 + lVar2) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(lVar1 + lVar2) = 0;
        }
        lVar1 = lVar1 + lVar2;
        *(undefined1 *)(lVar1 + 0xc) = 0;
        if (*(long *)(lVar1 + 0x10) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(lVar1 + 0x10) = 0;
        }
        *(undefined1 *)(lVar1 + 0x1c) = 0;
        if (*(long *)(lVar1 + 0x20) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(lVar1 + 0x20) = 0;
        }
        *(undefined1 *)(lVar1 + 0x2c) = 0;
        if (*(char *)((long)param_1 + 0x3e) != '\0') {
          if (*(long *)(lVar1 + -0x28) != 0) {
            (**(code **)(*param_2 + 0x18))(param_2);
            *(undefined8 *)(lVar1 + -0x28) = 0;
          }
          *(undefined4 *)(lVar1 + -0x2c) = 0;
        }
        if (*(long *)(lVar1 + -0x10) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(lVar1 + -0x10) = 0;
        }
        *(undefined4 *)(lVar1 + -0x14) = 0;
        if (*(long *)(lVar1 + 0x30) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
        }
        if (*(uint *)(param_1 + 5) <= uVar3) break;
        lVar1 = *param_1;
        lVar2 = lVar2 + 0x78;
        uVar3 = uVar3 + 1;
      }
      lVar1 = *param_1;
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar1);
    *param_1 = 0;
  }
  return;
}


