/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dc7bc; name: FUN_018dc7bc
 */


void FUN_018dc7bc(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0xb0) != '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0xc0);
    uVar2 = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0xb8);
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
  }
  return;
}


