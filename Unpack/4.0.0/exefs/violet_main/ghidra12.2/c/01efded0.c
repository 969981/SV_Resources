/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01efded0; name: FUN_01efded0
 */


void FUN_01efded0(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x1d0) != '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0x1d9);
    uVar2 = *(undefined8 *)(param_2 + 0x1e1);
    uVar3 = *(undefined8 *)(param_2 + 0x1e6);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 0x1d1);
    *(undefined8 *)(param_1 + 0x16) = uVar3;
    *(undefined8 *)(param_1 + 0x11) = uVar2;
    *(undefined8 *)(param_1 + 9) = uVar1;
    *param_1 = 1;
  }
  return;
}


