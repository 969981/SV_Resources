/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be1bec; name: FUN_01be1bec
 */


void FUN_01be1bec(char *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0x10;
  if (DAT_0480eec8 == '\0') {
    lVar1 = -1;
  }
  lVar3 = FUN_01be3210(param_2);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    lVar1 = *(long *)(param_1 + 8) + lVar1;
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  return;
}


