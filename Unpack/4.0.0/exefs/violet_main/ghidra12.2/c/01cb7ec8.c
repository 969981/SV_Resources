/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cb7ec8; name: FUN_01cb7ec8
 */


undefined4 FUN_01cb7ec8(char *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  
  cVar1 = *param_1;
  uVar3 = 0;
  if (cVar1 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar2 != 0)) {
      uVar3 = *(undefined4 *)(lVar2 + param_2 + -0x28);
    }
  }
  else if (((cVar1 == '\x01') || (cVar1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    return *(undefined4 *)(*(long *)(param_1 + 8) + param_2);
  }
  return uVar3;
}


