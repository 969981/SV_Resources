/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebd994; name: FUN_01ebd994
 */


void FUN_01ebd994(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  ushort *puVar4;
  ushort *puVar5;
  long lVar6;
  int local_18;
  uint local_14;
  
  local_14 = 0;
  param_2 = (long *)*param_2;
  if (((param_2 != (long *)0x0) &&
      (cVar2 = *(char *)(*param_2 + param_2[2]), param_2[2] = param_2[2] + 1, cVar2 == -0x47)) &&
     (FUN_01ebf2ac(&local_18,&local_14), local_18 == 0)) {
    puVar5 = *(ushort **)(param_1 + 0x88);
    puVar4 = *(ushort **)(param_1 + 0x90);
    if (puVar5 != puVar4) {
      uVar1 = (local_14 >> 0x10) << 2;
      if ((uint)*puVar5 != (local_14 & 3 | uVar1 & 0xffff)) {
        do {
          puVar5 = puVar5 + 0x60;
          if (puVar4 == puVar5) {
            puVar5 = puVar4;
            goto LAB_01ebda40;
          }
        } while ((uint)*puVar5 != (local_14 & 3 | uVar1 & 0xffff));
      }
    }
LAB_01ebda40:
    if (puVar4 != puVar5) {
      if (*(code **)(param_1 + 0x1c0) != (code *)0x0) {
        (**(code **)(param_1 + 0x1c0))(param_1 + 0x1e0,puVar5);
        puVar4 = *(ushort **)(param_1 + 0x90);
      }
      lVar3 = FUN_01ebe260(puVar5 + 0x60,puVar4);
      lVar6 = *(long *)(param_1 + 0x90);
      while (lVar6 != lVar3) {
        lVar6 = lVar6 + -0xc0;
        FUN_01a0b710(lVar6);
      }
      *(long *)(param_1 + 0x90) = lVar3;
    }
  }
  return;
}


