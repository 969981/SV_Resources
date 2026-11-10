/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00251b30; name: FUN_00251b30
 */


void FUN_00251b30(long *param_1,char *param_2)

{
  ulong *puVar1;
  char *__s;
  char *__n;
  char cVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  size_t sVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  ulong uVar17;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = FUN_01cf7e20();
  param_1[3] = lVar3;
  cVar2 = *param_2;
  do {
    while (cVar2 == '`') {
      __s = param_2 + 1;
      pcVar4 = strchr(__s,0x60);
      if (pcVar4 == (char *)0x0) {
        puVar13 = (ulong *)param_1[1];
        if (puVar13 < (ulong *)param_1[2]) {
          plVar5 = (long *)FUN_01cf7e20();
          puVar13[3] = (ulong)plVar5;
          sVar6 = strlen(__s);
          if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 00252468 to 0025246f has its CatchHandler @ 002524c0 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar6 < 0x17) {
            puVar16 = (undefined1 *)((long)puVar13 + 1);
            *(char *)puVar13 = (char)((int)sVar6 << 1);
            if (sVar6 != 0) goto LAB_00252154;
          }
          else {
            uVar14 = sVar6 + 0x10 & 0xfffffffffffffff0;
            puVar16 = (undefined1 *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar14,1);
            *puVar13 = uVar14 | 1;
            puVar13[1] = sVar6;
            puVar13[2] = (ulong)puVar16;
LAB_00252154:
            memcpy(puVar16,__s,sVar6);
          }
          puVar16[sVar6] = 0;
LAB_002521b0:
          param_1[1] = (long)(puVar13 + 4);
        }
        else {
          lVar3 = (long)puVar13 - *param_1 >> 5;
          uVar14 = lVar3 + 1;
          if (uVar14 >> 0x3b != 0) {
                    /* try { // try from 00252478 to 0025247f has its CatchHandler @ 002524b8 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar7 = param_1[2] - *param_1;
          uVar10 = lVar7 >> 4;
          if (uVar14 <= uVar10) {
            uVar14 = uVar10;
          }
          if (0x3fffffffffffffe < (ulong)(lVar7 >> 5)) {
            uVar14 = 0x7ffffffffffffff;
          }
          if (uVar14 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar14 << 5,8);
          }
          puVar13 = (ulong *)(lVar7 + lVar3 * 0x20);
          plVar5 = (long *)FUN_01cf7e20();
          puVar13[3] = (ulong)plVar5;
          sVar6 = strlen(__s);
          if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 00252488 to 0025248f has its CatchHandler @ 0025249c */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar6 < 0x17) {
            puVar16 = (undefined1 *)((long)puVar13 + 1);
            *(char *)puVar13 = (char)((int)sVar6 << 1);
            if (sVar6 != 0) goto LAB_00252230;
          }
          else {
            uVar10 = sVar6 + 0x10 & 0xfffffffffffffff0;
            puVar16 = (undefined1 *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar10,1);
            *puVar13 = uVar10 | 1;
            puVar13[1] = sVar6;
            puVar13[2] = (ulong)puVar16;
LAB_00252230:
            memcpy(puVar16,__s,sVar6);
          }
          puVar16[sVar6] = 0;
          pbVar8 = (byte *)*param_1;
          pbVar11 = (byte *)param_1[1];
          puVar1 = puVar13 + 4;
          puVar12 = puVar13;
          if (pbVar11 == pbVar8) {
            pbVar11 = pbVar8;
          }
          else {
            do {
              uVar10 = *(ulong *)(pbVar11 + -0x20);
              uVar17 = *(ulong *)(pbVar11 + -8);
              uVar9 = *(ulong *)(pbVar11 + -0x10);
              puVar13 = puVar12 + -4;
              puVar12[-3] = *(ulong *)(pbVar11 + -0x18);
              *puVar13 = uVar10;
              puVar12[-1] = uVar17;
              puVar12[-2] = uVar9;
              pbVar11[-0x18] = 0;
              pbVar11[-0x17] = 0;
              pbVar11[-0x16] = 0;
              pbVar11[-0x15] = 0;
              pbVar11[-0x14] = 0;
              pbVar11[-0x13] = 0;
              pbVar11[-0x12] = 0;
              pbVar11[-0x11] = 0;
              pbVar11[-0x10] = 0;
              pbVar11[-0xf] = 0;
              pbVar11[-0xe] = 0;
              pbVar11[-0xd] = 0;
              pbVar11[-0xc] = 0;
              pbVar11[-0xb] = 0;
              pbVar11[-10] = 0;
              pbVar11[-9] = 0;
              pbVar11[-0x20] = 0;
              pbVar11[-0x1f] = 0;
              pbVar11[-0x1e] = 0;
              pbVar11[-0x1d] = 0;
              pbVar11[-0x1c] = 0;
              pbVar11[-0x1b] = 0;
              pbVar11[-0x1a] = 0;
              pbVar11[-0x19] = 0;
              pbVar11 = pbVar11 + -0x20;
              puVar12 = puVar13;
            } while (pbVar8 != pbVar11);
            pbVar8 = (byte *)param_1[1];
            pbVar11 = (byte *)*param_1;
          }
          *param_1 = (long)puVar13;
          param_1[1] = (long)puVar1;
          lVar3 = param_1[2];
          param_1[2] = lVar7 + uVar14 * 0x20;
          if (pbVar8 != pbVar11) {
            do {
              pbVar15 = pbVar8 + -0x20;
              if ((*pbVar15 & 1) != 0) {
                (**(code **)(**(long **)(pbVar8 + -8) + 0x18))
                          (*(long **)(pbVar8 + -8),*(undefined8 *)(pbVar8 + -0x10),
                           *(ulong *)(pbVar8 + -0x20) & 0xfffffffffffffffe,1);
              }
              pbVar8 = pbVar15;
            } while (pbVar11 != pbVar15);
          }
LAB_002523e4:
          if (pbVar11 != (byte *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00252418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)param_1[3] + 0x18))
                      ((long *)param_1[3],pbVar11,lVar3 - (long)pbVar11,8);
            return;
          }
        }
        return;
      }
      __n = pcVar4 + ~(ulong)param_2;
      puVar13 = (ulong *)param_1[1];
      if (puVar13 < (ulong *)param_1[2]) {
        plVar5 = (long *)FUN_01cf7e20();
        puVar13[3] = (ulong)plVar5;
        if ((char *)0xffffffffffffffef < __n) {
                    /* try { // try from 00252440 to 00252447 has its CatchHandler @ 002524e0 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < (char *)0x17) {
          puVar16 = (undefined1 *)((long)puVar13 + 1);
          *(char *)puVar13 = (char)((int)__n << 1);
          if (__n != (char *)0x0) goto LAB_00251dd0;
        }
        else {
          puVar16 = (undefined1 *)
                    (**(code **)(*plVar5 + 0x10))(plVar5,(ulong)(__n + 0x10) & 0xfffffffffffffff0,1)
          ;
          *puVar13 = (ulong)(__n + 0x10) & 0xfffffffffffffff0 | 1;
          puVar13[1] = (ulong)__n;
          puVar13[2] = (ulong)puVar16;
LAB_00251dd0:
          memcpy(puVar16,__s,(size_t)__n);
        }
        puVar16[(long)__n] = 0;
        param_1[1] = (long)(puVar13 + 4);
      }
      else {
        lVar3 = (long)puVar13 - *param_1 >> 5;
        uVar14 = lVar3 + 1;
        if (uVar14 >> 0x3b != 0) {
                    /* try { // try from 00252448 to 0025244f has its CatchHandler @ 002524d8 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = param_1[2] - *param_1;
        uVar10 = lVar7 >> 4;
        if (uVar14 <= uVar10) {
          uVar14 = uVar10;
        }
        if (0x3fffffffffffffe < (ulong)(lVar7 >> 5)) {
          uVar14 = 0x7ffffffffffffff;
        }
        if (uVar14 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar14 << 5,8);
        }
        puVar13 = (ulong *)(lVar7 + lVar3 * 0x20);
        plVar5 = (long *)FUN_01cf7e20();
        puVar13[3] = (ulong)plVar5;
        if ((char *)0xffffffffffffffef < __n) {
                    /* try { // try from 00252438 to 0025243f has its CatchHandler @ 002524ec */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < (char *)0x17) {
          puVar16 = (undefined1 *)((long)puVar13 + 1);
          *(char *)puVar13 = (char)((int)__n << 1);
          if (__n != (char *)0x0) goto LAB_00251f18;
        }
        else {
          puVar16 = (undefined1 *)
                    (**(code **)(*plVar5 + 0x10))(plVar5,(ulong)(__n + 0x10) & 0xfffffffffffffff0,1)
          ;
          *puVar13 = (ulong)(__n + 0x10) & 0xfffffffffffffff0 | 1;
          puVar13[1] = (ulong)__n;
          puVar13[2] = (ulong)puVar16;
LAB_00251f18:
          memcpy(puVar16,__s,(size_t)__n);
        }
        puVar16[(long)__n] = 0;
        pbVar8 = (byte *)*param_1;
        pbVar11 = (byte *)param_1[1];
        puVar1 = puVar13 + 4;
        puVar12 = puVar13;
        if (pbVar11 == pbVar8) {
          pbVar11 = pbVar8;
        }
        else {
          do {
            uVar10 = *(ulong *)(pbVar11 + -0x20);
            uVar17 = *(ulong *)(pbVar11 + -8);
            uVar9 = *(ulong *)(pbVar11 + -0x10);
            puVar13 = puVar12 + -4;
            puVar12[-3] = *(ulong *)(pbVar11 + -0x18);
            *puVar13 = uVar10;
            puVar12[-1] = uVar17;
            puVar12[-2] = uVar9;
            pbVar11[-0x18] = 0;
            pbVar11[-0x17] = 0;
            pbVar11[-0x16] = 0;
            pbVar11[-0x15] = 0;
            pbVar11[-0x14] = 0;
            pbVar11[-0x13] = 0;
            pbVar11[-0x12] = 0;
            pbVar11[-0x11] = 0;
            pbVar11[-0x10] = 0;
            pbVar11[-0xf] = 0;
            pbVar11[-0xe] = 0;
            pbVar11[-0xd] = 0;
            pbVar11[-0xc] = 0;
            pbVar11[-0xb] = 0;
            pbVar11[-10] = 0;
            pbVar11[-9] = 0;
            pbVar11[-0x20] = 0;
            pbVar11[-0x1f] = 0;
            pbVar11[-0x1e] = 0;
            pbVar11[-0x1d] = 0;
            pbVar11[-0x1c] = 0;
            pbVar11[-0x1b] = 0;
            pbVar11[-0x1a] = 0;
            pbVar11[-0x19] = 0;
            pbVar11 = pbVar11 + -0x20;
            puVar12 = puVar13;
          } while (pbVar8 != pbVar11);
          pbVar8 = (byte *)param_1[1];
          pbVar11 = (byte *)*param_1;
        }
        lVar3 = param_1[2];
        param_1[2] = lVar7 + uVar14 * 0x20;
        *param_1 = (long)puVar13;
        param_1[1] = (long)puVar1;
        if (pbVar8 != pbVar11) {
          do {
            pbVar15 = pbVar8 + -0x20;
            if ((*pbVar15 & 1) != 0) {
              (**(code **)(**(long **)(pbVar8 + -8) + 0x18))
                        (*(long **)(pbVar8 + -8),*(undefined8 *)(pbVar8 + -0x10),
                         *(ulong *)(pbVar8 + -0x20) & 0xfffffffffffffffe,1);
            }
            pbVar8 = pbVar15;
          } while (pbVar11 != pbVar15);
        }
        if (pbVar11 != (byte *)0x0) {
          (**(code **)(*(long *)param_1[3] + 0x18))
                    ((long *)param_1[3],pbVar11,lVar3 - (long)pbVar11,8);
        }
      }
      pcVar4 = pcVar4 + 1;
      if (*pcVar4 != '.') {
        return;
      }
LAB_00251df8:
      param_2 = pcVar4 + 1;
      cVar2 = *param_2;
    }
    if (cVar2 == '\0') {
      return;
    }
    pcVar4 = strchr(param_2,0x2e);
    if (pcVar4 == (char *)0x0) {
      puVar13 = (ulong *)param_1[1];
      if ((ulong *)param_1[2] <= puVar13) {
        lVar3 = (long)puVar13 - *param_1 >> 5;
        uVar14 = lVar3 + 1;
        if (uVar14 >> 0x3b != 0) {
                    /* try { // try from 00252480 to 00252487 has its CatchHandler @ 002524b4 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = param_1[2] - *param_1;
        uVar10 = lVar7 >> 4;
        if (uVar14 <= uVar10) {
          uVar14 = uVar10;
        }
        if (0x3fffffffffffffe < (ulong)(lVar7 >> 5)) {
          uVar14 = 0x7ffffffffffffff;
        }
        if (uVar14 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar14 << 5,8);
        }
        puVar13 = (ulong *)(lVar7 + lVar3 * 0x20);
        plVar5 = (long *)FUN_01cf7e20();
        puVar13[3] = (ulong)plVar5;
        sVar6 = strlen(param_2);
        if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 00252490 to 00252497 has its CatchHandler @ 00252498 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar6 < 0x17) {
          puVar16 = (undefined1 *)((long)puVar13 + 1);
          *(char *)puVar13 = (char)((int)sVar6 << 1);
          if (sVar6 != 0) goto LAB_00252344;
        }
        else {
          uVar10 = sVar6 + 0x10 & 0xfffffffffffffff0;
          puVar16 = (undefined1 *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar10,1);
          *puVar13 = uVar10 | 1;
          puVar13[1] = sVar6;
          puVar13[2] = (ulong)puVar16;
LAB_00252344:
          memcpy(puVar16,param_2,sVar6);
        }
        puVar16[sVar6] = 0;
        pbVar8 = (byte *)*param_1;
        pbVar11 = (byte *)param_1[1];
        puVar1 = puVar13 + 4;
        puVar12 = puVar13;
        if (pbVar11 == pbVar8) {
          pbVar11 = pbVar8;
        }
        else {
          do {
            uVar10 = *(ulong *)(pbVar11 + -0x20);
            uVar17 = *(ulong *)(pbVar11 + -8);
            uVar9 = *(ulong *)(pbVar11 + -0x10);
            puVar13 = puVar12 + -4;
            puVar12[-3] = *(ulong *)(pbVar11 + -0x18);
            *puVar13 = uVar10;
            puVar12[-1] = uVar17;
            puVar12[-2] = uVar9;
            pbVar11[-0x18] = 0;
            pbVar11[-0x17] = 0;
            pbVar11[-0x16] = 0;
            pbVar11[-0x15] = 0;
            pbVar11[-0x14] = 0;
            pbVar11[-0x13] = 0;
            pbVar11[-0x12] = 0;
            pbVar11[-0x11] = 0;
            pbVar11[-0x10] = 0;
            pbVar11[-0xf] = 0;
            pbVar11[-0xe] = 0;
            pbVar11[-0xd] = 0;
            pbVar11[-0xc] = 0;
            pbVar11[-0xb] = 0;
            pbVar11[-10] = 0;
            pbVar11[-9] = 0;
            pbVar11[-0x20] = 0;
            pbVar11[-0x1f] = 0;
            pbVar11[-0x1e] = 0;
            pbVar11[-0x1d] = 0;
            pbVar11[-0x1c] = 0;
            pbVar11[-0x1b] = 0;
            pbVar11[-0x1a] = 0;
            pbVar11[-0x19] = 0;
            pbVar11 = pbVar11 + -0x20;
            puVar12 = puVar13;
          } while (pbVar8 != pbVar11);
          pbVar8 = (byte *)param_1[1];
          pbVar11 = (byte *)*param_1;
        }
        *param_1 = (long)puVar13;
        param_1[1] = (long)puVar1;
        lVar3 = param_1[2];
        param_1[2] = lVar7 + uVar14 * 0x20;
        if (pbVar8 != pbVar11) {
          do {
            pbVar15 = pbVar8 + -0x20;
            if ((*pbVar15 & 1) != 0) {
              (**(code **)(**(long **)(pbVar8 + -8) + 0x18))
                        (*(long **)(pbVar8 + -8),*(undefined8 *)(pbVar8 + -0x10),
                         *(ulong *)(pbVar8 + -0x20) & 0xfffffffffffffffe,1);
            }
            pbVar8 = pbVar15;
          } while (pbVar11 != pbVar15);
        }
        goto LAB_002523e4;
      }
      plVar5 = (long *)FUN_01cf7e20();
      puVar13[3] = (ulong)plVar5;
      sVar6 = strlen(param_2);
      if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 00252470 to 00252477 has its CatchHandler @ 002524bc */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar6 < 0x17) {
        puVar16 = (undefined1 *)((long)puVar13 + 1);
        *(char *)puVar13 = (char)((int)sVar6 << 1);
        if (sVar6 != 0) goto LAB_0025219c;
      }
      else {
        uVar14 = sVar6 + 0x10 & 0xfffffffffffffff0;
        puVar16 = (undefined1 *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar14,1);
        *puVar13 = uVar14 | 1;
        puVar13[1] = sVar6;
        puVar13[2] = (ulong)puVar16;
LAB_0025219c:
        memcpy(puVar16,param_2,sVar6);
      }
      puVar16[sVar6] = 0;
      goto LAB_002521b0;
    }
    puVar13 = (ulong *)param_1[1];
    uVar14 = (long)pcVar4 - (long)param_2;
    if ((ulong *)param_1[2] <= puVar13) {
      lVar3 = (long)puVar13 - *param_1 >> 5;
      uVar10 = lVar3 + 1;
      if (uVar10 >> 0x3b != 0) {
                    /* try { // try from 00252458 to 0025245f has its CatchHandler @ 002524d0 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar7 = param_1[2] - *param_1;
      uVar9 = lVar7 >> 4;
      if (uVar10 <= uVar9) {
        uVar10 = uVar9;
      }
      if (0x3fffffffffffffe < (ulong)(lVar7 >> 5)) {
        uVar10 = 0x7ffffffffffffff;
      }
      if (uVar10 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 << 5,8);
      }
      puVar13 = (ulong *)(lVar7 + lVar3 * 0x20);
      plVar5 = (long *)FUN_01cf7e20();
      puVar13[3] = (ulong)plVar5;
      if (0xffffffffffffffef < uVar14) {
                    /* try { // try from 00252460 to 00252467 has its CatchHandler @ 002524cc */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar14 < 0x17) {
        puVar16 = (undefined1 *)((long)puVar13 + 1);
        *(char *)puVar13 = (char)((int)uVar14 << 1);
        if (uVar14 != 0) goto LAB_00251ce0;
      }
      else {
        uVar9 = uVar14 + 0x10 & 0xfffffffffffffff0;
        puVar16 = (undefined1 *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar9,1);
        *puVar13 = uVar9 | 1;
        puVar13[1] = uVar14;
        puVar13[2] = (ulong)puVar16;
LAB_00251ce0:
        memcpy(puVar16,param_2,uVar14);
      }
      puVar16[uVar14] = 0;
      pbVar8 = (byte *)*param_1;
      pbVar11 = (byte *)param_1[1];
      puVar1 = puVar13 + 4;
      puVar12 = puVar13;
      if (pbVar11 == pbVar8) {
        pbVar11 = pbVar8;
      }
      else {
        do {
          uVar14 = *(ulong *)(pbVar11 + -0x20);
          uVar17 = *(ulong *)(pbVar11 + -8);
          uVar9 = *(ulong *)(pbVar11 + -0x10);
          puVar13 = puVar12 + -4;
          puVar12[-3] = *(ulong *)(pbVar11 + -0x18);
          *puVar13 = uVar14;
          puVar12[-1] = uVar17;
          puVar12[-2] = uVar9;
          pbVar11[-0x18] = 0;
          pbVar11[-0x17] = 0;
          pbVar11[-0x16] = 0;
          pbVar11[-0x15] = 0;
          pbVar11[-0x14] = 0;
          pbVar11[-0x13] = 0;
          pbVar11[-0x12] = 0;
          pbVar11[-0x11] = 0;
          pbVar11[-0x10] = 0;
          pbVar11[-0xf] = 0;
          pbVar11[-0xe] = 0;
          pbVar11[-0xd] = 0;
          pbVar11[-0xc] = 0;
          pbVar11[-0xb] = 0;
          pbVar11[-10] = 0;
          pbVar11[-9] = 0;
          pbVar11[-0x20] = 0;
          pbVar11[-0x1f] = 0;
          pbVar11[-0x1e] = 0;
          pbVar11[-0x1d] = 0;
          pbVar11[-0x1c] = 0;
          pbVar11[-0x1b] = 0;
          pbVar11[-0x1a] = 0;
          pbVar11[-0x19] = 0;
          pbVar11 = pbVar11 + -0x20;
          puVar12 = puVar13;
        } while (pbVar8 != pbVar11);
        pbVar8 = (byte *)param_1[1];
        pbVar11 = (byte *)*param_1;
      }
      lVar3 = param_1[2];
      param_1[2] = lVar7 + uVar10 * 0x20;
      *param_1 = (long)puVar13;
      param_1[1] = (long)puVar1;
      if (pbVar8 != pbVar11) {
        do {
          pbVar15 = pbVar8 + -0x20;
          if ((*pbVar15 & 1) != 0) {
            (**(code **)(**(long **)(pbVar8 + -8) + 0x18))
                      (*(long **)(pbVar8 + -8),*(undefined8 *)(pbVar8 + -0x10),
                       *(ulong *)(pbVar8 + -0x20) & 0xfffffffffffffffe,1);
          }
          pbVar8 = pbVar15;
        } while (pbVar11 != pbVar15);
      }
      if (pbVar11 != (byte *)0x0) {
        (**(code **)(*(long *)param_1[3] + 0x18))
                  ((long *)param_1[3],pbVar11,lVar3 - (long)pbVar11,8);
      }
      goto LAB_00251df8;
    }
    plVar5 = (long *)FUN_01cf7e20();
    puVar13[3] = (ulong)plVar5;
    if (0xffffffffffffffef < uVar14) {
                    /* try { // try from 00252450 to 00252457 has its CatchHandler @ 002524d4 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar14 < 0x17) {
      puVar16 = (undefined1 *)((long)puVar13 + 1);
      *(char *)puVar13 = (char)((int)uVar14 << 1);
      if (uVar14 != 0) goto LAB_00251c4c;
    }
    else {
      uVar10 = uVar14 + 0x10 & 0xfffffffffffffff0;
      puVar16 = (undefined1 *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar10,1);
      *puVar13 = uVar10 | 1;
      puVar13[1] = uVar14;
      puVar13[2] = (ulong)puVar16;
LAB_00251c4c:
      memcpy(puVar16,param_2,uVar14);
    }
    puVar16[uVar14] = 0;
    param_1[1] = (long)(puVar13 + 4);
    param_2 = pcVar4 + 1;
    cVar2 = *param_2;
  } while( true );
}


