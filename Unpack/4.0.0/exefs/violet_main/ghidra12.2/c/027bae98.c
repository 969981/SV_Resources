/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bae98; name: FUN_027bae98
 */


void FUN_027bae98(char *param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*param_1 == '\0') {
    FUN_01cfa5b0(param_1 + 8,param_2);
    FUN_01cfa5b0(param_1 + 0x28,param_2 + 0x20);
    FUN_01d01ed8(param_1 + 0x48,param_2 + 0x40);
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    cVar2 = *(char *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    param_1[0x60] = cVar2;
    *param_1 = '\x01';
  }
  else {
    FUN_01d0e1a8(param_1 + 8,param_2);
    FUN_01d0e1a8(param_1 + 0x28,param_2 + 0x20);
    FUN_027bbf28(param_1 + 0x48,param_2 + 0x40);
    cVar2 = *(char *)(param_2 + 0x58);
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    param_1[0x60] = cVar2;
  }
  return;
}


