/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048ba10; name: FUN_0048ba10
 */


undefined8 FUN_0048ba10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  pcVar3 = (char *)FUN_00485680(param_2,0,0);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  if (*pcVar3 == '\0') {
    uVar6 = 1;
    uVar5 = 0x1f8;
    goto LAB_0048bb38;
  }
  pcVar7 = pcVar3 + 1;
  pcVar8 = pcVar3 + 2;
  uVar5 = 0x214;
  while( true ) {
    pcVar9 = pcVar8 + -1;
    cVar4 = *pcVar9;
    if (cVar4 == '/') break;
LAB_0048ba64:
    if (cVar4 == '\0') goto LAB_0048bab0;
LAB_0048ba68:
    pcVar8 = pcVar8 + 1;
  }
  iVar1 = FUN_003f6e20(*pcVar8,2);
  if ((iVar1 == 0) ||
     ((pcVar8[1] != '=' && ((iVar1 = FUN_003f6e20(pcVar8[1],2), iVar1 == 0 || (pcVar8[2] != '=')))))
     ) {
    cVar4 = *pcVar9;
    goto LAB_0048ba64;
  }
LAB_0048bab0:
  iVar1 = (int)pcVar9 - (int)pcVar7;
  iVar2 = FUN_003e8f00(param_1,pcVar7,iVar1);
  if (iVar2 == iVar1) {
    if (*pcVar9 != '\0') {
      iVar1 = FUN_003e8f00(param_1,&DAT_03c82382,2);
      if (iVar1 != 2) goto LAB_0048bb14;
      pcVar7 = pcVar8;
      if (*pcVar9 != '\0') goto LAB_0048ba68;
    }
    uVar6 = 1;
  }
  else {
LAB_0048bb14:
    FUN_004806c0(0xb,0x75,7,"external/openssl/crypto/x509/x_name.c",0x217);
    uVar6 = 0;
    uVar5 = 0x218;
  }
LAB_0048bb38:
  FUN_00452f80(pcVar3,"external/openssl/crypto/x509/x_name.c",uVar5);
  return uVar6;
}


