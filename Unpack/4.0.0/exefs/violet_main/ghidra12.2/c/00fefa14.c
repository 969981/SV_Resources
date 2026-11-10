/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fefa14; name: FUN_00fefa14
 */


void FUN_00fefa14(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  size_t sVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = (long *)param_1[1];
  plVar2 = (long *)param_1[2];
  do {
    if (plVar7 == plVar2) {
      plVar7 = (long *)param_1[8];
      plVar2 = (long *)param_1[9];
      if (plVar7 != plVar2) {
        do {
          lVar5 = *plVar7;
          plVar6 = *(long **)(lVar5 + 0x48);
          plVar3 = *(long **)(lVar5 + 0x50);
          if ((plVar6 != plVar3) && (*plVar6 != *param_1)) {
            do {
              if (plVar3 + -1 == plVar6) {
                plVar6 = plVar3;
                goto LAB_00fefb34;
              }
              plVar1 = plVar6 + 1;
              plVar6 = plVar6 + 1;
            } while (*plVar1 != *param_1);
          }
LAB_00fefb34:
          if (plVar3 != plVar6) {
            sVar4 = (long)plVar3 - (long)(plVar6 + 1);
            if (sVar4 != 0) {
              memmove(plVar6,plVar6 + 1,sVar4);
            }
            *(size_t *)(lVar5 + 0x50) = (long)plVar6 + sVar4;
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar2);
        plVar7 = (long *)param_1[8];
      }
      param_1[2] = param_1[1];
      param_1[9] = (long)plVar7;
      return;
    }
    lVar5 = *plVar7;
    plVar6 = *(long **)(lVar5 + 0x80);
    plVar3 = *(long **)(lVar5 + 0x88);
    if ((plVar6 != plVar3) && (*plVar6 != *param_1)) {
      do {
        if (plVar3 + -1 == plVar6) {
          plVar6 = plVar3;
          goto LAB_00fefa88;
        }
        plVar1 = plVar6 + 1;
        plVar6 = plVar6 + 1;
      } while (*plVar1 != *param_1);
    }
LAB_00fefa88:
    if (plVar3 != plVar6) {
      sVar4 = (long)plVar3 - (long)(plVar6 + 1);
      if (sVar4 != 0) {
        memmove(plVar6,plVar6 + 1,sVar4);
      }
      *(size_t *)(lVar5 + 0x88) = (long)plVar6 + sVar4;
    }
    plVar6 = (long *)param_1[8];
    plVar3 = (long *)param_1[9];
    if ((plVar6 != plVar3) && (FUN_00c495e0(*plVar6 + 0x40,lVar5), plVar6 + 1 != plVar3)) {
      FUN_00c495e0(plVar6[1] + 0x40,lVar5);
      for (plVar6 = plVar6 + 2; plVar6 != plVar3; plVar6 = plVar6 + 1) {
        FUN_00c495e0(*plVar6 + 0x40,lVar5);
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
}


