/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00522a94; name: FUN_00522a94
 */


undefined8
FUN_00522a94(long *param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_00524ad8();
  puVar2 = auVar6._0_8_;
  puVar2[2] = param_5;
  if ((auVar6._8_8_ & 0xff) == 0) goto switchD_00522b08_default;
  *(undefined1 *)((long)puVar2 + 9) = 1;
  *(byte *)(puVar2 + 1) = param_3;
  uVar1 = *(undefined4 *)(PTR_DAT_047cdbe8 + (ulong)param_3 * 4);
  *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
  switch(uVar1) {
  case 1:
  case 8:
    lVar5 = *param_1;
    if (lVar5 == 0) break;
    if (*(long *)(lVar5 + 0x70) != 0) {
      FUN_00520d08(lVar5,0,0x10);
    }
    puVar4 = PTR_LAB_047cdbf0;
LAB_00522bcc:
    plVar3 = (long *)FUN_00520544(lVar5,0x10,puVar4);
    *plVar3 = 0;
    plVar3[1] = lVar5;
    goto LAB_00522c64;
  case 2:
    lVar5 = *param_1;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_00520d08(lVar5,0,0x10);
      }
      puVar4 = PTR_LAB_047cdbf8;
      goto LAB_00522bcc;
    }
    break;
  case 3:
    lVar5 = *param_1;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_00520d08(lVar5,0,0x10);
      }
      puVar4 = PTR_LAB_047cdc00;
      goto LAB_00522bcc;
    }
    break;
  case 4:
    lVar5 = *param_1;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_00520d08(lVar5,0,0x10);
      }
      puVar4 = PTR_LAB_047cdc08;
      goto LAB_00522bcc;
    }
    break;
  case 5:
    lVar5 = *param_1;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_00520d08(lVar5,0,0x10);
      }
      puVar4 = PTR_LAB_047cdc18;
      goto LAB_00522bcc;
    }
    break;
  case 6:
    lVar5 = *param_1;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_00520d08(lVar5,0,0x10);
      }
      puVar4 = PTR_LAB_047cdc10;
      goto LAB_00522bcc;
    }
    break;
  case 7:
    lVar5 = *param_1;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_00520d08(lVar5,0,0x10);
      }
      puVar4 = PTR_LAB_047cdc20;
      goto LAB_00522bcc;
    }
    break;
  case 9:
    lVar5 = *param_1;
    if (lVar5 == 0) {
LAB_00522c48:
      plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
      if (plVar3 != (long *)0x0) {
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
      }
      goto LAB_00522c64;
    }
    if (*(long *)(lVar5 + 0x70) != 0) {
      FUN_00520d08(lVar5,0,0x18);
    }
    puVar4 = PTR_LAB_047cdc28;
    goto LAB_00522c30;
  case 10:
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_00522c48;
    if (*(long *)(lVar5 + 0x70) != 0) {
      FUN_00520d08(lVar5,0,0x18);
    }
    puVar4 = PTR_LAB_047cdac0;
LAB_00522c30:
    plVar3 = (long *)FUN_00520544(lVar5,0x18,puVar4);
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = lVar5;
    goto LAB_00522c64;
  default:
    goto switchD_00522b08_default;
  }
  plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x10);
  if (plVar3 != (long *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0;
  }
LAB_00522c64:
  *puVar2 = plVar3;
switchD_00522b08_default:
  return *puVar2;
}


