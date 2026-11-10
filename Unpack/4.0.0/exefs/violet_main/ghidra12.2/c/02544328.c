/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02544328; name: FUN_02544328
 */


void FUN_02544328(char *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = *param_1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 != 0)) {
      lVar3 = lVar3 + param_2;
      *(undefined8 *)(lVar3 + -0x20) = param_3[1];
      *(undefined8 *)(lVar3 + -0x28) = *param_3;
    }
  }
  else if (((cVar2 == '\x01') || (cVar2 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2);
    puVar1[1] = param_3[1];
    *puVar1 = *param_3;
    return;
  }
  return;
}


