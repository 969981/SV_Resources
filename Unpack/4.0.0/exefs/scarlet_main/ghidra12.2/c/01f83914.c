/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f83914; name: FUN_01f83914
 */


void FUN_01f83914(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  
  *(undefined1 *)(param_1 + 0x129) = 0;
  if (*(int *)(param_1 + 0x330) != 1) {
    if (*(int *)(param_1 + 0x330) != 0) {
      return;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x120) + 0xd8))();
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar1 = (**(code **)(param_1 + 0x130))(param_1 + 0x150);
    if ((uVar1 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x330) = 1;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x120) + 0xd8))();
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(param_1 + 0x1b0))(param_1 + 0x1d0);
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x330) = 2;
      pcVar3 = *(code **)(param_1 + 0x238);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x248) = 0;
        *(undefined8 *)(param_1 + 0x240) = 0;
        *(undefined8 *)(param_1 + 0x238) = 0;
        *(undefined8 *)(param_1 + 0x230) = 0;
        (*pcVar3)(param_1 + 0x250);
      }
      pcVar3 = *(code **)(param_1 + 0x2b8);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x2c8) = 0;
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        *(undefined8 *)(param_1 + 0x2b8) = 0;
        *(undefined8 *)(param_1 + 0x2b0) = 0;
        (*pcVar3)(param_1 + 0x2d0);
      }
      FUN_011920ec(param_1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x128) == '\0') {
    lVar2 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    *(float *)(param_1 + 300) = (float)((double)*(long *)(lVar2 + 8) / 1000000000.0);
    if (*(code **)(param_1 + 0x230) != (code *)0x0) {
      (**(code **)(param_1 + 0x230))(param_1 + 0x250);
    }
    *(undefined1 *)(param_1 + 0x129) = 1;
  }
  return;
}


