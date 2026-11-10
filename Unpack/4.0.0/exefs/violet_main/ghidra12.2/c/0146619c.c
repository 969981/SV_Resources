/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146619c; name: FUN_0146619c
 */


bool FUN_0146619c(long param_1,byte param_2,byte param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined1 *puVar4;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  if (iVar1 == 2) {
    puVar4 = &DAT_03d6a45a;
joined_r0x01466200:
    if (param_2 < 5) {
      cVar2 = puVar4[param_2];
    }
    else {
      cVar2 = '\x02';
    }
    if (param_3 < 5) {
      cVar3 = puVar4[param_3];
      goto LAB_014661dc;
    }
  }
  else {
    if (iVar1 == 1) {
      puVar4 = &DAT_03d6a455;
      goto joined_r0x01466200;
    }
    if (iVar1 == 0) {
      puVar4 = &DAT_03d6a450;
      goto joined_r0x01466200;
    }
    cVar2 = '\x02';
  }
  cVar3 = '\x02';
LAB_014661dc:
  return cVar2 != cVar3;
}


