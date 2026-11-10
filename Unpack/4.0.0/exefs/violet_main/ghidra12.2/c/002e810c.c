/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e810c; name: FUN_002e810c
 */


void FUN_002e810c(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ostream *poVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auStack_150 [8];
  ostream aoStack_148 [264];
  
  pbVar11 = (byte *)*param_1;
  pbVar10 = (byte *)*param_2;
  pbVar12 = pbVar11 + 8;
  if (*(ushort *)(pbVar11 + 6) < 2) {
    pbVar6 = pbVar12;
  }
  else {
    pbVar6 = *(byte **)pbVar12;
  }
  uVar1 = FUN_002e4590(*(long *)pbVar6);
  lVar2 = FUN_002e53a0(uVar1,*(undefined2 *)(pbVar11 + 2),0,0);
  switch(*pbVar11) {
  case 7:
    iVar7 = 0;
    *(undefined4 *)(lVar2 + 0x1c) = 0;
    goto LAB_002e81dc;
  case 8:
    iVar7 = 1;
    *(undefined4 *)(lVar2 + 0x1c) = 1;
LAB_002e81dc:
    iVar5 = -1;
    break;
  case 9:
    iVar7 = 0;
    *(undefined4 *)(lVar2 + 0x1c) = 0;
    iVar5 = 1;
    break;
  case 10:
    iVar7 = *(int *)(pbVar11 + 0x1c);
    *(int *)(lVar2 + 0x1c) = iVar7;
    iVar5 = *(int *)(pbVar11 + 0x18);
    break;
  default:
    FUN_002cc810(auStack_150,"external/com_github_google_re2/re2/simplify.cc",0x16e);
                    /* try { // try from 002e81b8 to 002e81cf has its CatchHandler @ 002e83cc */
    poVar3 = std::__put_character_sequence<char,std::char_traits<char>>
                       (aoStack_148,"DoCoalesce failed: r1->op() is ",0x1f);
    std::ostream::operator<<(poVar3,(uint)*pbVar11);
    goto LAB_002e82c0;
  }
  *(int *)(lVar2 + 0x18) = iVar5;
  switch(*pbVar10) {
  case 3:
  case 0xc:
  case 0xd:
  case 0x14:
    *(int *)(lVar2 + 0x1c) = iVar7 + 1;
  case 9:
    if (iVar5 != -1) {
      iVar5 = iVar5 + 1;
      goto LAB_002e8324;
    }
    break;
  case 4:
    if (1 < *(ushort *)(pbVar11 + 6)) {
      pbVar12 = *(byte **)pbVar12;
    }
    if (*(int *)(pbVar10 + 0x18) < 2) {
      uVar9 = 1;
    }
    else {
      uVar9 = 1;
      do {
        if (*(int *)(*(long *)(pbVar10 + 0x20) + uVar9 * 4) != *(int *)(*(long *)pbVar12 + 0x18))
        break;
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)*(int *)(pbVar10 + 0x18));
    }
    iVar8 = (int)uVar9;
    *(int *)(lVar2 + 0x1c) = iVar7 + iVar8;
    if (iVar5 != -1) {
      *(int *)(lVar2 + 0x18) = iVar5 + iVar8;
    }
    if (iVar8 != *(int *)(pbVar10 + 0x18)) {
      *param_1 = lVar2;
      lVar2 = FUN_002e5414(*(long *)(pbVar10 + 0x20) + (uVar9 & 0xffffffff) * 4,
                           *(int *)(pbVar10 + 0x18) - iVar8,*(undefined2 *)(pbVar10 + 2));
      goto LAB_002e8354;
    }
    break;
  default:
    FUN_002cc810(auStack_150,"external/com_github_google_re2/re2/simplify.cc",0x1ab);
                    /* try { // try from 002e82a8 to 002e82bf has its CatchHandler @ 002e83c8 */
    poVar3 = std::__put_character_sequence<char,std::char_traits<char>>
                       (aoStack_148,"DoCoalesce failed: r2->op() is ",0x1f);
    std::ostream::operator<<(poVar3,(uint)*pbVar10);
LAB_002e82c0:
    FUN_002cc97c(auStack_150);
    FUN_002e4804(lVar2);
    return;
  case 7:
switchD_002e8228_caseD_7:
    iVar5 = -1;
    goto LAB_002e8324;
  case 8:
    *(undefined4 *)(lVar2 + 0x18) = 0xffffffff;
    *(int *)(lVar2 + 0x1c) = iVar7 + 1;
    break;
  case 10:
    *(int *)(lVar2 + 0x1c) = iVar7 + *(int *)(pbVar10 + 0x1c);
    if (*(int *)(pbVar10 + 0x18) == -1) goto switchD_002e8228_caseD_7;
    if (iVar5 == -1) break;
    iVar5 = iVar5 + *(int *)(pbVar10 + 0x18);
LAB_002e8324:
    *(int *)(lVar2 + 0x18) = iVar5;
  }
  lVar4 = FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (lVar4 != 0) {
    FUN_002e4418(lVar4,2,0);
  }
  *param_1 = lVar4;
LAB_002e8354:
  *param_2 = lVar2;
  FUN_002e4804(pbVar11);
  FUN_002e4804(pbVar10);
  return;
}


