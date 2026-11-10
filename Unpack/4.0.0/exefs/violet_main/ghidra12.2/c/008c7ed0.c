/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c7ed0; name: FUN_008c7ed0
 */


void FUN_008c7ed0(long param_1)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  float local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  if (*(long *)(param_1 + 0x3f0) == 0) {
    pcVar4 = (code *)0x0;
  }
  else {
    pcVar4 = *(code **)(*(long *)(param_1 + 0x3f0) + 0x40);
  }
  if (*(long *)(param_1 + 0x3e0) == 0) {
    pcVar2 = (code *)0x0;
  }
  else {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x3e0) + 0x40);
  }
  if (*(long *)(param_1 + 1000) == 0) {
    pcVar3 = (code *)0x0;
  }
  else {
    pcVar3 = *(code **)(*(long *)(param_1 + 1000) + 0x40);
  }
  if ((((pcVar4 != (code *)0x0) || (pcVar2 != (code *)0x0)) || (pcVar3 != (code *)0x0)) &&
     (0 < *(int *)(param_1 + 0x28))) {
    lVar5 = 0;
    lVar6 = 0;
    if (pcVar4 == (code *)0x0) {
      do {
        lVar1 = *(long *)(param_1 + 0xb0) + lVar6;
        local_50 = *(float *)(param_1 + 0x44) - *(float *)(lVar1 + 8);
        local_4c = *(undefined4 *)(lVar1 + 0xc);
        uStack_48 = (undefined4)lVar5;
        local_68 = *(undefined8 *)(lVar1 + 0x10);
        local_60 = *(undefined8 *)(lVar1 + 0x18);
        local_58 = param_1;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(&local_68);
        }
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(&local_68);
        }
        *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar6 + 0x18) = 0;
        lVar1 = *(long *)(param_1 + 0xb0) + lVar6;
        lVar6 = lVar6 + 0x20;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x28));
    }
    else {
      lVar6 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0xb0) + lVar5;
        local_50 = *(float *)(param_1 + 0x44) - *(float *)(lVar1 + 8);
        local_4c = *(undefined4 *)(lVar1 + 0xc);
        uStack_48 = (undefined4)lVar6;
        local_68 = *(undefined8 *)(lVar1 + 0x10);
        local_60 = *(undefined8 *)(lVar1 + 0x18);
        local_58 = param_1;
        (*pcVar4)(&local_68);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(&local_68);
        }
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(&local_68);
        }
        *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar5 + 0x18) = 0;
        lVar1 = *(long *)(param_1 + 0xb0) + lVar5;
        lVar5 = lVar5 + 0x20;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x28));
    }
  }
  return;
}


