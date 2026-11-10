/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a46f48; name: FUN_01a46f48
 */


void FUN_01a46f48(long param_1,byte param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  if (iVar1 == 2) {
    if (4 < param_2) goto LAB_01a46fb8;
    puVar3 = &DAT_03d6a45a;
  }
  else if (iVar1 == 1) {
    if (4 < param_2) {
LAB_01a46fb8:
      uVar2 = 2;
      goto LAB_01a46f74;
    }
    puVar3 = &DAT_03d6a455;
  }
  else {
    if ((iVar1 != 0) || (4 < param_2)) goto LAB_01a46fb8;
    puVar3 = &DAT_03d6a450;
  }
  uVar2 = puVar3[param_2];
LAB_01a46f74:
  FUN_0123aa70(iVar1,*(undefined1 *)(*(long *)(param_1 + 8) + 0x370),uVar2);
  return;
}


