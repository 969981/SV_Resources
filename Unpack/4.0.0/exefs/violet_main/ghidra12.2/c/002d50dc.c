/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d50dc; name: FUN_002d50dc
 */


void FUN_002d50dc(long *param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  ostream *this;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  puVar6 = (undefined4 *)param_1[10];
  uVar7 = 1;
  *puVar6 = param_3;
LAB_002d5144:
  uVar7 = uVar7 - 1;
  uVar2 = puVar6[uVar7];
LAB_002d5154:
  do {
    if (uVar2 == 0) goto LAB_002d513c;
    if (uVar2 == 0xffffffff) {
      if ((char)param_2[0xd] == '\0') {
        uVar2 = param_2[0xc];
        param_2[0xc] = uVar2 + 1;
        lVar3 = *(long *)(param_2 + 6);
        *(undefined1 *)(param_2 + 0xd) = 0;
        if ((lVar3 != 0) && (uVar2 < param_2[8])) {
          *(uint *)(*(long *)(param_2 + 2) + (long)(int)uVar2 * 4) = *param_2;
          *(uint *)(lVar3 + (long)(int)*param_2 * 4) = uVar2;
          *param_2 = *param_2 + 1;
        }
      }
      goto LAB_002d513c;
    }
    lVar3 = *(long *)(param_2 + 6);
    if (lVar3 == 0) {
      *(undefined1 *)(param_2 + 0xd) = 0;
    }
    else {
      if (((uVar2 < param_2[8]) &&
          (uVar4 = *(uint *)(*(long *)(param_2 + 2) + (long)(int)uVar2 * 4), uVar4 < *param_2)) &&
         (*(uint *)(lVar3 + (long)(int)uVar4 * 4) == uVar2)) goto LAB_002d513c;
      *(undefined1 *)(param_2 + 0xd) = 0;
      if (uVar2 < param_2[8]) {
        *(uint *)(*(long *)(param_2 + 2) + (long)(int)uVar2 * 4) = *param_2;
        *(uint *)(lVar3 + (long)(int)*param_2 * 4) = uVar2;
        *param_2 = *param_2 + 1;
      }
    }
    lVar3 = *param_1;
    lVar5 = *(long *)(lVar3 + 0x60);
    puVar1 = (uint *)(lVar5 + (long)(int)uVar2 * 8);
    uVar4 = *puVar1;
    switch(uVar4 & 7) {
    case 1:
      uVar2 = uVar2 + 1;
      goto LAB_002d5154;
    case 2:
    case 5:
      goto switchD_002d51f8_caseD_2;
    case 3:
    case 6:
      if ((uVar4 >> 3 & 1) == 0) {
        puVar6[(int)uVar7] = uVar2 + 1;
        uVar4 = *puVar1;
        uVar7 = uVar7 + 1;
      }
      if ((((uVar4 & 7) == 6) && (0 < (int)param_2[0xb])) &&
         ((uVar2 == *(uint *)(lVar3 + 0xc) && (uVar2 != *(uint *)(lVar3 + 8))))) {
        puVar6[(int)uVar7] = 0xffffffff;
        uVar7 = uVar7 + 1;
      }
      break;
    case 4:
      if ((uVar4 >> 3 & 1) == 0) {
        puVar6[(int)uVar7] = uVar2 + 1;
        uVar7 = uVar7 + 1;
      }
      if ((*(uint *)(lVar5 + (long)(int)uVar2 * 8 + 4) & ~param_4) != 0) goto LAB_002d513c;
      break;
    default:
      FUN_002cc810(auStack_170,"external/com_github_google_re2/re2/dfa.cc",0x359);
                    /* try { // try from 002d52a8 to 002d52c3 has its CatchHandler @ 002d533c */
      this = std::__put_character_sequence<char,std::char_traits<char>>
                       (aoStack_168,"unhandled opcode: ",0x12);
      std::ostream::operator<<(this,*puVar1 & 7);
      FUN_002cc97c(auStack_170);
      goto LAB_002d513c;
    }
    uVar2 = *puVar1 >> 4;
  } while( true );
switchD_002d51f8_caseD_2:
  uVar2 = (uVar4 >> 3 & 1 ^ 1) + uVar2;
  if ((uVar4 >> 3 & 1) != 0) goto LAB_002d513c;
  goto LAB_002d5154;
LAB_002d513c:
  if ((int)uVar7 < 1) {
    return;
  }
  goto LAB_002d5144;
}


