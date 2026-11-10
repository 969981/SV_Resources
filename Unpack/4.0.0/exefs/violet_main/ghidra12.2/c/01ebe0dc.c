/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebe0dc; name: FUN_01ebe0dc
 */


void FUN_01ebe0dc(long param_1,int param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long local_50;
  undefined1 local_44 [4];
  
  if (param_2 == 1) {
    lVar4 = *(long *)(param_1 + 0x88);
    local_50 = param_3;
    if (lVar4 != *(long *)(param_1 + 0x90)) {
      do {
        uVar1 = FUN_01ea2ee8(lVar4,&local_50);
        if ((uVar1 & 1) == 0) {
          lVar2 = *(long *)(param_1 + 0x90);
          lVar4 = lVar4 + 0xc0;
        }
        else {
          if (*(code **)(param_1 + 0x1c0) != (code *)0x0) {
            (**(code **)(param_1 + 0x1c0))(param_1 + 0x1e0,lVar4);
          }
          lVar2 = FUN_01ebe260(lVar4 + 0xc0,*(undefined8 *)(param_1 + 0x90),lVar4);
          lVar5 = *(long *)(param_1 + 0x90);
          while (lVar5 != lVar2) {
            lVar5 = lVar5 + -0xc0;
            FUN_01a0b710(lVar5);
          }
          *(long *)(param_1 + 0x90) = lVar2;
        }
      } while (lVar4 != lVar2);
    }
    lVar4 = local_50;
    if ((*(char *)(param_1 + 0x2c0) != '\0') &&
       ((lVar5 = *(long *)(param_1 + 0x2d0), lVar2 = FUN_0156cb10(param_4), lVar5 == lVar4 ||
        (lVar2 == local_50)))) {
      if (*(code **)(param_1 + 0x2f0) != (code *)0x0) {
        local_44[0] = 0;
        (**(code **)(param_1 + 0x2f0))(param_1 + 0x310,local_44);
      }
      if (*(char *)(param_1 + 0x2c0) != '\0') {
        pcVar3 = *(code **)(param_1 + 0x2f8);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(param_1 + 0x300) = 0;
          *(undefined8 *)(param_1 + 0x308) = 0;
          *(undefined8 *)(param_1 + 0x2f0) = 0;
          *(undefined8 *)(param_1 + 0x2f8) = 0;
          (*pcVar3)(param_1 + 0x310);
        }
        *(undefined1 *)(param_1 + 0x2c0) = 0;
      }
    }
    lVar4 = local_50;
    if ((*(char *)(param_1 + 0x3e0) != '\0') &&
       (((lVar5 = *(long *)(param_1 + 1000), lVar2 = FUN_0156cb10(param_4), lVar5 == lVar4 ||
         (lVar2 == local_50)) &&
        (FUN_01ebe3a4(param_1,param_1 + 0x3f0), *(char *)(param_1 + 0x3e0) != '\0')))) {
      *(undefined1 *)(param_1 + 0x3e0) = 0;
    }
  }
  return;
}


