/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9a630; name: FUN_01e9a630
 */


undefined8 FUN_01e9a630(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if ((((*(uint *)(param_1 + 0x30) < 2) && (*(long *)(param_1 + 0x40) != 0)) &&
      (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) != 0)) &&
     ((*(long *)(param_1 + 0x40) != 0 && (*(long *)(*(long *)(param_1 + 0x40) + 0x10) != 0)))) {
    *(undefined8 *)(param_1 + 0x30) = 0x200000007;
    pcVar2 = *(code **)(param_1 + 0x168);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      (*pcVar2)(param_1 + 0x180);
    }
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,param_1 + 0x180);
      uVar1 = param_2[3];
      *(undefined8 *)(param_1 + 0x168) = param_2[1];
      *(undefined8 *)(param_1 + 0x178) = uVar1;
      uVar1 = *param_2;
      *(undefined8 *)(param_1 + 0x170) = param_2[2];
      *(undefined8 *)(param_1 + 0x160) = uVar1;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


