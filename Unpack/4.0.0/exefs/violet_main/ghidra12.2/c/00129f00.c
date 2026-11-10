/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00129f00; name: FUN_00129f00
 */


void FUN_00129f00(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  
  bVar2 = *(byte *)(param_2 + 9);
  if ((bVar2 & 7) != 6) {
    lVar3 = *(long *)(param_1 + 0x18);
    puVar4 = (undefined8 *)0x0;
    switch(*(undefined1 *)(param_2 + 8)) {
    case 5:
      puVar4 = (undefined8 *)(param_2 + 0x30);
      break;
    case 6:
    case 0x26:
      puVar4 = (undefined8 *)(param_2 + 0x10);
      break;
    case 7:
      puVar4 = (undefined8 *)(param_2 + 0x20);
      break;
    case 8:
      puVar4 = (undefined8 *)(param_2 + 0x48);
      break;
    case 10:
      puVar4 = (undefined8 *)(param_2 + 0x78);
    }
    *puVar4 = *(undefined8 *)(lVar3 + 0x90);
    *(long *)(lVar3 + 0x90) = param_2;
    bVar2 = *(byte *)(param_2 + 9);
  }
  bVar1 = bVar2 & 199;
  if ((bVar2 & 6) != 0) {
    bVar1 = bVar2 & 0xc0 | 5;
  }
  *(byte *)(param_2 + 9) = bVar1;
  return;
}


