/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00364a78; name: FUN_00364a78
 */


void FUN_00364a78(int *param_1,undefined4 *param_2)

{
  long lVar1;
  size_t __n;
  undefined1 *__dest;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  long *plVar8;
  char *__s;
  ulong uVar9;
  ulong local_78;
  size_t local_70;
  undefined1 *local_68;
  
  switch(*param_2) {
  case 0:
    local_78 = CONCAT26(local_78._6_2_,0x6c6c756e08);
                    /* try { // try from 00364ad8 to 00364ae3 has its CatchHandler @ 00365364 */
    FUN_0036538c(param_1,&local_78);
    break;
  case 1:
    local_78 = CONCAT26(local_78._6_2_,0x6575727408);
                    /* try { // try from 00364b9c to 00364ba7 has its CatchHandler @ 0036535c */
    FUN_0036538c(param_1,&local_78);
    break;
  case 2:
    local_78 = CONCAT17(local_78._7_1_,0x65736c61660a);
                    /* try { // try from 00364b4c to 00364b57 has its CatchHandler @ 00365360 */
    FUN_0036538c(param_1,&local_78);
    break;
  case 3:
    FUN_0036538c(param_1,param_2 + 2);
    return;
  case 4:
    if (*(char *)((long)param_1 + 9) != '\0') goto LAB_00364d14;
    if ((char)param_1[2] == '\0') {
      pbVar7 = (byte *)(param_1 + 4);
      if ((*pbVar7 & 1) == 0) {
        if ((*pbVar7 & 0xfe) == 0x2c) {
          lVar2 = 0x116;
          goto LAB_00364cc4;
        }
      }
      else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
        lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00364cc4:
        FUN_002cdbb0(pbVar7,lVar2);
      }
      FUN_002cdcec(pbVar7,0x2c);
      if (*param_1 == 0) goto LAB_00364d14;
      bVar4 = *pbVar7;
      if ((bVar4 & 1) == 0) goto LAB_00364b1c;
LAB_00364ce8:
      if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
        lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00364d00:
        FUN_002cdbb0(param_1 + 4,lVar2);
      }
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0;
      if ((*param_1 == 0) || (param_1[1] == 0)) goto LAB_00364d14;
      bVar4 = *(byte *)(param_1 + 4);
      if ((bVar4 & 1) != 0) goto LAB_00364ce8;
LAB_00364b1c:
      if ((bVar4 & 0xfe) == 0x2c) {
        lVar2 = 0x116;
        goto LAB_00364d00;
      }
    }
    FUN_002cdcec(param_1 + 4,10);
LAB_00364d14:
    FUN_0036550c(param_1);
    FUN_003656b0(param_1,param_2 + 2);
    *(undefined1 *)((long)param_1 + 9) = 0;
    return;
  case 5:
    if (*(char *)((long)param_1 + 9) == '\0') {
      if ((char)param_1[2] == '\0') {
        pbVar7 = (byte *)(param_1 + 4);
        if ((*pbVar7 & 1) == 0) {
          if ((*pbVar7 & 0xfe) == 0x2c) {
            lVar2 = 0x116;
            goto LAB_00364d48;
          }
        }
        else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
          lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00364d48:
          FUN_002cdbb0(pbVar7,lVar2);
        }
        FUN_002cdcec(pbVar7,0x2c);
        if (*param_1 != 0) {
          bVar4 = *pbVar7;
          if ((bVar4 & 1) == 0) goto LAB_00364bf4;
LAB_00364d6c:
          if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
            lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00364d84:
            FUN_002cdbb0(param_1 + 4,lVar2);
          }
          goto LAB_00364d8c;
        }
      }
      else {
        *(undefined1 *)(param_1 + 2) = 0;
        if ((*param_1 != 0) && (param_1[1] != 0)) {
          bVar4 = *(byte *)(param_1 + 4);
          if ((bVar4 & 1) != 0) goto LAB_00364d6c;
LAB_00364bf4:
          if ((bVar4 & 0xfe) == 0x2c) {
            lVar2 = 0x116;
            goto LAB_00364d84;
          }
LAB_00364d8c:
          FUN_002cdcec(param_1 + 4,10);
        }
      }
    }
    FUN_0036550c(param_1);
    pbVar7 = (byte *)(param_1 + 4);
    if ((*pbVar7 & 1) == 0) {
      if ((*pbVar7 & 0xfe) == 0x2c) {
        lVar2 = 0x116;
        goto LAB_00364dd8;
      }
    }
    else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
      lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00364dd8:
      FUN_002cdbb0(pbVar7,lVar2);
    }
    FUN_002cdcec(pbVar7,0x7b);
    *(undefined2 *)(param_1 + 2) = 1;
    param_1[1] = param_1[1] + 1;
    if (*(long **)(param_2 + 8) != (long *)(param_2 + 10)) {
      plVar8 = *(long **)(param_2 + 8);
      do {
        if ((*(byte *)(plVar8 + 4) & 1) == 0) {
          __s = (char *)((long)plVar8 + 0x21);
        }
        else {
          __s = (char *)plVar8[6];
        }
        __n = strlen(__s);
        if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < 0x17) {
          local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
          __dest = (undefined1 *)((ulong)&local_78 | 1);
          if (__n != 0) goto LAB_00364ed4;
          *(undefined1 *)((ulong)&local_78 | 1) = 0;
          if ((char)param_1[2] != '\0') goto LAB_00364e7c;
LAB_00364ef0:
          if ((*pbVar7 & 1) == 0) {
            if ((*pbVar7 & 0xfe) == 0x2c) {
              lVar2 = 0x116;
              goto LAB_00364f24;
            }
          }
          else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
            lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00364f24:
                    /* try { // try from 00364f24 to 00365013 has its CatchHandler @ 00365368 */
            FUN_002cdbb0(pbVar7,lVar2);
          }
          FUN_002cdcec(pbVar7,0x2c);
          if (*param_1 != 0) {
            if ((*pbVar7 & 1) == 0) {
              if ((*pbVar7 & 0xfe) == 0x2c) {
                lVar2 = 0x116;
                goto LAB_00364fa4;
              }
            }
            else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U)
            {
              lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00364fa4:
              FUN_002cdbb0(pbVar7,lVar2);
            }
            FUN_002cdcec(pbVar7,10);
          }
        }
        else {
          uVar9 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar9);
          local_78 = uVar9 | 1;
          local_70 = __n;
          local_68 = __dest;
LAB_00364ed4:
          memcpy(__dest,__s,__n);
          __dest[__n] = 0;
          if ((char)param_1[2] == '\0') goto LAB_00364ef0;
LAB_00364e7c:
          *(undefined1 *)(param_1 + 2) = 0;
          if ((*param_1 != 0) && (param_1[1] != 0)) {
            if ((*pbVar7 & 1) == 0) {
              if ((*pbVar7 & 0xfe) == 0x2c) {
                lVar2 = 0x116;
                goto LAB_00364f74;
              }
            }
            else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U)
            {
              lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00364f74:
              FUN_002cdbb0(pbVar7,lVar2);
            }
            FUN_002cdcec(pbVar7,10);
          }
        }
        FUN_0036550c(param_1);
        FUN_003656b0(param_1,&local_78);
        if ((*pbVar7 & 1) == 0) {
          if ((*pbVar7 & 0xfe) == 0x2c) {
            lVar2 = 0x116;
            goto LAB_00365000;
          }
        }
        else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
          lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00365000:
          FUN_002cdbb0(pbVar7,lVar2);
        }
        FUN_002cdcec(pbVar7,0x3a);
        *(undefined1 *)((long)param_1 + 9) = 1;
        if ((local_78 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_68);
        }
        FUN_00364a78(param_1,plVar8 + 7);
        plVar5 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          plVar5 = plVar8 + 2;
          plVar6 = (long *)*plVar5;
          if ((long *)*plVar6 != plVar8) {
            do {
              lVar2 = *plVar5;
              plVar5 = (long *)(lVar2 + 0x10);
              plVar6 = (long *)*plVar5;
            } while (*plVar6 != lVar2);
          }
        }
        else {
          do {
            plVar6 = plVar5;
            plVar5 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        plVar8 = plVar6;
      } while (plVar6 != (long *)(param_2 + 10));
    }
    if (*param_1 == 0) {
LAB_0036510c:
      param_1[1] = param_1[1] + -1;
      if ((char)param_1[2] == '\0') {
        FUN_0036550c(param_1);
        bVar4 = *pbVar7;
        goto joined_r0x00365154;
      }
      bVar4 = *pbVar7;
      if ((bVar4 & 1) == 0) goto LAB_00365128;
LAB_003650a8:
      if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
        lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00365138:
        FUN_002cdbb0(pbVar7,lVar2);
      }
    }
    else {
      if ((char)param_1[2] == '\0') {
        if ((*pbVar7 & 1) == 0) {
          if ((*pbVar7 & 0xfe) == 0x2c) {
            lVar2 = 0x116;
            goto LAB_003650f8;
          }
        }
        else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
          lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_003650f8:
          FUN_002cdbb0(pbVar7,lVar2);
        }
        FUN_002cdcec(pbVar7,10);
        goto LAB_0036510c;
      }
      param_1[1] = param_1[1] + -1;
      bVar4 = *pbVar7;
joined_r0x00365154:
      if ((bVar4 & 1) != 0) goto LAB_003650a8;
LAB_00365128:
      if ((bVar4 & 0xfe) == 0x2c) {
        lVar2 = 0x116;
        goto LAB_00365138;
      }
    }
    uVar3 = 0x7d;
LAB_00365310:
    FUN_002cdcec(param_1 + 4,uVar3);
    *(undefined2 *)(param_1 + 2) = 0;
    return;
  case 6:
    if (*(char *)((long)param_1 + 9) == '\0') {
      if ((char)param_1[2] == '\0') {
        pbVar7 = (byte *)(param_1 + 4);
        if ((*pbVar7 & 1) == 0) {
          if ((*pbVar7 & 0xfe) == 0x2c) {
            lVar2 = 0x116;
            goto LAB_00365174;
          }
        }
        else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
          lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00365174:
          FUN_002cdbb0(pbVar7,lVar2);
        }
        FUN_002cdcec(pbVar7,0x2c);
        if (*param_1 != 0) {
          bVar4 = *pbVar7;
          if ((bVar4 & 1) == 0) goto LAB_00364c38;
LAB_00365198:
          if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
            lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_003651b0:
            FUN_002cdbb0(param_1 + 4,lVar2);
          }
          goto LAB_003651b8;
        }
      }
      else {
        *(undefined1 *)(param_1 + 2) = 0;
        if ((*param_1 != 0) && (param_1[1] != 0)) {
          bVar4 = *(byte *)(param_1 + 4);
          if ((bVar4 & 1) != 0) goto LAB_00365198;
LAB_00364c38:
          if ((bVar4 & 0xfe) == 0x2c) {
            lVar2 = 0x116;
            goto LAB_003651b0;
          }
LAB_003651b8:
          FUN_002cdcec(param_1 + 4,10);
        }
      }
    }
    FUN_0036550c(param_1);
    pbVar7 = (byte *)(param_1 + 4);
    if ((*pbVar7 & 1) == 0) {
      if ((*pbVar7 & 0xfe) == 0x2c) {
        lVar2 = 0x116;
        goto LAB_00365204;
      }
    }
    else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
      lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00365204:
      FUN_002cdbb0(pbVar7,lVar2);
    }
    FUN_002cdcec(pbVar7,0x5b);
    *(undefined2 *)(param_1 + 2) = 1;
    param_1[1] = param_1[1] + 1;
    lVar1 = *(long *)(param_2 + 0x10);
    for (lVar2 = *(long *)(param_2 + 0xe); lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
      FUN_00364a78(param_1,lVar2);
    }
    if (*param_1 == 0) {
LAB_003652d8:
      param_1[1] = param_1[1] + -1;
      if ((char)param_1[2] == '\0') {
        FUN_0036550c(param_1);
        bVar4 = *pbVar7;
        goto joined_r0x00365348;
      }
      bVar4 = *pbVar7;
      if ((bVar4 & 1) == 0) goto LAB_003652f4;
LAB_00365274:
      if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
        lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_00365304:
        FUN_002cdbb0(pbVar7,lVar2);
      }
    }
    else {
      if ((char)param_1[2] == '\0') {
        if ((*pbVar7 & 1) == 0) {
          if ((*pbVar7 & 0xfe) == 0x2c) {
            lVar2 = 0x116;
            goto LAB_003652c4;
          }
        }
        else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
          lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_003652c4:
          FUN_002cdbb0(pbVar7,lVar2);
        }
        FUN_002cdcec(pbVar7,10);
        goto LAB_003652d8;
      }
      param_1[1] = param_1[1] + -1;
      bVar4 = *pbVar7;
joined_r0x00365348:
      if ((bVar4 & 1) != 0) goto LAB_00365274;
LAB_003652f4:
      if ((bVar4 & 0xfe) == 0x2c) {
        lVar2 = 0x116;
        goto LAB_00365304;
      }
    }
    uVar3 = 0x5d;
    goto LAB_00365310;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  return;
}


