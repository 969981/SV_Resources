/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167119c; name: FUN_0167119c
 */


undefined8 FUN_0167119c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  pcVar1 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x110),param_1 + 0x30);
  lVar3 = *(long *)(pcVar1 + 8);
  if (*pcVar1 == '\0' || lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    *param_2 = *(undefined8 *)(lVar3 + 0x68);
    *param_3 = *(undefined8 *)(lVar3 + 0x70);
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(lVar3 + 0x78);
    }
    uVar2 = 1;
  }
  return uVar2;
}


