/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebdc20; name: FUN_01ebdc20
 */


void FUN_01ebdc20(long param_1,long *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  ulong uVar2;
  ushort *puVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  undefined1 uStack_27;
  short sStack_26;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined2 uStack_22;
  
  local_28 = 0;
  sStack_26 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  if (*param_2 == 0) {
    return;
  }
  uVar2 = FUN_01ebf39c(*param_2,&local_28);
  if ((uVar2 & 1) == 0) {
    return;
  }
  puVar3 = *(ushort **)(param_1 + 0x50);
  puVar1 = *(ushort **)(param_1 + 0x58);
  if (puVar3 == puVar1) {
LAB_01ebdcbc:
    if (puVar3 != puVar1) {
      puVar3[0x38] = 0x100;
      param_1 = param_1 + 0x370;
      *(undefined8 *)(puVar3 + 4) = *param_3;
      goto LAB_01ebdc98;
    }
  }
  else {
    do {
      if ((*(char *)((long)puVar3 + 0x71) == '\0') &&
         (*puVar3 == (ushort)(local_28 & 3 | sStack_26 << 2))) goto LAB_01ebdcbc;
      puVar3 = puVar3 + 0x68;
    } while (puVar1 != puVar3);
  }
  param_1 = param_1 + 0x3a8;
LAB_01ebdc98:
  local_38 = *param_3;
  uStack_30 = CONCAT26(uStack_22,
                       CONCAT15(uStack_23,
                                CONCAT14(uStack_24,CONCAT22(sStack_26,CONCAT11(uStack_27,local_28)))
                               ));
  FUN_019da380(param_1,&local_38);
  return;
}


