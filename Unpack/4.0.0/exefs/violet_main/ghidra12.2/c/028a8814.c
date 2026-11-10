/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a8814; name: FUN_028a8814
 */


byte * FUN_028a8814(undefined8 param_1,byte *param_2,byte *param_3,string *param_4,long param_5)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  ushort uVar4;
  
  if (param_2 == param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_028a5f80();
  }
  bVar1 = *param_2;
  if (bVar1 < 0x62) {
    if (bVar1 < 0x53) {
      if (bVar1 == 0) {
        cVar3 = '\0';
LAB_028a88e4:
        std::string::operator=(param_4,cVar3);
        goto LAB_028a8908;
      }
      if (bVar1 != 0x44) goto LAB_028a8918;
      uVar4 = *(ushort *)(param_5 + 0xa2) | 0x800;
    }
    else {
      if (bVar1 != 0x53) {
        if (bVar1 != 0x57) goto LAB_028a8918;
        *(ushort *)(param_5 + 0xa2) = *(ushort *)(param_5 + 0xa2) | 0xc00;
        FUN_028a8ffc(param_5);
        goto LAB_028a8908;
      }
      uVar4 = *(ushort *)(param_5 + 0xa2) | 0x2000;
    }
    *(ushort *)(param_5 + 0xa2) = uVar4;
  }
  else {
    if (bVar1 < 0x73) {
      if (bVar1 == 0x62) {
        cVar3 = '\b';
        goto LAB_028a88e4;
      }
      if (bVar1 != 100) goto LAB_028a8918;
      uVar4 = *(ushort *)(param_5 + 0xa0) | 0x800;
    }
    else {
      if (bVar1 != 0x73) {
        if (bVar1 == 0x77) {
          *(ushort *)(param_5 + 0xa0) = *(ushort *)(param_5 + 0xa0) | 0xc00;
          FUN_0146ab00(param_5,0x5f);
          goto LAB_028a8908;
        }
LAB_028a8918:
        pbVar2 = (byte *)FUN_028a6110(param_1,param_2);
        return pbVar2;
      }
      uVar4 = *(ushort *)(param_5 + 0xa0) | 0x2000;
    }
    *(ushort *)(param_5 + 0xa0) = uVar4;
  }
LAB_028a8908:
  return param_2 + 1;
}


