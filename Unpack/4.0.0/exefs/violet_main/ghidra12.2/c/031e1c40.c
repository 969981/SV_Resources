/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e1c40; name: FUN_031e1c40
 */


long FUN_031e1c40(ulong *param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  short *psVar4;
  long *plVar5;
  short *psVar6;
  ulong uVar7;
  
  if ((param_1 != (ulong *)0x0) && (param_2 != (char *)0x0)) {
    if ((param_3 & 1) != 0) {
      do {
        puVar3 = param_1;
        do {
          uVar2 = (uint)*puVar3;
          if ((uVar2 >> 0x17 & 1) != 0) {
            uVar2 = uVar2 & 0x7fffff;
            psVar4 = (short *)puVar3[(ulong)(byte)(POPCOUNT((char)uVar2) +
                                                   POPCOUNT((char)(uVar2 >> 8)) +
                                                  POPCOUNT((char)(uVar2 >> 0x10))) + 2];
            if (psVar4 != (short *)0x0) {
              psVar6 = psVar4 + 4;
              psVar4 = psVar6 + ((long)psVar4[1] + (long)*psVar4) * 4;
              goto LAB_031e1cd4;
            }
            break;
          }
          if ((*puVar3 & 1) != 0) {
            psVar6 = (short *)0x0;
            psVar4 = (short *)0x0;
            goto LAB_031e1cd4;
          }
          puVar3 = (ulong *)puVar3[1];
        } while (puVar3 != (ulong *)0x0);
        psVar4 = (short *)0x0;
        psVar6 = (short *)0x0;
LAB_031e1cd4:
        if (0 < (int)((ulong)((long)psVar4 - (long)psVar6) >> 3)) {
          uVar7 = 0;
          do {
            plVar5 = (long *)(psVar6 + uVar7 * 4);
            puVar3 = (ulong *)*plVar5;
            if (puVar3 != (ulong *)0x0) {
              while( true ) {
                uVar2 = (uint)*puVar3;
                if ((uVar2 >> 0x10 & 1) != 0) break;
                if (((*puVar3 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
                goto LAB_031e1d40;
              }
              uVar2 = uVar2 & 0xffff;
              if (((char *)puVar3[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))
                                               ) + 2] != (char *)0x0) &&
                 (iVar1 = strcmp(param_2,(char *)puVar3[(ulong)(byte)(POPCOUNT((char)uVar2) +
                                                                     POPCOUNT((char)(uVar2 >> 8))) +
                                                        2]), iVar1 == 0)) goto LAB_031e1e4c;
            }
LAB_031e1d40:
            uVar7 = uVar7 + 1;
          } while (uVar7 != ((ulong)((long)psVar4 - (long)psVar6) >> 3 & 0xffffffff));
        }
        do {
          param_1 = (ulong *)param_1[1];
          if (param_1 == (ulong *)0x0) {
            return 0;
          }
        } while ((*param_1 & 1) == 0);
      } while( true );
    }
    do {
      uVar2 = (uint)*param_1;
      if ((uVar2 >> 0x17 & 1) != 0) {
        uVar2 = uVar2 & 0x7fffff;
        psVar4 = (short *)param_1[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))
                                               + POPCOUNT((char)(uVar2 >> 0x10))) + 2];
        if (psVar4 == (short *)0x0) {
          psVar6 = (short *)0x0;
          psVar4 = (short *)0x0;
        }
        else {
          psVar6 = psVar4 + 4;
          psVar4 = psVar6 + ((long)psVar4[1] + (long)*psVar4) * 4;
        }
        goto LAB_031e1dbc;
      }
    } while (((*param_1 & 1) == 0) && (param_1 = (ulong *)param_1[1], param_1 != (ulong *)0x0));
    psVar6 = (short *)0x0;
    psVar4 = (short *)0x0;
LAB_031e1dbc:
    if (0 < (int)((ulong)((long)psVar4 - (long)psVar6) >> 3)) {
      uVar7 = 0;
      do {
        plVar5 = (long *)(psVar6 + uVar7 * 4);
        puVar3 = (ulong *)*plVar5;
        if (puVar3 != (ulong *)0x0) {
          while( true ) {
            uVar2 = (uint)*puVar3;
            if ((uVar2 >> 0x10 & 1) != 0) break;
            if (((*puVar3 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
            goto LAB_031e1e28;
          }
          uVar2 = uVar2 & 0xffff;
          if (((char *)puVar3[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))) +
                              2] != (char *)0x0) &&
             (iVar1 = strcmp(param_2,(char *)puVar3[(ulong)(byte)(POPCOUNT((char)uVar2) +
                                                                 POPCOUNT((char)(uVar2 >> 8))) + 2])
             , iVar1 == 0)) {
LAB_031e1e4c:
            return *plVar5;
          }
        }
LAB_031e1e28:
        uVar7 = uVar7 + 1;
      } while (uVar7 != ((ulong)((long)psVar4 - (long)psVar6) >> 3 & 0xffffffff));
    }
  }
  return 0;
}


