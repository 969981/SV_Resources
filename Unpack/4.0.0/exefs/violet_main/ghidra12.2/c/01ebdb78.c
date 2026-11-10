/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebdb78; name: FUN_01ebdb78
 */


void FUN_01ebdb78(long param_1,long *param_2)

{
  ushort *puVar1;
  char cVar2;
  ushort *puVar3;
  int local_8;
  uint local_4;
  
  local_4 = 0;
  param_2 = (long *)*param_2;
  if (((param_2 != (long *)0x0) &&
      (cVar2 = *(char *)(*param_2 + param_2[2]), param_2[2] = param_2[2] + 1, cVar2 == -0x47)) &&
     (FUN_01ebf2ac(&local_8,&local_4), local_8 == 0)) {
    puVar3 = *(ushort **)(param_1 + 0x50);
    puVar1 = *(ushort **)(param_1 + 0x58);
    if (puVar3 == puVar1) {
LAB_01ebdc0c:
      if (puVar3 != puVar1) {
        FUN_01ebcc38(puVar3 + 0x3c);
      }
    }
    else {
      do {
        if ((*(char *)((long)puVar3 + 0x71) == '\0') &&
           ((uint)*puVar3 == (local_4 & 3 | (local_4 >> 0x10 & 0x3fff) << 2))) goto LAB_01ebdc0c;
        puVar3 = puVar3 + 0x68;
      } while (puVar1 != puVar3);
    }
  }
  return;
}


