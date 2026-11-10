/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d6470; name: FUN_001d6470
 */


undefined8 FUN_001d6470(long *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  
  lVar8 = *param_1;
  do {
    for (; (iVar3 = FUN_001cb268(*param_2), iVar3 != 0 || (cVar2 = *param_2, cVar2 == ','));
        param_2 = param_2 + 1) {
    }
    pcVar5 = param_2;
    pcVar6 = (char *)0x0;
    while ((cVar2 != '\0' && (cVar2 != ','))) {
      iVar3 = FUN_001cb268(cVar2);
      pcVar1 = pcVar5 + (1 - (long)param_2);
      if (iVar3 != 0) {
        pcVar1 = pcVar6;
      }
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar1;
      cVar2 = *pcVar5;
    }
    if ((param_3 == 0) || (pcVar6 != (char *)0x7)) {
      if (pcVar6 != (char *)0x0) goto LAB_001d6540;
    }
    else {
      iVar3 = FUN_001e0a34(param_2,"chunked",7);
      if (iVar3 == 0) {
LAB_001d6540:
        ppuVar7 = &PTR_s_identity_044847c8;
        ppuVar9 = &PTR_PTR_04484750;
        do {
          iVar3 = FUN_001e0a34(param_2,*ppuVar7,pcVar6);
          if (((iVar3 != 0) && (pcVar6[(long)*ppuVar7] == '\0')) ||
             ((ppuVar7[1] != (undefined *)0x0 &&
              ((iVar3 = FUN_001e0a34(param_2,ppuVar7[1],pcVar6), iVar3 != 0 &&
               (pcVar6[(long)ppuVar7[1]] == '\0')))))) break;
          ppuVar7 = (undefined **)*ppuVar9;
          ppuVar9 = ppuVar9 + 1;
        } while (ppuVar7 != (undefined **)0x0);
        lVar4 = *(long *)(lVar8 + 0x1a0);
        if (lVar4 == 0) {
          lVar4 = FUN_001d6610(param_1,&DAT_04484768);
          *(long *)(lVar8 + 0x1a0) = lVar4;
          if (lVar4 == 0) {
            return 0x1b;
          }
        }
        ppuVar9 = (undefined **)&DAT_04484798;
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar9 = ppuVar7;
        }
        lVar4 = FUN_001d6610(param_1,ppuVar9,lVar4);
        if (lVar4 == 0) {
          return 0x1b;
        }
        *(long *)(lVar8 + 0x1a0) = lVar4;
      }
      else {
        *(ushort *)(lVar8 + 0x660) = *(ushort *)(lVar8 + 0x660) | 0x20;
        FUN_001d6ed8(param_1);
      }
    }
    param_2 = pcVar5;
    if (*pcVar5 == '\0') {
      return 0;
    }
  } while( true );
}


