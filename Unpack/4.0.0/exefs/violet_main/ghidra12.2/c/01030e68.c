/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01030e68; name: FUN_01030e68
 */


void FUN_01030e68(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined2 local_28 [2];
  int local_24;
  
  if ((*(code **)(param_2 + 0x2c0) != (code *)0x0) && (*(char *)(param_2 + 0x340) != '\0')) {
    local_28[0] = *(undefined2 *)(param_2 + 0x342);
    uVar2 = (**(code **)(param_2 + 0x2c0))(param_2 + 0x2e0,local_28);
    if ((uVar2 & 1) != 0) goto LAB_01030fa0;
    *(undefined1 *)(param_2 + 0x340) = 0;
  }
  if (*(float *)(param_2 + 0x2b4) <= 0.0) {
    if (((((*(code **)(param_2 + 0x180) != (code *)0x0) && (*(char *)(param_2 + 0x289) == '\0')) &&
         (*(char *)(param_2 + 0x28a) == '\0')) &&
        ((*(char *)(param_2 + 0x2b0) != '\0' && (*(char *)(param_2 + 0x2b1) != '\0')))) &&
       (uVar2 = (**(code **)(param_2 + 0x180))(param_2 + 0x1a0), (uVar2 & 1) != 0)) {
      fVar4 = *(float *)(param_2 + 0x6c);
      fVar5 = fVar4 - (float)param_1;
      if (fVar4 <= 0.0) {
        fVar5 = fVar4;
      }
      *(float *)(param_2 + 0x6c) = fVar5;
      *(char *)(param_2 + 0x88) = *(char *)(param_2 + 0x88) << (fVar4 <= 0.0);
    }
    uVar3 = 0;
    do {
      while (iVar1 = FUN_01052660(param_1,param_2,&local_24), local_24 == 0) {
        if ((iVar1 != 1) || (uVar3 = uVar3 + 1, *(byte *)(param_2 + 0x88) <= uVar3))
        goto LAB_01030f04;
      }
    } while (local_24 != 1);
LAB_01030f04:
    if (*(int *)(param_2 + 0xf8) == 1) {
      *(undefined4 *)(param_2 + 0xf8) = 2;
    }
    *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_2 + 0x70);
    *(undefined1 *)(param_2 + 0x88) = *(undefined1 *)(param_2 + 0x89);
    *(int *)(param_2 + 0x368) = iVar1;
    *(undefined1 *)(param_2 + 0x220) = 0;
    return;
  }
  *(float *)(param_2 + 0x2b4) = *(float *)(param_2 + 0x2b4) - (float)param_1;
LAB_01030fa0:
  *(undefined4 *)(param_2 + 0x368) = 1;
  return;
}


