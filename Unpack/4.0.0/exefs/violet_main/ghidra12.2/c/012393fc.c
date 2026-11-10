/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012393fc; name: FUN_012393fc
 */


void FUN_012393fc(int *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  
  if (*param_1 == 8) {
    uVar2 = (ulong)(byte)param_2[0xb];
    cVar1 = (char)param_1[1];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_0123946c;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
      cVar1 = (char)param_1[1];
    }
LAB_0123946c:
    cVar1 = FUN_0123a588(2,param_3,cVar1,1);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_012394bc;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_012394bc:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],2);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239510;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239510:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],3);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239564;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239564:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],4);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_012395b8;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_012395b8:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],5);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (10 < uVar2) {
      return;
    }
    if (param_2[0xb] == 0) goto LAB_0123a084;
    pcVar4 = param_2;
    uVar3 = uVar2;
    do {
      if (*pcVar4 == cVar1) {
        return;
      }
      uVar3 = uVar3 - 1;
      pcVar4 = pcVar4 + 1;
    } while (uVar3 != 0);
    goto LAB_012395fc;
  }
  switch(*param_1) {
  case 1:
  case 5:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],1);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_012398d0;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_012398d0:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],2);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239924;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239924:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],3);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239978;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239978:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],4);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_012399cc;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_012399cc:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],5);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (10 < uVar2) {
      return;
    }
    if (param_2[0xb] == 0) {
LAB_0123a084:
      uVar2 = 0;
    }
    else {
      pcVar4 = param_2;
      uVar3 = uVar2;
      do {
        if (*pcVar4 == cVar1) {
          return;
        }
        uVar3 = uVar3 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar3 != 0);
    }
    break;
  case 2:
  case 7:
    cVar1 = FUN_0123aecc(2,param_3,(char)param_1[1],0);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_012396bc;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_012396bc:
    cVar1 = FUN_0123aecc(2,param_3,(char)param_1[1],1);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239710;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239710:
    cVar1 = FUN_0123aecc(2,param_3,(char)param_1[1],2);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239764;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239764:
    cVar1 = FUN_0123aecc(2,param_3,(char)param_1[1],3);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_012397b8;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_012397b8:
    cVar1 = FUN_0123aecc(2,param_3,(char)param_1[1],4);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_0123980c;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_0123980c:
    cVar1 = FUN_0123aecc(2,param_3,(char)param_1[1],5);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (10 < uVar2) {
      return;
    }
    if (param_2[0xb] == 0) goto LAB_0123a084;
    pcVar4 = param_2;
    uVar3 = uVar2;
    do {
      if (*pcVar4 == cVar1) {
        return;
      }
      uVar3 = uVar3 - 1;
      pcVar4 = pcVar4 + 1;
    } while (uVar3 != 0);
    break;
  case 3:
    cVar1 = FUN_0123aecc(2,param_3,(char)param_1[1],0);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239d48;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239d48:
    cVar1 = FUN_0123aecc(2,param_3,(char)param_1[1],1);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239d9c;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239d9c:
    cVar1 = FUN_0123aecc(2,param_3,(char)param_1[1],2);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239df0;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239df0:
    cVar1 = FUN_0123aecc(2,param_3,(char)param_1[1],3);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239e44;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239e44:
    cVar1 = FUN_0123aecc(2,param_3,(char)param_1[1],4);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239e98;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239e98:
    cVar1 = FUN_0123aecc(2,param_3,(char)param_1[1],5);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239eec;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239eec:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],1);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239f40;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239f40:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],2);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239f94;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239f94:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],3);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_01239fe8;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_01239fe8:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],4);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (uVar2 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar2 = 0;
      }
      else {
        pcVar4 = param_2;
        uVar3 = uVar2;
        do {
          if (*pcVar4 == cVar1) goto LAB_0123a03c;
          uVar3 = uVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar3 != 0);
      }
      param_2[uVar2] = cVar1;
      param_2[0xb] = param_2[0xb] + '\x01';
    }
LAB_0123a03c:
    cVar1 = FUN_0123a588(2,param_3,(char)param_1[1],5);
    uVar2 = (ulong)(byte)param_2[0xb];
    if (10 < uVar2) {
      return;
    }
    if (param_2[0xb] == 0) goto LAB_0123a084;
    pcVar4 = param_2;
    uVar3 = uVar2;
    do {
      if (*pcVar4 == cVar1) {
        return;
      }
      uVar3 = uVar3 - 1;
      pcVar4 = pcVar4 + 1;
    } while (uVar3 != 0);
    break;
  case 4:
    uVar2 = FUN_0123b494(2,param_3,(char)param_1[1],0);
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)(byte)param_2[0xb];
      if (uVar2 < 0xb) {
        if (param_2[0xb] == 0) {
          uVar2 = 0;
        }
        else {
          pcVar4 = param_2;
          uVar3 = uVar2;
          do {
            if (*pcVar4 == '\0') goto LAB_0123a1a8;
            uVar3 = uVar3 - 1;
            pcVar4 = pcVar4 + 1;
          } while (uVar3 != 0);
        }
        param_2[uVar2] = '\0';
        param_2[0xb] = param_2[0xb] + '\x01';
      }
    }
LAB_0123a1a8:
    uVar2 = FUN_0123b494(2,param_3,(char)param_1[1],1);
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)(byte)param_2[0xb];
      if (uVar2 < 0xb) {
        if (param_2[0xb] == 0) {
          uVar2 = 0;
        }
        else {
          pcVar4 = param_2;
          uVar3 = uVar2;
          do {
            if (*pcVar4 == '\x01') goto LAB_0123a20c;
            uVar3 = uVar3 - 1;
            pcVar4 = pcVar4 + 1;
          } while (uVar3 != 0);
        }
        param_2[uVar2] = '\x01';
        param_2[0xb] = param_2[0xb] + '\x01';
      }
    }
LAB_0123a20c:
    uVar2 = FUN_0123b494(2,param_3,(char)param_1[1],2);
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)(byte)param_2[0xb];
      if (uVar2 < 0xb) {
        if (param_2[0xb] == 0) {
          uVar2 = 0;
        }
        else {
          pcVar4 = param_2;
          uVar3 = uVar2;
          do {
            if (*pcVar4 == '\x02') goto LAB_0123a270;
            uVar3 = uVar3 - 1;
            pcVar4 = pcVar4 + 1;
          } while (uVar3 != 0);
        }
        param_2[uVar2] = '\x02';
        param_2[0xb] = param_2[0xb] + '\x01';
      }
    }
LAB_0123a270:
    uVar2 = FUN_0123b494(2,param_3,(char)param_1[1],3);
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)(byte)param_2[0xb];
      if (uVar2 < 0xb) {
        if (param_2[0xb] == 0) {
          uVar2 = 0;
        }
        else {
          pcVar4 = param_2;
          uVar3 = uVar2;
          do {
            if (*pcVar4 == '\x03') goto LAB_0123a2d4;
            uVar3 = uVar3 - 1;
            pcVar4 = pcVar4 + 1;
          } while (uVar3 != 0);
        }
        param_2[uVar2] = '\x03';
        param_2[0xb] = param_2[0xb] + '\x01';
      }
    }
LAB_0123a2d4:
    uVar2 = FUN_0123b494(2,param_3,(char)param_1[1],4);
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)(byte)param_2[0xb];
      if (uVar2 < 0xb) {
        if (param_2[0xb] == 0) {
          uVar2 = 0;
        }
        else {
          pcVar4 = param_2;
          uVar3 = uVar2;
          do {
            if (*pcVar4 == '\x04') goto LAB_0123a338;
            uVar3 = uVar3 - 1;
            pcVar4 = pcVar4 + 1;
          } while (uVar3 != 0);
        }
        param_2[uVar2] = '\x04';
        param_2[0xb] = param_2[0xb] + '\x01';
      }
    }
LAB_0123a338:
    uVar2 = FUN_0123b494(2,param_3,(char)param_1[1],5);
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)(byte)param_2[0xb];
      if (uVar2 < 0xb) {
        if (param_2[0xb] == 0) {
          uVar2 = 0;
        }
        else {
          pcVar4 = param_2;
          uVar3 = uVar2;
          do {
            if (*pcVar4 == '\x05') goto LAB_0123a39c;
            uVar3 = uVar3 - 1;
            pcVar4 = pcVar4 + 1;
          } while (uVar3 != 0);
        }
        param_2[uVar2] = '\x05';
        param_2[0xb] = param_2[0xb] + '\x01';
      }
    }
LAB_0123a39c:
    uVar2 = FUN_0123b494(2,param_3,(char)param_1[1],6);
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)(byte)param_2[0xb];
      if (uVar2 < 0xb) {
        if (param_2[0xb] == 0) {
          uVar2 = 0;
        }
        else {
          pcVar4 = param_2;
          uVar3 = uVar2;
          do {
            if (*pcVar4 == '\x06') goto LAB_0123a400;
            uVar3 = uVar3 - 1;
            pcVar4 = pcVar4 + 1;
          } while (uVar3 != 0);
        }
        param_2[uVar2] = '\x06';
        param_2[0xb] = param_2[0xb] + '\x01';
      }
    }
LAB_0123a400:
    uVar2 = FUN_0123b494(2,param_3,(char)param_1[1],7);
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)(byte)param_2[0xb];
      if (uVar2 < 0xb) {
        if (param_2[0xb] == 0) {
          uVar2 = 0;
        }
        else {
          pcVar4 = param_2;
          uVar3 = uVar2;
          do {
            if (*pcVar4 == '\a') goto LAB_0123a464;
            uVar3 = uVar3 - 1;
            pcVar4 = pcVar4 + 1;
          } while (uVar3 != 0);
        }
        param_2[uVar2] = '\a';
        param_2[0xb] = param_2[0xb] + '\x01';
      }
    }
LAB_0123a464:
    uVar2 = FUN_0123b494(2,param_3,(char)param_1[1],8);
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)(byte)param_2[0xb];
      if (uVar2 < 0xb) {
        if (param_2[0xb] == 0) {
          uVar2 = 0;
        }
        else {
          pcVar4 = param_2;
          uVar3 = uVar2;
          do {
            if (*pcVar4 == '\b') goto LAB_0123a4c8;
            uVar3 = uVar3 - 1;
            pcVar4 = pcVar4 + 1;
          } while (uVar3 != 0);
        }
        param_2[uVar2] = '\b';
        param_2[0xb] = param_2[0xb] + '\x01';
      }
    }
LAB_0123a4c8:
    uVar2 = FUN_0123b494(2,param_3,(char)param_1[1],9);
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)(byte)param_2[0xb];
      if (uVar2 < 0xb) {
        if (param_2[0xb] == 0) {
          uVar2 = 0;
        }
        else {
          pcVar4 = param_2;
          uVar3 = uVar2;
          do {
            if (*pcVar4 == '\t') goto LAB_0123a52c;
            uVar3 = uVar3 - 1;
            pcVar4 = pcVar4 + 1;
          } while (uVar3 != 0);
        }
        param_2[uVar2] = '\t';
        param_2[0xb] = param_2[0xb] + '\x01';
      }
    }
LAB_0123a52c:
    uVar2 = FUN_0123b494(2,param_3,(char)param_1[1],10);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar2 = (ulong)(byte)param_2[0xb];
    if (10 < uVar2) {
      return;
    }
    if (param_2[0xb] == 0) {
      uVar2 = 0;
    }
    else {
      pcVar4 = param_2;
      uVar3 = uVar2;
      do {
        if (*pcVar4 == '\n') {
          return;
        }
        uVar3 = uVar3 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar3 != 0);
    }
    param_2[uVar2] = '\n';
    goto LAB_01239600;
  case 6:
  case 9:
    uVar2 = (ulong)(byte)param_2[0xb];
    if (10 < uVar2) {
      return;
    }
    if (param_2[0xb] == 0) {
      uVar2 = 0;
    }
    else {
      pcVar4 = param_2;
      uVar3 = uVar2;
      do {
        if (*pcVar4 == '\0') goto LAB_01239a50;
        uVar3 = uVar3 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar3 != 0);
    }
    param_2[uVar2] = '\0';
    uVar2 = (ulong)((byte)param_2[0xb] + 1);
    param_2[0xb] = (char)((byte)param_2[0xb] + 1);
LAB_01239a50:
    if (10 < ((uint)uVar2 & 0xff)) {
      return;
    }
    if ((uVar2 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2 & 0xff;
      pcVar4 = param_2;
      uVar5 = uVar3;
      do {
        if (*pcVar4 == '\x01') goto LAB_01239a9c;
        uVar5 = uVar5 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar5 != 0);
    }
    param_2[uVar3] = '\x01';
    uVar2 = (ulong)((byte)param_2[0xb] + 1);
    param_2[0xb] = (char)((byte)param_2[0xb] + 1);
LAB_01239a9c:
    if (10 < ((uint)uVar2 & 0xff)) {
      return;
    }
    if ((uVar2 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2 & 0xff;
      pcVar4 = param_2;
      uVar5 = uVar3;
      do {
        if (*pcVar4 == '\x02') goto LAB_01239ae8;
        uVar5 = uVar5 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar5 != 0);
    }
    param_2[uVar3] = '\x02';
    uVar2 = (ulong)((byte)param_2[0xb] + 1);
    param_2[0xb] = (char)((byte)param_2[0xb] + 1);
LAB_01239ae8:
    if (10 < ((uint)uVar2 & 0xff)) {
      return;
    }
    if ((uVar2 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2 & 0xff;
      pcVar4 = param_2;
      uVar5 = uVar3;
      do {
        if (*pcVar4 == '\x03') goto LAB_01239b34;
        uVar5 = uVar5 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar5 != 0);
    }
    param_2[uVar3] = '\x03';
    uVar2 = (ulong)((byte)param_2[0xb] + 1);
    param_2[0xb] = (char)((byte)param_2[0xb] + 1);
LAB_01239b34:
    if (10 < ((uint)uVar2 & 0xff)) {
      return;
    }
    if ((uVar2 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2 & 0xff;
      pcVar4 = param_2;
      uVar5 = uVar3;
      do {
        if (*pcVar4 == '\x04') goto LAB_01239b80;
        uVar5 = uVar5 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar5 != 0);
    }
    param_2[uVar3] = '\x04';
    uVar2 = (ulong)((byte)param_2[0xb] + 1);
    param_2[0xb] = (char)((byte)param_2[0xb] + 1);
LAB_01239b80:
    if (10 < ((uint)uVar2 & 0xff)) {
      return;
    }
    if ((uVar2 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2 & 0xff;
      pcVar4 = param_2;
      uVar5 = uVar3;
      do {
        if (*pcVar4 == '\x05') goto LAB_01239bcc;
        uVar5 = uVar5 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar5 != 0);
    }
    param_2[uVar3] = '\x05';
    uVar2 = (ulong)((byte)param_2[0xb] + 1);
    param_2[0xb] = (char)((byte)param_2[0xb] + 1);
LAB_01239bcc:
    if (10 < ((uint)uVar2 & 0xff)) {
      return;
    }
    if ((uVar2 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2 & 0xff;
      pcVar4 = param_2;
      uVar5 = uVar3;
      do {
        if (*pcVar4 == '\x06') goto LAB_01239c18;
        uVar5 = uVar5 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar5 != 0);
    }
    param_2[uVar3] = '\x06';
    uVar2 = (ulong)((byte)param_2[0xb] + 1);
    param_2[0xb] = (char)((byte)param_2[0xb] + 1);
LAB_01239c18:
    if (10 < ((uint)uVar2 & 0xff)) {
      return;
    }
    if ((uVar2 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2 & 0xff;
      pcVar4 = param_2;
      uVar5 = uVar3;
      do {
        if (*pcVar4 == '\a') goto LAB_01239c64;
        uVar5 = uVar5 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar5 != 0);
    }
    param_2[uVar3] = '\a';
    uVar2 = (ulong)((byte)param_2[0xb] + 1);
    param_2[0xb] = (char)((byte)param_2[0xb] + 1);
LAB_01239c64:
    if (10 < ((uint)uVar2 & 0xff)) {
      return;
    }
    if ((uVar2 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2 & 0xff;
      pcVar4 = param_2;
      uVar5 = uVar3;
      do {
        if (*pcVar4 == '\b') goto LAB_01239cb0;
        uVar5 = uVar5 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar5 != 0);
    }
    param_2[uVar3] = '\b';
    uVar2 = (ulong)((byte)param_2[0xb] + 1);
    param_2[0xb] = (char)((byte)param_2[0xb] + 1);
LAB_01239cb0:
    if (10 < ((uint)uVar2 & 0xff)) {
      return;
    }
    if ((uVar2 & 0xff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 & 0xff;
      pcVar4 = param_2;
      uVar3 = uVar2;
      do {
        if (*pcVar4 == '\t') {
          return;
        }
        uVar3 = uVar3 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar3 != 0);
    }
    param_2[uVar2] = '\t';
    goto LAB_01239600;
  default:
    goto switchD_01239664_caseD_8;
  }
LAB_012395fc:
  param_2[uVar2] = cVar1;
LAB_01239600:
  param_2[0xb] = param_2[0xb] + '\x01';
switchD_01239664_caseD_8:
  return;
}


