/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4c088; name: FUN_00a4c088
 */


void FUN_00a4c088(long *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  char local_18 [8];
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar7 + 0x70);
    if ((*(byte *)(*(long *)(lVar6 + 0x10) + 4) >> 2 & 1) == 0) {
      sVar3 = FUN_00cf44f4();
      if (sVar3 == 0) {
        return;
      }
      lVar6 = *(long *)(lVar7 + 0x70);
    }
    local_18[0] = '\0';
    local_18[1] = '\0';
    local_18[2] = '\0';
    local_18[3] = '\0';
    local_18[4] = '\0';
    local_18[5] = '\0';
    local_18[6] = '\0';
    local_18[7] = '\0';
    uVar4 = FUN_00cf44f4(lVar6);
    uVar5 = FUN_00cf41a8(*(undefined8 *)(lVar7 + 0x70));
    snprintf(local_18,8,"%04d_%02d",uVar4 & 0xffff,uVar5 & 0xffff);
    FUN_01b3c818(0xf7,local_18);
    FUN_01b3c408(0xf8,(long)param_2);
    uVar4 = FUN_00dbf838(*(undefined8 *)(lVar7 + 0x70));
    uVar5 = FUN_00dbfb7c(*(undefined8 *)(lVar7 + 0x70));
    FUN_01b3c408(0xf9,(uVar4 & 0xfff0 ^ uVar4 >> 0x10 ^ uVar5 >> 0x10 ^ uVar5 & 0xfff0) < 0x10);
    cVar2 = FUN_01400ba8(*(undefined8 *)(lVar7 + 0x70));
    cVar1 = '\x1b';
    if ((byte)(cVar2 - 1U) < 0x1a) {
      cVar1 = cVar2;
    }
    FUN_01b3c408(0xfa,cVar1);
    FUN_017d2474(0x1f,0);
  }
  return;
}


