/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebdaa4; name: FUN_01ebdaa4
 */


void FUN_01ebdaa4(long param_1,long *param_2)

{
  ushort *puVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  ushort *puVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  uint local_24;
  
  local_24 = 0;
  plVar4 = (long *)*param_2;
  if (((plVar4 != (long *)0x0) &&
      (cVar2 = *(char *)(*plVar4 + plVar4[2]), plVar4[2] = plVar4[2] + 1, cVar2 == -0x47)) &&
     (FUN_01ebf2ac(&local_38,&local_24), (int)local_38 == 0)) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 1;
    if ((*param_2 != 0) && (uVar3 = FUN_01ebf340(*param_2,&local_38), (uVar3 & 1) != 0)) {
      puVar5 = *(ushort **)(param_1 + 0x88);
      puVar1 = *(ushort **)(param_1 + 0x90);
      if (puVar5 == puVar1) {
LAB_01ebdb5c:
        if (puVar5 != puVar1) {
          *(undefined4 *)(puVar5 + 0x50) = local_28;
          *(undefined8 *)(puVar5 + 0x48) = local_38;
          *(undefined8 *)(puVar5 + 0x4c) = uStack_30;
        }
      }
      else {
        do {
          if ((uint)*puVar5 == (local_24 & 3 | (local_24 >> 0x10 & 0x3fff) << 2)) goto LAB_01ebdb5c;
          puVar5 = puVar5 + 0x60;
        } while (puVar1 != puVar5);
      }
    }
  }
  return;
}


